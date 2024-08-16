#pragma once

namespace ScientificCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
        Double results = 0;
        String^ operation;
    private: System::Windows::Forms::Button^ button;
    private: System::Windows::Forms::Label^ lblShowOp;
    private: System::Windows::Forms::ListBox^ listBox1;


    private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ historyToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ historyToolStripMenuItem1;


           bool enter_value = false;
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^ buttondot;
    protected:
    private: System::Windows::Forms::Button^ buttonequal;
    private: System::Windows::Forms::Button^ buttondiv;
    private: System::Windows::Forms::Button^ button0;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ buttonminus;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ buttonplus;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ buttonCE;
    private: System::Windows::Forms::Button^ buttonC;
    private: System::Windows::Forms::Button^ buttonplusminus;
    private: System::Windows::Forms::TextBox^ textdisplay;
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ standardToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ scientificToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ temperatureToolStripMenuItem;

    private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ buttonlnx;
    private: System::Windows::Forms::Button^ buttonpie;
    private: System::Windows::Forms::Button^ buttonmod;
    private: System::Windows::Forms::Button^ buttonoct;
    private: System::Windows::Forms::Button^ buttonperct;
    private: System::Windows::Forms::Button^ buttonexp;
    private: System::Windows::Forms::Button^ buttontan;
    private: System::Windows::Forms::Button^ buttonhex;
    private: System::Windows::Forms::Button^ buttontanh;
    private: System::Windows::Forms::Button^ buttoncos;
    private: System::Windows::Forms::Button^ buttonbin;
    private: System::Windows::Forms::Button^ buttonreci;
    private: System::Windows::Forms::Button^ buttoncosh;
    private: System::Windows::Forms::Button^ buttonsin;
    private: System::Windows::Forms::Button^ buttondec;
    private: System::Windows::Forms::Button^ buttonsinh;
    private: System::Windows::Forms::Button^ buttonlog;
    private: System::Windows::Forms::Button^ buttonsqrt;
    private: System::Windows::Forms::Button^ buttonpow2;
    private: System::Windows::Forms::Button^ buttonpow3;
    private: System::Windows::Forms::GroupBox^ Temperature;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ buttonreset;
    private: System::Windows::Forms::Button^ buttonconvert;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::RadioButton^ radioButton3;
    private: System::Windows::Forms::RadioButton^ radioButton2;
    private: System::Windows::Forms::RadioButton^ radioButton1;

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
            this->buttondot = (gcnew System::Windows::Forms::Button());
            this->buttonequal = (gcnew System::Windows::Forms::Button());
            this->buttondiv = (gcnew System::Windows::Forms::Button());
            this->button0 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->buttonminus = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->buttonplus = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->buttonCE = (gcnew System::Windows::Forms::Button());
            this->buttonC = (gcnew System::Windows::Forms::Button());
            this->buttonplusminus = (gcnew System::Windows::Forms::Button());
            this->textdisplay = (gcnew System::Windows::Forms::TextBox());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->temperatureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->historyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->button = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->buttonlnx = (gcnew System::Windows::Forms::Button());
            this->buttonpie = (gcnew System::Windows::Forms::Button());
            this->buttonmod = (gcnew System::Windows::Forms::Button());
            this->buttonoct = (gcnew System::Windows::Forms::Button());
            this->buttonperct = (gcnew System::Windows::Forms::Button());
            this->buttonexp = (gcnew System::Windows::Forms::Button());
            this->buttontan = (gcnew System::Windows::Forms::Button());
            this->buttonhex = (gcnew System::Windows::Forms::Button());
            this->buttontanh = (gcnew System::Windows::Forms::Button());
            this->buttoncos = (gcnew System::Windows::Forms::Button());
            this->buttonbin = (gcnew System::Windows::Forms::Button());
            this->buttonreci = (gcnew System::Windows::Forms::Button());
            this->buttoncosh = (gcnew System::Windows::Forms::Button());
            this->buttonsin = (gcnew System::Windows::Forms::Button());
            this->buttondec = (gcnew System::Windows::Forms::Button());
            this->buttonsinh = (gcnew System::Windows::Forms::Button());
            this->buttonlog = (gcnew System::Windows::Forms::Button());
            this->buttonsqrt = (gcnew System::Windows::Forms::Button());
            this->buttonpow2 = (gcnew System::Windows::Forms::Button());
            this->buttonpow3 = (gcnew System::Windows::Forms::Button());
            this->Temperature = (gcnew System::Windows::Forms::GroupBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->buttonreset = (gcnew System::Windows::Forms::Button());
            this->buttonconvert = (gcnew System::Windows::Forms::Button());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
            this->lblShowOp = (gcnew System::Windows::Forms::Label());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->menuStrip1->SuspendLayout();
            this->Temperature->SuspendLayout();
            this->SuspendLayout();
            // 
            // buttondot
            // 
            this->buttondot->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttondot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttondot->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttondot->Location = System::Drawing::Point(104, 397);
            this->buttondot->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttondot->Name = L"buttondot";
            this->buttondot->Size = System::Drawing::Size(63, 63);
            this->buttondot->TabIndex = 70;
            this->buttondot->Text = L".";
            this->buttondot->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttondot->UseVisualStyleBackColor = false;
            this->buttondot->Click += gcnew System::EventHandler(this, &MyForm::buttondot_Click);
            // 
            // buttonequal
            // 
            this->buttonequal->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonequal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonequal->Font = (gcnew System::Drawing::Font(L"Georgia", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonequal->Location = System::Drawing::Point(170, 396);
            this->buttonequal->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonequal->Name = L"buttonequal";
            this->buttonequal->Size = System::Drawing::Size(63, 63);
            this->buttonequal->TabIndex = 69;
            this->buttonequal->Text = L"=";
            this->buttonequal->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonequal->UseVisualStyleBackColor = false;
            this->buttonequal->Click += gcnew System::EventHandler(this, &MyForm::buttonequal_Click);
            // 
            // buttondiv
            // 
            this->buttondiv->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttondiv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttondiv->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttondiv->Location = System::Drawing::Point(237, 396);
            this->buttondiv->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttondiv->Name = L"buttondiv";
            this->buttondiv->Size = System::Drawing::Size(63, 63);
            this->buttondiv->TabIndex = 68;
            this->buttondiv->Text = L"/";
            this->buttondiv->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttondiv->UseVisualStyleBackColor = false;
            this->buttondiv->Click += gcnew System::EventHandler(this, &MyForm::Arithematic_Op);
            // 
            // button0
            // 
            this->button0->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button0->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button0->Location = System::Drawing::Point(39, 397);
            this->button0->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button0->Name = L"button0";
            this->button0->Size = System::Drawing::Size(63, 63);
            this->button0->TabIndex = 67;
            this->button0->Text = L"0";
            this->button0->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button0->UseVisualStyleBackColor = false;
            this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button2->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(104, 331);
            this->button2->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(63, 63);
            this->button2->TabIndex = 66;
            this->button2->Text = L"2";
            this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button3->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(170, 331);
            this->button3->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(63, 63);
            this->button3->TabIndex = 65;
            this->button3->Text = L"3";
            this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(39, 331);
            this->button1->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(63, 63);
            this->button1->TabIndex = 64;
            this->button1->Text = L"1";
            this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button5->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(104, 264);
            this->button5->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(63, 63);
            this->button5->TabIndex = 63;
            this->button5->Text = L"5";
            this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button6->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->Location = System::Drawing::Point(170, 264);
            this->button6->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(63, 63);
            this->button6->TabIndex = 62;
            this->button6->Text = L"6";
            this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // buttonminus
            // 
            this->buttonminus->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonminus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonminus->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonminus->Location = System::Drawing::Point(237, 264);
            this->buttonminus->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonminus->Name = L"buttonminus";
            this->buttonminus->Size = System::Drawing::Size(63, 63);
            this->buttonminus->TabIndex = 61;
            this->buttonminus->Text = L"-";
            this->buttonminus->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonminus->UseVisualStyleBackColor = false;
            this->buttonminus->Click += gcnew System::EventHandler(this, &MyForm::Arithematic_Op);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button4->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(39, 264);
            this->button4->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(63, 63);
            this->button4->TabIndex = 60;
            this->button4->Text = L"4";
            this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button8->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->Location = System::Drawing::Point(104, 198);
            this->button8->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(63, 63);
            this->button8->TabIndex = 59;
            this->button8->Text = L"8";
            this->button8->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button9->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->Location = System::Drawing::Point(170, 198);
            this->button9->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(63, 63);
            this->button9->TabIndex = 58;
            this->button9->Text = L"9";
            this->button9->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
            // 
            // buttonplus
            // 
            this->buttonplus->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonplus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonplus->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonplus->Location = System::Drawing::Point(237, 200);
            this->buttonplus->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonplus->Name = L"buttonplus";
            this->buttonplus->Size = System::Drawing::Size(63, 63);
            this->buttonplus->TabIndex = 57;
            this->buttonplus->Text = L"+";
            this->buttonplus->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonplus->UseVisualStyleBackColor = false;
            this->buttonplus->Click += gcnew System::EventHandler(this, &MyForm::Arithematic_Op);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button7->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->Location = System::Drawing::Point(39, 198);
            this->button7->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(63, 63);
            this->button7->TabIndex = 56;
            this->button7->Text = L"7";
            this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // buttonCE
            // 
            this->buttonCE->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonCE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonCE->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonCE->Location = System::Drawing::Point(104, 134);
            this->buttonCE->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonCE->Name = L"buttonCE";
            this->buttonCE->Size = System::Drawing::Size(63, 63);
            this->buttonCE->TabIndex = 55;
            this->buttonCE->Text = L"CE";
            this->buttonCE->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonCE->UseVisualStyleBackColor = false;
            this->buttonCE->Click += gcnew System::EventHandler(this, &MyForm::buttonCE_Click);
            // 
            // buttonC
            // 
            this->buttonC->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonC->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonC->Location = System::Drawing::Point(170, 134);
            this->buttonC->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonC->Name = L"buttonC";
            this->buttonC->Size = System::Drawing::Size(63, 63);
            this->buttonC->TabIndex = 54;
            this->buttonC->Text = L"C";
            this->buttonC->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonC->UseVisualStyleBackColor = false;
            this->buttonC->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
            // 
            // buttonplusminus
            // 
            this->buttonplusminus->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonplusminus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonplusminus->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonplusminus->Location = System::Drawing::Point(237, 134);
            this->buttonplusminus->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonplusminus->Name = L"buttonplusminus";
            this->buttonplusminus->Size = System::Drawing::Size(63, 63);
            this->buttonplusminus->TabIndex = 53;
            this->buttonplusminus->Text = L"±";
            this->buttonplusminus->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonplusminus->UseVisualStyleBackColor = false;
            this->buttonplusminus->Click += gcnew System::EventHandler(this, &MyForm::buttonplusminus_Click);
            // 
            // textdisplay
            // 
            this->textdisplay->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->textdisplay->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textdisplay->Location = System::Drawing::Point(39, 56);
            this->textdisplay->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->textdisplay->Multiline = true;
            this->textdisplay->Name = L"textdisplay";
            this->textdisplay->Size = System::Drawing::Size(261, 60);
            this->textdisplay->TabIndex = 52;
            this->textdisplay->Text = L"0";
            this->textdisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // menuStrip1
            // 
            this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->fileToolStripMenuItem,
                    this->editToolStripMenuItem, this->viewToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Padding = System::Windows::Forms::Padding(15, 4, 0, 4);
            this->menuStrip1->Size = System::Drawing::Size(1225, 37);
            this->menuStrip1->TabIndex = 81;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
                this->standardToolStripMenuItem,
                    this->scientificToolStripMenuItem, this->temperatureToolStripMenuItem, this->exitToolStripMenuItem, this->historyToolStripMenuItem,
                    this->historyToolStripMenuItem1
            });
            this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
            this->fileToolStripMenuItem->Size = System::Drawing::Size(54, 29);
            this->fileToolStripMenuItem->Text = L"File";
            // 
            // standardToolStripMenuItem
            // 
            this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
            this->standardToolStripMenuItem->Size = System::Drawing::Size(270, 34);
            this->standardToolStripMenuItem->Text = L"Standard";
            this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardToolStripMenuItem_Click);
            // 
            // scientificToolStripMenuItem
            // 
            this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
            this->scientificToolStripMenuItem->Size = System::Drawing::Size(270, 34);
            this->scientificToolStripMenuItem->Text = L"Scientific";
            this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::scientificToolStripMenuItem_Click);
            // 
            // temperatureToolStripMenuItem
            // 
            this->temperatureToolStripMenuItem->Name = L"temperatureToolStripMenuItem";
            this->temperatureToolStripMenuItem->Size = System::Drawing::Size(270, 34);
            this->temperatureToolStripMenuItem->Text = L"Temperature";
            this->temperatureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::temperatureToolStripMenuItem_Click);
            // 
            // exitToolStripMenuItem
            // 
            this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
            this->exitToolStripMenuItem->Size = System::Drawing::Size(270, 34);
            this->exitToolStripMenuItem->Text = L"Exit";
            this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
            // 
            // historyToolStripMenuItem
            // 
            this->historyToolStripMenuItem->Checked = true;
            this->historyToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
            this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
            this->historyToolStripMenuItem->Size = System::Drawing::Size(270, 34);
            this->historyToolStripMenuItem->Text = L"History";
            this->historyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem_Click);
            // 
            // historyToolStripMenuItem1
            // 
            this->historyToolStripMenuItem1->Name = L"historyToolStripMenuItem1";
            this->historyToolStripMenuItem1->Size = System::Drawing::Size(270, 34);
            this->historyToolStripMenuItem1->Text = L"History";
            this->historyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::historyToolStripMenuItem1_Click);
            // 
            // editToolStripMenuItem
            // 
            this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
            this->editToolStripMenuItem->Size = System::Drawing::Size(58, 29);
            this->editToolStripMenuItem->Text = L"Edit";
            // 
            // viewToolStripMenuItem
            // 
            this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
            this->viewToolStripMenuItem->Size = System::Drawing::Size(65, 29);
            this->viewToolStripMenuItem->Text = L"View";
            // 
            // button
            // 
            this->button->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->button->Location = System::Drawing::Point(39, 134);
            this->button->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button->Name = L"button";
            this->button->Size = System::Drawing::Size(63, 63);
            this->button->TabIndex = 82;
            this->button->Text = L"Del";
            this->button->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button->UseVisualStyleBackColor = false;
            this->button->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button11->Font = (gcnew System::Drawing::Font(L"Georgia", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->Location = System::Drawing::Point(237, 331);
            this->button11->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(63, 63);
            this->button11->TabIndex = 83;
            this->button11->Text = L"*";
            this->button11->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &MyForm::Arithematic_Op);
            // 
            // buttonlnx
            // 
            this->buttonlnx->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonlnx->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonlnx->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonlnx->Location = System::Drawing::Point(558, 333);
            this->buttonlnx->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonlnx->Name = L"buttonlnx";
            this->buttonlnx->Size = System::Drawing::Size(63, 63);
            this->buttonlnx->TabIndex = 103;
            this->buttonlnx->Text = L"lnx";
            this->buttonlnx->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonlnx->UseVisualStyleBackColor = false;
            this->buttonlnx->Click += gcnew System::EventHandler(this, &MyForm::buttonlnx_Click);
            // 
            // buttonpie
            // 
            this->buttonpie->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonpie->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonpie->Font = (gcnew System::Drawing::Font(L"Georgia", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonpie->Location = System::Drawing::Point(356, 134);
            this->buttonpie->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonpie->Name = L"buttonpie";
            this->buttonpie->Size = System::Drawing::Size(63, 63);
            this->buttonpie->TabIndex = 102;
            this->buttonpie->Text = L"π";
            this->buttonpie->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonpie->UseVisualStyleBackColor = false;
            this->buttonpie->Click += gcnew System::EventHandler(this, &MyForm::buttonpie_Click);
            // 
            // buttonmod
            // 
            this->buttonmod->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonmod->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonmod->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonmod->Location = System::Drawing::Point(424, 398);
            this->buttonmod->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonmod->Name = L"buttonmod";
            this->buttonmod->Size = System::Drawing::Size(63, 63);
            this->buttonmod->TabIndex = 101;
            this->buttonmod->Text = L"Mod";
            this->buttonmod->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonmod->UseVisualStyleBackColor = false;
            this->buttonmod->Click += gcnew System::EventHandler(this, &MyForm::Arithematic_Op);
            // 
            // buttonoct
            // 
            this->buttonoct->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonoct->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonoct->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonoct->Location = System::Drawing::Point(491, 398);
            this->buttonoct->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonoct->Name = L"buttonoct";
            this->buttonoct->Size = System::Drawing::Size(63, 63);
            this->buttonoct->TabIndex = 100;
            this->buttonoct->Text = L"Oct";
            this->buttonoct->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonoct->UseVisualStyleBackColor = false;
            this->buttonoct->Click += gcnew System::EventHandler(this, &MyForm::buttonoct_Click);
            // 
            // buttonperct
            // 
            this->buttonperct->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonperct->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonperct->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonperct->Location = System::Drawing::Point(558, 398);
            this->buttonperct->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonperct->Name = L"buttonperct";
            this->buttonperct->Size = System::Drawing::Size(63, 63);
            this->buttonperct->TabIndex = 99;
            this->buttonperct->Text = L"%";
            this->buttonperct->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonperct->UseVisualStyleBackColor = false;
            this->buttonperct->Click += gcnew System::EventHandler(this, &MyForm::buttonperct_Click);
            // 
            // buttonexp
            // 
            this->buttonexp->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonexp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonexp->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonexp->Location = System::Drawing::Point(356, 398);
            this->buttonexp->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonexp->Name = L"buttonexp";
            this->buttonexp->Size = System::Drawing::Size(63, 63);
            this->buttonexp->TabIndex = 98;
            this->buttonexp->Text = L"Exp";
            this->buttonexp->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonexp->UseVisualStyleBackColor = false;
            this->buttonexp->Click += gcnew System::EventHandler(this, &MyForm::Arithematic_Op);
            // 
            // buttontan
            // 
            this->buttontan->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttontan->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttontan->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttontan->Location = System::Drawing::Point(424, 333);
            this->buttontan->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttontan->Name = L"buttontan";
            this->buttontan->Size = System::Drawing::Size(63, 63);
            this->buttontan->TabIndex = 97;
            this->buttontan->Text = L"Tan";
            this->buttontan->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttontan->UseVisualStyleBackColor = false;
            this->buttontan->Click += gcnew System::EventHandler(this, &MyForm::buttontan_Click);
            // 
            // buttonhex
            // 
            this->buttonhex->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonhex->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonhex->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonhex->Location = System::Drawing::Point(491, 331);
            this->buttonhex->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonhex->Name = L"buttonhex";
            this->buttonhex->Size = System::Drawing::Size(63, 63);
            this->buttonhex->TabIndex = 96;
            this->buttonhex->Text = L"Hex";
            this->buttonhex->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonhex->UseVisualStyleBackColor = false;
            this->buttonhex->Click += gcnew System::EventHandler(this, &MyForm::buttonhex_Click);
            // 
            // buttontanh
            // 
            this->buttontanh->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttontanh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttontanh->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttontanh->Location = System::Drawing::Point(356, 333);
            this->buttontanh->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttontanh->Name = L"buttontanh";
            this->buttontanh->Size = System::Drawing::Size(63, 63);
            this->buttontanh->TabIndex = 95;
            this->buttontanh->Text = L"Tanh";
            this->buttontanh->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttontanh->UseVisualStyleBackColor = false;
            this->buttontanh->Click += gcnew System::EventHandler(this, &MyForm::buttontanh_Click);
            // 
            // buttoncos
            // 
            this->buttoncos->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttoncos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttoncos->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttoncos->Location = System::Drawing::Point(424, 266);
            this->buttoncos->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttoncos->Name = L"buttoncos";
            this->buttoncos->Size = System::Drawing::Size(63, 63);
            this->buttoncos->TabIndex = 94;
            this->buttoncos->Text = L"Cos";
            this->buttoncos->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttoncos->UseVisualStyleBackColor = false;
            this->buttoncos->Click += gcnew System::EventHandler(this, &MyForm::buttoncos_Click);
            // 
            // buttonbin
            // 
            this->buttonbin->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonbin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonbin->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonbin->Location = System::Drawing::Point(491, 266);
            this->buttonbin->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonbin->Name = L"buttonbin";
            this->buttonbin->Size = System::Drawing::Size(63, 63);
            this->buttonbin->TabIndex = 93;
            this->buttonbin->Text = L"Bin";
            this->buttonbin->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonbin->UseVisualStyleBackColor = false;
            this->buttonbin->Click += gcnew System::EventHandler(this, &MyForm::buttonbin_Click);
            // 
            // buttonreci
            // 
            this->buttonreci->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonreci->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonreci->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonreci->Location = System::Drawing::Point(558, 266);
            this->buttonreci->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonreci->Name = L"buttonreci";
            this->buttonreci->Size = System::Drawing::Size(63, 63);
            this->buttonreci->TabIndex = 92;
            this->buttonreci->Text = L"1/x";
            this->buttonreci->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonreci->UseVisualStyleBackColor = false;
            this->buttonreci->Click += gcnew System::EventHandler(this, &MyForm::buttonreci_Click);
            // 
            // buttoncosh
            // 
            this->buttoncosh->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttoncosh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttoncosh->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttoncosh->Location = System::Drawing::Point(356, 264);
            this->buttoncosh->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttoncosh->Name = L"buttoncosh";
            this->buttoncosh->Size = System::Drawing::Size(63, 63);
            this->buttoncosh->TabIndex = 91;
            this->buttoncosh->Text = L"Cosh";
            this->buttoncosh->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttoncosh->UseVisualStyleBackColor = false;
            this->buttoncosh->Click += gcnew System::EventHandler(this, &MyForm::buttoncosh_Click);
            // 
            // buttonsin
            // 
            this->buttonsin->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonsin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonsin->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonsin->Location = System::Drawing::Point(424, 200);
            this->buttonsin->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonsin->Name = L"buttonsin";
            this->buttonsin->Size = System::Drawing::Size(63, 63);
            this->buttonsin->TabIndex = 90;
            this->buttonsin->Text = L"Sin";
            this->buttonsin->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonsin->UseVisualStyleBackColor = false;
            this->buttonsin->Click += gcnew System::EventHandler(this, &MyForm::buttonsin_Click);
            // 
            // buttondec
            // 
            this->buttondec->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttondec->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttondec->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttondec->Location = System::Drawing::Point(491, 200);
            this->buttondec->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttondec->Name = L"buttondec";
            this->buttondec->Size = System::Drawing::Size(63, 63);
            this->buttondec->TabIndex = 89;
            this->buttondec->Text = L"Dec";
            this->buttondec->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttondec->UseVisualStyleBackColor = false;
            this->buttondec->Click += gcnew System::EventHandler(this, &MyForm::buttondec_Click);
            // 
            // buttonsinh
            // 
            this->buttonsinh->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonsinh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonsinh->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonsinh->Location = System::Drawing::Point(356, 198);
            this->buttonsinh->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonsinh->Name = L"buttonsinh";
            this->buttonsinh->Size = System::Drawing::Size(63, 63);
            this->buttonsinh->TabIndex = 87;
            this->buttonsinh->Text = L"Sinh";
            this->buttonsinh->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonsinh->UseVisualStyleBackColor = false;
            this->buttonsinh->Click += gcnew System::EventHandler(this, &MyForm::buttonsinh_Click);
            // 
            // buttonlog
            // 
            this->buttonlog->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonlog->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonlog->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonlog->Location = System::Drawing::Point(424, 136);
            this->buttonlog->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonlog->Name = L"buttonlog";
            this->buttonlog->Size = System::Drawing::Size(63, 63);
            this->buttonlog->TabIndex = 86;
            this->buttonlog->Text = L"Log";
            this->buttonlog->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonlog->UseVisualStyleBackColor = false;
            this->buttonlog->Click += gcnew System::EventHandler(this, &MyForm::buttonlog_Click);
            // 
            // buttonsqrt
            // 
            this->buttonsqrt->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonsqrt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonsqrt->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonsqrt->Location = System::Drawing::Point(491, 136);
            this->buttonsqrt->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonsqrt->Name = L"buttonsqrt";
            this->buttonsqrt->Size = System::Drawing::Size(63, 63);
            this->buttonsqrt->TabIndex = 85;
            this->buttonsqrt->Text = L"Sqrt";
            this->buttonsqrt->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonsqrt->UseVisualStyleBackColor = false;
            this->buttonsqrt->Click += gcnew System::EventHandler(this, &MyForm::buttonsqrt_Click);
            // 
            // buttonpow2
            // 
            this->buttonpow2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonpow2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonpow2->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonpow2->Location = System::Drawing::Point(558, 136);
            this->buttonpow2->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonpow2->Name = L"buttonpow2";
            this->buttonpow2->Size = System::Drawing::Size(63, 63);
            this->buttonpow2->TabIndex = 84;
            this->buttonpow2->Text = L"x^2";
            this->buttonpow2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonpow2->UseVisualStyleBackColor = false;
            this->buttonpow2->Click += gcnew System::EventHandler(this, &MyForm::buttonpow2_Click);
            // 
            // buttonpow3
            // 
            this->buttonpow3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonpow3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->buttonpow3->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonpow3->Location = System::Drawing::Point(558, 202);
            this->buttonpow3->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->buttonpow3->Name = L"buttonpow3";
            this->buttonpow3->Size = System::Drawing::Size(63, 63);
            this->buttonpow3->TabIndex = 104;
            this->buttonpow3->Text = L"x^3";
            this->buttonpow3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
            this->buttonpow3->UseVisualStyleBackColor = false;
            this->buttonpow3->Click += gcnew System::EventHandler(this, &MyForm::buttonpow3_Click);
            // 
            // Temperature
            // 
            this->Temperature->Controls->Add(this->label2);
            this->Temperature->Controls->Add(this->label1);
            this->Temperature->Controls->Add(this->buttonreset);
            this->Temperature->Controls->Add(this->buttonconvert);
            this->Temperature->Controls->Add(this->textBox2);
            this->Temperature->Controls->Add(this->textBox1);
            this->Temperature->Controls->Add(this->radioButton3);
            this->Temperature->Controls->Add(this->radioButton2);
            this->Temperature->Controls->Add(this->radioButton1);
            this->Temperature->Font = (gcnew System::Drawing::Font(L"Georgia", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Temperature->Location = System::Drawing::Point(647, 56);
            this->Temperature->Name = L"Temperature";
            this->Temperature->Size = System::Drawing::Size(544, 416);
            this->Temperature->TabIndex = 105;
            this->Temperature->TabStop = false;
            this->Temperature->Text = L"Temperature";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(6, 267);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(306, 29);
            this->label2->TabIndex = 8;
            this->label2->Text = L"Converted Temperature is :";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(6, 49);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(479, 29);
            this->label1->TabIndex = 7;
            this->label1->Text = L"Select the temperature you want to convert:\r\n";
            // 
            // buttonreset
            // 
            this->buttonreset->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonreset->Location = System::Drawing::Point(293, 350);
            this->buttonreset->Name = L"buttonreset";
            this->buttonreset->Size = System::Drawing::Size(192, 48);
            this->buttonreset->TabIndex = 6;
            this->buttonreset->Text = L"Reset";
            this->buttonreset->UseVisualStyleBackColor = false;
            this->buttonreset->Click += gcnew System::EventHandler(this, &MyForm::buttonreset_Click);
            // 
            // buttonconvert
            // 
            this->buttonconvert->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->buttonconvert->Location = System::Drawing::Point(28, 350);
            this->buttonconvert->Name = L"buttonconvert";
            this->buttonconvert->Size = System::Drawing::Size(192, 48);
            this->buttonconvert->TabIndex = 5;
            this->buttonconvert->Text = L"Convert";
            this->buttonconvert->UseVisualStyleBackColor = false;
            this->buttonconvert->Click += gcnew System::EventHandler(this, &MyForm::buttonconvert_Click);
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(330, 267);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(190, 44);
            this->textBox2->TabIndex = 4;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(330, 82);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(190, 44);
            this->textBox1->TabIndex = 3;
            // 
            // radioButton3
            // 
            this->radioButton3->AutoSize = true;
            this->radioButton3->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton3->Location = System::Drawing::Point(6, 223);
            this->radioButton3->Name = L"radioButton3";
            this->radioButton3->Size = System::Drawing::Size(107, 33);
            this->radioButton3->TabIndex = 2;
            this->radioButton3->TabStop = true;
            this->radioButton3->Text = L"Kelvin";
            this->radioButton3->UseVisualStyleBackColor = true;
            this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
            // 
            // radioButton2
            // 
            this->radioButton2->AutoSize = true;
            this->radioButton2->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton2->Location = System::Drawing::Point(6, 181);
            this->radioButton2->Name = L"radioButton2";
            this->radioButton2->Size = System::Drawing::Size(263, 33);
            this->radioButton2->TabIndex = 1;
            this->radioButton2->TabStop = true;
            this->radioButton2->Text = L"Fahrenheit to Celsius";
            this->radioButton2->UseVisualStyleBackColor = true;
            this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
            // 
            // radioButton1
            // 
            this->radioButton1->AutoSize = true;
            this->radioButton1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton1->Location = System::Drawing::Point(6, 142);
            this->radioButton1->Name = L"radioButton1";
            this->radioButton1->Size = System::Drawing::Size(263, 33);
            this->radioButton1->TabIndex = 0;
            this->radioButton1->TabStop = true;
            this->radioButton1->Text = L"Celsius to Fahrenheit";
            this->radioButton1->UseVisualStyleBackColor = true;
            this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
            // 
            // lblShowOp
            // 
            this->lblShowOp->AutoSize = true;
            this->lblShowOp->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblShowOp->Location = System::Drawing::Point(44, 63);
            this->lblShowOp->Name = L"lblShowOp";
            this->lblShowOp->Size = System::Drawing::Size(31, 29);
            this->lblShowOp->TabIndex = 106;
            this->lblShowOp->Text = L"...";
            // 
            // listBox1
            // 
            this->listBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->listBox1->FormattingEnabled = true;
            this->listBox1->ItemHeight = 29;
            this->listBox1->Location = System::Drawing::Point(39, 477);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(261, 120);
            this->listBox1->TabIndex = 107;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(27, 46);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1225, 612);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->lblShowOp);
            this->Controls->Add(this->Temperature);
            this->Controls->Add(this->buttonpow3);
            this->Controls->Add(this->buttonlnx);
            this->Controls->Add(this->buttonpie);
            this->Controls->Add(this->buttonmod);
            this->Controls->Add(this->buttonoct);
            this->Controls->Add(this->buttonperct);
            this->Controls->Add(this->buttonexp);
            this->Controls->Add(this->buttontan);
            this->Controls->Add(this->buttonhex);
            this->Controls->Add(this->buttontanh);
            this->Controls->Add(this->buttoncos);
            this->Controls->Add(this->buttonbin);
            this->Controls->Add(this->buttonreci);
            this->Controls->Add(this->buttoncosh);
            this->Controls->Add(this->buttonsin);
            this->Controls->Add(this->buttondec);
            this->Controls->Add(this->buttonsinh);
            this->Controls->Add(this->buttonlog);
            this->Controls->Add(this->buttonsqrt);
            this->Controls->Add(this->buttonpow2);
            this->Controls->Add(this->button11);
            this->Controls->Add(this->button);
            this->Controls->Add(this->buttondot);
            this->Controls->Add(this->buttonequal);
            this->Controls->Add(this->buttondiv);
            this->Controls->Add(this->button0);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->buttonminus);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button8);
            this->Controls->Add(this->button9);
            this->Controls->Add(this->buttonplus);
            this->Controls->Add(this->button7);
            this->Controls->Add(this->buttonCE);
            this->Controls->Add(this->buttonC);
            this->Controls->Add(this->buttonplusminus);
            this->Controls->Add(this->textdisplay);
            this->Controls->Add(this->menuStrip1);
            this->Font = (gcnew System::Drawing::Font(L"Georgia", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Margin = System::Windows::Forms::Padding(10, 7, 10, 7);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Calculator";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->Temperature->ResumeLayout(false);
            this->Temperature->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        double iFirstnum;
        double iSecondnum;
        double iResult;
        double a;
        String^ iOperator;
        float iCelsius, iFahrenheit, iKevin;
        char iOperation;
   
private: System::Void standardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MyForm::Width = 358;
    MyForm::Height = 500;
    textdisplay->Width = 261;

}
private: System::Void scientificToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MyForm::Width = 665;
    MyForm::Height = 500;
    textdisplay->Width = 582;

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
           MyForm::Width = 665;
           MyForm::Height = 650;
           textdisplay->Width = 582;
       }

private: System::Void temperatureToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MyForm::Width = 1244;
    MyForm::Height = 500;


}
private: System::Void multiplicationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MyForm::Width = 1244;
    MyForm::Height = 500;
}


private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text == "0")
    {
        textdisplay->Clear();
    }
    textdisplay->Text = textdisplay->Text + "0";

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text == "0")
    {
        textdisplay->Clear();
    }
    textdisplay->Text = textdisplay->Text + "1";

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text == "0")
    {
        textdisplay->Clear();
    }
    textdisplay->Text = textdisplay->Text + "2";

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text == "0")
    {
        textdisplay->Clear();
    }
    textdisplay->Text = textdisplay->Text + "3";

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text == "0")
    {
        textdisplay->Clear();
    }
    textdisplay->Text = textdisplay->Text + "4";

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text == "0")
    {
        textdisplay->Clear();
    }
    textdisplay->Text = textdisplay->Text + "5";

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text == "0")
    {
        textdisplay->Clear();
    }
    textdisplay->Text = textdisplay->Text + "6";

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text == "0")
    {
        textdisplay->Clear();
    }
    textdisplay->Text = textdisplay->Text + "7";

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text == "0")
    {
        textdisplay->Clear();
    }
    textdisplay->Text = textdisplay->Text + "8";

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text == "0")
    {
        textdisplay->Clear();
    }
    textdisplay->Text = textdisplay->Text + "9";

}
private: System::Void buttondot_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text == "0")
    {
        textdisplay->Clear();
    }
    textdisplay->Text = textdisplay->Text + ".";

}
private: System::Void buttonCE_Click(System::Object^ sender, System::EventArgs^ e) {
    textdisplay->Clear();
    

}
private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
    textdisplay->Clear();

}
private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text->Length > 0)
    {
        textdisplay->Text = textdisplay->Text->Remove(textdisplay->Text->Length - 1, 1);
    }
    if (textdisplay->Text == "")
    {
        textdisplay->Text = "0";
    }
}


private: System::Void Arithimatic_Op(System::Object^ sender, System::EventArgs^ e) {
    Button^ op = safe_cast<Button^>(sender);
    iFirstnum = Double::Parse(textdisplay->Text);
    textdisplay->Text = "";
    iOperator = op->Text;
    lblShowOp->Text = System::Convert::ToString(iFirstnum) + "" + iOperator;
}
private: System::Void Arithematic_Op(System::Object^ sender, System::EventArgs^ e) {
           Button^ op = safe_cast<Button^>(sender);
           iFirstnum = Double::Parse(textdisplay->Text);
           textdisplay->Text = "";
           iOperator = op->Text;
           lblShowOp->Text = System::Convert::ToString(iFirstnum) + "" + iOperator;

       }
private: System::Void buttonplusminus_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textdisplay->Text->Contains("-"))
    {
        textdisplay->Text = textdisplay->Text->Remove(0, 1);
    }
    else
    {
        textdisplay->Text = "-" + textdisplay->Text;
    }
}

private: System::Void buttonequal_Click(System::Object^ sender, System::EventArgs^ e) {
    //lblShowOp->Text = "";
    iSecondnum = Double::Parse(textdisplay->Text);
    if (iOperator == "+")
    {
        iResult = iFirstnum + iSecondnum;
        textdisplay->Text = System::Convert::ToString(iResult);
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    }
    else if (iOperator == "-")
    {
        iResult = iFirstnum - iSecondnum;
        textdisplay->Text = System::Convert::ToString(iResult);
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    }
    else if (iOperator == "*")
    {
        iResult = iFirstnum * iSecondnum;
        textdisplay->Text = System::Convert::ToString(iResult);
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    }
    else if (iOperator == "/")
    {
        iResult = iFirstnum / iSecondnum;
        textdisplay->Text = System::Convert::ToString(iResult);
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    }
    else if (iOperator == "Mod")
    {
        int iFirst, iSecond, iResults;
        iFirst = Convert::ToInt32(iFirstnum);
        iSecondnum = Convert::ToInt32(iSecondnum);
        iResults = iFirst % iSecond;
        textdisplay->Text = System::Convert::ToString(iResult);
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    }
    else if (iOperator == "Exp")
    {
        iResult = (iFirstnum, (1 / iSecondnum));
        textdisplay->Text = System::Convert::ToString(Math::Exp((iResult)));
        listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));

        
    }
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
       private: System::Void historyToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
           historyToolStripMenuItem->Visible == true;
           listBox1->Visible = false;
           listBox1->Width = 300;
           historyToolStripMenuItem1->Visible = false;
           MyForm::Height = 480;
       }
private: System::Void historyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    if (historyToolStripMenuItem->Checked == true)
    {
        listBox1->Visible = true;
        historyToolStripMenuItem->Visible = false;
        historyToolStripMenuItem1->Visible = true;
        MyForm::Height = 630;
    }
}
private: System::Void buttonpie_Click(System::Object^ sender, System::EventArgs^ e) {
    textdisplay->Text = ("3.141592654");
}
private: System::Void buttonlog_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Double::Parse(textdisplay->Text);
    lblShowOp->Text = System::Convert::ToString("log" + "(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Log(a);
    textdisplay->Text = System::Convert::ToString(a);
}
private: System::Void buttonsqrt_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Double::Parse(textdisplay->Text);
    a = Math::Sqrt(a);
    textdisplay->Text = System::Convert::ToString(a);
    lblShowOp->Text = System::Convert::ToString( "(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    
}
private: System::Void buttonsinh_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Double::Parse(textdisplay->Text);
    lblShowOp->Text = System::Convert::ToString("sinh" + "(" + (textdisplay->Text) + ")");
    a = Math::Sinh(a);
    textdisplay->Text = System::Convert::ToString(a);
    listBox1->Items->Add(lblShowOp->Text);

}
private: System::Void buttonsin_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Double::Parse(textdisplay->Text);
    lblShowOp->Text = System::Convert::ToString("sind" + "(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Sin(a);
    textdisplay->Text = System::Convert::ToString(a);
}
private: System::Void buttondec_Click(System::Object^ sender, System::EventArgs^ e) {
    //denary/decimal
    int a = int::Parse(textdisplay->Text);
    textdisplay->Text = System::Convert::ToString(a);
    lblShowOp->Text = System::Convert::ToString("dec" + "(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
}
private: System::Void buttoncosh_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Double::Parse(textdisplay->Text);
    lblShowOp->Text = System::Convert::ToString("cosh" + "(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Cosh(a);
    textdisplay->Text = System::Convert::ToString(a);
    lblShowOp->Text = "";
}
private: System::Void buttoncos_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Double::Parse(textdisplay->Text);
    lblShowOp->Text = System::Convert::ToString("cosd" + "(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Cos(a);
    textdisplay->Text = System::Convert::ToString(a);
}
private: System::Void buttonbin_Click(System::Object^ sender, System::EventArgs^ e) {
    int a = int::Parse(textdisplay->Text);
    textdisplay->Text = System::Convert::ToString(a,2);
    lblShowOp->Text = System::Convert::ToString("(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    lblShowOp->Text = "";
}
private: System::Void buttontanh_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Double::Parse(textdisplay->Text);
    lblShowOp->Text = System::Convert::ToString("tanh" + "(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Tanh(a);
    textdisplay->Text = System::Convert::ToString(a);
    lblShowOp->Text = "";
}
private: System::Void buttontan_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Double::Parse(textdisplay->Text);
    lblShowOp->Text = System::Convert::ToString("tand" + "(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    a = Math::Tan(a);
    textdisplay->Text = System::Convert::ToString(a);
}
private: System::Void buttonhex_Click(System::Object^ sender, System::EventArgs^ e) {
    int a = int::Parse(textdisplay->Text);
    textdisplay->Text = System::Convert::ToString(a, 16);
    lblShowOp->Text = System::Convert::ToString("(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    lblShowOp->Text = "";
    
}
private: System::Void buttonoct_Click(System::Object^ sender, System::EventArgs^ e) {
    int a = int::Parse(textdisplay->Text);
    textdisplay->Text = System::Convert::ToString(a, 8);
    lblShowOp->Text = System::Convert::ToString("(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    lblShowOp->Text = "";
    
}
private: System::Void buttonpow2_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Convert::ToDouble(textdisplay->Text) * Convert::ToDouble(textdisplay->Text);
    textdisplay->Text = Convert::ToString(a);
    lblShowOp->Text = System::Convert::ToString("(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    lblShowOp->Text = "";
}
private: System::Void buttonpow3_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Convert::ToDouble(textdisplay->Text) * Convert::ToDouble(textdisplay->Text) * Convert::ToDouble(textdisplay->Text);
    textdisplay->Text = Convert::ToString(a);
    lblShowOp->Text = System::Convert::ToString("(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    lblShowOp->Text = "";

}
private: System::Void buttonreci_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Convert::ToDouble(1.0 / Convert::ToDouble(textdisplay->Text));
    textdisplay->Text = Convert::ToString(a);
    lblShowOp->Text = System::Convert::ToString("(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    lblShowOp->Text = "";
}
private: System::Void buttonlnx_Click(System::Object^ sender, System::EventArgs^ e) {
    a = System::Math::Log(Convert::ToDouble(textdisplay->Text));
    textdisplay->Text = Convert::ToString(a);
    lblShowOp->Text = System::Convert::ToString("(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    lblShowOp->Text = "";
}
private: System::Void buttonperct_Click(System::Object^ sender, System::EventArgs^ e) {
    a = Convert::ToDouble(textdisplay->Text) / Convert::ToDouble(100);
    textdisplay->Text = Convert::ToString(a);
    lblShowOp->Text = System::Convert::ToString("(" + (textdisplay->Text) + ")");
    listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text));
    lblShowOp->Text = "";
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    iOperation = 'C';
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    iOperation = 'F';
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    iOperation = 'K';
}

private: System::Void buttonconvert_Click(System::Object^ sender, System::EventArgs^ e) {
    switch (iOperation)
    {
    case'C':
        //Celsius to Fahrenheit
        (float::TryParse(textBox1->Text, iCelsius));
        textBox2->Text = ((((9 * iCelsius) / 5) + 32).ToString());
        break;
    case 'F':
        //Fahrenheit to Celsius
        (float::TryParse(textBox1->Text, iFahrenheit));
        textBox2->Text = ((((iFahrenheit - 32) * 5) / 9).ToString());
        break;
    case'K':
        //Kevin
        (float::TryParse(textBox1->Text, iKevin));
        textBox2->Text = (((((9 * iKevin) / 5) / + 32) + 273.15).ToString());
        break;
    }
   
}
private: System::Void buttonreset_Click(System::Object^ sender, System::EventArgs^ e) {
    textBox2->Text = "";
    textBox1->Text = "";
    radioButton1->Checked = false;
    radioButton1->Checked = false;
    radioButton1->Checked = false;
}

};
}
