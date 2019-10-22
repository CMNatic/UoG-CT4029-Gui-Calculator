#pragma once

namespace ComplexCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  modeToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  modeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  modeToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  scientificToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  historyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem1;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  btn_decimal;

	private: System::Windows::Forms::Label^  lblShowOperation;
	private: System::Windows::Forms::TextBox^  txtDisplay;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->fileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modeToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
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
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->btn_decimal = (gcnew System::Windows::Forms::Button());
			this->lblShowOperation = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(102, 28);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->modeToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(101, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->Name = L"modeToolStripMenuItem";
			this->modeToolStripMenuItem->Size = System::Drawing::Size(123, 26);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem1 });
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(102, 28);
			// 
			// fileToolStripMenuItem1
			// 
			this->fileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->modeToolStripMenuItem1 });
			this->fileToolStripMenuItem1->Name = L"fileToolStripMenuItem1";
			this->fileToolStripMenuItem1->Size = System::Drawing::Size(101, 24);
			this->fileToolStripMenuItem1->Text = L"File";
			// 
			// modeToolStripMenuItem1
			// 
			this->modeToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->modeToolStripMenuItem1->Name = L"modeToolStripMenuItem1";
			this->modeToolStripMenuItem1->Size = System::Drawing::Size(123, 26);
			this->modeToolStripMenuItem1->Text = L"Mode";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(116, 26);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem2,
					this->modeToolStripMenuItem2, this->helpToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(294, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem2
			// 
			this->fileToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem2->Name = L"fileToolStripMenuItem2";
			this->fileToolStripMenuItem2->Size = System::Drawing::Size(44, 24);
			this->fileToolStripMenuItem2->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(216, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculator::exitToolStripMenuItem_Click);
			// 
			// modeToolStripMenuItem2
			// 
			this->modeToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->standardToolStripMenuItem,
					this->scientificToolStripMenuItem, this->historyToolStripMenuItem
			});
			this->modeToolStripMenuItem2->Name = L"modeToolStripMenuItem2";
			this->modeToolStripMenuItem2->Size = System::Drawing::Size(60, 24);
			this->modeToolStripMenuItem2->Text = L"Mode";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->standardToolStripMenuItem->Text = L"Standard";
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			// 
			// historyToolStripMenuItem
			// 
			this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
			this->historyToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->historyToolStripMenuItem->Text = L"History";
			// 
			// helpToolStripMenuItem1
			// 
			this->helpToolStripMenuItem1->Name = L"helpToolStripMenuItem1";
			this->helpToolStripMenuItem1->Size = System::Drawing::Size(53, 24);
			this->helpToolStripMenuItem1->Text = L"Help";
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(0, 32);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(294, 43);
			this->txtDisplay->TabIndex = 3;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SandyBrown;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(54, 52);
			this->button1->TabIndex = 4;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SandyBrown;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(72, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(54, 52);
			this->button2->TabIndex = 5;
			this->button2->Text = L"CE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SandyBrown;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(132, 92);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(54, 52);
			this->button3->TabIndex = 6;
			this->button3->Text = L"ME";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SandyBrown;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button4->Location = System::Drawing::Point(217, 92);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 52);
			this->button4->TabIndex = 7;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::btn_Operators_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SandyBrown;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button5->Location = System::Drawing::Point(217, 180);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 52);
			this->button5->TabIndex = 8;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::btn_Operators_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::SandyBrown;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button6->Location = System::Drawing::Point(217, 238);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(61, 52);
			this->button6->TabIndex = 9;
			this->button6->Text = L"*";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::btn_Operators_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::SandyBrown;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button7->Location = System::Drawing::Point(217, 296);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 52);
			this->button7->TabIndex = 10;
			this->button7->Text = L"/";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::btn_Operators_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::SandyBrown;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button8->Location = System::Drawing::Point(132, 375);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(146, 52);
			this->button8->TabIndex = 11;
			this->button8->Text = L"=";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkGray;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button9->Location = System::Drawing::Point(12, 180);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(54, 52);
			this->button9->TabIndex = 12;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DarkGray;
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button10->Location = System::Drawing::Point(72, 180);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(54, 52);
			this->button10->TabIndex = 13;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DarkGray;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button11->Location = System::Drawing::Point(132, 180);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(54, 52);
			this->button11->TabIndex = 14;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DarkGray;
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button12->Location = System::Drawing::Point(12, 238);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(54, 52);
			this->button12->TabIndex = 15;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DarkGray;
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button13->Location = System::Drawing::Point(72, 238);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(54, 52);
			this->button13->TabIndex = 16;
			this->button13->Text = L"5";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::DarkGray;
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button14->Location = System::Drawing::Point(132, 238);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(54, 52);
			this->button14->TabIndex = 17;
			this->button14->Text = L"6";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkGray;
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button15->Location = System::Drawing::Point(12, 296);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(54, 52);
			this->button15->TabIndex = 18;
			this->button15->Text = L"1";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::DarkGray;
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button16->Location = System::Drawing::Point(72, 294);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(54, 54);
			this->button16->TabIndex = 19;
			this->button16->Text = L"2";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::DarkGray;
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button17->Location = System::Drawing::Point(132, 296);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(54, 52);
			this->button17->TabIndex = 20;
			this->button17->Text = L"3";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::DarkGray;
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button18->Location = System::Drawing::Point(12, 375);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(54, 52);
			this->button18->TabIndex = 21;
			this->button18->Text = L"0";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Calculator::btn_Click);
			// 
			// btn_decimal
			// 
			this->btn_decimal->BackColor = System::Drawing::Color::DarkGray;
			this->btn_decimal->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_decimal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btn_decimal->Location = System::Drawing::Point(72, 375);
			this->btn_decimal->Name = L"btn_decimal";
			this->btn_decimal->Size = System::Drawing::Size(54, 52);
			this->btn_decimal->TabIndex = 22;
			this->btn_decimal->Text = L".";
			this->btn_decimal->UseVisualStyleBackColor = false;
			this->btn_decimal->Click += gcnew System::EventHandler(this, &Calculator::btn_decimal_Click);
			// 
			// lblShowOperation
			// 
			this->lblShowOperation->AutoSize = true;
			this->lblShowOperation->Location = System::Drawing::Point(5, 35);
			this->lblShowOperation->Name = L"lblShowOperation";
			this->lblShowOperation->Size = System::Drawing::Size(0, 17);
			this->lblShowOperation->TabIndex = 23;
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(294, 462);
			this->Controls->Add(this->lblShowOperation);
			this->Controls->Add(this->btn_decimal);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
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
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(312, 47);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip2->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	double iFirstNumber;
	double iSecondNumber;
	double iResult;
	String^ iOperators;


private: System::Void Calculator_Load(System::Object^  sender, System::EventArgs^  e) {
}
		//Button 1 = 'C' or 'Clear' on Calculator GUI
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	txtDisplay->Text = "0";
	lblShowOperation->Text = "";
}
		//Button 2 = 'CE' or 'Clear Entry' on Calculator GUI
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Text = "0";
}
		 //Decimal point '.' on Calculator GUI
private: System::Void btn_decimal_Click(System::Object^  sender, System::EventArgs^  e) {

	if (!txtDisplay->Text->Contains(".")) {
		txtDisplay->Text = txtDisplay->Text + ".";
	}

}
		//btn_Click = Grouping of all Numerical values (0-9) on Calculator GUI
private: System::Void btn_Click(System::Object^  sender, System::EventArgs^  e) {

	Button ^ Numbers = safe_cast<Button^>(sender); //?
	if (txtDisplay->Text == "0") {
		txtDisplay->Text = Numbers->Text;
	}
	else {
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}
}
	// Grouping of Operators, +, -, *, / buttons
private: System::Void btn_Operators_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Button ^ op = safe_cast<Button^>(sender);
	iFirstNumber = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	iOperators = op->Text;
	lblShowOperation->Text = System::Convert::ToString(iFirstNumber) + " " + iOperators;

}
		 //Button_8 = Equals '=' operator on Calculator GUI
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	lblShowOperation->Text = "";
	iSecondNumber = Double::Parse(txtDisplay->Text);

	if (iOperators == "+") {
		iResult = iFirstNumber + iSecondNumber;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperators == "-") {
		iResult = iFirstNumber - iSecondNumber;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperators == "*") {
		iResult = iFirstNumber * iSecondNumber;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperators == "/") {
		iResult = iFirstNumber / iSecondNumber;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}

}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}
