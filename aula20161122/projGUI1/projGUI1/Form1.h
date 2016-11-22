#pragma once

namespace projGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnLegal;
	protected: 

	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkNome;

	private: System::Windows::Forms::CheckBox^  checkIdade;

	private: System::Windows::Forms::Label^  lblMensagem;
	private: System::Windows::Forms::ComboBox^  cmbComidas;


	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rdbroxo;

	private: System::Windows::Forms::RadioButton^  rdbazul;

	private: System::Windows::Forms::RadioButton^  rdbvermelho;

	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnLegal = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkNome = (gcnew System::Windows::Forms::CheckBox());
			this->checkIdade = (gcnew System::Windows::Forms::CheckBox());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->cmbComidas = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rdbroxo = (gcnew System::Windows::Forms::RadioButton());
			this->rdbazul = (gcnew System::Windows::Forms::RadioButton());
			this->rdbvermelho = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLegal
			// 
			this->btnLegal->Location = System::Drawing::Point(327, 344);
			this->btnLegal->Name = L"btnLegal";
			this->btnLegal->Size = System::Drawing::Size(142, 23);
			this->btnLegal->TabIndex = 0;
			this->btnLegal->Text = L"Olha dá pra apertar heheh";
			this->btnLegal->UseVisualStyleBackColor = true;
			this->btnLegal->Click += gcnew System::EventHandler(this, &Form1::btnLegal_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 307);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 20);
			this->textBox1->TabIndex = 1;
			// 
			// checkNome
			// 
			this->checkNome->AutoSize = true;
			this->checkNome->Location = System::Drawing::Point(12, 62);
			this->checkNome->Name = L"checkNome";
			this->checkNome->Size = System::Drawing::Size(54, 17);
			this->checkNome->TabIndex = 2;
			this->checkNome->Text = L"Nome";
			this->checkNome->UseVisualStyleBackColor = true;
			// 
			// checkIdade
			// 
			this->checkIdade->AutoSize = true;
			this->checkIdade->Location = System::Drawing::Point(12, 120);
			this->checkIdade->Name = L"checkIdade";
			this->checkIdade->Size = System::Drawing::Size(53, 17);
			this->checkIdade->TabIndex = 3;
			this->checkIdade->Text = L"Idade";
			this->checkIdade->UseVisualStyleBackColor = true;
			// 
			// lblMensagem
			// 
			this->lblMensagem->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMensagem->Location = System::Drawing::Point(4, 9);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(472, 37);
			this->lblMensagem->TabIndex = 4;
			this->lblMensagem->Text = L"PHTEVEN";
			this->lblMensagem->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// cmbComidas
			// 
			this->cmbComidas->FormattingEnabled = true;
			this->cmbComidas->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Bisteca", L"Almas", L"Chuchu", L"Nada, ele faz fotossintese"});
			this->cmbComidas->Location = System::Drawing::Point(327, 306);
			this->cmbComidas->Name = L"cmbComidas";
			this->cmbComidas->Size = System::Drawing::Size(121, 21);
			this->cmbComidas->TabIndex = 5;
			this->cmbComidas->Text = L"Selecione uma opção";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rdbroxo);
			this->groupBox1->Controls->Add(this->rdbazul);
			this->groupBox1->Controls->Add(this->rdbvermelho);
			this->groupBox1->Location = System::Drawing::Point(357, 49);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(91, 193);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Cores";
			// 
			// rdbroxo
			// 
			this->rdbroxo->AutoSize = true;
			this->rdbroxo->Location = System::Drawing::Point(6, 154);
			this->rdbroxo->Name = L"rdbroxo";
			this->rdbroxo->Size = System::Drawing::Size(50, 17);
			this->rdbroxo->TabIndex = 2;
			this->rdbroxo->TabStop = true;
			this->rdbroxo->Text = L"Roxo";
			this->rdbroxo->UseVisualStyleBackColor = true;
			// 
			// rdbazul
			// 
			this->rdbazul->AutoSize = true;
			this->rdbazul->Location = System::Drawing::Point(6, 97);
			this->rdbazul->Name = L"rdbazul";
			this->rdbazul->Size = System::Drawing::Size(45, 17);
			this->rdbazul->TabIndex = 1;
			this->rdbazul->TabStop = true;
			this->rdbazul->Text = L"Azul";
			this->rdbazul->UseVisualStyleBackColor = true;
			// 
			// rdbvermelho
			// 
			this->rdbvermelho->AutoSize = true;
			this->rdbvermelho->Location = System::Drawing::Point(6, 42);
			this->rdbvermelho->Name = L"rdbvermelho";
			this->rdbvermelho->Size = System::Drawing::Size(69, 17);
			this->rdbvermelho->TabIndex = 0;
			this->rdbvermelho->TabStop = true;
			this->rdbvermelho->Text = L"Vermelho";
			this->rdbvermelho->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(137, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(175, 161);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(481, 379);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->cmbComidas);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->checkIdade);
			this->Controls->Add(this->checkNome);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnLegal);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 cmbComidas->SelectedIndex=0;
		 }
private: System::Void btnLegal_Click(System::Object^  sender, System::EventArgs^  e) {
			lblMensagem->Text = "Meu dog, ";
			if(checkNome->Checked)
				lblMensagem->Text = lblMensagem->Text+"Phteven, ";
			if(checkIdade->Checked)
				lblMensagem->Text = lblMensagem->Text+"13 anos, ";
			/*switch(cmbComidas->SelectedIndex){
			case 0:.....break;
			case 1:....break;
			....
			}*/
			lblMensagem->Text=lblMensagem->Text +"gosta de "+
				cmbComidas->SelectedItem->ToString()+",";
			lblMensagem->Text=lblMensagem->Text +textBox1->Text + ".";
			if(rdbvermelho->Checked)
				lblMensagem->ForeColor=System::Drawing::Color::DarkRed;
			if(rdbazul->Checked)
				lblMensagem->ForeColor=System::Drawing::Color::DeepSkyBlue;
			if(rdbroxo->Checked)
				lblMensagem->ForeColor=System::Drawing::Color::Magenta;
		
		}
};
}

