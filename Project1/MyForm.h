#pragma once
namespace Project1 {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Globalization;
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            input = "";
        }
    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
        //
    private: System::Collections::Generic::List<String^>^ history;

           //

    private: System::Windows::Forms::Button^ buttonDivide;
    private: System::Windows::Forms::Button^ buttonMultiply;
    private: System::Windows::Forms::Button^ buttonOpenParen;
    private: System::Windows::Forms::Button^ buttonCloseParen;
    private: System::Windows::Forms::Button^ buttonPercent;
    private: System::Windows::Forms::Button^ buttonExp;
    private: System::Windows::Forms::Button^ buttonPi;
    private: System::Windows::Forms::Button^ buttonFact;
    private: System::Windows::Forms::Button^ buttonSqrt;
    private: System::Windows::Forms::Button^ buttonPow;
    private: System::Windows::Forms::Button^ buttonLn;
    private: System::Windows::Forms::Button^ buttonLg;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button20;
           System::Windows::Forms::Button^ buttonSin;
           System::Windows::Forms::Button^ buttonTan;
           System::Windows::Forms::Button^ buttonCos;
           System::Windows::Forms::Button^ buttonCot;
    private:
        String^ input;
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^ оРазработчикахToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ журналРасчетовToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ дизайнToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ сменитьФонToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ заставкаНаФонеToolStripMenuItem;
           System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
               this->buttonDivide = (gcnew System::Windows::Forms::Button());
               this->buttonMultiply = (gcnew System::Windows::Forms::Button());
               this->buttonOpenParen = (gcnew System::Windows::Forms::Button());
               this->buttonCloseParen = (gcnew System::Windows::Forms::Button());
               this->buttonLn = (gcnew System::Windows::Forms::Button());
               this->buttonLg = (gcnew System::Windows::Forms::Button());
               this->buttonCot = (gcnew System::Windows::Forms::Button());
               this->buttonCos = (gcnew System::Windows::Forms::Button());
               this->buttonTan = (gcnew System::Windows::Forms::Button());
               this->buttonSin = (gcnew System::Windows::Forms::Button());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->button3 = (gcnew System::Windows::Forms::Button());
               this->button4 = (gcnew System::Windows::Forms::Button());
               this->button5 = (gcnew System::Windows::Forms::Button());
               this->button6 = (gcnew System::Windows::Forms::Button());
               this->button7 = (gcnew System::Windows::Forms::Button());
               this->button8 = (gcnew System::Windows::Forms::Button());
               this->button9 = (gcnew System::Windows::Forms::Button());
               this->button10 = (gcnew System::Windows::Forms::Button());
               this->button11 = (gcnew System::Windows::Forms::Button());
               this->button12 = (gcnew System::Windows::Forms::Button());
               this->button13 = (gcnew System::Windows::Forms::Button());
               this->button14 = (gcnew System::Windows::Forms::Button());
               this->button19 = (gcnew System::Windows::Forms::Button());
               this->button20 = (gcnew System::Windows::Forms::Button());
               this->buttonSqrt = (gcnew System::Windows::Forms::Button());
               this->buttonPow = (gcnew System::Windows::Forms::Button());
               this->buttonPi = (gcnew System::Windows::Forms::Button());
               this->buttonFact = (gcnew System::Windows::Forms::Button());
               this->buttonPercent = (gcnew System::Windows::Forms::Button());
               this->buttonExp = (gcnew System::Windows::Forms::Button());
               this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
               this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->оРазработчикахToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->журналРасчетовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->дизайнToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->сменитьФонToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->заставкаНаФонеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
               this->menuStrip1->SuspendLayout();
               this->SuspendLayout();
               // 
               // buttonDivide
               // 
               this->buttonDivide->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonDivide->Location = System::Drawing::Point(326, 556);
               this->buttonDivide->Margin = System::Windows::Forms::Padding(2);
               this->buttonDivide->Name = L"buttonDivide";
               this->buttonDivide->Size = System::Drawing::Size(100, 60);
               this->buttonDivide->TabIndex = 17;
               this->buttonDivide->Text = L"÷";
               this->buttonDivide->UseVisualStyleBackColor = true;
               this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::buttonDivide_Click);
               // 
               // buttonMultiply
               // 
               this->buttonMultiply->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonMultiply->Location = System::Drawing::Point(326, 490);
               this->buttonMultiply->Margin = System::Windows::Forms::Padding(2);
               this->buttonMultiply->Name = L"buttonMultiply";
               this->buttonMultiply->Size = System::Drawing::Size(100, 60);
               this->buttonMultiply->TabIndex = 18;
               this->buttonMultiply->Text = L"×";
               this->buttonMultiply->UseVisualStyleBackColor = true;
               this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiply_Click);
               // 
               // buttonOpenParen
               // 
               this->buttonOpenParen->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonOpenParen->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonOpenParen->Location = System::Drawing::Point(220, 227);
               this->buttonOpenParen->Margin = System::Windows::Forms::Padding(2);
               this->buttonOpenParen->Name = L"buttonOpenParen";
               this->buttonOpenParen->Size = System::Drawing::Size(100, 60);
               this->buttonOpenParen->TabIndex = 17;
               this->buttonOpenParen->Text = L"(";
               this->buttonOpenParen->UseVisualStyleBackColor = true;
               this->buttonOpenParen->Click += gcnew System::EventHandler(this, &MyForm::buttonOpenParen_Click);
               // 
               // buttonCloseParen
               // 
               this->buttonCloseParen->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonCloseParen->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonCloseParen->Location = System::Drawing::Point(326, 227);
               this->buttonCloseParen->Margin = System::Windows::Forms::Padding(2);
               this->buttonCloseParen->Name = L"buttonCloseParen";
               this->buttonCloseParen->Size = System::Drawing::Size(100, 60);
               this->buttonCloseParen->TabIndex = 18;
               this->buttonCloseParen->Text = L")";
               this->buttonCloseParen->UseVisualStyleBackColor = true;
               this->buttonCloseParen->Click += gcnew System::EventHandler(this, &MyForm::buttonCloseParen_Click);
               // 
               // buttonLn
               // 
               this->buttonLn->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonLn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonLn->Location = System::Drawing::Point(9, 226);
               this->buttonLn->Name = L"buttonLn";
               this->buttonLn->Size = System::Drawing::Size(100, 60);
               this->buttonLn->TabIndex = 23;
               this->buttonLn->Text = L"ln";
               this->buttonLn->UseVisualStyleBackColor = true;
               this->buttonLn->Click += gcnew System::EventHandler(this, &MyForm::buttonLn_Click);
               // 
               // buttonLg
               // 
               this->buttonLg->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonLg->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonLg->Location = System::Drawing::Point(115, 227);
               this->buttonLg->Name = L"buttonLg";
               this->buttonLg->Size = System::Drawing::Size(100, 60);
               this->buttonLg->TabIndex = 24;
               this->buttonLg->Text = L"lg";
               this->buttonLg->UseVisualStyleBackColor = true;
               this->buttonLg->Click += gcnew System::EventHandler(this, &MyForm::buttonLg_Click);
               // 
               // buttonCot
               // 
               this->buttonCot->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonCot->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonCot->Location = System::Drawing::Point(326, 292);
               this->buttonCot->Name = L"buttonCot";
               this->buttonCot->Size = System::Drawing::Size(100, 60);
               this->buttonCot->TabIndex = 22;
               this->buttonCot->Text = L"cot";
               this->buttonCot->UseVisualStyleBackColor = true;
               this->buttonCot->Click += gcnew System::EventHandler(this, &MyForm::buttonCot_Click);
               // 
               // buttonCos
               // 
               this->buttonCos->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonCos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonCos->Location = System::Drawing::Point(115, 292);
               this->buttonCos->Name = L"buttonCos";
               this->buttonCos->Size = System::Drawing::Size(100, 60);
               this->buttonCos->TabIndex = 21;
               this->buttonCos->Text = L"cos";
               this->buttonCos->UseVisualStyleBackColor = true;
               this->buttonCos->Click += gcnew System::EventHandler(this, &MyForm::buttonCos_Click);
               // 
               // buttonTan
               // 
               this->buttonTan->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonTan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonTan->Location = System::Drawing::Point(221, 292);
               this->buttonTan->Name = L"buttonTan";
               this->buttonTan->Size = System::Drawing::Size(100, 60);
               this->buttonTan->TabIndex = 20;
               this->buttonTan->Text = L"tan";
               this->buttonTan->UseVisualStyleBackColor = true;
               this->buttonTan->Click += gcnew System::EventHandler(this, &MyForm::buttonTan_Click);
               // 
               // buttonSin
               // 
               this->buttonSin->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonSin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonSin->Location = System::Drawing::Point(9, 292);
               this->buttonSin->Name = L"buttonSin";
               this->buttonSin->Size = System::Drawing::Size(100, 60);
               this->buttonSin->TabIndex = 19;
               this->buttonSin->Text = L"sin";
               this->buttonSin->UseVisualStyleBackColor = true;
               this->buttonSin->Click += gcnew System::EventHandler(this, &MyForm::buttonSin_Click);
               // 
               // label1
               // 
               this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label1->ForeColor = System::Drawing::Color::Black;
               this->label1->Location = System::Drawing::Point(10, 26);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(420, 67);
               this->label1->TabIndex = 0;
               this->label1->Text = L"0";
               this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
               this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
               // 
               // button1
               // 
               this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button1->Location = System::Drawing::Point(326, 96);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(100, 60);
               this->button1->TabIndex = 1;
               this->button1->Text = L"C";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
               // 
               // button2
               // 
               this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button2->Location = System::Drawing::Point(115, 96);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(100, 60);
               this->button2->TabIndex = 2;
               this->button2->Text = L"←";
               this->button2->UseVisualStyleBackColor = true;
               this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
               // 
               // button3
               // 
               this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button3->Location = System::Drawing::Point(220, 96);
               this->button3->Name = L"button3";
               this->button3->Size = System::Drawing::Size(100, 60);
               this->button3->TabIndex = 3;
               this->button3->Text = L"=";
               this->button3->UseVisualStyleBackColor = true;
               this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
               // 
               // button4
               // 
               this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button4->Location = System::Drawing::Point(9, 358);
               this->button4->Name = L"button4";
               this->button4->Size = System::Drawing::Size(100, 60);
               this->button4->TabIndex = 4;
               this->button4->Text = L"7";
               this->button4->UseVisualStyleBackColor = true;
               this->button4->Click += gcnew System::EventHandler(this, &MyForm::numberButton_Click);
               // 
               // button5
               // 
               this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button5->Location = System::Drawing::Point(115, 358);
               this->button5->Name = L"button5";
               this->button5->Size = System::Drawing::Size(100, 60);
               this->button5->TabIndex = 5;
               this->button5->Text = L"8";
               this->button5->UseVisualStyleBackColor = true;
               this->button5->Click += gcnew System::EventHandler(this, &MyForm::numberButton_Click);
               // 
               // button6
               // 
               this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button6->Location = System::Drawing::Point(220, 358);
               this->button6->Name = L"button6";
               this->button6->Size = System::Drawing::Size(100, 60);
               this->button6->TabIndex = 6;
               this->button6->Text = L"9";
               this->button6->UseVisualStyleBackColor = true;
               this->button6->Click += gcnew System::EventHandler(this, &MyForm::numberButton_Click);
               // 
               // button7
               // 
               this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button7->Location = System::Drawing::Point(9, 424);
               this->button7->Name = L"button7";
               this->button7->Size = System::Drawing::Size(100, 60);
               this->button7->TabIndex = 7;
               this->button7->Text = L"4";
               this->button7->UseVisualStyleBackColor = true;
               this->button7->Click += gcnew System::EventHandler(this, &MyForm::numberButton_Click);
               // 
               // button8
               // 
               this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button8->Location = System::Drawing::Point(115, 424);
               this->button8->Name = L"button8";
               this->button8->Size = System::Drawing::Size(100, 60);
               this->button8->TabIndex = 8;
               this->button8->Text = L"5";
               this->button8->UseVisualStyleBackColor = true;
               this->button8->Click += gcnew System::EventHandler(this, &MyForm::numberButton_Click);
               // 
               // button9
               // 
               this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button9->Location = System::Drawing::Point(220, 424);
               this->button9->Name = L"button9";
               this->button9->Size = System::Drawing::Size(100, 60);
               this->button9->TabIndex = 9;
               this->button9->Text = L"6";
               this->button9->UseVisualStyleBackColor = true;
               this->button9->Click += gcnew System::EventHandler(this, &MyForm::numberButton_Click);
               // 
               // button10
               // 
               this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button10->Location = System::Drawing::Point(9, 490);
               this->button10->Name = L"button10";
               this->button10->Size = System::Drawing::Size(100, 60);
               this->button10->TabIndex = 10;
               this->button10->Text = L"1";
               this->button10->UseVisualStyleBackColor = true;
               this->button10->Click += gcnew System::EventHandler(this, &MyForm::numberButton_Click);
               // 
               // button11
               // 
               this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button11->Location = System::Drawing::Point(115, 490);
               this->button11->Name = L"button11";
               this->button11->Size = System::Drawing::Size(100, 60);
               this->button11->TabIndex = 11;
               this->button11->Text = L"2";
               this->button11->UseVisualStyleBackColor = true;
               this->button11->Click += gcnew System::EventHandler(this, &MyForm::numberButton_Click);
               // 
               // button12
               // 
               this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button12->Location = System::Drawing::Point(221, 490);
               this->button12->Name = L"button12";
               this->button12->Size = System::Drawing::Size(100, 60);
               this->button12->TabIndex = 12;
               this->button12->Text = L"3";
               this->button12->UseVisualStyleBackColor = true;
               this->button12->Click += gcnew System::EventHandler(this, &MyForm::numberButton_Click);
               // 
               // button13
               // 
               this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button13->Location = System::Drawing::Point(9, 556);
               this->button13->Name = L"button13";
               this->button13->Size = System::Drawing::Size(100, 60);
               this->button13->TabIndex = 13;
               this->button13->Text = L",";
               this->button13->UseVisualStyleBackColor = true;
               this->button13->Click += gcnew System::EventHandler(this, &MyForm::numberButton_Click);
               // 
               // button14
               // 
               this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button14->Location = System::Drawing::Point(115, 556);
               this->button14->Name = L"button14";
               this->button14->Size = System::Drawing::Size(100, 60);
               this->button14->TabIndex = 14;
               this->button14->Text = L"0";
               this->button14->UseVisualStyleBackColor = true;
               this->button14->Click += gcnew System::EventHandler(this, &MyForm::numberButton_Click);
               // 
               // button19
               // 
               this->button19->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button19->Location = System::Drawing::Point(326, 424);
               this->button19->Name = L"button19";
               this->button19->Size = System::Drawing::Size(100, 60);
               this->button19->TabIndex = 19;
               this->button19->Text = L"-";
               this->button19->UseVisualStyleBackColor = true;
               this->button19->Click += gcnew System::EventHandler(this, &MyForm::operatorButton_Click);
               // 
               // button20
               // 
               this->button20->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->button20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button20->Location = System::Drawing::Point(326, 358);
               this->button20->Name = L"button20";
               this->button20->Size = System::Drawing::Size(100, 60);
               this->button20->TabIndex = 20;
               this->button20->Text = L"+";
               this->button20->UseVisualStyleBackColor = true;
               this->button20->Click += gcnew System::EventHandler(this, &MyForm::operatorButton_Click);
               // 
               // buttonSqrt
               // 
               this->buttonSqrt->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonSqrt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonSqrt->Location = System::Drawing::Point(9, 162);
               this->buttonSqrt->Name = L"buttonSqrt";
               this->buttonSqrt->Size = System::Drawing::Size(100, 60);
               this->buttonSqrt->TabIndex = 23;
               this->buttonSqrt->Text = L"√";
               this->buttonSqrt->UseVisualStyleBackColor = true;
               this->buttonSqrt->Click += gcnew System::EventHandler(this, &MyForm::buttonSqrt_Click);
               // 
               // buttonPow
               // 
               this->buttonPow->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonPow->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonPow->Location = System::Drawing::Point(114, 162);
               this->buttonPow->Name = L"buttonPow";
               this->buttonPow->Size = System::Drawing::Size(100, 60);
               this->buttonPow->TabIndex = 24;
               this->buttonPow->Text = L"xⁿ";
               this->buttonPow->UseVisualStyleBackColor = true;
               this->buttonPow->Click += gcnew System::EventHandler(this, &MyForm::buttonPow_Click);
               // 
               // buttonPi
               // 
               this->buttonPi->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonPi->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonPi->Location = System::Drawing::Point(326, 162);
               this->buttonPi->Name = L"buttonPi";
               this->buttonPi->Size = System::Drawing::Size(100, 60);
               this->buttonPi->TabIndex = 25;
               this->buttonPi->Text = L"π";
               this->buttonPi->UseVisualStyleBackColor = true;
               this->buttonPi->Click += gcnew System::EventHandler(this, &MyForm::buttonPi_Click);
               // 
               // buttonFact
               // 
               this->buttonFact->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonFact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonFact->Location = System::Drawing::Point(221, 556);
               this->buttonFact->Name = L"buttonFact";
               this->buttonFact->Size = System::Drawing::Size(100, 60);
               this->buttonFact->TabIndex = 26;
               this->buttonFact->Text = L"!";
               this->buttonFact->UseVisualStyleBackColor = true;
               this->buttonFact->Click += gcnew System::EventHandler(this, &MyForm::buttonFact_Click);
               // 
               // buttonPercent
               // 
               this->buttonPercent->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonPercent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonPercent->Location = System::Drawing::Point(9, 96);
               this->buttonPercent->Name = L"buttonPercent";
               this->buttonPercent->Size = System::Drawing::Size(100, 60);
               this->buttonPercent->TabIndex = 27;
               this->buttonPercent->Text = L"%";
               this->buttonPercent->UseVisualStyleBackColor = true;
               this->buttonPercent->Click += gcnew System::EventHandler(this, &MyForm::buttonPercent_Click);
               // 
               // buttonExp
               // 
               this->buttonExp->Anchor = System::Windows::Forms::AnchorStyles::None;
               this->buttonExp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->buttonExp->Location = System::Drawing::Point(220, 162);
               this->buttonExp->Name = L"buttonExp";
               this->buttonExp->Size = System::Drawing::Size(100, 60);
               this->buttonExp->TabIndex = 28;
               this->buttonExp->Text = L"e";
               this->buttonExp->UseVisualStyleBackColor = true;
               this->buttonExp->Click += gcnew System::EventHandler(this, &MyForm::buttonExp_Click);
               // 
               // menuStrip1
               // 
               this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                   this->toolStripMenuItem1,
                       this->дизайнToolStripMenuItem
               });
               this->menuStrip1->Location = System::Drawing::Point(0, 0);
               this->menuStrip1->Name = L"menuStrip1";
               this->menuStrip1->Size = System::Drawing::Size(432, 25);
               this->menuStrip1->TabIndex = 29;
               this->menuStrip1->Text = L"menuStrip1";
               // 
               // toolStripMenuItem1
               // 
               this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                   this->оРазработчикахToolStripMenuItem,
                       this->оПрограммеToolStripMenuItem, this->журналРасчетовToolStripMenuItem
               });
               this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
               this->toolStripMenuItem1->Size = System::Drawing::Size(57, 21);
               this->toolStripMenuItem1->Text = L"Меню";
               // 
               // оРазработчикахToolStripMenuItem
               // 
               this->оРазработчикахToolStripMenuItem->Name = L"оРазработчикахToolStripMenuItem";
               this->оРазработчикахToolStripMenuItem->Size = System::Drawing::Size(181, 22);
               this->оРазработчикахToolStripMenuItem->Text = L"О разработчиках";
               this->оРазработчикахToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ShowDeveloperInfo);
               // 
               // оПрограммеToolStripMenuItem
               // 
               this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
               this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(181, 22);
               this->оПрограммеToolStripMenuItem->Text = L"О программе";
               this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ShowProgramInfo);
               // 
               // журналРасчетовToolStripMenuItem
               // 
               this->журналРасчетовToolStripMenuItem->Name = L"журналРасчетовToolStripMenuItem";
               this->журналРасчетовToolStripMenuItem->Size = System::Drawing::Size(181, 22);
               this->журналРасчетовToolStripMenuItem->Text = L"Журнал расчетов";
               this->журналРасчетовToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::журналРасчетовToolStripMenuItem_Click);
               // 
               // дизайнToolStripMenuItem
               // 
               this->дизайнToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                   this->сменитьФонToolStripMenuItem,
                       this->заставкаНаФонеToolStripMenuItem
               });
               this->дизайнToolStripMenuItem->Name = L"дизайнToolStripMenuItem";
               this->дизайнToolStripMenuItem->Size = System::Drawing::Size(59, 21);
               this->дизайнToolStripMenuItem->Text = L"Дизайн";
               // 
               // сменитьФонToolStripMenuItem
               // 
               this->сменитьФонToolStripMenuItem->Name = L"сменитьФонToolStripMenuItem";
               this->сменитьФонToolStripMenuItem->Size = System::Drawing::Size(180, 22);
               this->сменитьФонToolStripMenuItem->Text = L"Сменить фон";
               this->сменитьФонToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сменитьФонToolStripMenuItem_Click);
               // 
               // заставкаНаФонеToolStripMenuItem
               // 
               this->заставкаНаФонеToolStripMenuItem->Name = L"заставкаНаФонеToolStripMenuItem";
               this->заставкаНаФонеToolStripMenuItem->Size = System::Drawing::Size(180, 22);
               this->заставкаНаФонеToolStripMenuItem->Text = L"Заставка на фоне";
               this->заставкаНаФонеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::заставкаНаФонеToolStripMenuItem_Click);
               // 
               // MyForm
               // 
               this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
               this->BackColor = System::Drawing::SystemColors::Control;
               this->ClientSize = System::Drawing::Size(432, 621);
               this->Controls->Add(this->buttonDivide);
               this->Controls->Add(this->buttonMultiply);
               this->Controls->Add(this->buttonOpenParen);
               this->Controls->Add(this->buttonCloseParen);
               this->Controls->Add(this->buttonPercent);
               this->Controls->Add(this->buttonExp);
               this->Controls->Add(this->buttonPi);
               this->Controls->Add(this->buttonFact);
               this->Controls->Add(this->buttonSqrt);
               this->Controls->Add(this->buttonPow);
               this->Controls->Add(this->buttonSin);
               this->Controls->Add(this->buttonTan);
               this->Controls->Add(this->buttonCos);
               this->Controls->Add(this->buttonCot);
               this->Controls->Add(this->buttonLn);
               this->Controls->Add(this->buttonLg);
               this->Controls->Add(this->button20);
               this->Controls->Add(this->button19);
               this->Controls->Add(this->button14);
               this->Controls->Add(this->button13);
               this->Controls->Add(this->button12);
               this->Controls->Add(this->button11);
               this->Controls->Add(this->button10);
               this->Controls->Add(this->button9);
               this->Controls->Add(this->button8);
               this->Controls->Add(this->button7);
               this->Controls->Add(this->button6);
               this->Controls->Add(this->button5);
               this->Controls->Add(this->button4);
               this->Controls->Add(this->button3);
               this->Controls->Add(this->button2);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->menuStrip1);
               this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
               this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
               this->MainMenuStrip = this->menuStrip1;
               this->MaximizeBox = false;
               this->Name = L"MyForm";
               this->Text = L"Calculator";
               this->TopMost = true;
               this->TransparencyKey = System::Drawing::Color::White;
               this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
               this->menuStrip1->ResumeLayout(false);
               this->menuStrip1->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion
           void MyForm::ShowDeveloperInfo(System::Object^ sender, System::EventArgs^ e) {
               MessageBox::Show("Программа создана студентами гр. МКН-23. В рамках курса 'Программная инженерия'. Активное участие в разработке принимали: ведущий разработчик - Бабич И.А., а также Барабан А.А.,Крамаренко В.Э.,Ярский А.А.",
                   "О разработчиках", MessageBoxButtons::OK);
           }
           void MyForm::ShowProgramInfo(System::Object^ sender, System::EventArgs^ e) {
               MessageBox::Show("Инженерный калькулятор, созданный студентами в качестве группового семестрового проекта по учебной дисциплине 'Программная инженерия'",
                   "О программе", MessageBoxButtons::OK, MessageBoxIcon::Question);
           }
    private:
        System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
    private:
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            input = "";
            label1->Text = "0";
        }
    private:
        System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
            if (input->Length > 0) {
                input = input->Substring(0, input->Length - 1);
                label1->Text = input;
            }
        }
    private:
        System::Void numberButton_Click(System::Object^ sender, System::EventArgs^ e) {
            Button^ numberButton = safe_cast<Button^>(sender);
            input += numberButton->Text;
            label1->Text = input;
        }
    private:
        System::Void operatorButton_Click(System::Object^ sender, System::EventArgs^ e) {
            Button^ operatorButton = safe_cast<Button^>(sender);
            input += " " + operatorButton->Text + " ";
            label1->Text = input;
        }
    private:
        System::Void buttonPow_Click(System::Object^ sender, System::EventArgs^ e) {
            input += "^";
            label1->Text = input;
        }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            String^ originalInput = input;  // Сохраняем оригинальное выражение для журнала

            if (input->StartsWith("sin(")) {
                String^ inputValue = input->Replace("sin(", "");
                inputValue = inputValue->TrimEnd(gcnew array<wchar_t>{ ')' }); // Убираем закрывающую скобку
                double number = Double::Parse(inputValue);
                double result = Math::Sin(number * Math::PI / 180);
                label1->Text = result.ToString();
                input = result.ToString();
                AddToHistory(originalInput, result.ToString());
            }
            else if (input->StartsWith("cos(")) {
                String^ inputValue = input->Replace("cos(", "");
                inputValue = inputValue->TrimEnd(gcnew array<wchar_t>{ ')' });
                double number = Double::Parse(inputValue);
                double result = Math::Cos(number * Math::PI / 180);
                label1->Text = result.ToString();
                input = result.ToString();
                AddToHistory(originalInput, result.ToString());
            }
            else if (input->StartsWith("tan(")) {
                String^ inputValue = input->Replace("tan(", "");
                inputValue = inputValue->TrimEnd(gcnew array<wchar_t>{ ')' });
                double number = Double::Parse(inputValue);
                double result = Math::Tan(number * Math::PI / 180);
                label1->Text = result.ToString();
                input = result.ToString();
                AddToHistory(originalInput, result.ToString());
            }
            else if (input->StartsWith("cot(")) {
                String^ inputValue = input->Replace("cot(", "");
                inputValue = inputValue->TrimEnd(gcnew array<wchar_t>{ ')' });
                double number = Double::Parse(inputValue);
                double result = 1 / Math::Tan(number * Math::PI / 180);
                label1->Text = result.ToString();
                input = result.ToString();
                AddToHistory(originalInput, result.ToString());
            }
            else if (input->StartsWith("ln(")) {
                String^ inputValue = input->Replace("ln(", "");
                inputValue = inputValue->TrimEnd(gcnew array<wchar_t>{ ')' });
                double number = Double::Parse(inputValue);
                double result = Math::Log(number);
                label1->Text = result.ToString();
                input = result.ToString();
                AddToHistory(originalInput, result.ToString());
            }
            else if (input->StartsWith("lg(")) {
                String^ inputValue = input->Replace("lg(", "");
                inputValue = inputValue->TrimEnd(gcnew array<wchar_t>{ ')' });
                double number = Double::Parse(inputValue);
                double result = Math::Log10(number);
                label1->Text = result.ToString();
                input = result.ToString();
                AddToHistory(originalInput, result.ToString());
            }
            else if (input->StartsWith(L"\u221A(")) { // Корень
                String^ inputValue = input->Replace(L"\u221A(", "");
                inputValue = inputValue->TrimEnd(gcnew array<wchar_t>{ ')' });
                double number = Double::Parse(inputValue);
                double result = Math::Sqrt(number);
                label1->Text = result.ToString();
                input = result.ToString();
                AddToHistory(originalInput, result.ToString());
            }
            else {
                // Ваш текущий код для обработки других математических выражений
                input = input->Replace(" ", ""); // Убираем все пробелы
                DataTable^ dt = gcnew DataTable();
                String^ result;
                if (input->Contains("^")) {
                    array<String^>^ parts = input->Split('^');
                    if (parts->Length == 2) {
                        try {
                            double baseNum = Convert::ToDouble(parts[0]->Replace(",", "."), CultureInfo::InvariantCulture);
                            double exponent = Convert::ToDouble(parts[1]->Replace(",", "."), CultureInfo::InvariantCulture);

                            if (baseNum == 0 && exponent < 0) {
                                label1->Text = "Ошибка (деление на 0)";
                                return;
                            }
                            double powerResult = Math::Pow(baseNum, exponent);
                            result = powerResult.ToString(CultureInfo::InvariantCulture)->Replace(".", ",");
                        }
                        catch (Exception^ ex) {
                            label1->Text = "Ошибка (неверный формат чисел)";
                            return;
                        }
                    }
                    else {
                        label1->Text = "Ошибка (неверный формат выражения)";
                        return;
                    }
                }
                else {
                    result = dt->Compute(input->Replace(",", "."), String::Empty)->ToString()->Replace(".", ",");
                }
                if (result == "NaN") {
                    label1->Text = "Ошибка";
                }
                else {
                    label1->Text = result;
                    AddToHistory(input, result);
                    input = result; // Обновляем input на результат
                }
            }
        }
        catch (Exception^ ex) {
            label1->Text = "Ошибка (исключение)";
        }
    }

    private: System::Void buttonSin_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            label1->Text = "sin(";
            input = "sin(";
        }
        catch (Exception^ ex) {
            label1->Text = "Ошибка";
        }
    }
    private: System::Void buttonCos_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            label1->Text = "cos(";
            input = "cos(";
        }
        catch (Exception^ ex) {
            label1->Text = "Ошибка";
        }
    }
    private: System::Void buttonTan_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            label1->Text = "tan(";
            input = "tan(";
        }
        catch (Exception^ ex) {
            label1->Text = "Ошибка";
        }
    }
    private: System::Void buttonCot_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            label1->Text = "cot(";
            input = "cot(";
        }
        catch (Exception^ ex) {
            label1->Text = "Ошибка";
        }
    }
    private: System::Void buttonLn_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            label1->Text = "ln(";
            input = "ln(";
        }
        catch (Exception^ ex) {
            label1->Text = "Ошибка";
        }
    }
    private: System::Void buttonLg_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            label1->Text = "lg(";
            input = "lg(";
        }
        catch (Exception^ ex) {
            label1->Text = "Ошибка";
        }
    }
    private: System::Void buttonSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            // Отображаем значок корня в label1
            label1->Text = L"\u221A("; // Unicode для символа корня
            input = L"\u221A(";
        }
        catch (Exception^ ex) {
            label1->Text = "Ошибка";
        }
    }
    private:
        System::Void buttonExp_Click(System::Object^ sender, System::EventArgs^ e) {
            input += Math::E.ToString();
            label1->Text = input;
        }
        System::Void buttonPi_Click(System::Object^ sender, System::EventArgs^ e) {
            input += Math::PI.ToString();
            label1->Text = input;
        }
    private:
        System::Void buttonFact_Click(System::Object^ sender, System::EventArgs^ e) {
            try {
                double number = Double::Parse(label1->Text);
                double result = 1;
                for (int i = 1; i <= number; ++i) {
                    result *= i;
                }
                input = result.ToString(); // Обновляем input на результат
                label1->Text = result.ToString();
                AddToHistory("" + number.ToString() + "!", result.ToString());
            }
            catch (Exception^ ex) {
                label1->Text = "Ошибка";
            }
        }
    private: System::Void buttonPercent_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            array<String^>^ parts = input->Trim()->Split(' ');
            double baseNumber;
            if (parts->Length >= 3 && Double::TryParse(parts[parts->Length - 3], baseNumber)) {
                String^ percentStr = parts[parts->Length - 1];
                percentStr = percentStr->Replace("%", "");
                double percent;
                if (Double::TryParse(percentStr, percent)) {
                    String^ lastOperator = parts[parts->Length - 2];
                    double result;
                    if (lastOperator == "+") {
                        result = baseNumber + (baseNumber * (percent / 100));
                    }
                    else if (lastOperator == "-") {
                        result = baseNumber - (baseNumber * (percent / 100));
                    }
                    else if (lastOperator == "*") {
                        result = baseNumber * (percent / 100);
                    }
                    else if (lastOperator == "/") {
                        result = baseNumber / (percent / 100);
                    }
                    else {
                        label1->Text = "Ошибка";
                        return;
                    }

                    // Обновляем input и label на результат
                    input = result.ToString();
                    label1->Text = input;

                    // Сохраняем в журнал расчетов
                    String^ operation = baseNumber.ToString() + " " + lastOperator + " " + percentStr + "%";
                    AddToHistory(operation, result.ToString());
                }
                else {
                    label1->Text = "Ошибка";
                }
            }
            else {
                label1->Text = "Ошибка";
            }
        }
        catch (Exception^ ex) {
            label1->Text = "Ошибка";
        }
    }
    private:
        System::Void buttonOpenParen_Click(System::Object^ sender, System::EventArgs^ e) {
            input += "(";
            label1->Text = input;
        }
    private:
        System::Void buttonCloseParen_Click(System::Object^ sender, System::EventArgs^ e) {
            input += ")";
            label1->Text = input;
        }
    private:
        System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}
    private:
        System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e) {
            input += " / ";
            label1->Text = input;
        }
    private:
        System::Void buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
            input += " * ";
            label1->Text = input;
        }
    private: void AddToHistory(String^ expression, String^ result) {
        String^ entry = expression + " = " + result;
        history->Add(entry);
    }
    private: System::Void журналРасчетовToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ historyText = String::Join("\n", history->ToArray());
        MessageBox::Show(historyText, "Журнал расчётов", MessageBoxButtons::OK);
    }
    private: System::Void сменитьФонToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        ColorDialog^ colorDialog = gcnew ColorDialog();
        if (colorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            this->BackColor = colorDialog->Color;
        }
    }
private: System::Void заставкаНаФонеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
    openFileDialog->Filter = "Image Files (*.bmp;*.jpg;*.jpeg;*.png)|*.bmp;*.jpg;*.jpeg;*.png";

    if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        String^ imagePath = openFileDialog->FileName;
        this->BackgroundImage = Image::FromFile(imagePath);
        this->BackgroundImageLayout = ImageLayout::Stretch; // Установка режима отображения изображения
    }
}
};
}