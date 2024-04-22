#ifndef DataLogger_H
#define DataLogger_H

#include <windows.h>
#include "ActionLogger.h"
#include "trend.h"
#include "ReadHoists.h"
#include "Graphs.h"
#include <msclr\marshal_cppstd.h>

namespace DataLoggerApp 
{

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

		public: System::Windows::Forms::Label^ labHmodel2;
		public: System::Windows::Forms::Label^ labHProdNum;
		public: System::Windows::Forms::Label^ labHProdNum2;
		public: System::Windows::Forms::Label^ liftMotSL;


		public: System::Windows::Forms::Label^ liftMLogo;
		public: System::Windows::Forms::Label^ crossTMotLogo;
		public: System::Windows::Forms::Label^ crossTMotSL;


	private: System::Windows::Forms::PictureBox^ TUGAB;
	public:

		public: System::Windows::Forms::Button^ button1;
		public: System::Windows::Forms::Button^ button2;
		public: System::Windows::Forms::Button^ button3;





	public: System::Windows::Forms::Label^ HeadRoomLabel2;
	public: System::Windows::Forms::Label^ FemLabel1;
	public: System::Windows::Forms::Label^ FemLabel2;
	private: System::Windows::Forms::PictureBox^ HOISTPIC;
	public:

	public:





		private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		#pragma region Windows Form Designer generated code
		/// Initialization of components in DataCollecotr Do not modify !!!
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
			this->labHmodel2 = (gcnew System::Windows::Forms::Label());
			this->labHProdNum = (gcnew System::Windows::Forms::Label());
			this->labHProdNum2 = (gcnew System::Windows::Forms::Label());
			this->liftMotSL = (gcnew System::Windows::Forms::Label());
			this->liftMLogo = (gcnew System::Windows::Forms::Label());
			this->crossTMotLogo = (gcnew System::Windows::Forms::Label());
			this->crossTMotSL = (gcnew System::Windows::Forms::Label());
			this->TUGAB = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->HeadRoomLabel2 = (gcnew System::Windows::Forms::Label());
			this->FemLabel1 = (gcnew System::Windows::Forms::Label());
			this->FemLabel2 = (gcnew System::Windows::Forms::Label());
			this->HOISTPIC = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TUGAB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HOISTPIC))->BeginInit();
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
			this->btnSTOP->Text = L"—“Œœ";
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
			this->btnSTART->Text = L"Õ¿◊¿ÀŒ";
			this->btnSTART->UseVisualStyleBackColor = false;
			this->btnSTART->Click += gcnew System::EventHandler(this, &DataLogger::btnSTART_Click);
			// 
			// labAV
			// 
			this->labAV->AutoSize = true;
			this->labAV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV->Location = System::Drawing::Point(810, 21);
			this->labAV->Name = L"labAV";
			this->labAV->Size = System::Drawing::Size(293, 25);
			this->labAV->TabIndex = 2;
			this->labAV->Text = L"»«◊≈»—À≈Õ» —“Œ…ÕŒ—“»";
			// 
			// labAV1
			// 
			this->labAV1->AutoSize = true;
			this->labAV1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV1->Location = System::Drawing::Point(810, 86);
			this->labAV1->Name = L"labAV1";
			this->labAV1->Size = System::Drawing::Size(228, 25);
			this->labAV1->TabIndex = 3;
			this->labAV1->Text = L"Õ¿œ–≈∆≈Õ»≈ ‘¿«¿ 2";
			// 
			// labAV1var
			// 
			this->labAV1var->AutoSize = true;
			this->labAV1var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV1var->Location = System::Drawing::Point(1101, 61);
			this->labAV1var->Name = L"labAV1var";
			this->labAV1var->Size = System::Drawing::Size(0, 25);
			this->labAV1var->TabIndex = 13;
			// 
			// labAV2
			// 
			this->labAV2->AutoSize = true;
			this->labAV2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV2->Location = System::Drawing::Point(810, 111);
			this->labAV2->Name = L"labAV2";
			this->labAV2->Size = System::Drawing::Size(228, 25);
			this->labAV2->TabIndex = 4;
			this->labAV2->Text = L"Õ¿œ–≈∆≈Õ»≈ ‘¿«¿ 3";
			// 
			// labAV2var
			// 
			this->labAV2var->AutoSize = true;
			this->labAV2var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV2var->Location = System::Drawing::Point(1101, 86);
			this->labAV2var->Name = L"labAV2var";
			this->labAV2var->Size = System::Drawing::Size(0, 25);
			this->labAV2var->TabIndex = 14;
			// 
			// labAV3
			// 
			this->labAV3->AutoSize = true;
			this->labAV3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV3->Location = System::Drawing::Point(810, 145);
			this->labAV3->Name = L"labAV3";
			this->labAV3->Size = System::Drawing::Size(231, 25);
			this->labAV3->TabIndex = 5;
			this->labAV3->Text = L"“Œ  Ã≈∆ƒ” ‘¿«» 1-2";
			// 
			// labAV3var
			// 
			this->labAV3var->AutoSize = true;
			this->labAV3var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAV3var->Location = System::Drawing::Point(1101, 111);
			this->labAV3var->Name = L"labAV3var";
			this->labAV3var->Size = System::Drawing::Size(0, 25);
			this->labAV3var->TabIndex = 15;
			// 
			// labAC12
			// 
			this->labAC12->AutoSize = true;
			this->labAC12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC12->Location = System::Drawing::Point(810, 61);
			this->labAC12->Name = L"labAC12";
			this->labAC12->Size = System::Drawing::Size(228, 25);
			this->labAC12->TabIndex = 6;
			this->labAC12->Text = L"Õ¿œ–≈∆≈Õ»≈ ‘¿«¿ 1";
			// 
			// labAC12var
			// 
			this->labAC12var->AutoSize = true;
			this->labAC12var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC12var->Location = System::Drawing::Point(1101, 145);
			this->labAC12var->Name = L"labAC12var";
			this->labAC12var->Size = System::Drawing::Size(0, 25);
			this->labAC12var->TabIndex = 16;
			// 
			// labAC23
			// 
			this->labAC23->AutoSize = true;
			this->labAC23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC23->Location = System::Drawing::Point(810, 170);
			this->labAC23->Name = L"labAC23";
			this->labAC23->Size = System::Drawing::Size(231, 25);
			this->labAC23->TabIndex = 7;
			this->labAC23->Text = L"“Œ  Ã≈∆ƒ” ‘¿«» 2-3";
			// 
			// labAC23var
			// 
			this->labAC23var->AutoSize = true;
			this->labAC23var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC23var->Location = System::Drawing::Point(1101, 170);
			this->labAC23var->Name = L"labAC23var";
			this->labAC23var->Size = System::Drawing::Size(0, 25);
			this->labAC23var->TabIndex = 17;
			// 
			// labAC31
			// 
			this->labAC31->AutoSize = true;
			this->labAC31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC31->Location = System::Drawing::Point(810, 195);
			this->labAC31->Name = L"labAC31";
			this->labAC31->Size = System::Drawing::Size(231, 25);
			this->labAC31->TabIndex = 8;
			this->labAC31->Text = L"“Œ  Ã≈∆ƒ” ‘¿«» 3-1";
			// 
			// labAC31var
			// 
			this->labAC31var->AutoSize = true;
			this->labAC31var->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAC31var->Location = System::Drawing::Point(1101, 191);
			this->labAC31var->Name = L"labAC31var";
			this->labAC31var->Size = System::Drawing::Size(0, 25);
			this->labAC31var->TabIndex = 18;
			// 
			// labAComb
			// 
			this->labAComb->AutoSize = true;
			this->labAComb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAComb->Location = System::Drawing::Point(810, 277);
			this->labAComb->Name = L"labAComb";
			this->labAComb->Size = System::Drawing::Size(265, 25);
			this->labAComb->TabIndex = 9;
			this->labAComb->Text = L" ŒÃ¡»Õ»–¿Õ¿ ÃŒŸÕŒ—“";
			// 
			// labACombvar
			// 
			this->labACombvar->AutoSize = true;
			this->labACombvar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labACombvar->Location = System::Drawing::Point(1101, 277);
			this->labACombvar->Name = L"labACombvar";
			this->labACombvar->Size = System::Drawing::Size(0, 25);
			this->labACombvar->TabIndex = 19;
			// 
			// labAAct
			// 
			this->labAAct->AutoSize = true;
			this->labAAct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAAct->Location = System::Drawing::Point(810, 331);
			this->labAAct->Name = L"labAAct";
			this->labAAct->Size = System::Drawing::Size(207, 25);
			this->labAAct->TabIndex = 10;
			this->labAAct->Text = L"¿ “»¬Õ¿ ÃŒŸÕŒ—“";
			// 
			// labAActvar
			// 
			this->labAActvar->AutoSize = true;
			this->labAActvar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAActvar->Location = System::Drawing::Point(1101, 331);
			this->labAActvar->Name = L"labAActvar";
			this->labAActvar->Size = System::Drawing::Size(0, 25);
			this->labAActvar->TabIndex = 20;
			// 
			// labAReact
			// 
			this->labAReact->AutoSize = true;
			this->labAReact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAReact->Location = System::Drawing::Point(810, 372);
			this->labAReact->Name = L"labAReact";
			this->labAReact->Size = System::Drawing::Size(232, 25);
			this->labAReact->TabIndex = 11;
			this->labAReact->Text = L"–≈¿ “»¬Õ¿ ÃŒŸÕŒ—“";
			this->labAReact->Click += gcnew System::EventHandler(this, &DataLogger::labAReact_Click);
			// 
			// labAReactvar
			// 
			this->labAReactvar->AutoSize = true;
			this->labAReactvar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAReactvar->Location = System::Drawing::Point(1101, 372);
			this->labAReactvar->Name = L"labAReactvar";
			this->labAReactvar->Size = System::Drawing::Size(0, 25);
			this->labAReactvar->TabIndex = 21;
			this->labAReactvar->Click += gcnew System::EventHandler(this, &DataLogger::labAReactvar_Click);
			// 
			// labAApp
			// 
			this->labAApp->AutoSize = true;
			this->labAApp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAApp->Location = System::Drawing::Point(810, 426);
			this->labAApp->Name = L"labAApp";
			this->labAApp->Size = System::Drawing::Size(239, 25);
			this->labAApp->TabIndex = 12;
			this->labAApp->Text = L"œ–»¬≈ƒ≈Õ¿ ÃŒŸÕŒ—“";
			this->labAApp->Click += gcnew System::EventHandler(this, &DataLogger::labAApp_Click);
			// 
			// labAAppvar
			// 
			this->labAAppvar->AutoSize = true;
			this->labAAppvar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labAAppvar->Location = System::Drawing::Point(1101, 426);
			this->labAAppvar->Name = L"labAAppvar";
			this->labAAppvar->Size = System::Drawing::Size(0, 25);
			this->labAAppvar->TabIndex = 22;
			this->labAAppvar->Click += gcnew System::EventHandler(this, &DataLogger::labAAppvar_Click);
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
			this->labSN->Text = L"—≈–»≈Õ π Õ¿ “≈À‘≈–¿";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(9, 46);
			this->textBox1->MaxLength = 12;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 30);
			this->textBox1->TabIndex = 24;
			// 
			// labHmodel2
			// 
			this->labHmodel2->AutoSize = true;
			this->labHmodel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labHmodel2->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->labHmodel2->Location = System::Drawing::Point(309, 12);
			this->labHmodel2->Name = L"labHmodel2";
			this->labHmodel2->Size = System::Drawing::Size(0, 25);
			this->labHmodel2->TabIndex = 26;
			// 
			// labHProdNum
			// 
			this->labHProdNum->AutoEllipsis = true;
			this->labHProdNum->AutoSize = true;
			this->labHProdNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labHProdNum->Location = System::Drawing::Point(309, 357);
			this->labHProdNum->Name = L"labHProdNum";
			this->labHProdNum->Size = System::Drawing::Size(112, 25);
			this->labHProdNum->TabIndex = 27;
			this->labHProdNum->Text = L"—≈–»ﬂ π :";
			// 
			// labHProdNum2
			// 
			this->labHProdNum2->AutoSize = true;
			this->labHProdNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labHProdNum2->Location = System::Drawing::Point(309, 382);
			this->labHProdNum2->Name = L"labHProdNum2";
			this->labHProdNum2->Size = System::Drawing::Size(0, 25);
			this->labHProdNum2->TabIndex = 28;
			// 
			// liftMotSL
			// 
			this->liftMotSL->AutoSize = true;
			this->liftMotSL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->liftMotSL->Location = System::Drawing::Point(310, 452);
			this->liftMotSL->Name = L"liftMotSL";
			this->liftMotSL->Size = System::Drawing::Size(0, 25);
			this->liftMotSL->TabIndex = 30;
			// 
			// liftMLogo
			// 
			this->liftMLogo->AutoEllipsis = true;
			this->liftMLogo->AutoSize = true;
			this->liftMLogo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->liftMLogo->Location = System::Drawing::Point(309, 425);
			this->liftMLogo->Name = L"liftMLogo";
			this->liftMLogo->Size = System::Drawing::Size(219, 25);
			this->liftMLogo->TabIndex = 31;
			this->liftMLogo->Text = L"œŒƒ≈ÃÕ¿ ÃŒŸÕŒ—“";
			// 
			// crossTMotLogo
			// 
			this->crossTMotLogo->AutoEllipsis = true;
			this->crossTMotLogo->AutoSize = true;
			this->crossTMotLogo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->crossTMotLogo->Location = System::Drawing::Point(309, 489);
			this->crossTMotLogo->Name = L"crossTMotLogo";
			this->crossTMotLogo->Size = System::Drawing::Size(205, 25);
			this->crossTMotLogo->TabIndex = 34;
			this->crossTMotLogo->Text = L"’ŒƒŒ¬A ÃŒŸÕŒ—“";
			// 
			// crossTMotSL
			// 
			this->crossTMotSL->AutoSize = true;
			this->crossTMotSL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->crossTMotSL->Location = System::Drawing::Point(309, 514);
			this->crossTMotSL->Name = L"crossTMotSL";
			this->crossTMotSL->Size = System::Drawing::Size(0, 25);
			this->crossTMotSL->TabIndex = 33;
			// 
			// TUGAB
			// 
			this->TUGAB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TUGAB.Image")));
			this->TUGAB->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TUGAB.InitialImage")));
			this->TUGAB->Location = System::Drawing::Point(45, 209);
			this->TUGAB->Name = L"TUGAB";
			this->TUGAB->Size = System::Drawing::Size(204, 196);
			this->TUGAB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->TUGAB->TabIndex = 35;
			this->TUGAB->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Aquamarine;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(155, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 37);
			this->button1->TabIndex = 36;
			this->button1->Text = L">>";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DataLogger::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1183, 55);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 81);
			this->button2->TabIndex = 37;
			this->button2->Text = L"√–¿‘» ¿";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DataLogger::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(1183, 142);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 74);
			this->button3->TabIndex = 38;
			this->button3->Text = L"√–¿‘» ¿";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DataLogger::button3_Click);
			// 
			// HeadRoomLabel2
			// 
			this->HeadRoomLabel2->AutoSize = true;
			this->HeadRoomLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HeadRoomLabel2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->HeadRoomLabel2->Location = System::Drawing::Point(310, 46);
			this->HeadRoomLabel2->Name = L"HeadRoomLabel2";
			this->HeadRoomLabel2->Size = System::Drawing::Size(0, 20);
			this->HeadRoomLabel2->TabIndex = 44;
			this->HeadRoomLabel2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// FemLabel1
			// 
			this->FemLabel1->AutoEllipsis = true;
			this->FemLabel1->AutoSize = true;
			this->FemLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FemLabel1->Location = System::Drawing::Point(437, 357);
			this->FemLabel1->Name = L"FemLabel1";
			this->FemLabel1->Size = System::Drawing::Size(106, 25);
			this->FemLabel1->TabIndex = 45;
			this->FemLabel1->Text = L"FEM/ISO :";
			// 
			// FemLabel2
			// 
			this->FemLabel2->AutoSize = true;
			this->FemLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FemLabel2->Location = System::Drawing::Point(437, 382);
			this->FemLabel2->Name = L"FemLabel2";
			this->FemLabel2->Size = System::Drawing::Size(0, 25);
			this->FemLabel2->TabIndex = 46;
			// 
			// HOISTPIC
			// 
			this->HOISTPIC->Location = System::Drawing::Point(287, 86);
			this->HOISTPIC->Name = L"HOISTPIC";
			this->HOISTPIC->Size = System::Drawing::Size(355, 249);
			this->HOISTPIC->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->HOISTPIC->TabIndex = 47;
			this->HOISTPIC->TabStop = false;
			// 
			// DataLogger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1407, 768);
			this->Controls->Add(this->FemLabel2);
			this->Controls->Add(this->FemLabel1);
			this->Controls->Add(this->HeadRoomLabel2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TUGAB);
			this->Controls->Add(this->crossTMotLogo);
			this->Controls->Add(this->crossTMotSL);
			this->Controls->Add(this->liftMLogo);
			this->Controls->Add(this->liftMotSL);
			this->Controls->Add(this->labHProdNum2);
			this->Controls->Add(this->labHProdNum);
			this->Controls->Add(this->labHmodel2);
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
			this->Controls->Add(this->HOISTPIC);
			this->Name = L"DataLogger";
			this->RightToLeftLayout = true;
			this->Text = L"ƒ»œÀŒÃÕ¿ –¿¡Œ“¿ Õ¿ –”Ã≈Õ ÷ŒÀŒ¬ - “” √¿¡–Œ¬Œ";
			this->Load += gcnew System::EventHandler(this, &DataLogger::DataLogger_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TUGAB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HOISTPIC))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		} //void InitializeComponent(void) finish here

		#pragma endregion
		private: System::Void btnSTOP_Click(System::Object^ sender, System::EventArgs^ e) 
		{

			GetTheTrends();

		//voltageLine12AVG = 1.12;
		//voltageLine23AVG = 1.12;
		//voltageLine31AVG = 1.12;
		//currentLine1AVG = 1.12;
		//currentLine2AVG = 1.12;
		//currentLine3AVG = 1.12;
		//combinatedPowerAVG = 1.12;
		//activePowerAVG = 1.12;
		//reactivePowerAVG = 1.12;
		//apparentPowerAVG = 1.12;


		this->labAV1var->Text = voltageLine12AVG.ToString("0.00") + " V";
		this->labAV2var->Text = voltageLine23AVG.ToString("0.00") + " V";
		this->labAV3var->Text = voltageLine31AVG.ToString("0.00") + " V";

		this->labAC12var->Text = currentLine1AVG.ToString("0.00") + " A";
		this->labAC23var->Text = currentLine2AVG.ToString("0.00") + " A";
		this->labAC31var->Text = currentLine3AVG.ToString("0.00") + " A";

		this->labACombvar->Text = combinatedPowerAVG.ToString("0.00") + " kW";

		this->labAActvar->Text = activePowerAVG.ToString("0.00") + " kW";

		this->labAReactvar->Text = reactivePowerAVG.ToString("0.00") + " kW";

		this->labAAppvar->Text = apparentPowerAVG.ToString("0.00") + " kW";

		MessageBox::Show("Œ·‡·ÓÚÍ‡Ú‡ Ì‡ ËÌÙÓÏ‡ˆËˇ Â ÛÒÔÂ¯Ì‡!");
		/*
		AVG Voltage 1-2 :398.60V
		AVG Voltage 2-3 :391.55V
		AVG Voltage 3-1 :393.09V
		AVG Current Line 1 :16.99A
		AVG Current Line 2 :16.57A
		AVG Current Line 3 :16.24A
		AVG Combinated Power :0.53W
		AVG Active Power :7954.18W
		AVG Apparent Power :11282.03W
		*/
		}
		private: System::Void DataLogger_Load(System::Object^ sender, System::EventArgs^ e) 
		{
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			GetVolt();
		}
		private: System::Void labAReact_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		}
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		}
		private: System::Void labAAppvar_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		}
		private: System::Void labAReactvar_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		}
		private: System::Void labAApp_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		}
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			System::String^ buffer = this->textBox1->Text;
			std::string input = msclr::interop::marshal_as<std::string>(buffer);
			//std::cout << input << std::endl;
			isFound = false;
			for (int i = 0; i < Hoists.size(); i++)
			{
				std::cout << Hoists[i].HoistNO << std::endl;
				System::String^ hoistN1 = gcnew String(Hoists[i].HoistNO.c_str());
				std::string hoistN = msclr::interop::marshal_as<std::string>(hoistN1);
				if (hoistN == input) {
					System::String^ sysString;
					std::string buff1, buff2;
					sysString = gcnew String(Hoists[i].HoistSalesDescription.c_str());
					this->labHmodel2->Text = sysString;
					sysString = gcnew String(Hoists[i].SERIE.c_str());
					this->labHProdNum2->Text = sysString;
					sysString = gcnew String(Hoists[i].FEM.c_str());
					this->FemLabel2->Text = sysString;
					buff1 = Hoists[i].LMODEL2 + " " + Hoists[i].L1stkW + "/" + Hoists[i].L2ndkW + " kW";
					sysString = gcnew String(buff1.c_str());
					this->liftMotSL->Text = sysString;
					if (stoi(Hoists[i].CTpcs) > 0) 
					{
						buff1 = Hoists[i].CTpcs + " x " + Hoists[i].CMODEL2 + " " + Hoists[i].C1stkW + "/" + Hoists[i].C2ndkW + " kW";
						this->crossTMotLogo->Enabled = true;
					}
					else 
					{
						buff1 = "";
						this->crossTMotLogo->Enabled = false;
					}
					sysString = gcnew String(buff1.c_str());
					this->crossTMotSL->Text = sysString;
					buff1 = "";
					if (Hoists[i].TYPE == "FootMounted") {
						buff1 = "—“¿÷»ŒÕ¿–≈Õ";
						this->HOISTPIC->ImageLocation = "C:\\Users\\rtsol\\source\\repos\\rumentsolov\\DataLoggerApp\\foot.jpg";
					}
					else if (Hoists[i].TYPE == "NormalHeadroom") {
						buff1 = "ÕŒ–Ã¿ÀÕ¿ —“–Œ»“≈ÀÕ¿ ¬»—Œ◊»Õ¿";
						this->HOISTPIC->ImageLocation = "C:\\Users\\rtsol\\source\\repos\\rumentsolov\\DataLoggerApp\\nhr.jpg";
					}
					else if (Hoists[i].TYPE == "LowHeadroom") {
						buff1 = "Õ»— ¿ —“–Œ»“≈ÀÕ¿ ¬»—Œ◊»Õ¿";
						this->HOISTPIC->ImageLocation = "C:\\Users\\rtsol\\source\\repos\\rumentsolov\\DataLoggerApp\\lhr.jpg";
					}
					else if (Hoists[i].TYPE == "DoubleGirder") {
						buff1 = "ƒ¬”√–≈ƒŒ¬¿  ŒÀ»◊ ¿";
						this->HOISTPIC->ImageLocation = "C:\\Users\\rtsol\\source\\repos\\rumentsolov\\DataLoggerApp\\double.jpg";
					}
					
					
					sysString = gcnew String(buff1.c_str());
					this->HeadRoomLabel2->Text = sysString;



					isFound = true;
					break;
				}
			}
			if (!isFound)
			{
				MessageBox::Show("ÕÂ Ò˙˘ÂÒÚ‚Û‚‡ ‚ ·‡Á‡Ú‡ ‰‡ÌÌË!");
			}
		}
	private: System::Void btnSTART_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		GetCur();
	}
};
}

#endif 