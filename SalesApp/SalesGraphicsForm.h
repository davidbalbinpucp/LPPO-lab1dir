#pragma once

namespace SalesApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace SalesModel;
	using namespace SalesController;

	/// <summary>
	/// Resumen de SalesGraphicsForm
	/// </summary>
	public ref class SalesGraphicsForm : public System::Windows::Forms::Form
	{
	public:
		SalesGraphicsForm(void)
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
		~SalesGraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartSales;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ pieChartSales;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesGraphicsForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chartSales = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pieChartSales = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieChartSales))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(367, 39);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// chartSales
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartSales->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chartSales->Legends->Add(legend3);
			this->chartSales->Location = System::Drawing::Point(12, 47);
			this->chartSales->Name = L"chartSales";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Monto";
			this->chartSales->Series->Add(series3);
			this->chartSales->Size = System::Drawing::Size(386, 300);
			this->chartSales->TabIndex = 1;
			this->chartSales->Text = L"chart1";
			// 
			// pieChartSales
			// 
			chartArea4->Name = L"ChartArea1";
			this->pieChartSales->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->pieChartSales->Legends->Add(legend4);
			this->pieChartSales->Location = System::Drawing::Point(404, 47);
			this->pieChartSales->Name = L"pieChartSales";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Legend = L"Legend1";
			series4->Name = L"Monto";
			this->pieChartSales->Series->Add(series4);
			this->pieChartSales->Size = System::Drawing::Size(301, 300);
			this->pieChartSales->TabIndex = 2;
			this->pieChartSales->Text = L"chart2";
			// 
			// SalesGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(717, 353);
			this->Controls->Add(this->pieChartSales);
			this->Controls->Add(this->chartSales);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"SalesGraphicsForm";
			this->Text = L"Reporte Gr�fico de Ventas";
			this->Load += gcnew System::EventHandler(this, &SalesGraphicsForm::SalesGraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartSales))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieChartSales))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SalesGraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Sale^>^ salesList = Controller::QueryAllSales();
		for (int i = 0; i < salesList->Count; i++) {
			chartSales->Series["Monto"]->Points->Add(salesList[i]->Total);
			chartSales->Series["Monto"]->Points[i]->AxisLabel = salesList[i]->Customer->Name;
			chartSales->Series["Monto"]->Points[i]->Label = Convert::ToString(salesList[i]->Total);

			pieChartSales->Series["Monto"]->Points->Add(salesList[i]->Total);			
			pieChartSales->Series["Monto"]->Points[i]->LegendText = salesList[i]->Customer->Name;
			pieChartSales->Series["Monto"]->Points[i]->Label = Convert::ToString(salesList[i]->Total);

		}
	}
};
}
