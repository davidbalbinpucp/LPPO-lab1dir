#pragma once
#include "ProductForm.h"
#include "LoginForm.h"
#include "CustomerForm.h"
#include "SalesmanForm.h"
#include "ProductSearchForm.h"
#include "SaleForm.h"
#include "SalesGraphicsForm.h"
#include "GraphicsForm.h"

namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesModel;

	/// <summary>
	/// Resumen de SalesMainForm
	/// </summary>
	public ref class SalesMainForm : public System::Windows::Forms::Form
	{
	public:
		static Salesman^ salesman;

		SalesMainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~SalesMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transacci�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ realizarVentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vendedoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ventasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gr�ficosToolStripMenuItem;




	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transacci�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vendedoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gr�ficosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->transacci�nToolStripMenuItem, this->mantenimientoToolStripMenuItem, this->reporteToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(765, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::salirToolStripMenuItem_Click);
			// 
			// transacci�nToolStripMenuItem
			// 
			this->transacci�nToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->realizarVentaToolStripMenuItem });
			this->transacci�nToolStripMenuItem->Name = L"transacci�nToolStripMenuItem";
			this->transacci�nToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->transacci�nToolStripMenuItem->Text = L"Transacci�n";
			// 
			// realizarVentaToolStripMenuItem
			// 
			this->realizarVentaToolStripMenuItem->Name = L"realizarVentaToolStripMenuItem";
			this->realizarVentaToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->realizarVentaToolStripMenuItem->Text = L"Realizar venta";
			this->realizarVentaToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::realizarVentaToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->productosToolStripMenuItem,
					this->clientesToolStripMenuItem, this->vendedoresToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->productosToolStripMenuItem->Text = L"Productos";
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::productosToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::clientesToolStripMenuItem_Click);
			// 
			// vendedoresToolStripMenuItem
			// 
			this->vendedoresToolStripMenuItem->Name = L"vendedoresToolStripMenuItem";
			this->vendedoresToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->vendedoresToolStripMenuItem->Text = L"Vendedores";
			this->vendedoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::vendedoresToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ventasToolStripMenuItem,
					this->gr�ficosToolStripMenuItem
			});
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// ventasToolStripMenuItem
			// 
			this->ventasToolStripMenuItem->Name = L"ventasToolStripMenuItem";
			this->ventasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ventasToolStripMenuItem->Text = L"Ventas";
			this->ventasToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::ventasToolStripMenuItem_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// gr�ficosToolStripMenuItem
			// 
			this->gr�ficosToolStripMenuItem->Name = L"gr�ficosToolStripMenuItem";
			this->gr�ficosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->gr�ficosToolStripMenuItem->Text = L"Gr�ficos";
			this->gr�ficosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::gr�ficosToolStripMenuItem_Click);
			// 
			// SalesMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(765, 416);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SalesMainForm";
			this->Text = L"Aplicaci�n de Ventas";
			this->Load += gcnew System::EventHandler(this, &SalesMainForm::SalesMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void productosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductForm^ productForm = gcnew ProductForm();
	productForm->MdiParent = this;
	productForm->Show();
}
private: System::Void SalesMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginForm = gcnew LoginForm();
	loginForm->ShowDialog();
}
private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CustomerForm^ customerForm = gcnew CustomerForm();
	customerForm->MdiParent = this;
	customerForm->Show();
}
private: System::Void vendedoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SalesmanForm^ salesmanForm = gcnew SalesmanForm();
	salesmanForm->MdiParent = this;
	salesmanForm->Show();
}
private: System::Void b�squedaDeProductosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	/*
	ProductSearchForm^ productSearchForm = gcnew ProductSearchForm();
	productSearchForm->MdiParent = this;
	productSearchForm->Show();
	*/
}
private: System::Void realizarVentaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaleForm^ saleForm = gcnew SaleForm();
	saleForm->MdiParent = this;
	saleForm->Show();
}
private: System::Void ventasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SalesGraphicsForm^ salesGraphicsForm = gcnew SalesGraphicsForm();
	salesGraphicsForm->MdiParent = this;
	salesGraphicsForm->Show();
}
private: System::Void gr�ficosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GraphicsForm^ graphicsForm = gcnew GraphicsForm();
	graphicsForm->MdiParent = this;
	graphicsForm->Show();
}
};
}
