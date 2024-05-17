#pragma once
#include<math.h>

namespace Pr1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(276, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 106);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(258, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(12, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"х";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(276, 137);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(276, 297);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(276, 335);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(156, 20);
			this->textBox3->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(258, 300);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"y";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(199, 335);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Заокруглити";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(-2, -2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(687, 665);
			this->tabControl1->TabIndex = 7;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(679, 639);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(679, 639);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Умова";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(124, 270);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(366, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Дано сторони трикутника – a, b, c. Знайти значення площі трикутника.";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->pictureBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(679, 639);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Алгоритм";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(199, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(233, 598);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->textBox7);
			this->tabPage4->Controls->Add(this->textBox6);
			this->tabPage4->Controls->Add(this->textBox5);
			this->tabPage4->Controls->Add(this->textBox4);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(679, 639);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Розв\'язання";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(197, 386);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"S";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(197, 187);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"c";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(198, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"b";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(215, 383);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(206, 20);
			this->textBox7->TabIndex = 5;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(215, 128);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(206, 20);
			this->textBox6->TabIndex = 4;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(215, 184);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(206, 20);
			this->textBox5->TabIndex = 3;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(215, 80);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(206, 20);
			this->textBox4->TabIndex = 2;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(198, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"a";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(215, 234);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(206, 119);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(276, 361);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 106);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Очистити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(215, 430);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(206, 119);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Очистити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 658);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"S";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = Double::Parse(textBox1->Text);

		double y = sqrt(Math::Abs(x - 1)) + Math::Sin(x);

		textBox2->Text = y.ToString();

		int roundedY = (int)Math::Ceiling(y);
		textBox3->Text = roundedY.ToString();
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double a = Double::Parse(textBox4->Text);
	double b = Double::Parse(textBox5->Text);
	double c = Double::Parse(textBox6->Text);

	double p = (a + b + c) / 2;

	double area = Math::Sqrt(p * (p - a) * (p - b) * (p - c));

	textBox7->Text = area.ToString();
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
}
};
}