#pragma once
#include<msclr/marshal_cppstd.h>
#include<string>
#include <sstream>
#include <fstream>
#include "Equipos.h";


namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Media;
	Equipos equipo;
	int elegir=256;
	


	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	String^ repetidas;
	String^ no_repetidas;
	String^ repetidas_nombre;

	public:

		   String^ no_repetidas_nombre;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtagregarvarias;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtagregar;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ txtbuscarnombre;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtmarcadas;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtfaltantes;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtotales;

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ txtfiltronombre;


	private: System::Windows::Forms::Button^ button9;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txtagregarvarias = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtagregar = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtbuscarnombre = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtmarcadas = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtfaltantes = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtotales = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->txtfiltronombre = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtagregarvarias
			// 
			this->txtagregarvarias->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtagregarvarias->Location = System::Drawing::Point(723, 557);
			this->txtagregarvarias->Multiline = true;
			this->txtagregarvarias->Name = L"txtagregarvarias";
			this->txtagregarvarias->Size = System::Drawing::Size(244, 39);
			this->txtagregarvarias->TabIndex = 58;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(26, 33);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(372, 142);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 57;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(982, 547);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 60);
			this->button3->TabIndex = 56;
			this->button3->Text = L"Agregar \r\nEstampas";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(721, 464);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(318, 80);
			this->label8->TabIndex = 55;
			this->label8->Text = L"Marcado multiple de estampas, ingrese \r\nlos codigos de las estampas en \r\nmayuscul"
				L"as y separados por comas y sin\r\ndejar espacios.";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(957, 404);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 39);
			this->button2->TabIndex = 54;
			this->button2->Text = L"Agregar ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// txtagregar
			// 
			this->txtagregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtagregar->Location = System::Drawing::Point(725, 404);
			this->txtagregar->Multiline = true;
			this->txtagregar->Name = L"txtagregar";
			this->txtagregar->Size = System::Drawing::Size(219, 39);
			this->txtagregar->TabIndex = 53;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(721, 347);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(336, 40);
			this->label7->TabIndex = 52;
			this->label7->Text = L"Marcado de estampas individuales, ingrese \r\nel codigo de la estampa en mayusculas"
				L".";
			// 
			// txtbuscarnombre
			// 
			this->txtbuscarnombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtbuscarnombre->Location = System::Drawing::Point(725, 288);
			this->txtbuscarnombre->Multiline = true;
			this->txtbuscarnombre->Name = L"txtbuscarnombre";
			this->txtbuscarnombre->Size = System::Drawing::Size(188, 38);
			this->txtbuscarnombre->TabIndex = 50;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(721, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(321, 40);
			this->label4->TabIndex = 48;
			this->label4->Text = L"Ingrese el nombre o codigo de la estampa\r\npara buscarla y obtener sus datos";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(928, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 38);
			this->button1->TabIndex = 47;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txtmarcadas
			// 
			this->txtmarcadas->Enabled = false;
			this->txtmarcadas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtmarcadas->Location = System::Drawing::Point(1064, 125);
			this->txtmarcadas->Multiline = true;
			this->txtmarcadas->Name = L"txtmarcadas";
			this->txtmarcadas->Size = System::Drawing::Size(44, 38);
			this->txtmarcadas->TabIndex = 46;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(935, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 20);
			this->label3->TabIndex = 45;
			this->label3->Text = L"Marcadas:";
			// 
			// txtfaltantes
			// 
			this->txtfaltantes->Enabled = false;
			this->txtfaltantes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtfaltantes->Location = System::Drawing::Point(1064, 76);
			this->txtfaltantes->Multiline = true;
			this->txtfaltantes->Name = L"txtfaltantes";
			this->txtfaltantes->Size = System::Drawing::Size(44, 38);
			this->txtfaltantes->TabIndex = 44;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(935, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 20);
			this->label2->TabIndex = 43;
			this->label2->Text = L"Faltantes:";
			// 
			// txtotales
			// 
			this->txtotales->Enabled = false;
			this->txtotales->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtotales->Location = System::Drawing::Point(1064, 26);
			this->txtotales->Multiline = true;
			this->txtotales->Name = L"txtotales";
			this->txtotales->Size = System::Drawing::Size(44, 38);
			this->txtotales->TabIndex = 42;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(935, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Totales:";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(26, 340);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(657, 479);
			this->listBox1->TabIndex = 60;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(26, 272);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 42);
			this->button4->TabIndex = 61;
			this->button4->Text = L"FILTRAR\r\nREPETIDAS";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(289, 220);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(194, 42);
			this->button5->TabIndex = 62;
			this->button5->Text = L"FILTRAR REPETIDAS \r\nPOR CODIGO EQUIPOS";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(143, 272);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 42);
			this->button6->TabIndex = 63;
			this->button6->Text = L"FILTRAR NO\r\nREPETIDAS";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(489, 220);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(194, 42);
			this->button7->TabIndex = 64;
			this->button7->Text = L"FILTRAR NO REPETIDAS \r\nPOR CODIGO EQUIPOS";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// txtfiltronombre
			// 
			this->txtfiltronombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtfiltronombre->Location = System::Drawing::Point(289, 285);
			this->txtfiltronombre->Multiline = true;
			this->txtfiltronombre->Name = L"txtfiltronombre";
			this->txtfiltronombre->Size = System::Drawing::Size(394, 29);
			this->txtfiltronombre->TabIndex = 65;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(723, 658);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(219, 98);
			this->button9->TabIndex = 68;
			this->button9->Text = L"GUARDAR";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkRed;
			this->ClientSize = System::Drawing::Size(1137, 852);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->txtfiltronombre);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->txtagregarvarias);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtagregar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtbuscarnombre);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtmarcadas);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtfaltantes);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtotales);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ALBUM QATAR 2022";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = "album.csv";
		StreamReader^ din = File::OpenText(fileName);
		String^ str = din->ReadLine();

		while (str != nullptr) {
			String^ codequipo = str->Split(',')[1];
			String^ nomequipo = str->Split(',')[0];
			str = din->ReadLine();
			for (int i = 0; i <= str->Split(',')->Length - 1; i++)
			{
				String^ comas = str->Split(',')[i];
				String^ codestampa = codequipo + comas->Split('-')[0];
				String^ nomestampa = comas->Split('-')[1];
				equipo.AddNo(msclr::interop::marshal_as<std::string>(codestampa), msclr::interop::marshal_as<std::string>(nomestampa));
			}
			equipo.AddEq(msclr::interop::marshal_as<std::string>(codequipo), msclr::interop::marshal_as<std::string>(nomequipo));
			str = din->ReadLine();
		}
		int marcadas = equipo.estampas_marcadas();
		int totales = equipo.estampas_totales();
		int faltantes = equipo.estampas_faltantes(totales, marcadas);
		txtotales->Text = gcnew String(totales.ToString());
		txtfaltantes->Text = gcnew String(faltantes.ToString());
		txtmarcadas->Text = gcnew String(marcadas.ToString());

		//equipo.marcar_aumentar("FWC19");
		//equipo.marcar_aumentar("FWC1");
		//equipo.marcar_aumentar("FWC12");
		/*MessageBox::Show(equipo.estampas_totales().ToString());
		MessageBox::Show(equipo.estampas_marcadas().ToString());
		MessageBox::Show(equipo.estampas_faltantes(equipo.estampas_totales(), equipo.estampas_marcadas()).ToString());
		MessageBox::Show(gcnew String(equipo.buscar_estampa("Guillermo Ochoa").c_str()));*/
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(gcnew String(equipo.buscar_estampa(msclr::interop::marshal_as<std::string>(txtbuscarnombre->Text)).c_str()));
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ a = "";
	if (equipo.marcar_aumentar(msclr::interop::marshal_as<std::string>(txtagregar->Text))==true)
	{
		a = "Se marcó y/o aumento la estampa satisfactoriamente";
	}
	else
	{
		a = "No se encontró la estampa";
	}
	int marcadas = equipo.estampas_marcadas();
	int totales = equipo.estampas_totales();
	int faltantes = equipo.estampas_faltantes(totales, marcadas);
	txtfaltantes->Text = gcnew String(faltantes.ToString());
	txtmarcadas->Text = gcnew String(marcadas.ToString());
	MessageBox::Show(a);
	txtagregar->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ estampas = txtagregarvarias->Text;
	String^ mensaje = "No se han encontrado las estampas: ";
	for (int i = 0; i < estampas->Split(',')->Length; i++)
	{
		String^ enviar = estampas->Split(',')[i];
		if (equipo.marcar_aumentar(msclr::interop::marshal_as<std::string>(enviar))==false)
		{
			mensaje += enviar + ",";
		}
		if (mensaje!="No se han encontrado las estampas: ")
		{
			MessageBox::Show(mensaje);
		}		
	}
	txtagregarvarias->Text = "";
	int marcadas = equipo.estampas_marcadas();
	int totales = equipo.estampas_totales();
	int faltantes = equipo.estampas_faltantes(totales, marcadas);
	txtfaltantes->Text = gcnew String(faltantes.ToString());
	txtmarcadas->Text = gcnew String(marcadas.ToString());
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	elegir = 0;
	listBox1->Items->Clear();
	listBox1->Items->Add("CODIGO		NOMBRE		REPETICIONES");
	listBox1->Items->Add("");
	String^ todo;
	for (int i = 1; i <= equipo.cantidad_equipos(); i++)
	{
		todo = gcnew String(equipo.mostrar_repetidas(equipo.contar_estampas_segun_codequipo(equipo.obtener_equipo(i)), equipo.obtener_equipo(i),true).c_str());

		if (todo!="")
		{
			int a = todo->Split(';')->Length-1;
			for (int j = 0; j < a; j++)
			{
				listBox1->Items->Add(todo->Split(';')[j]);
				repetidas += todo->Split(';')[j]+";";
			}
		}		
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		elegir = 2;
		listBox1->Items->Clear();
		listBox1->Items->Add("CODIGO		NOMBRE		REPETICIONES");
		listBox1->Items->Add("");
		String^ todo = gcnew String(equipo.mostrar_repetidas_equipo(equipo.contar_estampas_segun_codequipo(msclr::interop::marshal_as<std::string>(txtfiltronombre->Text)), msclr::interop::marshal_as<std::string>(txtfiltronombre->Text), true).c_str());
		if (todo != "")
		{
			for (int j = 0; j < todo->Split(';')->Length; j++)
			{
				listBox1->Items->Add(todo->Split(';')[j]);
				repetidas_nombre += todo->Split(';')[j] + ";";
			}
		}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	elegir = 1;
	listBox1->Items->Clear();
	listBox1->Items->Add("CODIGO		NOMBRE		REPETICIONES");
	listBox1->Items->Add("");
	String^ todo;
	for (int i = 1; i <= equipo.cantidad_equipos(); i++)
	{
		todo = gcnew String(equipo.mostrar_repetidas(equipo.contar_estampas_segun_codequipo(equipo.obtener_equipo(i)), equipo.obtener_equipo(i), false).c_str());

		if (todo != "")
		{
			int a = todo->Split(';')->Length - 1;
			for (int j = 0; j < a; j++)
			{
				listBox1->Items->Add(todo->Split(';')[j]);
				no_repetidas += todo->Split(';')[j] + ";";
			}
		}
	}
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (txtfiltronombre->Text != "")
	{
		button5->Enabled = true;
		button7->Enabled = true;
	}
	else
	{
		button5->Enabled = false;
		button7->Enabled = false;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	elegir = 3;
	listBox1->Items->Clear();
	listBox1->Items->Add("CODIGO		NOMBRE		REPETICIONES");
	listBox1->Items->Add("");
	String^ todo = gcnew String(equipo.mostrar_repetidas_equipo(equipo.contar_estampas_segun_codequipo(msclr::interop::marshal_as<std::string>(txtfiltronombre->Text)), msclr::interop::marshal_as<std::string>(txtfiltronombre->Text), false).c_str());
	if (todo != "")
	{
		for (int i = 0; i < todo->Split(';')->Length; i++)
		{
			listBox1->Items->Add(todo->Split(';')[i]);
			no_repetidas_nombre += todo->Split(';')[i] + ";";
		}
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	equipo.eliminar();
	String^ fileName = "album_marcado.csv";
	StreamReader^ din = File::OpenText(fileName);
	String^ str = din->ReadLine();

	while (str != nullptr) {
		String^ codequipo = str->Split(',')[1];
		String^ nomequipo = str->Split(',')[0];
		str = din->ReadLine();
		for (int i = 0; i <= str->Split(',')->Length - 1; i++)
		{
			String^ comas = str->Split(',')[i];
			String^ codestampa = codequipo + comas->Split('-')[0];
			String^ nomestampa = comas->Split('-')[1];
			equipo.AddNo(msclr::interop::marshal_as<std::string>(codestampa), msclr::interop::marshal_as<std::string>(nomestampa));
		}
		equipo.AddEq(msclr::interop::marshal_as<std::string>(codequipo), msclr::interop::marshal_as<std::string>(nomequipo));
		str = din->ReadLine();
	}
	int marcadas = equipo.estampas_marcadas();
	int totales = equipo.estampas_totales();
	int faltantes = equipo.estampas_faltantes(totales, marcadas);
	txtotales->Text = gcnew String(totales.ToString());
	txtfaltantes->Text = gcnew String(faltantes.ToString());
	txtmarcadas->Text = gcnew String(marcadas.ToString());
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream myfile;
	myfile.open("album_filtrado.csv");
	myfile << "CODIGO,		NOMBRE		REPETICIONES		MARCADA"<<endl;
	switch (elegir)
	{
		case 0:
			for (int i = 0; i < repetidas->Split(';')->Length-1; i++)
			{
				String^ pedido = repetidas->Split(';')[i];
				string exportar = msclr::interop::marshal_as<std::string>(pedido)+"				true";
				myfile << exportar << endl;
			}
			break;
		case 1:
			for (int i = 0; i < no_repetidas->Split(';')->Length - 1; i++)
			{
				String^ pedido = no_repetidas->Split(';')[i];
				string exportar = msclr::interop::marshal_as<std::string>(pedido)+"				false";
				myfile << exportar << endl;
			}
			break;
		case 2:
			for (int i = 0; i < repetidas_nombre->Split(';')->Length - 1; i++)
			{
				String^ pedido = repetidas_nombre->Split(';')[i];
				string exportar = msclr::interop::marshal_as<std::string>(pedido)+"				true";
				myfile << exportar << endl;
			}
			break;
		case 3:
			for (int i = 0; i < no_repetidas_nombre->Split(';')->Length - 1; i++)
			{
				String^ pedido = no_repetidas_nombre->Split(';')[i];
				string exportar = msclr::interop::marshal_as<std::string>(pedido)+"				false";
				myfile << exportar<<endl;
			}
			break;
	default:
		MessageBox::Show("No se filtro nada");
		break;
	}
}
};
}
