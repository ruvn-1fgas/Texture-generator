#pragma once
#include "Noise.h"
#include <ctime>

namespace Course {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Security;
	using namespace System::Text;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma region declaring objects 
	private: System::Windows::Forms::PictureBox^ imgBox;
	private: System::Windows::Forms::Button^ genBtn;
	protected:
	protected:
	private: System::Windows::Forms::Label^ LastImgLabel;
	private: System::Windows::Forms::TextBox^ widthTextBox;
	private: System::Windows::Forms::Label^ WidthLabel;
	private: System::Windows::Forms::TextBox^ heightTextBox;
	private: System::Windows::Forms::Label^ HeightLabel;
	public: System::Windows::Forms::ToolTip^ errorTip;
	private:
	private: System::Windows::Forms::ComboBox^ typeList;
	public:
	public:
	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ OctavesTrack;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TrackBar^ PersTrack;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ imgCountTextBox;
	private: System::Windows::Forms::CheckBox^ GenAndSave;
	private: System::Windows::Forms::Button^ folderBtn;
	private: System::Windows::Forms::FolderBrowserDialog^ folderDialog;
	private: System::Windows::Forms::Button^ saveBtn;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ folderLabel;
	private: System::Windows::Forms::Label^ yMult;
	private: System::Windows::Forms::TrackBar^ yMultTrack;
	private: System::Windows::Forms::Label^ xMult;
	private: System::Windows::Forms::TrackBar^ xMultTrack;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ seedBox;

	private:
	private: System::ComponentModel::IContainer^ components;
	private:
#pragma endregion declaring objects

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->imgBox = (gcnew System::Windows::Forms::PictureBox());
			this->genBtn = (gcnew System::Windows::Forms::Button());
			this->LastImgLabel = (gcnew System::Windows::Forms::Label());
			this->widthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->WidthLabel = (gcnew System::Windows::Forms::Label());
			this->heightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->HeightLabel = (gcnew System::Windows::Forms::Label());
			this->errorTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->imgCountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->seedBox = (gcnew System::Windows::Forms::TextBox());
			this->typeList = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->OctavesTrack = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PersTrack = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->GenAndSave = (gcnew System::Windows::Forms::CheckBox());
			this->folderBtn = (gcnew System::Windows::Forms::Button());
			this->folderDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->folderLabel = (gcnew System::Windows::Forms::Label());
			this->yMult = (gcnew System::Windows::Forms::Label());
			this->yMultTrack = (gcnew System::Windows::Forms::TrackBar());
			this->xMult = (gcnew System::Windows::Forms::Label());
			this->xMultTrack = (gcnew System::Windows::Forms::TrackBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OctavesTrack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PersTrack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yMultTrack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xMultTrack))->BeginInit();
			this->SuspendLayout();
			// 
			// imgBox
			// 
			this->imgBox->BackColor = System::Drawing::SystemColors::Control;
			this->imgBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->imgBox->Location = System::Drawing::Point(30, 30);
			this->imgBox->Name = L"imgBox";
			this->imgBox->Size = System::Drawing::Size(512, 512);
			this->imgBox->TabIndex = 0;
			this->imgBox->TabStop = false;
			this->imgBox->WaitOnLoad = true;
			// 
			// genBtn
			// 
			this->genBtn->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genBtn->Location = System::Drawing::Point(562, 350);
			this->genBtn->Name = L"genBtn";
			this->genBtn->Size = System::Drawing::Size(158, 35);
			this->genBtn->TabIndex = 1;
			this->genBtn->Text = L"Generate";
			this->genBtn->UseVisualStyleBackColor = true;
			this->genBtn->Click += gcnew System::EventHandler(this, &MyForm::genBtn_Click);
			// 
			// LastImgLabel
			// 
			this->LastImgLabel->AutoSize = true;
			this->LastImgLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastImgLabel->Location = System::Drawing::Point(245, 9);
			this->LastImgLabel->Name = L"LastImgLabel";
			this->LastImgLabel->Size = System::Drawing::Size(86, 18);
			this->LastImgLabel->TabIndex = 2;
			this->LastImgLabel->Text = L"Last image";
			// 
			// widthTextBox
			// 
			this->widthTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->widthTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->widthTextBox->Location = System::Drawing::Point(562, 31);
			this->widthTextBox->MaxLength = 4;
			this->widthTextBox->Name = L"widthTextBox";
			this->widthTextBox->Size = System::Drawing::Size(121, 26);
			this->widthTextBox->TabIndex = 4;
			this->widthTextBox->Text = L"512";
			this->errorTip->SetToolTip(this->widthTextBox, L"You must enter a valid input");
			this->widthTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::WidthTextBox_TextChanged);
			// 
			// WidthLabel
			// 
			this->WidthLabel->AutoSize = true;
			this->WidthLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WidthLabel->Location = System::Drawing::Point(559, 10);
			this->WidthLabel->Name = L"WidthLabel";
			this->WidthLabel->Size = System::Drawing::Size(48, 18);
			this->WidthLabel->TabIndex = 5;
			this->WidthLabel->Text = L"Width";
			// 
			// heightTextBox
			// 
			this->heightTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->heightTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->heightTextBox->Location = System::Drawing::Point(723, 31);
			this->heightTextBox->MaxLength = 4;
			this->heightTextBox->Name = L"heightTextBox";
			this->heightTextBox->Size = System::Drawing::Size(121, 26);
			this->heightTextBox->TabIndex = 6;
			this->heightTextBox->Text = L"512";
			this->errorTip->SetToolTip(this->heightTextBox, L"You must enter a valid input");
			this->heightTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::HeightTextBox_TextChanged);
			// 
			// HeightLabel
			// 
			this->HeightLabel->AutoSize = true;
			this->HeightLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HeightLabel->Location = System::Drawing::Point(720, 10);
			this->HeightLabel->Name = L"HeightLabel";
			this->HeightLabel->Size = System::Drawing::Size(53, 18);
			this->HeightLabel->TabIndex = 7;
			this->HeightLabel->Text = L"Height";
			// 
			// errorTip
			// 
			this->errorTip->Active = false;
			this->errorTip->AutomaticDelay = 0;
			this->errorTip->AutoPopDelay = 0;
			this->errorTip->InitialDelay = 0;
			this->errorTip->ReshowDelay = 0;
			this->errorTip->ShowAlways = true;
			this->errorTip->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Error;
			this->errorTip->ToolTipTitle = L"Error";
			// 
			// imgCountTextBox
			// 
			this->imgCountTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->imgCountTextBox->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->imgCountTextBox->Location = System::Drawing::Point(723, 101);
			this->imgCountTextBox->MaxLength = 3;
			this->imgCountTextBox->Name = L"imgCountTextBox";
			this->imgCountTextBox->Size = System::Drawing::Size(121, 26);
			this->imgCountTextBox->TabIndex = 14;
			this->imgCountTextBox->Text = L"1";
			this->errorTip->SetToolTip(this->imgCountTextBox, L"You must enter a valid input");
			this->imgCountTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::imgCountTextBox_TextChanged);
			// 
			// seedBox
			// 
			this->seedBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->seedBox->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seedBox->Location = System::Drawing::Point(562, 101);
			this->seedBox->MaxLength = 6;
			this->seedBox->Name = L"seedBox";
			this->seedBox->Size = System::Drawing::Size(121, 26);
			this->seedBox->TabIndex = 25;
			this->seedBox->Text = L"rand";
			this->errorTip->SetToolTip(this->seedBox, L"You must enter a valid input");
			// 
			// typeList
			// 
			this->typeList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->typeList->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->typeList->FormattingEnabled = true;
			this->typeList->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Cloud", L"Wood", L"Khaki", L"Malachite" });
			this->typeList->Location = System::Drawing::Point(562, 297);
			this->typeList->Name = L"typeList";
			this->typeList->Size = System::Drawing::Size(121, 22);
			this->typeList->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(559, 276);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 18);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Texture type";
			// 
			// OctavesTrack
			// 
			this->OctavesTrack->Location = System::Drawing::Point(562, 167);
			this->OctavesTrack->Minimum = 1;
			this->OctavesTrack->Name = L"OctavesTrack";
			this->OctavesTrack->Size = System::Drawing::Size(158, 45);
			this->OctavesTrack->TabIndex = 10;
			this->OctavesTrack->Value = 1;
			this->OctavesTrack->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::OctavesTrack_MouseUp);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(559, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 18);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Octaves";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(559, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 18);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Persistence";
			// 
			// PersTrack
			// 
			this->PersTrack->Location = System::Drawing::Point(562, 227);
			this->PersTrack->Minimum = 1;
			this->PersTrack->Name = L"PersTrack";
			this->PersTrack->Size = System::Drawing::Size(158, 45);
			this->PersTrack->TabIndex = 12;
			this->PersTrack->Value = 1;
			this->PersTrack->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::OctavesTrack_MouseUp);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(720, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 18);
			this->label4->TabIndex = 15;
			this->label4->Text = L"ImgCount";
			// 
			// GenAndSave
			// 
			this->GenAndSave->AutoSize = true;
			this->GenAndSave->Location = System::Drawing::Point(726, 361);
			this->GenAndSave->Name = L"GenAndSave";
			this->GenAndSave->Size = System::Drawing::Size(119, 17);
			this->GenAndSave->TabIndex = 16;
			this->GenAndSave->Text = L"Save on generation";
			this->GenAndSave->UseVisualStyleBackColor = true;
			// 
			// folderBtn
			// 
			this->folderBtn->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->folderBtn->Location = System::Drawing::Point(562, 404);
			this->folderBtn->Name = L"folderBtn";
			this->folderBtn->Size = System::Drawing::Size(158, 59);
			this->folderBtn->TabIndex = 17;
			this->folderBtn->Text = L"Choose the destination folder";
			this->folderBtn->UseVisualStyleBackColor = true;
			this->folderBtn->Click += gcnew System::EventHandler(this, &MyForm::folderBtn_Click);
			// 
			// saveBtn
			// 
			this->saveBtn->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saveBtn->Location = System::Drawing::Point(723, 416);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(158, 35);
			this->saveBtn->TabIndex = 18;
			this->saveBtn->Text = L"Save current img";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &MyForm::saveBtn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(559, 480);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 18);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Folder:";
			// 
			// folderLabel
			// 
			this->folderLabel->AutoSize = true;
			this->folderLabel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->folderLabel->Location = System::Drawing::Point(561, 508);
			this->folderLabel->Name = L"folderLabel";
			this->folderLabel->Size = System::Drawing::Size(63, 18);
			this->folderLabel->TabIndex = 20;
			this->folderLabel->Text = L"src/gen/";
			// 
			// yMult
			// 
			this->yMult->AccessibleDescription = L"";
			this->yMult->AutoSize = true;
			this->yMult->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yMult->Location = System::Drawing::Point(723, 206);
			this->yMult->Name = L"yMult";
			this->yMult->Size = System::Drawing::Size(47, 18);
			this->yMult->TabIndex = 24;
			this->yMult->Text = L"y mult";
			// 
			// yMultTrack
			// 
			this->yMultTrack->Location = System::Drawing::Point(723, 227);
			this->yMultTrack->Minimum = 1;
			this->yMultTrack->Name = L"yMultTrack";
			this->yMultTrack->Size = System::Drawing::Size(158, 45);
			this->yMultTrack->TabIndex = 23;
			this->yMultTrack->Value = 1;
			this->yMultTrack->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::OctavesTrack_MouseUp);
			// 
			// xMult
			// 
			this->xMult->AutoSize = true;
			this->xMult->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xMult->Location = System::Drawing::Point(723, 146);
			this->xMult->Name = L"xMult";
			this->xMult->Size = System::Drawing::Size(47, 18);
			this->xMult->TabIndex = 22;
			this->xMult->Text = L"x mult";
			// 
			// xMultTrack
			// 
			this->xMultTrack->Location = System::Drawing::Point(723, 167);
			this->xMultTrack->Minimum = 1;
			this->xMultTrack->Name = L"xMultTrack";
			this->xMultTrack->Size = System::Drawing::Size(158, 45);
			this->xMultTrack->TabIndex = 21;
			this->xMultTrack->Value = 1;
			this->xMultTrack->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::OctavesTrack_MouseUp);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(559, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 18);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Seed";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(894, 563);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->seedBox);
			this->Controls->Add(this->yMult);
			this->Controls->Add(this->yMultTrack);
			this->Controls->Add(this->xMult);
			this->Controls->Add(this->xMultTrack);
			this->Controls->Add(this->folderLabel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->saveBtn);
			this->Controls->Add(this->folderBtn);
			this->Controls->Add(this->GenAndSave);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->imgCountTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PersTrack);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->OctavesTrack);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->typeList);
			this->Controls->Add(this->HeightLabel);
			this->Controls->Add(this->heightTextBox);
			this->Controls->Add(this->WidthLabel);
			this->Controls->Add(this->widthTextBox);
			this->Controls->Add(this->LastImgLabel);
			this->Controls->Add(this->genBtn);
			this->Controls->Add(this->imgBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"Texture generator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OctavesTrack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PersTrack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yMultTrack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xMultTrack))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*
		 *TODO : Добавить меню, в меню добавить FAQ
		 *TODO : Добавить больше текстур
		 *
		 */





	Bitmap^ img;

	void createImg()
	{
		if (isValid(widthTextBox->Text) * isValid(heightTextBox->Text))
		{
			int seed = 0;
			if (seedBox->Text == "rand")
				seed = rand();
			else
				seed = seedBox->Text->GetHashCode();
			int height = Int32::Parse(heightTextBox->Text);
			int width = Int32::Parse(widthTextBox->Text);
			img = gcnew Bitmap(width, height);
			PerlinNoise pn(seed);
			for (int i = 0; i < height; ++i)
			{
				for (int j = 0; j < width; ++j)
				{
					double x = static_cast<double>(j) / static_cast<double>(width);
					double y = static_cast<double>(i) / static_cast<double>(height);

					x *= xMultTrack->Value;
					y *= yMultTrack->Value;

					int octaves = OctavesTrack->Value;
					double pers = PersTrack->Value / 10.0;
					double n;
					switch (typeList->SelectedIndex)
					{
					case 0: n = pn.Cloud(x, y, octaves, pers); break;
					case 1: n = pn.Wood(x, y, octaves, pers); break;
					case 2: n = pn.Khaki(x, y, octaves, pers); break;
					case 3: n = pn.Malachite(x, y, octaves, pers); break;
					default: n = pn.idk(x, y, octaves, pers);
					}
					int initial_col = static_cast<int>(floor(255 * n));
					auto vecRgb = pn.getColor(typeList->SelectedIndex, initial_col);
					int r = vecRgb[0];
					int g = vecRgb[1];
					int b = vecRgb[2];
					r = r >= 256 ? 255 : r < 0 ? 0 : r;
					g = g >= 256 ? 255 : g < 0 ? 0 : g;
					b = b >= 256 ? 255 : b < 0 ? 0 : b;
					
					Color col = Color::FromArgb(r, g, b);
					img->SetPixel(j, i, col);

				}
			}

			Bitmap^ resized = gcnew Bitmap(img, 512, 512);
			imgBox->Image = resized;
			imgBox->Image->Tag = "";
		}
	}

private: System::Void genBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(isValid(widthTextBox->Text) * isValid(heightTextBox->Text) * isValid(imgCountTextBox->Text)))
	{
		MessageBox::Show("You must enter a valid inputs", "Error Detected in Inputs", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	int countFiles = 0;
	if (GenAndSave->Checked)
		countFiles = countFileName();
	int height = Int32::Parse(heightTextBox->Text);
	int width = Int32::Parse(widthTextBox->Text);
	int count = GenAndSave->Checked ? Int32::Parse(imgCountTextBox->Text) : 1;
	count = Int32::Parse(imgCountTextBox->Text);
	unsigned int start_time = clock();
	for (int k = 0; k < count; k++)
	{
		int seed = 0;
		if (seedBox->Text == "rand")
			seed = rand();
		else
			seed = seedBox->Text->GetHashCode();

		PerlinNoise pn(seed);
		img = gcnew Bitmap(width, height);
		for (int i = 0; i < height; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
				double x = static_cast<double>(j) / static_cast<double>(width);
				double y = static_cast<double>(i) / static_cast<double>(height);

				x *= xMultTrack->Value;
				y *= yMultTrack->Value;

				int octaves = OctavesTrack->Value;
				double pers = PersTrack->Value / 10.0;
				double n;
				switch (typeList->SelectedIndex)
				{
				case 0: n = pn.Cloud(x, y, octaves, pers); break;
				case 1: n = pn.Wood(x, y, octaves, pers); break;
				case 2: n = pn.Khaki(x, y, octaves, pers); break;
				case 3: n = pn.Malachite(x, y, octaves, pers); break;
				default: n = pn.idk(x, y, octaves, pers);
				}
				int initial_col = static_cast<int>(floor(255 * n));

				auto vecRgb = pn.getColor(typeList->SelectedIndex, initial_col);

				int r = vecRgb[0];
				int g = vecRgb[1];
				int b = vecRgb[2];
				r = r >= 256 ? 255 : r < 0 ? 0 : r;
				g = g >= 256 ? 255 : g < 0 ? 0 : g;
				b = b >= 256 ? 255 : b < 0 ? 0 : b;

				Color col = Color::FromArgb(r, g, b);
				img->SetPixel(j, i, col);

			}
		}
		
		if (GenAndSave->Checked)
		{
			saveImg(countFiles);
			countFiles++;
		}

	}
	unsigned int end_time = clock();
	MessageBox::Show((end_time - start_time).ToString());
	Bitmap^ resized = gcnew Bitmap(img, 512, 512);
	imgBox->Image = resized;
	imgBox->Image->Tag = "";
}


Boolean isValid(String^ s)
{
   try
   {
	   int a = Int32::Parse(s);
	   if (a <= 0)
		   return false;
   }
   catch (...)
   {
	   return false;
   }
   return true;
}

private: System::Void WidthTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (!isValid(widthTextBox->Text))
	{
		errorTip->Active = true;
		errorTip->SetToolTip(widthTextBox, "You must enter a valid input");
	}
	else {
		errorTip->Active = false;
	}
}
private: System::Void HeightTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (!isValid(heightTextBox->Text))
	{
		errorTip->Active = true;
		errorTip->SetToolTip(heightTextBox, "You must enter a valid input");
	}
	else
		errorTip->Active = false;
}

private: System::Void imgCountTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!isValid(imgCountTextBox->Text))
	{
		errorTip->Active = true;
		errorTip->SetToolTip(imgCountTextBox, "You must enter a valid input");
	}
	else
		errorTip->Active = false;
}
private: System::Void folderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (folderDialog->ShowDialog() == Windows::Forms::DialogResult::OK)
		folderLabel->Text = folderDialog->SelectedPath;
}
void saveImg(int count)
{
   String^ path = folderDialog->SelectedPath != "" ? folderDialog->SelectedPath + "\\" : folderLabel->Text;
   String^ fileName = typeList->SelectedItem->ToString() + "_" + count.ToString();
   img->Save(path + fileName + ".png");
}

int countFileName()
	   {
		   String^ path = folderDialog->SelectedPath != "" ? folderDialog->SelectedPath + "\\" : folderLabel->Text;
		   array<String^>^ files = IO::Directory::GetFiles(path, "*.png");
		   String^ fileName = typeList->SelectedItem->ToString();
		   int count = 0;
		   for (int i = 0; i < files->Length; i++)
		   {
			   String^ s = IO::Path::GetFileNameWithoutExtension(files[i]);
			   if (s->Contains(fileName))
				   count++;
		   }
		   return count + 1;
	   }

private: System::Void saveBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (imgBox->Image->Tag != "Initial")
	{
		int count = countFileName();
		saveImg(count);
		MessageBox::Show("Saved!");
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->typeList->SelectedItem = this->typeList->Items[0];
	this->imgBox->Image = Image::FromFile(L"src\\img\\InitialImg.png");
	this->imgBox->Image->Tag = "Initial";
	String^ path = IO::Directory::GetCurrentDirectory() + "\\src\\gen\\";
	folderLabel->Text = path;
}



private: System::Void OctavesTrack_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {createImg();}
};
}
