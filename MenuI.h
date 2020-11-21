#pragma once
#include "Grid.h"


namespace PRY2PADavidRodríguez1164619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MenuI
	/// </summary>
	public ref class MenuI : public System::Windows::Forms::Form
	{
	public:
		MenuI(void)
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
		~MenuI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::ComboBox^ cmbBodegas;
	private: System::Windows::Forms::GroupBox^ gbNB;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btnNB;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNB;
	private: System::Windows::Forms::GroupBox^ gbCB;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ btnCB;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuI::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->cmbBodegas = (gcnew System::Windows::Forms::ComboBox());
			this->gbNB = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btnNB = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNB = (gcnew System::Windows::Forms::TextBox());
			this->gbCB = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btnCB = (gcnew System::Windows::Forms::Button());
			this->gbNB->SuspendLayout();
			this->gbCB->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(117, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(445, 92);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Nueva Bodega";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuI::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(256, 342);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuI::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(117, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(445, 94);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Cargar Bodega";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MenuI::button3_Click);
			// 
			// cmbBodegas
			// 
			this->cmbBodegas->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbBodegas->FormattingEnabled = true;
			this->cmbBodegas->Location = System::Drawing::Point(165, 66);
			this->cmbBodegas->Name = L"cmbBodegas";
			this->cmbBodegas->Size = System::Drawing::Size(121, 21);
			this->cmbBodegas->TabIndex = 13;
			// 
			// gbNB
			// 
			this->gbNB->Controls->Add(this->button5);
			this->gbNB->Controls->Add(this->btnNB);
			this->gbNB->Controls->Add(this->label1);
			this->gbNB->Controls->Add(this->txtNB);
			this->gbNB->Location = System::Drawing::Point(85, 95);
			this->gbNB->Name = L"gbNB";
			this->gbNB->Size = System::Drawing::Size(503, 194);
			this->gbNB->TabIndex = 14;
			this->gbNB->TabStop = false;
			this->gbNB->Text = L"Nueva Bodega";
			this->gbNB->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(324, 146);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 23);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Regresar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MenuI::button5_Click);
			// 
			// btnNB
			// 
			this->btnNB->Location = System::Drawing::Point(191, 111);
			this->btnNB->Name = L"btnNB";
			this->btnNB->Size = System::Drawing::Size(111, 23);
			this->btnNB->TabIndex = 2;
			this->btnNB->Text = L"Crear Bodega";
			this->btnNB->UseVisualStyleBackColor = true;
			this->btnNB->Click += gcnew System::EventHandler(this, &MenuI::btnNB_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(42, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese el nombre de la bodega:";
			// 
			// txtNB
			// 
			this->txtNB->Location = System::Drawing::Point(131, 84);
			this->txtNB->Name = L"txtNB";
			this->txtNB->Size = System::Drawing::Size(244, 20);
			this->txtNB->TabIndex = 0;
			// 
			// gbCB
			// 
			this->gbCB->Controls->Add(this->button6);
			this->gbCB->Controls->Add(this->btnCB);
			this->gbCB->Controls->Add(this->cmbBodegas);
			this->gbCB->Location = System::Drawing::Point(91, 72);
			this->gbCB->Name = L"gbCB";
			this->gbCB->Size = System::Drawing::Size(467, 248);
			this->gbCB->TabIndex = 15;
			this->gbCB->TabStop = false;
			this->gbCB->Text = L"Cargar Bodega";
			this->gbCB->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(191, 175);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Regresar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MenuI::button6_Click);
			// 
			// btnCB
			// 
			this->btnCB->Location = System::Drawing::Point(97, 98);
			this->btnCB->Name = L"btnCB";
			this->btnCB->Size = System::Drawing::Size(248, 70);
			this->btnCB->TabIndex = 14;
			this->btnCB->Text = L"Cargar";
			this->btnCB->UseVisualStyleBackColor = true;
			this->btnCB->Click += gcnew System::EventHandler(this, &MenuI::btnCB_Click);
			// 
			// MenuI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(685, 413);
			this->Controls->Add(this->gbCB);
			this->Controls->Add(this->gbNB);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MenuI";
			this->Text = L"MenuI";
			this->Load += gcnew System::EventHandler(this, &MenuI::MenuI_Load);
			this->gbNB->ResumeLayout(false);
			this->gbNB->PerformLayout();
			this->gbCB->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		gbNB->Visible = true;
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MenuI_Load(System::Object^ sender, System::EventArgs^ e) {


	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	gbNB->Visible = false;
}
	   
private: System::Void btnNB_Click(System::Object^ sender, System::EventArgs^ e) {

	
	gbNB->Visible = false;
	String^NN = txtNB->Text;
		txtNB->Text = "";
	Grid^ miGrid = gcnew Grid();
	this->Hide();
	miGrid->lblCBoNB->Text = "NuevaBodega";
	miGrid->btnBodegas->Text = NN;
	miGrid->ShowDialog();
	this->Show();

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	gbCB->Visible = false;
}
	   String^ Linea;
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	gbCB->Visible = true;
	

	StreamReader^ LeerNombres = gcnew StreamReader("Bodegas.txt");
	Linea = LeerNombres->ReadLine();
	while (Linea != nullptr)
	{
		cmbBodegas->Items->Add(Linea);
		Linea = LeerNombres->ReadLine();
	}
	

}
private: System::Void btnCB_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Grid^ miGrid = gcnew Grid();
	this->Hide();
	miGrid->lblCBoNB->Text = "BodegaCargada";
	miGrid->btnBodegas->Text = cmbBodegas->SelectedItem->ToString();
	miGrid->ShowDialog();
	this->Show();

}
};
}
