#pragma once
#include "DoubleLinkedList.h"
#include "Figura.h"
#include "Almacenar.h"
#include "Cuadro.h"
#include <cmath>



namespace PRY2PADavidRodríguez1164619 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Resumen de Grid
	/// </summary>
	public ref class Grid : public System::Windows::Forms::Form
	{
	public:


	public:
		DoubleLinkedList<Figura*>* myFiguraList;
		DoubleLinkedList<Almacenar*>* myAlmacenajeList;


	private: System::Windows::Forms::GroupBox^ gb2;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ M2;
	private: System::Windows::Forms::TextBox^ txtCantidad;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtnombre;

	private: System::Windows::Forms::Label^ label7;




	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtaño;
	private: System::Windows::Forms::TextBox^ txtmes;

	private: System::Windows::Forms::TextBox^ txtdia;
	private: System::Windows::Forms::GroupBox^ gb3;
	private: System::Windows::Forms::TextBox^ txtCantR;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtYYYYR;

	private: System::Windows::Forms::TextBox^ txtmmR;

	private: System::Windows::Forms::TextBox^ txtddR;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ComboBox^ M3;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtNombreR;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::GroupBox^ gb4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtID4;
	private: System::Windows::Forms::GroupBox^ gbBodegas;
	private: System::Windows::Forms::Button^ btnR;


	private: System::Windows::Forms::RichTextBox^ rtb3;
	private: System::Windows::Forms::RichTextBox^ rtb2;
	private: System::Windows::Forms::RichTextBox^ rtb1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Label^ lblCBoNB;
	private: System::Windows::Forms::Button^ btnCargar;
	private: System::Windows::Forms::GroupBox^ gbPanel;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ gbInventario;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::ComboBox^ cbInventario;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtInventario;
	public:
	private:
	private: System::Windows::Forms::GroupBox^ groupBox3;




	public:


		Grid(void)
		{
			myFiguraList = new DoubleLinkedList<Figura*>();
			myAlmacenajeList = new DoubleLinkedList<Almacenar*>();
			InitializeComponent();



			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Grid()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ PnlBobeda;
	protected:

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	public: System::Windows::Forms::Button^ btnBodegas;
	private:

private: System::Windows::Forms::Button^ btnInventarios;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ cmbAccion;
	private: System::Windows::Forms::TextBox^ txtFila;


	private: System::Windows::Forms::TextBox^ txtPM1;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ gb1;

	private: System::Windows::Forms::Button^ btnRealizar;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ txtColumna;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ M1;
	private: System::Windows::Forms::Button^ button5;







	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Grid::typeid));
			this->PnlBobeda = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnBodegas = (gcnew System::Windows::Forms::Button());
			this->btnInventarios = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->cmbAccion = (gcnew System::Windows::Forms::ComboBox());
			this->txtFila = (gcnew System::Windows::Forms::TextBox());
			this->txtPM1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->gb1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->M1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtColumna = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->gb2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtaño = (gcnew System::Windows::Forms::TextBox());
			this->txtmes = (gcnew System::Windows::Forms::TextBox());
			this->txtdia = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->M2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->gb3 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtCantR = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtYYYYR = (gcnew System::Windows::Forms::TextBox());
			this->txtmmR = (gcnew System::Windows::Forms::TextBox());
			this->txtddR = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->M3 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtNombreR = (gcnew System::Windows::Forms::TextBox());
			this->gb4 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtID4 = (gcnew System::Windows::Forms::TextBox());
			this->gbPanel = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btnCargar = (gcnew System::Windows::Forms::Button());
			this->btnRealizar = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->gbBodegas = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->rtb3 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->rtb2 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->rtb1 = (gcnew System::Windows::Forms::RichTextBox());
			this->btnR = (gcnew System::Windows::Forms::Button());
			this->lblCBoNB = (gcnew System::Windows::Forms::Label());
			this->gbInventario = (gcnew System::Windows::Forms::GroupBox());
			this->txtInventario = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->cbInventario = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->gb1->SuspendLayout();
			this->gb2->SuspendLayout();
			this->gb3->SuspendLayout();
			this->gb4->SuspendLayout();
			this->gbPanel->SuspendLayout();
			this->gbBodegas->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->gbInventario->SuspendLayout();
			this->SuspendLayout();
			// 
			// PnlBobeda
			// 
			this->PnlBobeda->BackColor = System::Drawing::Color::White;
			this->PnlBobeda->Location = System::Drawing::Point(15, 19);
			this->PnlBobeda->Name = L"PnlBobeda";
			this->PnlBobeda->Size = System::Drawing::Size(1207, 416);
			this->PnlBobeda->TabIndex = 16;
			this->PnlBobeda->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Grid::PnlBobeda_Paint);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->PnlBobeda);
			this->groupBox1->Location = System::Drawing::Point(12, 122);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1240, 453);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Bodegas";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnBodegas);
			this->groupBox2->Controls->Add(this->btnInventarios);
			this->groupBox2->Location = System::Drawing::Point(351, 582);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(587, 57);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			// 
			// btnBodegas
			// 
			this->btnBodegas->Location = System::Drawing::Point(302, 11);
			this->btnBodegas->Name = L"btnBodegas";
			this->btnBodegas->Size = System::Drawing::Size(162, 40);
			this->btnBodegas->TabIndex = 1;
			this->btnBodegas->Text = L"Bodega";
			this->btnBodegas->UseVisualStyleBackColor = true;
			this->btnBodegas->Click += gcnew System::EventHandler(this, &Grid::btnBodegas_Click);
			// 
			// btnInventarios
			// 
			this->btnInventarios->Location = System::Drawing::Point(97, 11);
			this->btnInventarios->Name = L"btnInventarios";
			this->btnInventarios->Size = System::Drawing::Size(162, 40);
			this->btnInventarios->TabIndex = 0;
			this->btnInventarios->Text = L"Inventario";
			this->btnInventarios->UseVisualStyleBackColor = true;
			this->btnInventarios->Click += gcnew System::EventHandler(this, &Grid::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1177, 616);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Salir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Grid::button3_Click);
			// 
			// cmbAccion
			// 
			this->cmbAccion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbAccion->FormattingEnabled = true;
			this->cmbAccion->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"1. Crear bahía", L"2. Almacenar producto", L"3. Retirar producto",
					L"4. Eliminar bahía"
			});
			this->cmbAccion->Location = System::Drawing::Point(106, 26);
			this->cmbAccion->Name = L"cmbAccion";
			this->cmbAccion->Size = System::Drawing::Size(121, 21);
			this->cmbAccion->TabIndex = 12;
			this->cmbAccion->SelectedIndexChanged += gcnew System::EventHandler(this, &Grid::cmbAccion_SelectedIndexChanged);
			// 
			// txtFila
			// 
			this->txtFila->Location = System::Drawing::Point(96, 19);
			this->txtFila->Name = L"txtFila";
			this->txtFila->Size = System::Drawing::Size(100, 20);
			this->txtFila->TabIndex = 20;
			// 
			// txtPM1
			// 
			this->txtPM1->Location = System::Drawing::Point(513, 33);
			this->txtPM1->Name = L"txtPM1";
			this->txtPM1->Size = System::Drawing::Size(100, 20);
			this->txtPM1->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Fila: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(253, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Material:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(450, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Peso Máx:";
			// 
			// gb1
			// 
			this->gb1->Controls->Add(this->button5);
			this->gb1->Controls->Add(this->M1);
			this->gb1->Controls->Add(this->txtColumna);
			this->gb1->Controls->Add(this->label4);
			this->gb1->Controls->Add(this->label3);
			this->gb1->Controls->Add(this->txtPM1);
			this->gb1->Controls->Add(this->label2);
			this->gb1->Controls->Add(this->txtFila);
			this->gb1->Controls->Add(this->label1);
			this->gb1->Location = System::Drawing::Point(280, 12);
			this->gb1->Name = L"gb1";
			this->gb1->Size = System::Drawing::Size(658, 92);
			this->gb1->TabIndex = 0;
			this->gb1->TabStop = false;
			this->gb1->Text = L"Crear bahía";
			this->gb1->Visible = false;
			this->gb1->Enter += gcnew System::EventHandler(this, &Grid::groupBox3_Enter);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(317, 55);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 23);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Seleccionar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Grid::button5_Click);
			// 
			// M1
			// 
			this->M1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->M1->FormattingEnabled = true;
			this->M1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"-Material para oficina (ID 1)", L"-Ropa (ID 2)", L"-Material de construcción (ID 3)" });
			this->M1->Location = System::Drawing::Point(306, 28);
			this->M1->Name = L"M1";
			this->M1->Size = System::Drawing::Size(121, 21);
			this->M1->TabIndex = 30;
			// 
			// txtColumna
			// 
			this->txtColumna->Location = System::Drawing::Point(96, 45);
			this->txtColumna->Name = L"txtColumna";
			this->txtColumna->Size = System::Drawing::Size(100, 20);
			this->txtColumna->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Columna: ";
			// 
			// gb2
			// 
			this->gb2->Controls->Add(this->txtCantidad);
			this->gb2->Controls->Add(this->label7);
			this->gb2->Controls->Add(this->label9);
			this->gb2->Controls->Add(this->txtaño);
			this->gb2->Controls->Add(this->txtmes);
			this->gb2->Controls->Add(this->txtdia);
			this->gb2->Controls->Add(this->button6);
			this->gb2->Controls->Add(this->M2);
			this->gb2->Controls->Add(this->label5);
			this->gb2->Controls->Add(this->label6);
			this->gb2->Controls->Add(this->txtnombre);
			this->gb2->Location = System::Drawing::Point(280, 12);
			this->gb2->Name = L"gb2";
			this->gb2->Size = System::Drawing::Size(658, 104);
			this->gb2->TabIndex = 31;
			this->gb2->TabStop = false;
			this->gb2->Text = L"Almacenar producto";
			this->gb2->Visible = false;
			// 
			// txtCantidad
			// 
			this->txtCantidad->Location = System::Drawing::Point(503, 41);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(100, 20);
			this->txtCantidad->TabIndex = 27;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(452, 44);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Cantidad:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(131, 50);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 13);
			this->label9->TabIndex = 34;
			this->label9->Text = L"dd  /   mm   /   yyyy";
			// 
			// txtaño
			// 
			this->txtaño->Location = System::Drawing::Point(188, 64);
			this->txtaño->Name = L"txtaño";
			this->txtaño->Size = System::Drawing::Size(41, 20);
			this->txtaño->TabIndex = 33;
			// 
			// txtmes
			// 
			this->txtmes->Location = System::Drawing::Point(161, 64);
			this->txtmes->Name = L"txtmes";
			this->txtmes->Size = System::Drawing::Size(21, 20);
			this->txtmes->TabIndex = 32;
			// 
			// txtdia
			// 
			this->txtdia->Location = System::Drawing::Point(134, 64);
			this->txtdia->Name = L"txtdia";
			this->txtdia->Size = System::Drawing::Size(21, 20);
			this->txtdia->TabIndex = 31;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(317, 55);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 23);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Seleccionar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Grid::button6_Click);
			// 
			// M2
			// 
			this->M2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->M2->FormattingEnabled = true;
			this->M2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"-Material para oficina (ID 1)", L"-Ropa (ID 2)", L"-Material de construcción (ID 3)" });
			this->M2->Location = System::Drawing::Point(306, 28);
			this->M2->Name = L"M2";
			this->M2->Size = System::Drawing::Size(121, 21);
			this->M2->TabIndex = 30;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(253, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 13);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Tipo de Producto: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(122, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Nombre Responsable:";
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(125, 28);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(100, 20);
			this->txtnombre->TabIndex = 22;
			// 
			// gb3
			// 
			this->gb3->Controls->Add(this->label13);
			this->gb3->Controls->Add(this->txtId);
			this->gb3->Controls->Add(this->txtCantR);
			this->gb3->Controls->Add(this->label8);
			this->gb3->Controls->Add(this->label10);
			this->gb3->Controls->Add(this->txtYYYYR);
			this->gb3->Controls->Add(this->txtmmR);
			this->gb3->Controls->Add(this->txtddR);
			this->gb3->Controls->Add(this->button7);
			this->gb3->Controls->Add(this->M3);
			this->gb3->Controls->Add(this->label11);
			this->gb3->Controls->Add(this->label12);
			this->gb3->Controls->Add(this->txtNombreR);
			this->gb3->Location = System::Drawing::Point(270, 14);
			this->gb3->Name = L"gb3";
			this->gb3->Size = System::Drawing::Size(678, 104);
			this->gb3->TabIndex = 35;
			this->gb3->TabStop = false;
			this->gb3->Text = L"Retirar producto";
			this->gb3->Visible = false;
			this->gb3->Enter += gcnew System::EventHandler(this, &Grid::gb3_Enter);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(15, 29);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 13);
			this->label13->TabIndex = 36;
			this->label13->Text = L"ID:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(6, 45);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(84, 20);
			this->txtId->TabIndex = 35;
			// 
			// txtCantR
			// 
			this->txtCantR->Location = System::Drawing::Point(503, 41);
			this->txtCantR->Name = L"txtCantR";
			this->txtCantR->Size = System::Drawing::Size(100, 20);
			this->txtCantR->TabIndex = 27;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(452, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Cantidad:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(131, 50);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(98, 13);
			this->label10->TabIndex = 34;
			this->label10->Text = L"dd  /   mm   /   yyyy";
			// 
			// txtYYYYR
			// 
			this->txtYYYYR->Location = System::Drawing::Point(187, 66);
			this->txtYYYYR->Name = L"txtYYYYR";
			this->txtYYYYR->Size = System::Drawing::Size(47, 20);
			this->txtYYYYR->TabIndex = 33;
			// 
			// txtmmR
			// 
			this->txtmmR->Location = System::Drawing::Point(160, 66);
			this->txtmmR->Name = L"txtmmR";
			this->txtmmR->Size = System::Drawing::Size(21, 20);
			this->txtmmR->TabIndex = 32;
			// 
			// txtddR
			// 
			this->txtddR->Location = System::Drawing::Point(133, 66);
			this->txtddR->Name = L"txtddR";
			this->txtddR->Size = System::Drawing::Size(21, 20);
			this->txtddR->TabIndex = 31;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(317, 55);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 23);
			this->button7->TabIndex = 22;
			this->button7->Text = L"Seleccionar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Grid::button7_Click);
			// 
			// M3
			// 
			this->M3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->M3->FormattingEnabled = true;
			this->M3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"-Material para oficina (ID 1)", L"-Ropa (ID 2)", L"-Material de construcción (ID 3)" });
			this->M3->Location = System::Drawing::Point(306, 28);
			this->M3->Name = L"M3";
			this->M3->Size = System::Drawing::Size(121, 21);
			this->M3->TabIndex = 30;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(253, 12);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(95, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Tipo de Producto: ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(122, 12);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(112, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Nombre Responsable:";
			// 
			// txtNombreR
			// 
			this->txtNombreR->Location = System::Drawing::Point(125, 28);
			this->txtNombreR->Name = L"txtNombreR";
			this->txtNombreR->Size = System::Drawing::Size(100, 20);
			this->txtNombreR->TabIndex = 22;
			// 
			// gb4
			// 
			this->gb4->Controls->Add(this->label14);
			this->gb4->Controls->Add(this->txtID4);
			this->gb4->Location = System::Drawing::Point(276, 8);
			this->gb4->Name = L"gb4";
			this->gb4->Size = System::Drawing::Size(667, 104);
			this->gb4->TabIndex = 37;
			this->gb4->TabStop = false;
			this->gb4->Text = L"Eliminar bahía";
			this->gb4->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(261, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 13);
			this->label14->TabIndex = 36;
			this->label14->Text = L"ID:";
			// 
			// txtID4
			// 
			this->txtID4->Location = System::Drawing::Point(264, 45);
			this->txtID4->Name = L"txtID4";
			this->txtID4->Size = System::Drawing::Size(84, 20);
			this->txtID4->TabIndex = 35;
			// 
			// gbPanel
			// 
			this->gbPanel->Controls->Add(this->label15);
			this->gbPanel->Controls->Add(this->btnCargar);
			this->gbPanel->Location = System::Drawing::Point(949, 8);
			this->gbPanel->Name = L"gbPanel";
			this->gbPanel->Size = System::Drawing::Size(243, 188);
			this->gbPanel->TabIndex = 41;
			this->gbPanel->TabStop = false;
			this->gbPanel->Text = L"Cargar";
			this->gbPanel->Visible = false;
			this->gbPanel->Enter += gcnew System::EventHandler(this, &Grid::gbPanel_Enter);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(32, 60);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(183, 13);
			this->label15->TabIndex = 41;
			this->label15->Text = L">Ya se han cargado los datos<";
			// 
			// btnCargar
			// 
			this->btnCargar->Location = System::Drawing::Point(48, 81);
			this->btnCargar->Name = L"btnCargar";
			this->btnCargar->Size = System::Drawing::Size(154, 52);
			this->btnCargar->TabIndex = 40;
			this->btnCargar->Text = L"Cargar Panel";
			this->btnCargar->UseVisualStyleBackColor = true;
			this->btnCargar->Click += gcnew System::EventHandler(this, &Grid::btnCargar_Click);
			// 
			// btnRealizar
			// 
			this->btnRealizar->Location = System::Drawing::Point(954, 46);
			this->btnRealizar->Name = L"btnRealizar";
			this->btnRealizar->Size = System::Drawing::Size(123, 46);
			this->btnRealizar->TabIndex = 20;
			this->btnRealizar->Text = L"Realizar";
			this->btnRealizar->UseVisualStyleBackColor = true;
			this->btnRealizar->Click += gcnew System::EventHandler(this, &Grid::btnRealizar_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(129, 57);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Seleccionar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Grid::button4_Click);
			// 
			// gbBodegas
			// 
			this->gbBodegas->Controls->Add(this->button1);
			this->gbBodegas->Controls->Add(this->groupBox5);
			this->gbBodegas->Controls->Add(this->groupBox4);
			this->gbBodegas->Controls->Add(this->groupBox3);
			this->gbBodegas->Controls->Add(this->btnR);
			this->gbBodegas->Location = System::Drawing::Point(186, 115);
			this->gbBodegas->Name = L"gbBodegas";
			this->gbBodegas->Size = System::Drawing::Size(891, 501);
			this->gbBodegas->TabIndex = 38;
			this->gbBodegas->TabStop = false;
			this->gbBodegas->Text = L"Bodegas";
			this->gbBodegas->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(350, 457);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Guardar Bodega";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Grid::button1_Click_1);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->rtb3);
			this->groupBox5->Location = System::Drawing::Point(585, 35);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(258, 404);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Inf Movimientos";
			// 
			// rtb3
			// 
			this->rtb3->Location = System::Drawing::Point(25, 21);
			this->rtb3->Name = L"rtb3";
			this->rtb3->Size = System::Drawing::Size(211, 363);
			this->rtb3->TabIndex = 2;
			this->rtb3->Text = L"";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->rtb2);
			this->groupBox4->Location = System::Drawing::Point(305, 30);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(259, 412);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Inf Retiros";
			// 
			// rtb2
			// 
			this->rtb2->Location = System::Drawing::Point(26, 26);
			this->rtb2->Name = L"rtb2";
			this->rtb2->Size = System::Drawing::Size(211, 363);
			this->rtb2->TabIndex = 1;
			this->rtb2->Text = L"";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->rtb1);
			this->groupBox3->Location = System::Drawing::Point(31, 26);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(259, 416);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Inf Ingresos";
			// 
			// rtb1
			// 
			this->rtb1->Location = System::Drawing::Point(25, 30);
			this->rtb1->Name = L"rtb1";
			this->rtb1->Size = System::Drawing::Size(211, 363);
			this->rtb1->TabIndex = 0;
			this->rtb1->Text = L"";
			// 
			// btnR
			// 
			this->btnR->Location = System::Drawing::Point(768, 457);
			this->btnR->Name = L"btnR";
			this->btnR->Size = System::Drawing::Size(75, 23);
			this->btnR->TabIndex = 3;
			this->btnR->Text = L"Regresar";
			this->btnR->UseVisualStyleBackColor = true;
			this->btnR->Click += gcnew System::EventHandler(this, &Grid::btnR_Click);
			// 
			// lblCBoNB
			// 
			this->lblCBoNB->AutoSize = true;
			this->lblCBoNB->Location = System::Drawing::Point(1193, 14);
			this->lblCBoNB->Name = L"lblCBoNB";
			this->lblCBoNB->Size = System::Drawing::Size(0, 13);
			this->lblCBoNB->TabIndex = 39;
			this->lblCBoNB->Visible = false;
			// 
			// gbInventario
			// 
			this->gbInventario->Controls->Add(this->txtInventario);
			this->gbInventario->Controls->Add(this->button8);
			this->gbInventario->Controls->Add(this->cbInventario);
			this->gbInventario->Controls->Add(this->button2);
			this->gbInventario->Location = System::Drawing::Point(217, 106);
			this->gbInventario->Name = L"gbInventario";
			this->gbInventario->Size = System::Drawing::Size(873, 470);
			this->gbInventario->TabIndex = 42;
			this->gbInventario->TabStop = false;
			this->gbInventario->Text = L"Inventario";
			this->gbInventario->Visible = false;
			// 
			// txtInventario
			// 
			this->txtInventario->Enabled = false;
			this->txtInventario->Location = System::Drawing::Point(224, 44);
			this->txtInventario->Multiline = true;
			this->txtInventario->Name = L"txtInventario";
			this->txtInventario->Size = System::Drawing::Size(582, 365);
			this->txtInventario->TabIndex = 3;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(78, 81);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Ordenar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Grid::button8_Click);
			// 
			// cbInventario
			// 
			this->cbInventario->FormattingEnabled = true;
			this->cbInventario->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Tipo de producto", L"Cantidad de unidades",
					L"Peso unitario", L"Fecha de ingreso del pedido"
			});
			this->cbInventario->Location = System::Drawing::Point(59, 54);
			this->cbInventario->Name = L"cbInventario";
			this->cbInventario->Size = System::Drawing::Size(121, 21);
			this->cbInventario->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(779, 440);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Grid::button2_Click);
			// 
			// Grid
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 651);
			this->Controls->Add(this->gbInventario);
			this->Controls->Add(this->gbPanel);
			this->Controls->Add(this->lblCBoNB);
			this->Controls->Add(this->gbBodegas);
			this->Controls->Add(this->gb4);
			this->Controls->Add(this->gb3);
			this->Controls->Add(this->gb2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btnRealizar);
			this->Controls->Add(this->gb1);
			this->Controls->Add(this->cmbAccion);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Grid";
			this->Text = L"Grid";
			this->Load += gcnew System::EventHandler(this, &Grid::Grid_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->gb1->ResumeLayout(false);
			this->gb1->PerformLayout();
			this->gb2->ResumeLayout(false);
			this->gb2->PerformLayout();
			this->gb3->ResumeLayout(false);
			this->gb3->PerformLayout();
			this->gb4->ResumeLayout(false);
			this->gb4->PerformLayout();
			this->gbPanel->ResumeLayout(false);
			this->gbPanel->PerformLayout();
			this->gbBodegas->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->gbInventario->ResumeLayout(false);
			this->gbInventario->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

		   String^ NFila;

		   int Bahias = 0;
		   int cod;
		   int valor;
		   String^ ValCod = "X";
		   int FilaB;
		   int ColumnaB;
		   int Pu = 0;
		   int Pm = 0;

		   String^ MatAlmacenado;
								 
		   public: array<Char>^ delimitador;
				 static String^ delimitador_string = ",";
				 int Contador = 0;
				 String^ Materiales;
				 
	private: System::Void btnRealizar_Click(System::Object^ sender, System::EventArgs^ e) {
		gbBodegas->Visible = false;
		gbInventario->Visible = false;
		gbBodegas->Visible = false;
		int Cantidad;
		int N1;
		int N2;
		int N3;
		String^ Fila = txtFila->Text;
		String^ Columna = txtColumna->Text;
		String^ PesoM = txtPM1->Text;
		int PP;
		String^ Codigo;
		int ContCod = 1;
		int codigo;
		String^ Nombre;
		int dd;
		int mm;
		int yyyy;
		int almacenaje;
		String^ ID;
		switch (Accion)
		{
		case 1:
			PP = Convert::ToInt32(PesoM);
			gb2->Visible = false;
			try
			{


			if (Cont == 2)
			{
				T1 = T1 + ",0,0";
			}
			else
			{
				if (Cont == 3)
				{
					T1 = T1 + ",0";
				}
			}
		


			Codigo = "";

			ValCod = "X";

			CambiarLetraAnumero();
			if (Columna->Length == 1)
			{
				Columna = "0" + Columna;
			}

			if (Convert::ToInt32(Columna->Length) <= 2)
			{
				if (NFila != "00")
				{
	


					array<String^>^ cadena;
					delimitador = delimitador_string->ToCharArray();
					cadena = T1->Split(delimitador);
					N1 = Convert::ToInt32(cadena[0]);
					N2 = Convert::ToInt32(cadena[1]);
					N3 = Convert::ToInt32(cadena[2]);

					
					FilaB = Convert::ToInt32(NFila);
					ColumnaB = Convert::ToInt32(Columna);
					Pm = Convert::ToInt32(PesoM);

				
						Node1<Figura*>* temp = myFiguraList->start;
						if (Contador>=1)
						{
							for (int i = 0; i < myFiguraList->count; i++) {

								Figura* actual = temp->value;
								if ((actual->Fila == FilaB) && (actual->Columna == ColumnaB))
								{
									actual->Peso = actual->Peso + Pm;
									actual->PesoUsado = actual->PesoUsado + Pu;
									actual->N1 = N1;
									actual->N2 = N2;
									actual->N3 = N3;
									i = myFiguraList->count;

								}
								else
								{
									Figura* newCuadro = new Cuadro();

									newCuadro->N1 = N1;
									newCuadro->N2 = N2;
									newCuadro->N3 = N3;
									newCuadro->Fila = FilaB;
									newCuadro->Columna = ColumnaB;
									newCuadro->Peso = Pm;
									newCuadro->PesoUsado = Pu;
									newCuadro->Type = 1;
									newCuadro->Posicion = Contador;
									newCuadro->Y = (FilaB - 1) * 130;
									newCuadro->X = (ColumnaB - 1) * 170;
									Contador++;
									myFiguraList->InsertAtEnd(newCuadro);
									i = myFiguraList->count;
								}

								temp = temp->next;
							}
						}
					else
					{
						Figura* newCuadro = new Cuadro();

						newCuadro->N1 = N1;
						newCuadro->N2 = N2;
						newCuadro->N3 = N3;
						newCuadro->Fila = FilaB;
						newCuadro->Columna = ColumnaB;
						newCuadro->Peso = Pm;
						newCuadro->PesoUsado = Pu;
						newCuadro->Type = 1;
						newCuadro->Posicion = Contador;
						newCuadro->Y = (FilaB - 1) * 130;
						newCuadro->X = (ColumnaB - 1) * 170;
						Contador++;
						
						myFiguraList->InsertAtEnd(newCuadro);
					}
				

					

					/*inicia dibujo de lista*/
					if (!myFiguraList->IsEmpty()) {
						Node1<Figura*>* temp = myFiguraList->start;

						for (int i = 0; i < myFiguraList->count; i++) {
							Figura* actual = temp->value;
							DrawNode(PnlBobeda->CreateGraphics(), actual->X, actual->Y, actual->Fila, actual->Columna, actual->Peso, actual->PesoUsado, actual->Type, actual->N1, actual->N2, actual->N3);
							temp = temp->next;
						}

					}

				


				}
				else
				{
					MessageBox::Show("Ingreso un valor incorrecto");
					txtFila->Text = "";
				}
			}
			else
			{
				MessageBox::Show("Ingreso un valor incorrecto");
				txtColumna->Text = "";

			}

			txtColumna->Text = "";
			txtFila->Text = "";
			txtPM1->Text = "";
			T1 = "";
			Cont = 1;
			Ts1 = 0;
			Ts2 = 0;
			Ts3 = 0;
			button5->Text = "Seleccionar";
			button5->Enabled = true;

			}
			catch (Exception^ e)
			{
				MessageBox::Show("Ingreso un valor incorrecto");
				txtColumna->Text = "";
				txtFila->Text = "";
				txtPM1->Text = "";
				T1 = "";
				Cont = 1;
				Ts1 = 0;
				Ts2 = 0;
				Ts3 = 0;
				button5->Text = "Seleccionar";
				button5->Enabled = true;
			}

			break;
			case 2:
				try
				{

				
				
				if (Contador >= 1)
				{
					String^ ValCod = "X";
					gb1->Visible = false;
					dd = Convert::ToInt32(txtdia->Text);
					mm = Convert::ToInt32(txtmes->Text);
					yyyy = Convert::ToInt32(txtaño->Text);
					Cantidad = Convert::ToInt32(txtCantidad->Text);
					Nombre = txtnombre->Text;
					int MatN = Mat_A_Ingresar;
					
						if (Nombre != "")
						{
							if (dd <= 31)
							{
								if (mm <= 12)
								{
									if ((yyyy >= 1990) && (yyyy <= 2020))
									{

										Node1<Figura*>* temp = myFiguraList->start;
										for (int i = 0; i < myFiguraList->count; i++) {
											Figura* actual = temp->value;
											if ((actual->N1 == MatN) || (actual->N2 == MatN) || (actual->N3 == MatN))
											{
												if ((actual->Peso >= (actual->PesoUsado + Cantidad)))
												{
													
													actual->PesoUsado = actual->PesoUsado + Cantidad;
													do
													{
														codigo = 100 + rand() % (999);
														if (codigo != actual->Codigo)
														{
															actual->Codigo = codigo;
															ValCod = "O";
														}

													} while (ValCod != "O");

													i = myFiguraList->count;
													if (actual->N1 == MatN)
													{
														actual->CantM1 = actual->CantM1 + Cantidad;
													}
													else
													{
														if (actual->N2 == MatN)
														{
															actual->CantM2 = actual->CantM2 + Cantidad;
														}
														else
														{
															if (actual->N3 == MatN)
															{
																actual->CantM3 = actual->CantM3 + Cantidad;
															}
														}
													}
										

													int Fila = actual->Fila;
													String^ Lcolum;
													if (Fila == 1)
													{
														Lcolum = "A";
													}
													if (Fila == 2)
													{
														Lcolum = "B";
													}
													if (Fila == 3)
													{
														Lcolum = "C";
													}
													if (Fila == 4)
													{
														Lcolum = "D";
													}
													if (Fila == 5)
													{
														Lcolum = "E";
													}
													if (Fila == 6)
													{
														Lcolum = "F";
													}
													if (Fila == 7)
													{
														Lcolum = "G";
													}
													if (Fila == 8)
													{
														Lcolum = "H";
													}
													if (Fila == 9)
													{
														Lcolum = "I";
													}
													if (Fila == 10)
													{
														Lcolum = "J";
													}
													if (Fila == 11)
													{
														Lcolum = "K";
													}
													if (Fila == 12)
													{
														Lcolum = "L";

													}
													if (Fila == 13)
													{
														Lcolum = "M";
													}
													if (Fila == 14)
													{
														Lcolum = "N";
													}
													if (Fila == 15)
													{
														Lcolum = "O";
													}
													if (Fila == 16)
													{
														Lcolum = "P";
													}
													if (Fila == 17)
													{
														Lcolum = "Q";
													}
													if (Fila == 18)
													{
														Lcolum = "R";
													}
													if (Fila == 19)
													{
														Lcolum = "S";
													}
													if (Fila == 20)
													{
														Lcolum = "T";
													}
													if (Fila == 21)
													{
														Lcolum = "U";
													}
													if (Fila == 22)
													{
														Lcolum = "V";
													}
													if (Fila == 23)
													{
														Lcolum = "W";

													}
													if (Fila == 24)
													{
														Lcolum = "X";
													}
													if (Fila == 25)
													{
														Lcolum = "Y";
													}
													if (Fila == 26)
													{
														Lcolum = "Z";
													}
													String^ Materiales;
													int N1 = actual->N1;
													int N2 = actual->N2;
													int N3 = actual->N3;
													if (N2 == 0)
													{
														Materiales = Convert::ToString(N1);
													}
													else
													{
														if (N3 == 0)
														{
															if (N1 < N2)
															{
																Materiales = N1 + "," + N2;
															}
															else
															{
																Materiales = N2 + "," + N1;
															}
														}
														else
														{
															if (N1 < N2)
															{
																if (N2 < N3)
																{
																	Materiales = N1 + "," + N2 + "," + N3;
																}
																else
																{
																	if (N1 < N3)
																	{
																		Materiales = N1 + "," + N3 + "," + N2;
																	}
																	else
																	{
																		Materiales = N3 + "," + N1 + "," + N2;
																	}

																}
															}
															else
															{
																if (N2 < N3)
																{
																	if (N1 < N3)
																	{
																		Materiales = N2 + "," + N1 + "," + N3;
																	}
																	else
																	{
																		Materiales = N2 + "," + N3 + "," + N1;
																	}
																}
																else
																{
																	if (N1 < N3)
																	{
																		Materiales = N3 + "," + N2 + "," + N1;
																	}

																}

															}
														}
													}

													Ingresos = Ingresos + "-->" + " Se ha ingresado:" + Cantidad + " en la Bahía con ID: " + Lcolum + actual->Columna + " Con material del tipo: " + Materiales + " ingresado el:" + dd + "/" + mm + "/" + yyyy + " por la persona: " + Nombre + " Codigo de almacenaje: " + actual->Codigo + "<--";
												}


											}


											temp = temp->next;
										}

										Node1<Almacenar*>* temp2 = myAlmacenajeList->start;
										for (int i = 0; i < myAlmacenajeList->count; i++) {
											Almacenar* actual2 = temp2->value;
											if ((actual2->N1 == MatN) || (actual2->N2 == MatN) || (actual2->N3 == MatN))
											{
												if ((actual2->Peso >= (actual2->PesoUsado + Cantidad)))
												{
													actual2->dd = dd;
													actual2->mm = mm;
													actual2->yyyy = yyyy;
													actual2->Almacenado = Cantidad;
													actual2->PesoUsado = actual2->PesoUsado + Cantidad;
													do
													{
														codigo = 100 + rand() % (999);
														if (codigo != actual2->Codigo)
														{
															actual2->Codigo = codigo;
															ValCod = "O";
														}

													} while (ValCod != "O");

													i = myAlmacenajeList->count;
													if (actual2->N1 == MatN)
													{
														actual2->CantM1 = actual2->CantM1 + Cantidad;
														actual2->TipoMat = 1;
													}
													else
													{
														if (actual2->N2 == MatN)
														{
															actual2->CantM2 = actual2->CantM2 + Cantidad;
															actual2->TipoMat = 2;
														}
														else
														{
															if (actual2->N3 == MatN)
															{
																actual2->CantM3 = actual2->CantM3 + Cantidad;
																actual2->TipoMat = 3;
															}
														}
													}

												}
											}


											temp = temp->next;
										}

										/*inicia dibujo de lista*/
										if (!myFiguraList->IsEmpty()) {
											Node1<Figura*>* temp = myFiguraList->start;

											for (int i = 0; i < myFiguraList->count; i++) {
												Figura* actual = temp->value;
												DrawNode(PnlBobeda->CreateGraphics(), actual->X, actual->Y, actual->Fila, actual->Columna, actual->Peso, actual->PesoUsado, actual->Type, actual->N1, actual->N2, actual->N3);
												temp = temp->next;
											}

										}
									}
										
								else
								{
								MessageBox::Show("Error, ingreso incorrectamente el año, valores permitidos del 1990 a 2020");
								}
							}
							else
							{
							MessageBox::Show("Error, ingreso incorrectamente el mes");
							}

						}
						else
						{
						MessageBox::Show("Error, ingreso incorrectamente el día");
						}



					}
					else
						{
						MessageBox::Show("Error, no ingreso el nombre de la persona responsable");
						}
					
				}
				else
				{
					MessageBox::Show("Aun no se ha creado ninguna Bahía");
				}
						}
						catch (Exception^ e)
						{
							MessageBox::Show("Ingreso un valor incorrecto");
							txtdia->Text = "";
							txtmes->Text = "";
							txtaño->Text = "";
							txtnombre->Text = "";
							txtCantidad->Text = "";
							
							
							
							Ts1 = 0;
							Ts2 = 0;
							Ts3 = 0;
							button5->Text = "Seleccionar";
							button5->Enabled = true;
						}
				break;
			case 3:
				try
				{


				if (Contador >= 1)
				{
			

					dd = Convert::ToInt32(txtddR->Text);
					mm = Convert::ToInt32(txtmmR->Text);
					yyyy = Convert::ToInt32(txtYYYYR->Text);
					Cantidad = Convert::ToInt32(txtCantR->Text);
					Nombre = txtNombreR->Text;
					int MatN = Mat_A_Retirar;
					ID = txtId->Text;
					if (Nombre != "")
					{
						if (dd <= 31)
						{
							if (mm <= 12)
							{
								if ((yyyy >= 1990) && (yyyy <= 2020))
								{


									if (ID != "")
									{

										String^ Fila = ID->Substring(0, 1);
										int C = Convert::ToInt32(ID->Substring(1, 1));
										String^ NFila;

										if (Fila->ToUpper() == "A")
										{
											NFila = "01";
										}
										else
										{
											if (Fila->ToUpper() == "B")
											{
												NFila = "02";
											}
											else
											{
												if (Fila->ToUpper() == "C")
												{
													NFila = "03";
												}
												else
												{
													if (Fila->ToUpper() == "D")
													{
														NFila = "04";
													}
													else
													{
														if (Fila->ToUpper() == "E")
														{
															NFila = "05";
														}
														else
														{
															if (Fila->ToUpper() == "F")
															{
																NFila = "06";
															}
															else
															{
																if (Fila->ToUpper() == "G")
																{
																	NFila = "07";
																}
																else
																{
																	if (Fila->ToUpper() == "H")
																	{
																		NFila = "08";
																	}
																	else
																	{
																		if (Fila->ToUpper() == "I")
																		{
																			NFila = "09";
																		}
																		else
																		{

																			if (Fila->ToUpper() == "J")
																			{
																				NFila = "10";
																			}
																			else
																			{
																				if (Fila->ToUpper() == "K")
																				{
																					NFila = "11";
																				}
																				else
																				{
																					if (Fila->ToUpper() == "L")
																					{
																						NFila = "12";
																					}
																					else
																					{
																						if (Fila->ToUpper() == "M")
																						{
																							NFila = "13";
																						}
																						else
																						{
																							if (Fila->ToUpper() == "N")
																							{
																								NFila = "14";
																							}
																							else
																							{
																								if (Fila->ToUpper() == "O")
																								{
																									NFila = "15";
																								}
																								else
																								{
																									if (Fila->ToUpper() == "P")
																									{
																										NFila = "16";
																									}
																									else
																									{
																										if (Fila->ToUpper() == "Q")
																										{
																											NFila = "17";
																										}
																										else
																										{
																											if (Fila->ToUpper() == "R")
																											{
																												NFila = "18";
																											}
																											else
																											{
																												if (Fila->ToUpper() == "S")
																												{
																													NFila = "19";
																												}
																												else
																												{
																													if (Fila->ToUpper() == "T")
																													{
																														NFila = "20";
																													}
																													else
																													{
																														if (Fila->ToUpper() == "U")
																														{
																															NFila = "21";
																														}
																														else
																														{
																															if (Fila->ToUpper() == "V")
																															{
																																NFila = "22";
																															}
																															else
																															{
																																if (Fila->ToUpper() == "W")
																																{
																																	NFila = "23";
																																}
																																else
																																{
																																	if (Fila->ToUpper() == "X")
																																	{
																																		NFila = "24";
																																	}
																																	else
																																	{
																																		if (Fila->ToUpper() == "Y")
																																		{
																																			NFila = "25";
																																		}
																																		else
																																		{
																																			if (Fila->ToUpper() == "Z")
																																			{
																																				NFila = "26";
																																			}
																																			else
																																			{
																																				NFila = "00";
																																				txtFila->Text = "";
																																			}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}

																			}
																		}
																	}
																}
															}
														}

													}
												}

											}

										}
										int ValMat1;
										int ValMat2;
										int ValMat3;
										int NF = Convert::ToInt32(NFila);
										Node1<Figura*>* temp = myFiguraList->start;
										for (int i = 0; i < myFiguraList->count; i++) {
											Figura* actual = temp->value;
											if ((actual->Fila == NF) && (actual->Columna == C))
											{
												if ((actual->PesoUsado - Cantidad) >= 0)
												{
													if (actual->N1 == MatN)
													{
														ValMat1 = actual->CantM1 - Cantidad;
													}
													else
													{
														if (actual->N2 == MatN)
														{
															ValMat2 = actual->CantM2 - Cantidad;
														}
														else
														{
															if (actual->N3 == MatN)
															{
																ValMat3 = actual->CantM3 - Cantidad;
															}
														}
													}
													if ((ValMat1 >= 0)&&(ValMat2 >= 0) && (ValMat3 >= 0))
													{

														
															if (actual->N1 == MatN)
															{
																actual->CantM1 = actual->CantM1 - Cantidad;
															}
															else
															{
																if (actual->N2 == MatN)
																{
																	actual->CantM2 = actual->CantM2 - Cantidad;
																}
																else
																{
																	if (actual->N3 == MatN)
																	{
																		actual->CantM3 = actual->CantM3 - Cantidad;
																	}
																}
															}

														actual->PesoUsado = actual->PesoUsado - Cantidad;
														i = myFiguraList->count;

														int Fila = actual->Fila;
														String^ Lcolum;
														if (Fila == 1)
														{
															Lcolum = "A";
														}
														if (Fila == 2)
														{
															Lcolum = "B";
														}
														if (Fila == 3)
														{
															Lcolum = "C";
														}
														if (Fila == 4)
														{
															Lcolum = "D";
														}
														if (Fila == 5)
														{
															Lcolum = "E";
														}
														if (Fila == 6)
														{
															Lcolum = "F";
														}
														if (Fila == 7)
														{
															Lcolum = "G";
														}
														if (Fila == 8)
														{
															Lcolum = "H";
														}
														if (Fila == 9)
														{
															Lcolum = "I";
														}
														if (Fila == 10)
														{
															Lcolum = "J";
														}
														if (Fila == 11)
														{
															Lcolum = "K";
														}
														if (Fila == 12)
														{
															Lcolum = "L";

														}
														if (Fila == 13)
														{
															Lcolum = "M";
														}
														if (Fila == 14)
														{
															Lcolum = "N";
														}
														if (Fila == 15)
														{
															Lcolum = "O";
														}
														if (Fila == 16)
														{
															Lcolum = "P";
														}
														if (Fila == 17)
														{
															Lcolum = "Q";
														}
														if (Fila == 18)
														{
															Lcolum = "R";
														}
														if (Fila == 19)
														{
															Lcolum = "S";
														}
														if (Fila == 20)
														{
															Lcolum = "T";
														}
														if (Fila == 21)
														{
															Lcolum = "U";
														}
														if (Fila == 22)
														{
															Lcolum = "V";
														}
														if (Fila == 23)
														{
															Lcolum = "W";

														}
														if (Fila == 24)
														{
															Lcolum = "X";
														}
														if (Fila == 25)
														{
															Lcolum = "Y";
														}
														if (Fila == 26)
														{
															Lcolum = "Z";
														}
														String^ Materiales;
														int N1 = actual->N1;
														int N2 = actual->N2;
														int N3 = actual->N3;
														if (N2 == 0)
														{
															Materiales = Convert::ToString(N1);
														}
														else
														{
															if (N3 == 0)
															{
																if (N1 < N2)
																{
																	Materiales = N1 + "," + N2;
																}
																else
																{
																	Materiales = N2 + "," + N1;
																}
															}
															else
															{
																if (N1 < N2)
																{
																	if (N2 < N3)
																	{
																		Materiales = N1 + "," + N2 + "," + N3;
																	}
																	else
																	{
																		if (N1 < N3)
																		{
																			Materiales = N1 + "," + N3 + "," + N2;
																		}
																		else
																		{
																			Materiales = N3 + "," + N1 + "," + N2;
																		}

																	}
																}
																else
																{
																	if (N2 < N3)
																	{
																		if (N1 < N3)
																		{
																			Materiales = N2 + "," + N1 + "," + N3;
																		}
																		else
																		{
																			Materiales = N2 + "," + N3 + "," + N1;
																		}
																	}
																	else
																	{
																		if (N1 < N3)
																		{
																			Materiales = N3 + "," + N2 + "," + N1;
																		}

																	}

																}
															}
														}

														Retiros = Retiros + "-->" + " Se ha Retirado:" + Cantidad + " en la Bahía con ID: " + Lcolum + actual->Columna + " Con material del tipo: " + Materiales + " retirado el:" + dd + "/" + mm + "/" + yyyy + " por la persona: " + Nombre + "<--";
													}

												}
											}
											temp = temp->next;
										}



									}
									else
									{
									int ValMat1;
									int ValMat2;
									int ValMat3;
										Node1<Figura*>* temp = myFiguraList->start;
										for (int i = 0; i < myFiguraList->count; i++) {
											Figura* actual = temp->value;
											if ((actual->N1 == MatN) || (actual->N2 == MatN) || (actual->N3 == MatN))
											{
												if ((actual->PesoUsado - Cantidad) >= 0)
												{
													if (actual->N1 == MatN)
													{
														ValMat1 = actual->CantM1 - Cantidad;
													}
													else
													{
														if (actual->N2 == MatN)
														{
															ValMat2 = actual->CantM2 - Cantidad;
														}
														else
														{
															if (actual->N3 == MatN)
															{
																ValMat3 = actual->CantM3 - Cantidad;
															}
														}
													}

													if ((ValMat1 >= 0) && (ValMat2 >= 0) && (ValMat3 >= 0))
													{


														if (actual->N1 == MatN)
														{
															actual->CantM1 = actual->CantM1 - Cantidad;
														}
														else
														{
															if (actual->N2 == MatN)
															{
																actual->CantM2 = actual->CantM2 - Cantidad;
															}
															else
															{
																if (actual->N3 == MatN)
																{
																	actual->CantM3 = actual->CantM3 - Cantidad;
																}
															}
														}

														actual->PesoUsado = actual->PesoUsado - Cantidad;
														i = myFiguraList->count;

														int Fila = actual->Fila;
														String^ Lcolum;
														if (Fila == 1)
														{
															Lcolum = "A";
														}
														if (Fila == 2)
														{
															Lcolum = "B";
														}
														if (Fila == 3)
														{
															Lcolum = "C";
														}
														if (Fila == 4)
														{
															Lcolum = "D";
														}
														if (Fila == 5)
														{
															Lcolum = "E";
														}
														if (Fila == 6)
														{
															Lcolum = "F";
														}
														if (Fila == 7)
														{
															Lcolum = "G";
														}
														if (Fila == 8)
														{
															Lcolum = "H";
														}
														if (Fila == 9)
														{
															Lcolum = "I";
														}
														if (Fila == 10)
														{
															Lcolum = "J";
														}
														if (Fila == 11)
														{
															Lcolum = "K";
														}
														if (Fila == 12)
														{
															Lcolum = "L";

														}
														if (Fila == 13)
														{
															Lcolum = "M";
														}
														if (Fila == 14)
														{
															Lcolum = "N";
														}
														if (Fila == 15)
														{
															Lcolum = "O";
														}
														if (Fila == 16)
														{
															Lcolum = "P";
														}
														if (Fila == 17)
														{
															Lcolum = "Q";
														}
														if (Fila == 18)
														{
															Lcolum = "R";
														}
														if (Fila == 19)
														{
															Lcolum = "S";
														}
														if (Fila == 20)
														{
															Lcolum = "T";
														}
														if (Fila == 21)
														{
															Lcolum = "U";
														}
														if (Fila == 22)
														{
															Lcolum = "V";
														}
														if (Fila == 23)
														{
															Lcolum = "W";

														}
														if (Fila == 24)
														{
															Lcolum = "X";
														}
														if (Fila == 25)
														{
															Lcolum = "Y";
														}
														if (Fila == 26)
														{
															Lcolum = "Z";
														}
														String^ Materiales;
														int N1 = actual->N1;
														int N2 = actual->N2;
														int N3 = actual->N3;
														if (N2 == 0)
														{
															Materiales = Convert::ToString(N1);
														}
														else
														{
															if (N3 == 0)
															{
																if (N1 < N2)
																{
																	Materiales = N1 + "," + N2;
																}
																else
																{
																	Materiales = N2 + "," + N1;
																}
															}
															else
															{
																if (N1 < N2)
																{
																	if (N2 < N3)
																	{
																		Materiales = N1 + "," + N2 + "," + N3;
																	}
																	else
																	{
																		if (N1 < N3)
																		{
																			Materiales = N1 + "," + N3 + "," + N2;
																		}
																		else
																		{
																			Materiales = N3 + "," + N1 + "," + N2;
																		}

																	}
																}
																else
																{
																	if (N2 < N3)
																	{
																		if (N1 < N3)
																		{
																			Materiales = N2 + "," + N1 + "," + N3;
																		}
																		else
																		{
																			Materiales = N2 + "," + N3 + "," + N1;
																		}
																	}
																	else
																	{
																		if (N1 < N3)
																		{
																			Materiales = N3 + "," + N2 + "," + N1;
																		}

																	}

																}
															}
														}

														Retiros = Retiros + "-->" + " Se ha Retirado:" + Cantidad + " en la Bahía con ID: " + Lcolum + actual->Columna + " Con material del tipo: " + Materiales + " retirado el:" + dd + "/" + mm + "/" + yyyy + " por la persona: " + Nombre + "<--";
													}
												}


											}


											temp = temp->next;
										}
									}
								}
								else
								{
								MessageBox::Show("Error, ingreso incorrectamente el año, valores permitidos del 1990 a 2020");
								}
							}
							else
							{
							MessageBox::Show("Error, ingreso incorrectamente el mes");
							}

						}
						else
						{
						MessageBox::Show("Error, ingreso incorrectamente el día");
						}

					

					}
					else
						{
							MessageBox::Show("Error, no ingreso el nombre de la persona responsable");
						}

						

					if (!myFiguraList->IsEmpty()) {
						Node1<Figura*>* temp = myFiguraList->start;

						for (int i = 0; i < myFiguraList->count; i++) {
							Figura* actual = temp->value;
							DrawNode(PnlBobeda->CreateGraphics(), actual->X, actual->Y, actual->Fila, actual->Columna, actual->Peso, actual->PesoUsado, actual->Type, actual->N1, actual->N2, actual->N3);
							temp = temp->next;
						}

					}
				

				}
				else
				{
				MessageBox::Show("Aun no se ha creado ninguna Bahía");
				}
						}
						catch (Exception^e)
						{
							if (txtCantR->Text == "")
							{
								MessageBox::Show("Error, no ingreso la cantidad que desea retirar");
							}
							else
							{
								MessageBox::Show("Error, no ingreso la fecha correctamente");
							}

							txtId->Text = "";
							txtddR->Text = "";
							txtmmR->Text = "";
							txtYYYYR->Text = "";
							txtNombreR->Text = "";
							txtCantR->Text = "";
						}
				break;


			case 4:
				ID = txtID4->Text;
				
				if (ID != "")
				{
					String^ Fila = ID->Substring(0,1);
					int C = Convert::ToInt32(ID->Substring(1,1));
					String^ NFila;

					if (Fila->ToUpper() == "A")
					{
						NFila = "01";
					}
					else
					{
						if (Fila->ToUpper() == "B")
						{
							NFila = "02";
						}
						else
						{
							if (Fila->ToUpper() == "C")
							{
								NFila = "03";
							}
							else
							{
								if (Fila->ToUpper() == "D")
								{
									NFila = "04";
								}
								else
								{
									if (Fila->ToUpper() == "E")
									{
										NFila = "05";
									}
									else
									{
										if (Fila->ToUpper() == "F")
										{
											NFila = "06";
										}
										else
										{
											if (Fila->ToUpper() == "G")
											{
												NFila = "07";
											}
											else
											{
												if (Fila->ToUpper() == "H")
												{
													NFila = "08";
												}
												else
												{
													if (Fila->ToUpper() == "I")
													{
														NFila = "09";
													}
													else
													{

														if (Fila->ToUpper() == "J")
														{
															NFila = "10";
														}
														else
														{
															if (Fila->ToUpper() == "K")
															{
																NFila = "11";
															}
															else
															{
																if (Fila->ToUpper() == "L")
																{
																	NFila = "12";
																}
																else
																{
																	if (Fila->ToUpper() == "M")
																	{
																		NFila = "13";
																	}
																	else
																	{
																		if (Fila->ToUpper() == "N")
																		{
																			NFila = "14";
																		}
																		else
																		{
																			if (Fila->ToUpper() == "O")
																			{
																				NFila = "15";
																			}
																			else
																			{
																				if (Fila->ToUpper() == "P")
																				{
																					NFila = "16";
																				}
																				else
																				{
																					if (Fila->ToUpper() == "Q")
																					{
																						NFila = "17";
																					}
																					else
																					{
																						if (Fila->ToUpper() == "R")
																						{
																							NFila = "18";
																						}
																						else
																						{
																							if (Fila->ToUpper() == "S")
																							{
																								NFila = "19";
																							}
																							else
																							{
																								if (Fila->ToUpper() == "T")
																								{
																									NFila = "20";
																								}
																								else
																								{
																									if (Fila->ToUpper() == "U")
																									{
																										NFila = "21";
																									}
																									else
																									{
																										if (Fila->ToUpper() == "V")
																										{
																											NFila = "22";
																										}
																										else
																										{
																											if (Fila->ToUpper() == "W")
																											{
																												NFila = "23";
																											}
																											else
																											{
																												if (Fila->ToUpper() == "X")
																												{
																													NFila = "24";
																												}
																												else
																												{
																													if (Fila->ToUpper() == "Y")
																													{
																														NFila = "25";
																													}
																													else
																													{
																														if (Fila->ToUpper() == "Z")
																														{
																															NFila = "26";
																														}
																														else
																														{
																															NFila = "00";
																															txtFila->Text = "";
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}

														}
													}
												}
											}
										}
									}

								}
							}

						}

					}

					int NF = Convert::ToInt32(NFila);
					Node1<Figura*>* temp = myFiguraList->start;
					
					for (int i = 0; i < myFiguraList->count; i++) {
						Figura* actual = temp->value;
						
						if ((actual->Fila == NF) && (actual->Columna == C))
						{
							if (actual->PesoUsado == 0)
							{
								actual->PesoUsado = actual->PesoUsado + Cantidad;
								i = myFiguraList->count;

								int Fila = actual->Fila;
								String^ Lcolum;
								if (Fila == 1)
								{
									Lcolum = "A";
								}
								if (Fila == 2)
								{
									Lcolum = "B";
								}
								if (Fila == 3)
								{
									Lcolum = "C";
								}
								if (Fila == 4)
								{
									Lcolum = "D";
								}
								if (Fila == 5)
								{
									Lcolum = "E";
								}
								if (Fila == 6)
								{
									Lcolum = "F";
								}
								if (Fila == 7)
								{
									Lcolum = "G";
								}
								if (Fila == 8)
								{
									Lcolum = "H";
								}
								if (Fila == 9)
								{
									Lcolum = "I";
								}
								if (Fila == 10)
								{
									Lcolum = "J";
								}
								if (Fila == 11)
								{
									Lcolum = "K";
								}
								if (Fila == 12)
								{
									Lcolum = "L";

								}
								if (Fila == 13)
								{
									Lcolum = "M";
								}
								if (Fila == 14)
								{
									Lcolum = "N";
								}
								if (Fila == 15)
								{
									Lcolum = "O";
								}
								if (Fila == 16)
								{
									Lcolum = "P";
								}
								if (Fila == 17)
								{
									Lcolum = "Q";
								}
								if (Fila == 18)
								{
									Lcolum = "R";
								}
								if (Fila == 19)
								{
									Lcolum = "S";
								}
								if (Fila == 20)
								{
									Lcolum = "T";
								}
								if (Fila == 21)
								{
									Lcolum = "U";
								}
								if (Fila == 22)
								{
									Lcolum = "V";
								}
								if (Fila == 23)
								{
									Lcolum = "W";

								}
								if (Fila == 24)
								{
									Lcolum = "X";
								}
								if (Fila == 25)
								{
									Lcolum = "Y";
								}
								if (Fila == 26)
								{
									Lcolum = "Z";
								}
								String^ Materiales;
								int N1 = actual->N1;
								int N2 = actual->N2;
								int N3 = actual->N3;
								if (N2 == 0)
								{
									Materiales = Convert::ToString(N1);
								}
								else
								{
									if (N3 == 0)
									{
										if (N1 < N2)
										{
											Materiales = N1 + "," + N2;
										}
										else
										{
											Materiales = N2 + "," + N1;
										}
									}
									else
									{
										if (N1 < N2)
										{
											if (N2 < N3)
											{
												Materiales = N1 + "," + N2 + "," + N3;
											}
											else
											{
												if (N1 < N3)
												{
													Materiales = N1 + "," + N3 + "," + N2;
												}
												else
												{
													Materiales = N3 + "," + N1 + "," + N2;
												}

											}
										}
										else
										{
											if (N2 < N3)
											{
												if (N1 < N3)
												{
													Materiales = N2 + "," + N1 + "," + N3;
												}
												else
												{
													Materiales = N2 + "," + N3 + "," + N1;
												}
											}
											else
											{
												if (N1 < N3)
												{
													Materiales = N3 + "," + N2 + "," + N1;
												}

											}

										}
									}
								}
																																							
								Movimientos = Movimientos + "-->"  + "La Bahía con ID: " + Lcolum + actual->Columna + "  se ha eiminado con exito" + "<--\t \t \t \t \t \t ";
								Node1<Figura*>* temp = myFiguraList->Extract(actual->Posicion);
								Contador--;
							}
							else
							{
								if (Contador > 1)
								{
									int MatN1 = actual->N1;
									int MatN2 = actual->N2;
									int MatN3 = actual->N3;
									int Cantidad = actual->PesoUsado;

									Node1<Figura*>* temp2 = myFiguraList->start;
									for (int i = 0; i < myFiguraList->count; i++) {
										if (temp != temp2)
										{
											Figura* actual2 = temp2->value;
											if ((actual2->N1 == MatN1) || (actual2->N2 == MatN2) || (actual2->N3 == MatN3))
											{
												if ((actual2->Peso >= (actual2->PesoUsado + Cantidad)))
												{


													if (actual2->N1 == MatN1)
													{
														if (MatN1!=0)
														{
															actual2->CantM1 = actual2->CantM1 + Cantidad;
														}
														
													}
													
														if (actual2->N2 == MatN2)
														{
															if (MatN2 != 0)
															{
																actual2->CantM2 = actual2->CantM2 + Cantidad;
															}
															
														}
														
															if (actual2->N3 == MatN3)
															{
																if (MatN3 != 0)
																{
																	actual2->CantM3 = actual2->CantM3 + Cantidad;
																}
															
															}
														
													


													actual2->PesoUsado = actual2->PesoUsado + Cantidad;
													i = myFiguraList->count;

													int Fila = actual2->Fila;
													String^ Lcolum;
													if (Fila == 1)
													{
														Lcolum = "A";
													}
													if (Fila == 2)
													{
														Lcolum = "B";
													}
													if (Fila == 3)
													{
														Lcolum = "C";
													}
													if (Fila == 4)
													{
														Lcolum = "D";
													}
													if (Fila == 5)
													{
														Lcolum = "E";
													}
													if (Fila == 6)
													{
														Lcolum = "F";
													}
													if (Fila == 7)
													{
														Lcolum = "G";
													}
													if (Fila == 8)
													{
														Lcolum = "H";
													}
													if (Fila == 9)
													{
														Lcolum = "I";
													}
													if (Fila == 10)
													{
														Lcolum = "J";
													}
													if (Fila == 11)
													{
														Lcolum = "K";
													}
													if (Fila == 12)
													{
														Lcolum = "L";

													}
													if (Fila == 13)
													{
														Lcolum = "M";
													}
													if (Fila == 14)
													{
														Lcolum = "N";
													}
													if (Fila == 15)
													{
														Lcolum = "O";
													}
													if (Fila == 16)
													{
														Lcolum = "P";
													}
													if (Fila == 17)
													{
														Lcolum = "Q";
													}
													if (Fila == 18)
													{
														Lcolum = "R";
													}
													if (Fila == 19)
													{
														Lcolum = "S";
													}
													if (Fila == 20)
													{
														Lcolum = "T";
													}
													if (Fila == 21)
													{
														Lcolum = "U";
													}
													if (Fila == 22)
													{
														Lcolum = "V";
													}
													if (Fila == 23)
													{
														Lcolum = "W";

													}
													if (Fila == 24)
													{
														Lcolum = "X";
													}
													if (Fila == 25)
													{
														Lcolum = "Y";
													}
													if (Fila == 26)
													{
														Lcolum = "Z";
													}
													String^ Materiales;
													int N1 = actual2->N1;
													int N2 = actual2->N2;
													int N3 = actual2->N3;
													if (N2 == 0)
													{
														Materiales = Convert::ToString(N1);
													}
													else
													{
														if (N3 == 0)
														{
															if (N1 < N2)
															{
																Materiales = N1 + "," + N2;
															}
															else
															{
																Materiales = N2 + "," + N1;
															}
														}
														else
														{
															if (N1 < N2)
															{
																if (N2 < N3)
																{
																	Materiales = N1 + "," + N2 + "," + N3;
																}
																else
																{
																	if (N1 < N3)
																	{
																		Materiales = N1 + "," + N3 + "," + N2;
																	}
																	else
																	{
																		Materiales = N3 + "," + N1 + "," + N2;
																	}

																}
															}
															else
															{
																if (N2 < N3)
																{
																	if (N1 < N3)
																	{
																		Materiales = N2 + "," + N1 + "," + N3;
																	}
																	else
																	{
																		Materiales = N2 + "," + N3 + "," + N1;
																	}
																}
																else
																{
																	if (N1 < N3)
																	{
																		Materiales = N3 + "," + N2 + "," + N1;
																	}

																}

															}
														}
													}

													Movimientos = Movimientos + "-->" + " Se ha ingresado:" + Cantidad + " en la Bahía con ID: " + Lcolum + actual2->Columna + " Con material del tipo: " + Materiales + "<-- \t \t";
													Node1<Figura*>* temp = myFiguraList->Extract(actual->Posicion);
													Contador--;
												}


											}

										}
										

										temp2 = temp2->next;
									}
								}
								else
								{
									MessageBox::Show("Error, no es posible realizar elimnar la bahía ya que solo existe una y tiene contenido");
								}
							}
						}
						temp = temp->next;
					}

			
					PnlBobeda->Refresh();

					if (!myFiguraList->IsEmpty()) {
						Node1<Figura*>* temp = myFiguraList->start;

						for (int i = 0; i < myFiguraList->count; i++) {
							Figura* actual = temp->value;
							DrawNode(PnlBobeda->CreateGraphics(), actual->X, actual->Y, actual->Fila, actual->Columna, actual->Peso, actual->PesoUsado, actual->Type, actual->N1, actual->N2, actual->N3);
							temp = temp->next;
						}

					}

				}
				txtID4->Text = "";
				break;

		default:
			MessageBox::Show("No ha seleccionado ningún valor");
			break;
		}
	}
		   int Accion = 0;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		gbBodegas->Visible = false;
		switch (cmbAccion->SelectedIndex)
		{
		case 0:
			gb1->Visible = true;
			gb2->Visible = false;
			gb3->Visible = false;
			gb4->Visible = false;
			Accion = 1;

			break;
		case 1:
			gb1->Visible = false;
			gb2->Visible = true;
			gb3->Visible = false;
			gb4->Visible = false;
			Accion = 2;
			break;
		case 2:
			gb1->Visible = false;
			gb2->Visible = false;
			gb3->Visible = true;
			gb4->Visible = false;
			Accion = 3;
			break;
		case 3:
			gb1->Visible = false;
			gb2->Visible = false;
			gb3->Visible = false;
			gb4->Visible = true;
			Accion = 4;
			break;
		default:
			break;
		}
	}
		   bool EsNumero(String^ valor)
		   {
			   try
			   {

				   int numero = int::Parse(valor);
				   return true;
			   }
			   catch (Exception^ e)
			   {
				   return false;
			   }

		   }
		   void CambiarLetraAnumero() {

			   String^ Fila = txtFila->Text;

			   if (Fila->ToUpper() == "A")
			   {
				   NFila = "01";
			   }
			   else
			   {
				   if (Fila->ToUpper() == "B")
				   {
					   NFila = "02";
				   }
				   else
				   {
					   if (Fila->ToUpper() == "C")
					   {
						   NFila = "03";
					   }
					   else
					   {
						   if (Fila->ToUpper() == "D")
						   {
							   NFila = "04";
						   }
						   else
						   {
							   if (Fila->ToUpper() == "E")
							   {
								   NFila = "05";
							   }
							   else
							   {
								   if (Fila->ToUpper() == "F")
								   {
									   NFila = "06";
								   }
								   else
								   {
									   if (Fila->ToUpper() == "G")
									   {
										   NFila = "07";
									   }
									   else
									   {
										   if (Fila->ToUpper() == "H")
										   {
											   NFila = "08";
										   }
										   else
										   {
											   if (Fila->ToUpper() == "I")
											   {
												   NFila = "09";
											   }
											   else
											   {

												   if (Fila->ToUpper() == "J")
												   {
													   NFila = "10";
												   }
												   else
												   {
													   if (Fila->ToUpper() == "K")
													   {
														   NFila = "11";
													   }
													   else
													   {
														   if (Fila->ToUpper() == "L")
														   {
															   NFila = "12";
														   }
														   else
														   {
															   if (Fila->ToUpper() == "M")
															   {
																   NFila = "13";
															   }
															   else
															   {
																   if (Fila->ToUpper() == "N")
																   {
																	   NFila = "14";
																   }
																   else
																   {
																	   if (Fila->ToUpper() == "O")
																	   {
																		   NFila = "15";
																	   }
																	   else
																	   {
																		   if (Fila->ToUpper() == "P")
																		   {
																			   NFila = "16";
																		   }
																		   else
																		   {
																			   if (Fila->ToUpper() == "Q")
																			   {
																				   NFila = "17";
																			   }
																			   else
																			   {
																				   if (Fila->ToUpper() == "R")
																				   {
																					   NFila = "18";
																				   }
																				   else
																				   {
																					   if (Fila->ToUpper() == "S")
																					   {
																						   NFila = "19";
																					   }
																					   else
																					   {
																						   if (Fila->ToUpper() == "T")
																						   {
																							   NFila = "20";
																						   }
																						   else
																						   {
																							   if (Fila->ToUpper() == "U")
																							   {
																								   NFila = "21";
																							   }
																							   else
																							   {
																								   if (Fila->ToUpper() == "V")
																								   {
																									   NFila = "22";
																								   }
																								   else
																								   {
																									   if (Fila->ToUpper() == "W")
																									   {
																										   NFila = "23";
																									   }
																									   else
																									   {
																										   if (Fila->ToUpper() == "X")
																										   {
																											   NFila = "24";
																										   }
																										   else
																										   {
																											   if (Fila->ToUpper() == "Y")
																											   {
																												   NFila = "25";
																											   }
																											   else
																											   {
																												   if (Fila->ToUpper() == "Z")
																												   {
																													   NFila = "26";
																												   }
																												   else
																												   {
																													   NFila = "00";
																													   txtFila->Text = "";
																												   }
																											   }
																										   }
																									   }
																								   }
																							   }
																						   }
																					   }
																				   }
																			   }
																		   }
																	   }
																   }
															   }
														   }
													   }

												   }
											   }
										   }
									   }
								   }
							   }

						   }
					   }

				   }

			   }


		   }
		   String^ T1 = "";

		   	


	private: System::Void Grid_Load(System::Object^ sender, System::EventArgs^ e) {
		Accion = 0;
		gb1->Visible = false;
		gb2->Visible = false;
		gb3->Visible = false;
		gb4->Visible = false;
		gbBodegas->Visible = false;
		gbPanel->Visible = false;
		if (lblCBoNB->Text == "BodegaCargada")
		{
			gbPanel->Visible = true;
			String^ Bodega = btnBodegas->Text;
			StreamReader^ LeerBodega = gcnew StreamReader(Bodega + ".txt");
			Contador = Convert::ToInt32(LeerBodega->ReadLine());
			for (int x = 0; x < Contador; x++)
			{
				Node1<Figura*>* temp = myFiguraList->start;
				Figura* newCuadro = new Cuadro();
				newCuadro->N1 = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->N2 = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->N3 = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->Y = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->X = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->Fila = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->Columna = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->Peso = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->Codigo = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->PesoUsado = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->Type = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->Mat = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->Posicion = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->CantM1 = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->CantM2 = Convert::ToInt32(LeerBodega->ReadLine());
				newCuadro->CantM3 = Convert::ToInt32(LeerBodega->ReadLine());

				myFiguraList->InsertAtEnd(newCuadro);
				
			}
			Movimientos = LeerBodega->ReadLine();
			Ingresos = LeerBodega->ReadLine();
			Retiros = LeerBodega->ReadLine();
			
			LeerBodega->Close();
	
		}



	}


	private: System::Void cmbAccion_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   int Cont = 1;
		   int Ts1 = 0;
		   int Ts2 = 0;
		   int Ts3 = 0;
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		if (Cont <= 3)
		{

			switch (M1->SelectedIndex)
			{
			case 0:
				if (Ts1 == 0)
				{
					if (Cont == 1)
					{
						T1 = T1 + "1";
					}
					else
					{
						if (Cont >= 2)
						{
							T1 = T1 + ",1";
						}

					}
					Ts1 = 1;
					Cont++;
				}
				break;
			case 1:
				if (Ts2 == 0)
				{
					if (Cont == 1)
					{
						T1 = T1 + "2";
					}
					else
					{
						if (Cont >= 2)
						{
							T1 = T1 + ",2";
						}

					}
				
					Ts2 = 1;
					Cont++;
				}
				break;
			case 2:
				if (Ts3 == 0)
				{
					if (Cont == 1)
					{
						T1 = T1 + "3";
					}
					else
					{
						if (Cont >= 2)
						{
							T1 = T1 + ",3";
						}

					}
					Ts3 = 1;
					Cont++;
				}
				break;
			default:
				break;
			}


			if (Cont <= 3)
			{
				button5->Text = "Seleccionar " + Cont;
			}
			else
			{
				button5->Text = "Seleccionar";
				button5->Enabled = false;
			}


		}



	}
	

		   void DrawNode(Graphics^ canvas, int posx, int posy, int Fila, int Columna, int Peso, int PesoUsado, int type, int N1, int N2, int N3) {
			   Brush^ brush = gcnew SolidBrush(Color::SkyBlue);
			   Brush^ brushstring = gcnew SolidBrush(Color::White);
			   System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 8, FontStyle::Bold);

			   switch (type)
			   {
			   case 1: {
				   
					   String^ Lcolum;
					   if (Fila == 1)
					   {
						   Lcolum = "A";
					   }
					   if (Fila == 2)
					   {
						   Lcolum = "B";
					   }
					   if (Fila == 3)
					   {
						   Lcolum = "C";
					   }
					   if (Fila == 4)
					   {
						   Lcolum = "D";
					   }
					   if (Fila == 5)
					   {
						   Lcolum = "E";
					   }
					   if (Fila == 6)
					   {
						   Lcolum = "F";
					   }
					   if (Fila == 7)
					   {
						   Lcolum = "G";
					   }
					   if (Fila == 8)
					   {
						   Lcolum = "H";
					   }
					   if (Fila == 9)
					   {
						   Lcolum = "I";
					   }
					   if (Fila == 10)
					   {
						   Lcolum = "J";
					   }
					   if (Fila == 11)
					   {
						   Lcolum = "K";
					   }
					   if (Fila == 12)
					   {
						   Lcolum = "L";

					   }
					   if (Fila == 13)
					   {
						   Lcolum = "M";
					   }
					   if (Fila == 14)
					   {
						   Lcolum = "N";
					   }
					   if (Fila == 15)
					   {
						   Lcolum = "O";
					   }
					   if (Fila == 16)
					   {
						   Lcolum = "P";
					   }
					   if (Fila == 17)
					   {
						   Lcolum = "Q";
					   }
					   if (Fila == 18)
					   {
						   Lcolum = "R";
					   }
					   if (Fila == 19)
					   {
						   Lcolum = "S";
					   }
					   if (Fila == 20)
					   {
						   Lcolum = "T";
					   }
					   if (Fila == 21)
					   {
						   Lcolum = "U";
					   }
					   if (Fila == 22)
					   {
						   Lcolum = "V";
					   }
					   if (Fila == 23)
					   {
						   Lcolum = "W";

					   }
					   if (Fila == 24)
					   {
						   Lcolum = "X";
					   }
					   if (Fila == 25)
					   {
						   Lcolum = "Y";
					   }
					   if (Fila == 26)
					   {
						   Lcolum = "Z";
					   }
				   

				   if (N2 == 0)
				   {
					   Materiales = Convert::ToString(N1);
				   }
				   else
				   {
					   if (N3 == 0)
					   {
						   if (N1 < N2)
						   {
							   Materiales = N1 + "," + N2;
						   }
						   else
						   {
							   Materiales = N2 + "," + N1;
						   }
					   }
					   else
					   {
						   if (N1 < N2)
						   {
							   if (N2 < N3)
							   {
								   Materiales = N1 + "," + N2 + "," + N3;
							   }
							   else
							   {
								   if (N1 < N3)
								   {
									   Materiales = N1 + "," + N3 + "," + N2;
								   }
								   else
								   {
									   Materiales = N3 + "," + N1 + "," + N2;
								   }
								  
							   }
						   }
						   else
						   {
							   if (N2 < N3)
							   {
								   if (N1 < N3)
								   {
									   Materiales = N2 + "," + N1 + "," + N3;
								   }
								   else
								   {
									   Materiales = N2 + "," + N3 + "," + N1;
								   }
							   }
							   else
							   {
								   if (N1 < N3)
								   {
									   Materiales = N3 + "," + N2 + "," + N1;
								   }

							   }

						   }
					   }
				   }
				  
				   canvas->FillRectangle(brush, RectangleF(posx, posy, 160, 120));

				   array<String^>^ cadena2;
				   delimitador = delimitador_string->ToCharArray();
				   cadena2 = Materiales->Split(delimitador);

				   canvas->DrawString("ID: " + Lcolum + Columna, fuente, brushstring, posx + 1, posy + 5);
				   canvas->DrawString("Material: " + Materiales, fuente, brushstring, posx + 1, posy + 20);
				   if (cadena2->Length == 3)
				   {
					   Tipo1 = cadena2[0];
					   Tipo2 = cadena2[1];
					   Tipo3 = cadena2[2];
					   canvas->DrawString("Unidades: (Tipo :" + Tipo1 + ", Qyt: " + Tipo1A + " )", fuente, brushstring, posx + 3, posy + 35);
					   canvas->DrawString("          (Tipo :" + Tipo2 + ", Qyt: " + Tipo2A + " )", fuente, brushstring, posx + 4, posy + 50);
					   canvas->DrawString("          (Tipo :" + Tipo3 + ", Qyt: " + Tipo3A + " )", fuente, brushstring, posx + 5, posy + 65);
					   canvas->DrawString("Peso Max: " + Peso, fuente, brushstring, posx + 1, posy + 80);
					   canvas->DrawString("Peso Utilizado: " + PesoUsado, fuente, brushstring, posx + 1, posy + 95);
				   }
				   else
				   {
					   if (cadena2->Length == 2)
					   {
						   Tipo1 = cadena2[0];
						   Tipo2 = cadena2[1];
						   canvas->DrawString("Unidades: (Tipo :" + Tipo1 + ", Qyt: " + Tipo1A + " )", fuente, brushstring, posx + 3, posy + 35);
						   canvas->DrawString("          (Tipo :" + Tipo2 + ", Qyt: " + Tipo2A + " )", fuente, brushstring, posx + 4, posy + 50);
						   canvas->DrawString("Peso Max: " + Peso, fuente, brushstring, posx + 1, posy + 65);
						   canvas->DrawString("Peso Utilizado: " + PesoUsado, fuente, brushstring, posx + 1, posy + 80);
					   }
					   else
					   {
						   Tipo1 = cadena2[0];
						   canvas->DrawString("Unidades: (Tipo :" + Tipo1 + ", Qyt: " + Tipo1A + " )", fuente, brushstring, posx + 1, posy + 35);
						   canvas->DrawString("Peso Max: " + Peso, fuente, brushstring, posx + 1, posy + 50);
						   canvas->DrawString("Peso Utilizado: " + PesoUsado, fuente, brushstring, posx + 1, posy + 65);
					   }
				   }


			   }break;
			   case 2: {
	


			   }break;

			   default:
				   break;
			   }
		   
	


			  

			   

		   }
		   String^ Tipo1;
		   String^ Tipo2;
		   String^ Tipo3;
		   String^ Tipo1A = "0";
		   String^ Tipo2A = "0";
		   String^ Tipo3A = "0";
	
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}


	   int ValC;
	   int ValF;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	gbBodegas->Visible = false;
	gbInventario->Visible = true;
}
	   int Mat_A_Ingresar;
	   int Mat_A_Retirar;

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (M2->SelectedIndex)
	{
	case 0:
		Mat_A_Ingresar = 1;
		break;
	case 1:
		Mat_A_Ingresar = 2;
		break;
	case 2:
		Mat_A_Ingresar = 3;
		break;
	default:
		break;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (M3->SelectedIndex)
	{
	case 0:
		Mat_A_Retirar = 1;
		break;
	case 1:
		Mat_A_Retirar = 2;
		break;
	case 2:
		Mat_A_Retirar = 3;
		break;
	default:
		break;
	}
}
	   String^ Movimientos;
	   String^ Ingresos;
	   String^ Retiros;
private: System::Void btnBodegas_Click(System::Object^ sender, System::EventArgs^ e) {
	gbBodegas->Visible = true;
	rtb1->Text = Ingresos;
	rtb2->Text = Retiros;
	rtb3->Text = Movimientos;
	
}
private: System::Void btnR_Click(System::Object^ sender, System::EventArgs^ e) {

	gbBodegas->Visible = false;

	PnlBobeda->Refresh();

	if (!myFiguraList->IsEmpty()) {
		Node1<Figura*>* temp = myFiguraList->start;

		for (int i = 0; i < myFiguraList->count; i++) {
			Figura* actual = temp->value;
			DrawNode(PnlBobeda->CreateGraphics(), actual->X, actual->Y, actual->Fila, actual->Columna, actual->Peso, actual->PesoUsado, actual->Type, actual->N1, actual->N2, actual->N3);
			temp = temp->next;
		}

	}
}
private: System::Void gb3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	String^ Bodega = btnBodegas->Text;

	StreamWriter^ NombresBodegas = gcnew StreamWriter("Bodegas.txt", true);
	NombresBodegas->WriteLine(Bodega);
	NombresBodegas->Close();

	
	StreamWriter^ GuardarBodega = gcnew StreamWriter(Bodega+".txt");


	GuardarBodega->WriteLine(Contador);
	Node1<Figura*>* temp = myFiguraList->start;
	
	for (int i = 0; i < myFiguraList->count; i++) {

		Figura* actual = temp->value;

			GuardarBodega->WriteLine(actual->N1);
			GuardarBodega->WriteLine(actual->N2);
			GuardarBodega->WriteLine(actual->N3);
			GuardarBodega->WriteLine(actual->Y);
			GuardarBodega->WriteLine(actual->X);
			GuardarBodega->WriteLine(actual->Fila);
			GuardarBodega->WriteLine(actual->Columna);
			GuardarBodega->WriteLine(actual->Peso);
			GuardarBodega->WriteLine(actual->Codigo);
			GuardarBodega->WriteLine(actual->PesoUsado);
			GuardarBodega->WriteLine(actual->Type);
			GuardarBodega->WriteLine(actual->Mat);
			GuardarBodega->WriteLine(actual->Posicion);
			GuardarBodega->WriteLine(actual->CantM1);
			GuardarBodega->WriteLine(actual->CantM2);
			GuardarBodega->WriteLine(actual->CantM3);

		

		temp = temp->next;
	}
	GuardarBodega->WriteLine(Movimientos);
	GuardarBodega->WriteLine(Ingresos);
	GuardarBodega->WriteLine(Retiros);
	GuardarBodega->Close();
}
private: System::Void btnCargar_Click(System::Object^ sender, System::EventArgs^ e) {
	gbPanel->Visible = false;
	PnlBobeda->Refresh();
	/*inicia dibujo de lista*/
	if (!myFiguraList->IsEmpty()) {
		Node1<Figura*>* temp = myFiguraList->start;

		for (int i = 0; i < myFiguraList->count; i++) {
			Figura* actual = temp->value;
			DrawNode(PnlBobeda->CreateGraphics(), actual->X, actual->Y, actual->Fila, actual->Columna, actual->Peso, actual->PesoUsado, actual->Type, actual->N1, actual->N2, actual->N3);
			temp = temp->next;
		}

	}


}
private: System::Void gbPanel_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	gbInventario->Visible = false;
	PnlBobeda->Refresh();

	if (!myFiguraList->IsEmpty()) {
		Node1<Figura*>* temp = myFiguraList->start;

		for (int i = 0; i < myFiguraList->count; i++) {
			Figura* actual = temp->value;
			DrawNode(PnlBobeda->CreateGraphics(), actual->X, actual->Y, actual->Fila, actual->Columna, actual->Peso, actual->PesoUsado, actual->Type, actual->N1, actual->N2, actual->N3);
			temp = temp->next;
		}

	}
}
	 
	   int n;
	   int BMN1 = 0;
	   int BMN2 = 0;
	   int BMN3 = 0;
	   String^ PesoUni = "Peso unitario:  \t \t \t \t \t \t \t \t \t\t\t";
	   String^ CantidadUni = "Cantidad unidades:  \t \t \t \t \t \t \t \t \t\t";
	   String^ OrFecha = "Fecha de ingreso: \t \t \t \t \t \t \t \t \t \t\t";
	  
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (cbInventario->SelectedIndex)
	{
	case 0:
	
		txtInventario->Text = "";
		if (!myFiguraList->IsEmpty()) {
			Node1<Figura*>* temp = myFiguraList->start;

			for (int i = 0; i < myFiguraList->count; i++) {
				Figura* actual = temp->value;
				BMN1 = BMN1 + actual->CantM1;
				BMN2 = BMN2 + actual->CantM2;
				BMN3 = BMN3 + actual->CantM3;
				temp = temp->next;
			}

		}
		
		
		txtInventario->Text = "Tipo de inventario: \t \t \t \t \t \t \t \t \t \t \t Material \t \t \t \t \t  Cantidad Total \t \t \t \t \t \t1) Material para oficina\t\t\t\t " + BMN1 + " \t \t \t \t \t\t " + "2) Ropa \t \t \t \t \t \t " + BMN2 + "  \t \t \t \t \t \t\t" + "3) Material de construcción  \t \t \t \t" + BMN3;
			
		break;
	case 1:
		txtInventario->Text = "";
		
		if (!myFiguraList->IsEmpty()) {
			Node1<Figura*>* temp = myFiguraList->start;

			for (int i = 0; i < myFiguraList->count; i++) {
				Figura* actual = temp->value;

				int Fila = actual->Fila;
				String^ Lcolum;
				if (Fila == 1)
				{
					Lcolum = "A";
				}
				if (Fila == 2)
				{
					Lcolum = "B";
				}
				if (Fila == 3)
				{
					Lcolum = "C";
				}
				if (Fila == 4)
				{
					Lcolum = "D";
				}
				if (Fila == 5)
				{
					Lcolum = "E";
				}
				if (Fila == 6)
				{
					Lcolum = "F";
				}
				if (Fila == 7)
				{
					Lcolum = "G";
				}
				if (Fila == 8)
				{
					Lcolum = "H";
				}
				if (Fila == 9)
				{
					Lcolum = "I";
				}
				if (Fila == 10)
				{
					Lcolum = "J";
				}
				if (Fila == 11)
				{
					Lcolum = "K";
				}
				if (Fila == 12)
				{
					Lcolum = "L";

				}
				if (Fila == 13)
				{
					Lcolum = "M";
				}
				if (Fila == 14)
				{
					Lcolum = "N";
				}
				if (Fila == 15)
				{
					Lcolum = "O";
				}
				if (Fila == 16)
				{
					Lcolum = "P";
				}
				if (Fila == 17)
				{
					Lcolum = "Q";
				}
				if (Fila == 18)
				{
					Lcolum = "R";
				}
				if (Fila == 19)
				{
					Lcolum = "S";
				}
				if (Fila == 20)
				{
					Lcolum = "T";
				}
				if (Fila == 21)
				{
					Lcolum = "U";
				}
				if (Fila == 22)
				{
					Lcolum = "V";
				}
				if (Fila == 23)
				{
					Lcolum = "W";

				}
				if (Fila == 24)
				{
					Lcolum = "X";
				}
				if (Fila == 25)
				{
					Lcolum = "Y";
				}
				if (Fila == 26)
				{
					Lcolum = "Z";
				}
				CantidadUni = CantidadUni + "ID: " + Lcolum + actual->Columna + "Material 1: " + actual->CantM1 + " Material 2: " + actual->CantM2 + " Material 1: " + actual->CantM3 +"\t\t\t\t\t\t\t\t";;
				temp = temp->next;
			}
			txtInventario->Text = CantidadUni;
		}
		break;
		case 2:
			txtInventario->Text = "";
	
			if (!myFiguraList->IsEmpty()) {
				Node1<Figura*>* temp = myFiguraList->start;

				for (int i = 0; i < myFiguraList->count; i++) {
					Figura* actual = temp->value;

					int Fila = actual->Fila;
					String^ Lcolum;
					if (Fila == 1)
					{
						Lcolum = "A";
					}
					if (Fila == 2)
					{
						Lcolum = "B";
					}
					if (Fila == 3)
					{
						Lcolum = "C";
					}
					if (Fila == 4)
					{
						Lcolum = "D";
					}
					if (Fila == 5)
					{
						Lcolum = "E";
					}
					if (Fila == 6)
					{
						Lcolum = "F";
					}
					if (Fila == 7)
					{
						Lcolum = "G";
					}
					if (Fila == 8)
					{
						Lcolum = "H";
					}
					if (Fila == 9)
					{
						Lcolum = "I";
					}
					if (Fila == 10)
					{
						Lcolum = "J";
					}
					if (Fila == 11)
					{
						Lcolum = "K";
					}
					if (Fila == 12)
					{
						Lcolum = "L";

					}
					if (Fila == 13)
					{
						Lcolum = "M";
					}
					if (Fila == 14)
					{
						Lcolum = "N";
					}
					if (Fila == 15)
					{
						Lcolum = "O";
					}
					if (Fila == 16)
					{
						Lcolum = "P";
					}
					if (Fila == 17)
					{
						Lcolum = "Q";
					}
					if (Fila == 18)
					{
						Lcolum = "R";
					}
					if (Fila == 19)
					{
						Lcolum = "S";
					}
					if (Fila == 20)
					{
						Lcolum = "T";
					}
					if (Fila == 21)
					{
						Lcolum = "U";
					}
					if (Fila == 22)
					{
						Lcolum = "V";
					}
					if (Fila == 23)
					{
						Lcolum = "W";

					}
					if (Fila == 24)
					{
						Lcolum = "X";
					}
					if (Fila == 25)
					{
						Lcolum = "Y";
					}
					if (Fila == 26)
					{
						Lcolum = "Z";
					}
					PesoUni = PesoUni + "ID: " + Lcolum + actual->Columna + "peso utilizado: " + actual->PesoUsado + " \t \t \t \t \t \t \t \t \t\t\t";;
					temp = temp->next;
				}
				txtInventario->Text = PesoUni;
			}
			break;

			case 3:
				txtInventario->Text = "";
			
				

					OrFecha = OrFecha  + Ingresos;

				txtInventario->Text = OrFecha;
				break;
	default:
		break;
	}
}
private: System::Void PnlBobeda_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
