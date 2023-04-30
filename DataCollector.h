#ifndef DataLogger_H
#define DataLogger_H

#include <windows.h>
#include "ActionLogger.h"
#include "trend.h"

namespace DataLoggerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// DataLogger class holds all objects showed on the screen

	public ref class DataLogger : public System::Windows::Forms::Form
	{
	public:
		DataLogger(void)
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
		~DataLogger()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ btnSTOP;
	public: System::Windows::Forms::Button^ btnSTART;
	public: System::Windows::Forms::Label^ labAV;

	public: System::Windows::Forms::Label^ labAV1;
	public: System::Windows::Forms::Label^ labAV1var;
	public: System::Windows::Forms::Label^ labAV2;
	public: System::Windows::Forms::Label^ labAV2var;
	public: System::Windows::Forms::Label^ labAV3;
	public: System::Windows::Forms::Label^ labAV3var;

	public: System::Windows::Forms::Label^ labAC12;
	public: System::Windows::Forms::Label^ labAC12var;
	public: System::Windows::Forms::Label^ labAC23;
	public: System::Windows::Forms::Label^ labAC23var;
	public: System::Windows::Forms::Label^ labAC31;
	public: System::Windows::Forms::Label^ labAC31var;

	public: System::Windows::Forms::Label^ labAComb;
	public: System::Windows::Forms::Label^ labACombvar;

	public: System::Windows::Forms::Label^ labAAct;
	public: System::Windows::Forms::Label^ labAActvar;

	public: System::Windows::Forms::Label^ labAReact;
	public: System::Windows::Forms::Label^ labAReactvar;

	public: System::Windows::Forms::Label^ labAApp;
	public: System::Windows::Forms::Label^ labAAppvar;
	public: System::Windows::Forms::Label^ labSN;
	private: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::Label^ labHmodel;
	public: System::Windows::Forms::Label^ labHmodel2;
	public: System::Windows::Forms::Label^ labHProdNum;
	public: System::Windows::Forms::Label^ labHProdNum2;
	public: System::Windows::Forms::Label^ liftMotSL;

	public: System::Windows::Forms::Label^ liftMmodel;
	public: System::Windows::Forms::Label^ liftMLogo;
	public: System::Windows::Forms::Label^ crossTMotLogo;
	public: System::Windows::Forms::Label^ crossTMotSL;

	public: System::Windows::Forms::Label^ crossTMotModel;
	public: System::Windows::Forms::PictureBox^ Pic1;
	public: System::Windows::Forms::Button^ btnCheck;
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label7;



	public: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::Label^ label14;
	public: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::Label^ label16;

	public: System::Windows::Forms::Label^ label18;


	public: System::Windows::Forms::Label^ label21;

	public:

	public:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// Initialization of components in DataLogger Do not modify !!!
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DataLogger::typeid));
			this->btnSTOP = (gcnew System::Windows::Forms::Button());
			this->btnSTART = (gcnew System::Windows::Forms::Button());
			this->labAV = (gcnew System::Windows::Forms::Label());
			this->labAV1 = (gcnew System::Windows::Forms::Label());
			this->labAV1var = (gcnew System::Windows::Forms::Label());
			this->labAV2 = (gcnew System::Windows::Forms::Label());
			this->labAV2var = (gcnew System::Windows::Forms::Label());
			this->labAV3 = (gcnew System::Windows::Forms::Label());
			this->labAV3var = (gcnew System::Windows::Forms::Label());
			this->labAC12 = (gcnew System::Windows::Forms::Label());
			this->labAC12var = (gcnew System::Windows::Forms::Label());
			this->labAC23 = (gcnew System::Windows::Forms::Label());
			this->labAC23var = (gcnew System::Windows::Forms::Label());
			this->labAC31 = (gcnew System::Windows::Forms::Label());
			this->labAC31var = (gcnew System::Windows::Forms::Label());
			this->labAComb = (gcnew System::Windows::Forms::Label());
			this->labACombvar = (gcnew System::Windows::Forms::Label());
			this->labAAct = (gcnew System::Windows::Forms::Label());
			this->labAActvar = (gcnew System::Windows::Forms::Label());
			this->labAReact = (gcnew System::Windows::Forms::Label());
			this->labAReactvar = (gcnew System::Windows::Forms::Label());
			this->labAApp = (gcnew System::Windows::Forms::Label());
			this->labAAppvar = (gcnew System::Windows::Forms::Label());
			this->labSN = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->labHmodel = (gcnew System::Windows::Forms::Label());
			this->labHmodel2 = (gcnew System::Windows::Forms::Label());
			this->labHProdNum = (gcnew System::Windows::Forms::Label());
			this->labHProdNum2 = (gcnew System::Windows::Forms::Label());
			this->liftMotSL = (gcnew System::Windows::Forms::Label());
			this->liftMmodel = (gcnew System::Windows::Forms::Label());
			this->liftMLogo = (gcnew System::Windows::Forms::Label());
			this->crossTMotLogo = (gcnew System::Windows::Forms::Label());
			this->crossTMotSL = (gcnew System::Windows::Forms::Label());
			this->crossTMotModel = (gcnew System::Windows::Forms::Label());
			this->Pic1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCheck = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pic1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSTOP
			// 
			this->btnSTOP->BackColor = System::Drawing::Color::Red;
			this->btnSTOP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSTOP->Location = System::Drawing::Point(155, 96);
			this->btnSTOP->Name = L"btnSTOP";
			this->btnSTOP->Size = System::Drawing::Size(139, 71);
			this->btnSTOP->TabIndex = 0;
			this->btnSTOP->Text = L"����";
			this->btnSTOP->UseVisualStyleBackColor = false;
			this->btnSTOP->Click += gcnew System::EventHandler(this, &DataLogger::btnSTOP_Click);
			// 
			// btnSTART
			// 
			this->btnSTART->BackColor = System::Drawing::Color::Lime;
			this->btnSTART->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSTART->Location = System::Drawing::Point(10, 95);
			this->btnSTART->Name = L"btnSTART";
			this->btnSTART->Size = System::Drawing::Size(139, 71);
			this->btnSTART->TabIndex = 1;
			this->btnSTART->Text = L"������";
			this->btnSTART->UseVisualStyleBackColor = false;
			// 
			// labAV
			// 
			this->labAV->AutoSize = true;
			this->labAV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV->Location = System::Drawing::Point(950, 28);
			this->labAV->Name = L"labAV";
			this->labAV->Size = System::Drawing::Size(360, 25);
			this->labAV->TabIndex = 2;
			this->labAV->Text = L"���������� ������ ���������";
			// 
			// labAV1
			// 
			this->labAV1->AutoSize = true;
			this->labAV1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV1->Location = System::Drawing::Point(950, 306);
			this->labAV1->Name = L"labAV1";
			this->labAV1->Size = System::Drawing::Size(228, 25);
			this->labAV1->TabIndex = 3;
			this->labAV1->Text = L"���������� ���� 2";
			// 
			// labAV1var
			// 
			this->labAV1var->AutoSize = true;
			this->labAV1var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV1var->Location = System::Drawing::Point(1291, 281);
			this->labAV1var->Name = L"labAV1var";
			this->labAV1var->Size = System::Drawing::Size(19, 25);
			this->labAV1var->TabIndex = 13;
			this->labAV1var->Text = L"-";
			// 
			// labAV2
			// 
			this->labAV2->AutoSize = true;
			this->labAV2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV2->Location = System::Drawing::Point(950, 331);
			this->labAV2->Name = L"labAV2";
			this->labAV2->Size = System::Drawing::Size(228, 25);
			this->labAV2->TabIndex = 4;
			this->labAV2->Text = L"���������� ���� 3";
			// 
			// labAV2var
			// 
			this->labAV2var->AutoSize = true;
			this->labAV2var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV2var->Location = System::Drawing::Point(1291, 306);
			this->labAV2var->Name = L"labAV2var";
			this->labAV2var->Size = System::Drawing::Size(19, 25);
			this->labAV2var->TabIndex = 14;
			this->labAV2var->Text = L"-";
			// 
			// labAV3
			// 
			this->labAV3->AutoSize = true;
			this->labAV3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV3->Location = System::Drawing::Point(950, 72);
			this->labAV3->Name = L"labAV3";
			this->labAV3->Size = System::Drawing::Size(231, 25);
			this->labAV3->TabIndex = 5;
			this->labAV3->Text = L"��� ����� ���� 1-2";
			// 
			// labAV3var
			// 
			this->labAV3var->AutoSize = true;
			this->labAV3var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV3var->Location = System::Drawing::Point(1291, 331);
			this->labAV3var->Name = L"labAV3var";
			this->labAV3var->Size = System::Drawing::Size(19, 25);
			this->labAV3var->TabIndex = 15;
			this->labAV3var->Text = L"-";
			// 
			// labAC12
			// 
			this->labAC12->AutoSize = true;
			this->labAC12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC12->Location = System::Drawing::Point(950, 281);
			this->labAC12->Name = L"labAC12";
			this->labAC12->Size = System::Drawing::Size(228, 25);
			this->labAC12->TabIndex = 6;
			this->labAC12->Text = L"���������� ���� 1";
			// 
			// labAC12var
			// 
			this->labAC12var->AutoSize = true;
			this->labAC12var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC12var->Location = System::Drawing::Point(1291, 72);
			this->labAC12var->Name = L"labAC12var";
			this->labAC12var->Size = System::Drawing::Size(19, 25);
			this->labAC12var->TabIndex = 16;
			this->labAC12var->Text = L"-";
			// 
			// labAC23
			// 
			this->labAC23->AutoSize = true;
			this->labAC23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC23->Location = System::Drawing::Point(950, 97);
			this->labAC23->Name = L"labAC23";
			this->labAC23->Size = System::Drawing::Size(231, 25);
			this->labAC23->TabIndex = 7;
			this->labAC23->Text = L"��� ����� ���� 2-3";
			// 
			// labAC23var
			// 
			this->labAC23var->AutoSize = true;
			this->labAC23var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC23var->Location = System::Drawing::Point(1291, 97);
			this->labAC23var->Name = L"labAC23var";
			this->labAC23var->Size = System::Drawing::Size(19, 25);
			this->labAC23var->TabIndex = 17;
			this->labAC23var->Text = L"-";
			// 
			// labAC31
			// 
			this->labAC31->AutoSize = true;
			this->labAC31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC31->Location = System::Drawing::Point(950, 122);
			this->labAC31->Name = L"labAC31";
			this->labAC31->Size = System::Drawing::Size(231, 25);
			this->labAC31->TabIndex = 8;
			this->labAC31->Text = L"��� ����� ���� 3-1";
			// 
			// labAC31var
			// 
			this->labAC31var->AutoSize = true;
			this->labAC31var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC31var->Location = System::Drawing::Point(1291, 118);
			this->labAC31var->Name = L"labAC31var";
			this->labAC31var->Size = System::Drawing::Size(19, 25);
			this->labAC31var->TabIndex = 18;
			this->labAC31var->Text = L"-";
			// 
			// labAComb
			// 
			this->labAComb->AutoSize = true;
			this->labAComb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAComb->Location = System::Drawing::Point(950, 167);
			this->labAComb->Name = L"labAComb";
			this->labAComb->Size = System::Drawing::Size(265, 25);
			this->labAComb->TabIndex = 9;
			this->labAComb->Text = L"����������� �������";
			// 
			// labACombvar
			// 
			this->labACombvar->AutoSize = true;
			this->labACombvar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labACombvar->Location = System::Drawing::Point(1291, 167);
			this->labACombvar->Name = L"labACombvar";
			this->labACombvar->Size = System::Drawing::Size(19, 25);
			this->labACombvar->TabIndex = 19;
			this->labACombvar->Text = L"-";
			// 
			// labAAct
			// 
			this->labAAct->AutoSize = true;
			this->labAAct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAAct->Location = System::Drawing::Point(950, 192);
			this->labAAct->Name = L"labAAct";
			this->labAAct->Size = System::Drawing::Size(207, 25);
			this->labAAct->TabIndex = 10;
			this->labAAct->Text = L"������� �������";
			// 
			// labAActvar
			// 
			this->labAActvar->AutoSize = true;
			this->labAActvar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAActvar->Location = System::Drawing::Point(1291, 192);
			this->labAActvar->Name = L"labAActvar";
			this->labAActvar->Size = System::Drawing::Size(19, 25);
			this->labAActvar->TabIndex = 20;
			this->labAActvar->Text = L"-";
			// 
			// labAReact
			// 
			this->labAReact->AutoSize = true;
			this->labAReact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAReact->Location = System::Drawing::Point(950, 217);
			this->labAReact->Name = L"labAReact";
			this->labAReact->Size = System::Drawing::Size(232, 25);
			this->labAReact->TabIndex = 11;
			this->labAReact->Text = L"��������� �������";
			// 
			// labAReactvar
			// 
			this->labAReactvar->AutoSize = true;
			this->labAReactvar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAReactvar->Location = System::Drawing::Point(1291, 217);
			this->labAReactvar->Name = L"labAReactvar";
			this->labAReactvar->Size = System::Drawing::Size(19, 25);
			this->labAReactvar->TabIndex = 21;
			this->labAReactvar->Text = L"-";
			// 
			// labAApp
			// 
			this->labAApp->AutoSize = true;
			this->labAApp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAApp->Location = System::Drawing::Point(950, 242);
			this->labAApp->Name = L"labAApp";
			this->labAApp->Size = System::Drawing::Size(239, 25);
			this->labAApp->TabIndex = 12;
			this->labAApp->Text = L"��������� �������";
			// 
			// labAAppvar
			// 
			this->labAAppvar->AutoSize = true;
			this->labAAppvar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAAppvar->Location = System::Drawing::Point(1291, 242);
			this->labAAppvar->Name = L"labAAppvar";
			this->labAAppvar->Size = System::Drawing::Size(19, 25);
			this->labAAppvar->TabIndex = 22;
			this->labAAppvar->Text = L"-";
			// 
			// labSN
			// 
			this->labSN->AutoSize = true;
			this->labSN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labSN->Location = System::Drawing::Point(12, 12);
			this->labSN->Name = L"labSN";
			this->labSN->Size = System::Drawing::Size(247, 25);
			this->labSN->TabIndex = 23;
			this->labSN->Text = L"������ � �� �������";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(9, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 30);
			this->textBox1->TabIndex = 24;
			// 
			// labHmodel
			// 
			this->labHmodel->AutoSize = true;
			this->labHmodel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labHmodel->Location = System::Drawing::Point(12, 186);
			this->labHmodel->Name = L"labHmodel";
			this->labHmodel->Size = System::Drawing::Size(107, 25);
			this->labHmodel->TabIndex = 25;
			this->labHmodel->Text = L"������ :";
			// 
			// labHmodel2
			// 
			this->labHmodel2->AutoSize = true;
			this->labHmodel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labHmodel2->Location = System::Drawing::Point(12, 217);
			this->labHmodel2->Name = L"labHmodel2";
			this->labHmodel2->Size = System::Drawing::Size(19, 25);
			this->labHmodel2->TabIndex = 26;
			this->labHmodel2->Text = L"-";
			// 
			// labHProdNum
			// 
			this->labHProdNum->AutoEllipsis = true;
			this->labHProdNum->AutoSize = true;
			this->labHProdNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labHProdNum->Location = System::Drawing::Point(12, 265);
			this->labHProdNum->Name = L"labHProdNum";
			this->labHProdNum->Size = System::Drawing::Size(206, 25);
			this->labHProdNum->TabIndex = 27;
			this->labHProdNum->Text = L"��������� ��� �";
			// 
			// labHProdNum2
			// 
			this->labHProdNum2->AutoSize = true;
			this->labHProdNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labHProdNum2->Location = System::Drawing::Point(12, 306);
			this->labHProdNum2->Name = L"labHProdNum2";
			this->labHProdNum2->Size = System::Drawing::Size(19, 25);
			this->labHProdNum2->TabIndex = 28;
			this->labHProdNum2->Text = L"-";
			// 
			// liftMotSL
			// 
			this->liftMotSL->AutoSize = true;
			this->liftMotSL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->liftMotSL->Location = System::Drawing::Point(12, 465);
			this->liftMotSL->Name = L"liftMotSL";
			this->liftMotSL->Size = System::Drawing::Size(19, 25);
			this->liftMotSL->TabIndex = 30;
			this->liftMotSL->Text = L"-";
			// 
			// liftMmodel
			// 
			this->liftMmodel->AutoEllipsis = true;
			this->liftMmodel->AutoSize = true;
			this->liftMmodel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->liftMmodel->Location = System::Drawing::Point(12, 424);
			this->liftMmodel->Name = L"liftMmodel";
			this->liftMmodel->Size = System::Drawing::Size(230, 25);
			this->liftMmodel->TabIndex = 29;
			this->liftMmodel->Text = L"����� ������� �����";
			// 
			// liftMLogo
			// 
			this->liftMLogo->AutoEllipsis = true;
			this->liftMLogo->AutoSize = true;
			this->liftMLogo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->liftMLogo->Location = System::Drawing::Point(12, 390);
			this->liftMLogo->Name = L"liftMLogo";
			this->liftMLogo->Size = System::Drawing::Size(188, 25);
			this->liftMLogo->TabIndex = 31;
			this->liftMLogo->Text = L"������� �����";
			// 
			// crossTMotLogo
			// 
			this->crossTMotLogo->AutoEllipsis = true;
			this->crossTMotLogo->AutoSize = true;
			this->crossTMotLogo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->crossTMotLogo->Location = System::Drawing::Point(12, 522);
			this->crossTMotLogo->Name = L"crossTMotLogo";
			this->crossTMotLogo->Size = System::Drawing::Size(180, 25);
			this->crossTMotLogo->TabIndex = 34;
			this->crossTMotLogo->Text = L"����� �����/�";
			// 
			// crossTMotSL
			// 
			this->crossTMotSL->AutoSize = true;
			this->crossTMotSL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->crossTMotSL->Location = System::Drawing::Point(12, 597);
			this->crossTMotSL->Name = L"crossTMotSL";
			this->crossTMotSL->Size = System::Drawing::Size(19, 25);
			this->crossTMotSL->TabIndex = 33;
			this->crossTMotSL->Text = L"-";
			// 
			// crossTMotModel
			// 
			this->crossTMotModel->AutoEllipsis = true;
			this->crossTMotModel->AutoSize = true;
			this->crossTMotModel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->crossTMotModel->Location = System::Drawing::Point(12, 556);
			this->crossTMotModel->Name = L"crossTMotModel";
			this->crossTMotModel->Size = System::Drawing::Size(228, 25);
			this->crossTMotModel->TabIndex = 32;
			this->crossTMotModel->Text = L"����� ������ �����/�";
			// 
			// Pic1
			// 
			this->Pic1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Pic1->Image = System::Drawing::Image::FromFile("Logo_TU_Gab.jpg");
			this->Pic1->Location = System::Drawing::Point(1250, 660);
			this->Pic1->Name = L"Pic1";
			this->Pic1->Size = System::Drawing::Size(90, 80);
			this->Pic1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Pic1->TabIndex = 35;
			this->Pic1->TabStop = false;
			// 
			// btnCheck
			// 
			this->btnCheck->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnCheck->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCheck->Location = System::Drawing::Point(155, 46);
			this->btnCheck->Name = L"btnCheck";
			this->btnCheck->Size = System::Drawing::Size(139, 31);
			this->btnCheck->TabIndex = 36;
			this->btnCheck->Text = L"�������";
			this->btnCheck->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(817, 242);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 25);
			this->label1->TabIndex = 57;
			this->label1->Text = L"-";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(817, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 25);
			this->label2->TabIndex = 56;
			this->label2->Text = L"-";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(817, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 25);
			this->label3->TabIndex = 55;
			this->label3->Text = L"-";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(817, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 25);
			this->label4->TabIndex = 54;
			this->label4->Text = L"-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(817, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 25);
			this->label5->TabIndex = 53;
			this->label5->Text = L"-";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(817, 97);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 25);
			this->label6->TabIndex = 52;
			this->label6->Text = L"-";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(817, 72);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 25);
			this->label7->TabIndex = 51;
			this->label7->Text = L"-";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(476, 242);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(239, 25);
			this->label11->TabIndex = 47;
			this->label11->Text = L"��������� �������";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(476, 217);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(232, 25);
			this->label12->TabIndex = 46;
			this->label12->Text = L"��������� �������";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(476, 192);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(207, 25);
			this->label13->TabIndex = 45;
			this->label13->Text = L"������� �������";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(476, 167);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(265, 25);
			this->label14->TabIndex = 44;
			this->label14->Text = L"����������� �������";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(476, 122);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(231, 25);
			this->label15->TabIndex = 43;
			this->label15->Text = L"��� ����� ���� 3-1";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(476, 97);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(231, 25);
			this->label16->TabIndex = 42;
			this->label16->Text = L"��� ����� ���� 2-3";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(476, 72);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(231, 25);
			this->label18->TabIndex = 40;
			this->label18->Text = L"��� ����� ���� 1-2";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(476, 28);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(330, 25);
			this->label21->TabIndex = 37;
			this->label21->Text = L"�������� ������ ���������";
			// 
			// DataLogger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1355, 752);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->btnCheck);
			this->Controls->Add(this->Pic1);
			this->Controls->Add(this->crossTMotLogo);
			this->Controls->Add(this->crossTMotSL);
			this->Controls->Add(this->crossTMotModel);
			this->Controls->Add(this->liftMLogo);
			this->Controls->Add(this->liftMotSL);
			this->Controls->Add(this->liftMmodel);
			this->Controls->Add(this->labHProdNum2);
			this->Controls->Add(this->labHProdNum);
			this->Controls->Add(this->labHmodel2);
			this->Controls->Add(this->labHmodel);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->labSN);
			this->Controls->Add(this->labAAppvar);
			this->Controls->Add(this->labAReactvar);
			this->Controls->Add(this->labAActvar);
			this->Controls->Add(this->labACombvar);
			this->Controls->Add(this->labAC31var);
			this->Controls->Add(this->labAC23var);
			this->Controls->Add(this->labAC12var);
			this->Controls->Add(this->labAV3var);
			this->Controls->Add(this->labAV2var);
			this->Controls->Add(this->labAV1var);
			this->Controls->Add(this->labAApp);
			this->Controls->Add(this->labAReact);
			this->Controls->Add(this->labAAct);
			this->Controls->Add(this->labAComb);
			this->Controls->Add(this->labAC31);
			this->Controls->Add(this->labAC23);
			this->Controls->Add(this->labAC12);
			this->Controls->Add(this->labAV3);
			this->Controls->Add(this->labAV2);
			this->Controls->Add(this->labAV1);
			this->Controls->Add(this->labAV);
			this->Controls->Add(this->btnSTART);
			this->Controls->Add(this->btnSTOP);
			this->Name = L"DataLogger";
			this->Text = L"DataLogger";
			this->Load += gcnew System::EventHandler(this, &DataLogger::DataLogger_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pic1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSTOP_Click(System::Object^ sender, System::EventArgs^ e) {

		run();

		this->labAV1var->Text = voltageLine12AVG.ToString("0.00") + " V";
		this->labAV2var->Text = voltageLine23AVG.ToString("0.00") + " V";
		this->labAV3var->Text = voltageLine31AVG.ToString("0.00") + " V";

		this->labAC12var->Text = currentLine1AVG.ToString("0.00") + " A";
		this->labAC23var->Text = currentLine2AVG.ToString("0.00") + " A";
		this->labAC31var->Text = currentLine3AVG.ToString("0.00") + " A";

		this->labACombvar->Text = combinatedPowerAVG.ToString("0.00") + " W";

		this->labAActvar->Text = activePowerAVG.ToString("0.00") + " W";

		this->labAReactvar->Text = reactivePowerAVG.ToString("0.00") + " W";

		this->labAAppvar->Text = apparentPowerAVG.ToString("0.00") + " W";

		MessageBox::Show("������� ��������� �� ������� !");

	}
	private: System::Void DataLogger_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

#endif 