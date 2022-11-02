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
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

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
	}
	};
}
