#include<math.h>
#include<stdio.h>
struct Pixel{
unsigned char R;
unsigned char G;
unsigned char B;
};
int main()
{
    struct Pixel pixel;
   struct Pixel pixel2;
    int WPX,HPX,BPP,NCP,NIC,PAL,lap=0,offset;
    unsigned char byte;
    unsigned short word;
    unsigned int dword;
    FILE*imagem;
    FILE*imagemnova;
    imagem=fopen("sapinho.bmp","r");
    imagemnova=fopen("sapinhodiferente.bmp","w");
    //2 bytes	0-1	Se for Windows, 'B' e 'M'
    printf("\n_________________CABECALHO________________\n\n");
    fread(&byte,sizeof(byte),1,imagem);
    fwrite(&byte,sizeof(byte),1,imagemnova);
    printf("%c",byte);
    fread(&byte,sizeof(byte),1,imagem);
    fwrite(&byte,sizeof(byte),1,imagemnova);
    printf("%c\n",byte);
    //dword	2-5	Tamanho do arquivo (bytes)
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    printf("Tamanho em bytes: %u\n",dword);
    //word	6-7	Informacão reservada
    //word	8-9	Informacão reservada
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    printf("Informacao reservada: %08X\n",dword);
    //dword	10-13	Offset, onde dados da imagem comecam
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    printf("Offset: %u\n",dword);
    offset=dword;
    // dword	14-17	Tamanho do cabecalho, a partir daqui
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    printf("Tamanho do cabecalho, a partir daqui: %u\n",dword);
    // dword	18-21	Largura da imagem (pixels), WPX
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    printf("Largura: %u\n",dword);
    WPX=dword;
    //dword	22-25	Altura da imagem (pixels), HPX
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    printf("Altura: %u\n",dword);
    HPX=dword;
    //word	26-27	Qtde de planos de cores
    fread(&word,sizeof(word),1,imagem);
    fwrite(&word,sizeof(byte),1,imagemnova);
    printf("Quantidade de planos de cores: %u\n",word);
    //word	28-29	Bits por pixel, BPP
    fread(&word,sizeof(word),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    printf("Bits por pixel: %u\n",word);
    BPP=word;
    //dword	30-33	Método de compressão
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    printf("Metodo de compressão: %u\n",dword);
    //dword	34-37	Tamanho da imagem
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    printf("Tamanho da imagem (bytes): %u\n",dword);
    //dword	38-41	Resolucão horizontal
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    printf("Resolucao horizontal: %u\n",dword);
    //dword	42-45	Resolucão vertical
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    printf("Resolucao vertical: %u\n",dword);
    //dword	46-49	Número de cores na paleta, NCP
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    NCP=(dword==0)? 1 << BPP : dword;
    printf("Numero de cores na paleta: %u\n",NCP);
    //dword	50-53	Número de cores importantes, NIC
    fread(&dword,sizeof(dword),1,imagem);
    fwrite(&dword,sizeof(byte),1,imagemnova);
    NIC=(dword==0)? NCP : dword;
    printf("Numero de cores importantes: %u\n",NIC);
    printf("\n_________________________________________");
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    int i=0;
    //for(;i<offset;i++)
    //{
    //    fread(&byte,sizeof(byte),1,imagem);
   //     fwrite(&byte,sizeof(byte),1,imagemnova);
//
   // }
     while(!feof(imagem))
    {
        if(fread(&pixel,sizeof(byte),1,imagem))
            {
                pixel2.R=pixel.G;
                pixel2.G=pixel.R;
                pixel2.B=pixel.B;
            }
        lap=lap + 3;
        if((lap + 3) > PAL)
        {
            fseek(imagem,(PAL - lap),SEEK_CUR);
            lap=0;
        }
    }
    fclose(imagem);
    fclose(imagemnova);
    return 0;
}
