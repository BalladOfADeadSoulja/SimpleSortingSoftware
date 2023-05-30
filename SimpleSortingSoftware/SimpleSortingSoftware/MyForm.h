#pragma once

namespace SimpleSortingSoftware {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: char user_action = ' ';

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(23, 246);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Select sort type";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(70, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(332, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter data to sort (for each number - a new line)";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(16, 53);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(213, 162);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(261, 53);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(213, 162);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"bubble", L"inserts", L"selection", L"shell",
					L"heap", L"merger", L"quick"
			});
			this->comboBox1->Location = System::Drawing::Point(19, 265);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(128, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(261, 258);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(213, 96);
			this->richTextBox3->TabIndex = 5;
			this->richTextBox3->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(258, 234);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(172, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Sorting Action Algorithm";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(94, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Before";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(343, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"After";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 26);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Sort";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(164, 292);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 26);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Clear all";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(486, 366);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Simple Sorting Software";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = this->comboBox1->Text;
		if (name->Contains("heap"))
		{
			int length = richTextBox1->TextLength;
			if (length != 0)
			{
				heapSort(richTextBox1, richTextBox2);
			}
			richTextBox3->Text = 
				"1 -> Plot the max-heap from the input.\n\n" +
				"2 -> At this point, the largest element is stored at the root of the heap. " + 
				"Replace it with the last element of the heap, and then decrease its size by 1. " +
				"Finally, convert the resulting tree to max - heap with the new root.\n\n" +
				"3 -> Repeat the above steps as long as the heap size is greater than 1.\n\n" +
				"-----------------------------------------------------\n" +
			    "The total running time of Heapsort is O(nLogn).";
		}

		if (name->Contains("bubble"))
		{
			int length = richTextBox1->TextLength;
			if (length != 0)
			{
				Bubble_sort(richTextBox1, richTextBox2);//heapSort(richTextBox1, richTextBox2);
			}
			richTextBox3->Text = 
				"Here you need to sequentially compare the values of neighboring elements and swap numbers if the previous one is greater than the next one. Thus, elements with large values are at the end of the list, and with smaller values remain at the beginning.\n\n"
				"-----------------------------------------------------\n" +
				"The total running time of Bubble sort is O(n^2).";
		}

		if (name->Contains("quick"))
		{
			int length = richTextBox1->TextLength;
			if (length != 0)
			{
				qSort(richTextBox1, richTextBox2);
			}
			richTextBox3->Text =
				"1 -> Select an element from an array. Let's call it base.\n" +
				"2 -> Splitting: rearranging the elements in an array so that elements less than the pivot are placed before it, and those greater than or equal to it are placed after it.\n" +
				"3 -> Recursively apply the first two steps to the two subarrays to the left and right of the pivot. Recursion does not apply to an array that has only one element or no elements.\n\n"+
				"-----------------------------------------------------\n" +
				"The total running time of Quick sort is O(n*log2n).";
		}

		if (name->Contains("selection"))
		{
			int length = richTextBox1->TextLength;
			if (length != 0)
			{
				selectionSort(richTextBox1, richTextBox2);
			}
			richTextBox3->Text =
				"1 -> Find the number of the minimum value in the current list.\n 2 -> we exchange this value with the value of the first unsorted position(the exchange is not needed if the minimum element is already at this position)\n 3 -> now we sort the tail of the list, excluding already sorted elements from consideration\n\n" +
				"-----------------------------------------------------\n" +
				"The total running time of Selection sort is O(n^2).";
		}

		if (name->Contains("inserts"))
		{
			int length = richTextBox1->TextLength;
			if (length != 0)
			{
				Insertion_sort(richTextBox1, richTextBox2);
			}
			richTextBox3->Text =
				"1 -> Loop through the elements in the unsorted parts of the array.\n 2 -> Each element is inserted into the sorted part of the array in the place where it should be.\n\n" +
				"-----------------------------------------------------\n" +
				"The total running time of Inserts sort is O(n^2).";
		}

		if (name->Contains("merger"))
		{
			int length = richTextBox1->TextLength;
			if (length != 0)
			{
				mergeSortNumbers(richTextBox1, richTextBox2);
			}
			richTextBox3->Text =
				"Merge sort means splitting the array equally until several small ones are obtained from one array - no more than two elements in size. The two elements are easy to compare with each other and arrange depending on the requirement: in ascending or descending order. "
				"After splitting, a reverse merge follows, in which at one point in time(or per loop pass), one element from each array is selected and compared with each other.The smallest(or largest) element is sent to the resulting array, the remaining element is left up to date for comparison with an element from another array in the next step.\n\n" +
				"-----------------------------------------------------\n" +
				"The total running time of Merger sort is O(nlogn).";
		}

		if (name->Contains("shell"))
		{
			int length = richTextBox1->TextLength;
			if (length != 0)
			{
				Shell_sort(richTextBox1, richTextBox2);
			}
			richTextBox3->Text =
				"Shell sorting first compares and sorts values ​​that are at some distance from one another. "
				"d. After that, the procedure is repeated for some smaller values "
				"d, and the Shell sort ends with the ordering of the elements at d = 1 (that is, the usual insertion sort).The efficiency of Shell sort in certain cases is ensured by the fact that the elements “faster” fall into place(in simple sorting methods, for example, bubble sort, each permutation of two elements reduces the number of inversions in the list by a maximum of 1, and with Shell sort this number can be more).\n\n"
				"-----------------------------------------------------\n" +
				"The total running time of Shell sort is O(n^2).";
		}

	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text = nullptr;
		richTextBox2->Text = nullptr;
		richTextBox3->Text = nullptr;
	}

		   // Функция для считывания чисел
		   void readNumbers(RichTextBox^ rtb, array<int>^ arr)
		   {
			   String^ text = rtb->Text->Trim();
			   array<String^>^ lines = text->Split('\n');
			   int n = lines->Length;
			   for (int i = 0; i < n; i++)
			   {
				   arr[i] = Int32::Parse(lines[i]);
			   }
		   }

		   // Функция для записи чисел в RichTextBox
		   void writeNumbers(RichTextBox^ rtb, array<int>^ arr)
		   {
			   rtb->Clear();
			   int n = arr->Length;
			   for (int i = 0; i < n; i++)
			   {
				   rtb->AppendText(arr[i].ToString() + "\n");
			   }
		   }

		   // Функция для сортировки кучей
		   void heapSort(RichTextBox^ rtb1, RichTextBox^ rtb2)
		   {
			   array<int>^ arr = gcnew array<int>(rtb1->Lines->Length);
			   readNumbers(rtb1, arr);

			   int n = arr->Length;

			   // Построение кучи (перегруппировка массива)
			   for (int i = n / 2 - 1; i >= 0; i--)
			   {
				   heapify(arr, n, i);
			   }

			   // Один за другим извлекаем элементы из кучи
			   for (int i = n - 1; i >= 0; i--)
			   {
				   // Перемещаем текущий корень в конец
				   int temp = arr[0];
				   arr[0] = arr[i];
				   arr[i] = temp;

				   // Вызываем процедуру heapify на уменьшенной куче
				   heapify(arr, i, 0);
			   }

			   writeNumbers(rtb2, arr);
		   }

		   // Функция для преобразования массива в кучу
		   void heapify(array<int>^ arr, int n, int i)
		   {
			   int largest = i; // Инициализируем наибольший элемент как корень
			   int l = 2 * i + 1; // Левый потомок узла
			   int r = 2 * i + 2; // Правый потомок узла

			   // Если левый потомок больше корня
			   if (l < n && arr[l] > arr[largest])
			   {
				   largest = l;
			   }

			   // Если правый потомок больше, чем самый большой элемент на данный момент
			   if (r < n && arr[r] > arr[largest])
			   {
				   largest = r;
			   }

			   // Если наибольший элемент не корень
			   if (largest != i)
			   {
				   int temp = arr[i];
				   arr[i] = arr[largest];
				   arr[largest] = temp;

				   // Рекурсивно преобразуем затронутую поддерево
				   heapify(arr, n, largest);
			   }
		   }

		   void Insertion_sort(RichTextBox^ rtb1, RichTextBox^ rtb2)//СОРТИРОВКА ВСТАВКАМИ
		   {
			   array<int>^ arr = gcnew array<int>(rtb1->Lines->Length);
			   readNumbers(richTextBox1, arr);
			   int n = arr->Length;
			   int count = 0;
			   for (int i = 0; i < n; i++)
			   {
				   for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
				   {
					   count++;
					   int tmp = arr[j];
					   arr[j] = arr[j-1];
					   arr[j-1] = tmp;
					   //swap(arr[j - 1], arr[j]);
				   }
			   }
			   writeNumbers(rtb2, arr);
		   }

		   void Shell_sort(RichTextBox^ rtb1, RichTextBox^ rtb2)//Сортировка ШЕЛЛА
		   {
			   array<int>^ arr = gcnew array<int>(rtb1->Lines->Length);
			   readNumbers(richTextBox1, arr);
			   int n = arr->Length;
			   int i, j, step, tmp;
			   for (step = n / 2; step > 0; step /= 2)
				   for (i = step; i < n; i++)
				   {
					   tmp = arr[i];
					   for (j = i; j >= step; j -= step)
					   {
						   if (tmp < arr[j - step])
							   arr[j] = arr[j - step];
						   else
							   break;
					   }
					   arr[j] = tmp;
				   }
			   writeNumbers(rtb2, arr);
		   }

		   // Функция для сортировки чисел методом слияния
		   void mergeSort(array<int>^ arr, int left, int right)
		   {
			   if (left < right)
			   {
				   int mid = (left + right) / 2;
				   mergeSort(arr, left, mid);
				   mergeSort(arr, mid + 1, right);
				   merge(arr, left, mid, right);
			   }
		   }

		   // Вспомогательная функция для слияния двух отсортированных массивов
		   void merge(array<int>^ arr, int left, int mid, int right)
		   {
			   int n1 = mid - left + 1;
			   int n2 = right - mid;
			   array<int>^ L = gcnew array<int>(n1);
			   array<int>^ R = gcnew array<int>(n2);
			   for (int i = 0; i < n1; i++)
			   {
				   L[i] = arr[left + i];
			   }
			   for (int j = 0; j < n2; j++)
			   {
				   R[j] = arr[mid + 1 + j];
			   }
			   int i = 0;
			   int j = 0;
			   int k = left;
			   while (i < n1 && j < n2)
			   {
				   if (L[i] <= R[j])
				   {
					   arr[k] = L[i];
					   i++;
				   }
				   else
				   {
					   arr[k] = R[j];
					   j++;
				   }
				   k++;
			   }
			   while (i < n1)
			   {
				   arr[k] = L[i];
				   i++;
				   k++;
			   }
			   while (j < n2)
			   {
				   arr[k] = R[j];
				   j++;
				   k++;
			   }
		   }

		   // Основная функция для сортировки чисел методом слияния
		   void mergeSortNumbers(RichTextBox^ rtb1, RichTextBox^ rtb2)
		   {
			   array<int>^ arr = gcnew array<int>(rtb1->Lines->Length);
			   readNumbers(rtb1, arr);
			   mergeSort(arr, 0, arr->Length - 1);
			   writeNumbers(rtb2, arr);
		   }

		   void selectionSort(RichTextBox^ rtb1, RichTextBox^ rtb2)
		   {
			   array<int>^ arr = gcnew array<int>(rtb1->Lines->Length);
			   readNumbers(richTextBox1, arr);
			   int n = arr->Length;
			   for (int i = 0; i < n - 1; i++)
			   {
				   int minIndex = i;
				   for (int j = i + 1; j < n; j++)
				   {
					   if (arr[j] < arr[minIndex])
					   {
						   minIndex = j;
					   }
				   }
				   if (minIndex != i)
				   {
					   int temp = arr[i];
					   arr[i] = arr[minIndex];
					   arr[minIndex] = temp;
				   }
			   }
			   writeNumbers(richTextBox2, arr);
		   }

		   void Bubble_sort(RichTextBox^ rtb1, RichTextBox^ rtb2)//ПУЗЫРЬКОВАЯ СОРТИРОВКА
		   {
			   array<int>^ arr = gcnew array<int>(rtb1->Lines->Length);
			   readNumbers(richTextBox1, arr);
			   int n = arr->Length;
			   for (int i = 0; i < n; i++) {
				   for (int j = 0; j < n - 1; j++)
				   {
					   if (arr[j] > arr[j + 1])
					   {
						   int b = arr[j]; // создали дополнительную переменную
						   arr[j] = arr[j + 1]; // меняем местами
						   arr[j + 1] = b; // значения элементов
					   }
				   }
			   }
			   writeNumbers(richTextBox2, arr);
		   }

		   void quickSort(array<int>^ arr, int left, int right)//(array<int>^ arr, int left, int right)
		   {
			   int i = left, j = right;
			   int pivot = arr[(left + right) / 2];

			   while (i <= j)
			   {
				   while (arr[i] < pivot)
				   {
					   i++;
				   }

				   while (arr[j] > pivot)
				   {
					   j--;
				   }

				   if (i <= j)
				   {
					   int tmp = arr[i];
					   arr[i] = arr[j];
					   arr[j] = tmp;
					   i++;
					   j--;
				   }
			   }

			   if (left < j)
			   {
				   //quickSort(arr, left, j);
				   quickSort(arr, left, j);
			   }

			   if (i < right)
			   {
				   //quickSort(arr, i, right);
				   quickSort(arr, i, right);
			   }
		   }

		   void qSort(RichTextBox^ rtb1, RichTextBox^ rtb2)
		   {
			   array<int>^ arr = gcnew array<int>(rtb1->Lines->Length);
			   readNumbers(rtb1, arr);
			   quickSort(arr, 0, arr->Length - 1);
			   writeNumbers(rtb2, arr);
		   }
};
}
