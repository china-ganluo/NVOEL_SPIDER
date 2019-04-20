#pragma once

#include <iostream>
#include<fstream>
#include <string.h>
#include <stdlib.h>
#include<Windows.h>
#include <msclr\marshal_cppstd.h>
namespace novelRulesMAKER {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ suoying;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ novelname;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ zhangjieurl;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ zhangjiename;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ novelleixin;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ novelzhenwen;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ novelwriter;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ novelimg;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ baocun;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ baozhuang;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ mainurl;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ zurl;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ bianma;
	private: System::Windows::Forms::TextBox^ jianjie;

	private: System::Windows::Forms::Label^ label16;



	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->suoying = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->novelname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->zhangjieurl = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->zhangjiename = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->novelleixin = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->novelzhenwen = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->novelwriter = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->novelimg = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->baocun = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->baozhuang = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->mainurl = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->zurl = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->bianma = (gcnew System::Windows::Forms::TextBox());
			this->jianjie = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(967, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 67);
			this->button1->TabIndex = 0;
			this->button1->Text = L"创建";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(967, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 68);
			this->button2->TabIndex = 1;
			this->button2->Text = L"调试";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// suoying
			// 
			this->suoying->Location = System::Drawing::Point(517, 88);
			this->suoying->Name = L"suoying";
			this->suoying->Size = System::Drawing::Size(264, 25);
			this->suoying->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(353, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"索引目录规则";
			// 
			// novelname
			// 
			this->novelname->Location = System::Drawing::Point(517, 137);
			this->novelname->Name = L"novelname";
			this->novelname->Size = System::Drawing::Size(264, 25);
			this->novelname->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(368, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 15);
			this->label3->TabIndex = 7;
			this->label3->Text = L"小说名规则";
			// 
			// zhangjieurl
			// 
			this->zhangjieurl->Location = System::Drawing::Point(517, 182);
			this->zhangjieurl->Name = L"zhangjieurl";
			this->zhangjieurl->Size = System::Drawing::Size(264, 25);
			this->zhangjieurl->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(353, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 15);
			this->label4->TabIndex = 9;
			this->label4->Text = L"小说章节链接规则";
			// 
			// zhangjiename
			// 
			this->zhangjiename->Location = System::Drawing::Point(517, 220);
			this->zhangjiename->Name = L"zhangjiename";
			this->zhangjiename->Size = System::Drawing::Size(264, 25);
			this->zhangjiename->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(368, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 15);
			this->label5->TabIndex = 11;
			this->label5->Text = L"章节名规则";
			// 
			// novelleixin
			// 
			this->novelleixin->Location = System::Drawing::Point(517, 283);
			this->novelleixin->Name = L"novelleixin";
			this->novelleixin->Size = System::Drawing::Size(264, 25);
			this->novelleixin->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(368, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 15);
			this->label6->TabIndex = 13;
			this->label6->Text = L"小说类型规则";
			// 
			// novelzhenwen
			// 
			this->novelzhenwen->Location = System::Drawing::Point(517, 408);
			this->novelzhenwen->Name = L"novelzhenwen";
			this->novelzhenwen->Size = System::Drawing::Size(264, 25);
			this->novelzhenwen->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(368, 418);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 15);
			this->label7->TabIndex = 15;
			this->label7->Text = L"小说正文规则";
			// 
			// novelwriter
			// 
			this->novelwriter->Location = System::Drawing::Point(517, 314);
			this->novelwriter->Name = L"novelwriter";
			this->novelwriter->Size = System::Drawing::Size(264, 25);
			this->novelwriter->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(368, 320);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 15);
			this->label8->TabIndex = 17;
			this->label8->Text = L"小说作者规则";
			// 
			// novelimg
			// 
			this->novelimg->Location = System::Drawing::Point(517, 364);
			this->novelimg->Name = L"novelimg";
			this->novelimg->Size = System::Drawing::Size(264, 25);
			this->novelimg->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(368, 367);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 15);
			this->label9->TabIndex = 19;
			this->label9->Text = L"小说图片规则";
			// 
			// baocun
			// 
			this->baocun->Location = System::Drawing::Point(59, 98);
			this->baocun->Name = L"baocun";
			this->baocun->Size = System::Drawing::Size(144, 25);
			this->baocun->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 64);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 15);
			this->label10->TabIndex = 21;
			this->label10->Text = L"保存名称：";
			// 
			// baozhuang
			// 
			this->baozhuang->AutoSize = true;
			this->baozhuang->Location = System::Drawing::Point(887, 518);
			this->baozhuang->Name = L"baozhuang";
			this->baozhuang->Size = System::Drawing::Size(0, 15);
			this->baozhuang->TabIndex = 22;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(986, 428);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(127, 15);
			this->linkLabel1->TabIndex = 23;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"点击看使用教程哦";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LinkLabel1_LinkClicked);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 192);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 15);
			this->label11->TabIndex = 24;
			this->label11->Text = L"链接网站";
			// 
			// mainurl
			// 
			this->mainurl->Location = System::Drawing::Point(59, 220);
			this->mainurl->Name = L"mainurl";
			this->mainurl->Size = System::Drawing::Size(144, 25);
			this->mainurl->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 291);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 15);
			this->label1->TabIndex = 26;
			this->label1->Text = L"总链接";
			// 
			// zurl
			// 
			this->zurl->Location = System::Drawing::Point(59, 317);
			this->zurl->Name = L"zurl";
			this->zurl->Size = System::Drawing::Size(144, 25);
			this->zurl->TabIndex = 27;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(383, 64);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 15);
			this->label12->TabIndex = 28;
			this->label12->Text = L"起始页：";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(338, 115);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(127, 15);
			this->label13->TabIndex = 29;
			this->label13->Text = L"第二小说信息页：";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(368, 396);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 15);
			this->label14->TabIndex = 30;
			this->label14->Text = L"第三阅读页：";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 386);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(67, 15);
			this->label15->TabIndex = 31;
			this->label15->Text = L"网站编码";
			// 
			// bianma
			// 
			this->bianma->Location = System::Drawing::Point(53, 428);
			this->bianma->Name = L"bianma";
			this->bianma->Size = System::Drawing::Size(144, 25);
			this->bianma->TabIndex = 32;
			this->bianma->TextChanged += gcnew System::EventHandler(this, &MyForm::Bianma_TextChanged);
			// 
			// jianjie
			// 
			this->jianjie->Location = System::Drawing::Point(517, 251);
			this->jianjie->Name = L"jianjie";
			this->jianjie->Size = System::Drawing::Size(264, 25);
			this->jianjie->TabIndex = 33;
			this->jianjie->TextChanged += gcnew System::EventHandler(this, &MyForm::Jianjie_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(383, 254);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(67, 15);
			this->label16->TabIndex = 34;
			this->label16->Text = L"小说简介";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1157, 551);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->jianjie);
			this->Controls->Add(this->bianma);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->zurl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->mainurl);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->baozhuang);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->baocun);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->novelimg);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->novelwriter);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->novelzhenwen);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->novelleixin);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->zhangjiename);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->zhangjieurl);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->novelname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->suoying);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"甘罗小说规则创建器";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ suoyin = this->suoying->Text;
	String^ noveldename = this->novelname->Text;
	String^ zhangjiedeurl = this->zhangjieurl->Text;
	String^ zhangjiedename = this->zhangjiename->Text;
	String^ noveldeleixin = this->novelleixin->Text;
	String^ noveldezuozhe = this->novelwriter->Text;
	String^ noveldezhenwen = this->novelzhenwen->Text;
	String^ noveldeimgurl = this->novelimg->Text;
	String^ baocunming = this->baocun->Text;
	std::string jsname = msclr::interop::marshal_as<std::string>(baocunming);
	std::string jsonname = jsname + ".ganro";
	std::string mainbodyurl = msclr::interop::marshal_as<std::string>(this->mainurl->Text);//mianbodyurl 小说起始链接
	std::string novellname = msclr::interop::marshal_as<std::string>(noveldename);// novellname 小说名
	std::string suoyinm = msclr::interop::marshal_as<std::string>(suoyin);//suoyinm 索引
	std::string zhangjieurlm = msclr::interop::marshal_as<std::string>(zhangjiedeurl);//zhangjieurlm 章节的url
	std::string zhangjienamem = msclr::interop::marshal_as<std::string>(zhangjiedename);//zhangjienamem 章节名
	std::string novelleixinm = msclr::interop::marshal_as<std::string>(noveldeleixin);//novelleixinm 小说的类型
	std::string novelzuozhem = msclr::interop::marshal_as<std::string>(noveldezuozhe);//novelzuozhem 小说的作者
	std::string novelzhenwenm = msclr::interop::marshal_as<std::string>(noveldezhenwen);//novelzhenwenm 小说的正文
	std::string novelimgurlm = msclr::interop::marshal_as<std::string>(noveldeimgurl);//novelimgurlm 小说的图片
	std::string zzurl = msclr::interop::marshal_as<std::string>(this->zurl->Text);
	std::string mama = msclr::interop::marshal_as<std::string>(this->bianma->Text);
	std::string jianjie = msclr::interop::marshal_as<std::string>(this->jianjie->Text);
	ofstream out;
	out.open(jsonname);
	out << "<mainurl>" + mainbodyurl + "</mainurl>"<<endl;
	out << "<novelname>"+novellname+"</novelname>"<<endl;
	out << "<suoyin>" + suoyinm + "</suoyin>" << endl;
	out << "<zhangjieurl>" + zhangjieurlm + "</zhangjieurl>" << endl;
	out << "<hangjiename>" + zhangjienamem + "</hangjiename>" << endl;
	out << "<leixin>" + novelleixinm + "</leixin>" << endl;
	out << "<zuozhe>" + novelzuozhem + "</zuozhe>" << endl;
	out << "<zhenwen>" + novelzhenwenm + "</zhenwen>" << endl;
	out << "<gg>" + novelimgurlm + "</gg>" << endl;
	out << "<zz>" + zzurl + "</zz>" << endl;
	out << "<bianma>" + mama + "</bianma>" << endl;
	out << "<jianjie>" + jianjie + "</jianjie>" << endl;
	out.close();
	this->baozhuang->Text = "文件名:" + baocunming + ".ganro 保存成功";
}
public: System::Void RichTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LinkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->linkLabel1->LinkVisited = true;
	system("start http://baidu.com");
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ suoyin = this->suoying->Text;
	String^ noveldename = this->novelname->Text;
	String^ zhangjiedeurl = this->zhangjieurl->Text;
	String^ zhangjiedename = this->zhangjiename->Text;
	String^ noveldeleixin = this->novelleixin->Text;
	String^ noveldezuozhe = this->novelwriter->Text;
	String^ noveldezhenwen = this->novelzhenwen->Text;
	String^ noveldeimgurl = this->novelimg->Text;
	String^ baocunming = this->baocun->Text;
	std::string jsname = msclr::interop::marshal_as<std::string>(baocunming);
	std::string jsonname = jsname + ".ganro";
	std::string mainbodyurl = msclr::interop::marshal_as<std::string>(this->mainurl->Text);//mianbodyurl 小说起始链接
	std::string novellname = msclr::interop::marshal_as<std::string>(noveldename);// novellname 小说名
	std::string suoyinm = msclr::interop::marshal_as<std::string>(suoyin);//suoyinm 索引
	std::string zhangjieurlm = msclr::interop::marshal_as<std::string>(zhangjiedeurl);//zhangjieurlm 章节的url
	std::string zhangjienamem = msclr::interop::marshal_as<std::string>(zhangjiedename);//zhangjienamem 章节名
	std::string novelleixinm = msclr::interop::marshal_as<std::string>(noveldeleixin);//novelleixinm 小说的类型
	std::string novelzuozhem = msclr::interop::marshal_as<std::string>(noveldezuozhe);//novelzuozhem 小说的作者
	std::string novelzhenwenm = msclr::interop::marshal_as<std::string>(noveldezhenwen);//novelzhenwenm 小说的正文
	std::string novelimgurlm = msclr::interop::marshal_as<std::string>(noveldeimgurl);//novelimgurlm 小说的图片
	std::string zzurl = msclr::interop::marshal_as<std::string>(this->zurl->Text);
	std::string mama = msclr::interop::marshal_as<std::string>(this->bianma->Text);
	std::string jianjie= msclr::interop::marshal_as<std::string>(this->jianjie->Text);
	ofstream out;
	out.open(jsonname);
	out << "<mainurl>" + mainbodyurl + "</mainurl>" << endl;
	out << "<novelname>" + novellname + "</novelname>" << endl;
	out << "<suoyin>" + suoyinm + "</suoyin>" << endl;
	out << "<zhangjieurl>" + zhangjieurlm + "</zhangjieurl>" << endl;
	out << "<hangjiename>" + zhangjienamem + "</hangjiename>" << endl;
	out << "<leixin>" + novelleixinm + "</leixin>" << endl;
	out << "<zuozhe>" + novelzuozhem + "</zuozhe>" << endl;
	out << "<zhenwen>" + novelzhenwenm + "</zhenwen>" << endl;
	out << "<gg>" + novelimgurlm + "</gg>" << endl;
	out << "<zz>" + zzurl + "</zz>" << endl;
	out << "<bianma>" + mama + "</bianma>" << endl;
	out << "<jianjie>" + jianjie + "</jianjie>" << endl;
	out.close();
	this->baozhuang->Text = "文件名:" + baocunming + ".ganro 保存成功";
	system("NVOELMAKETEST.exe && pause>>nul");
}
private: System::Void Bianma_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Jianjie_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
