# lab09-oop
# 👨‍💼 Employee Information System (Lab 11)

Энэ төсөл нь UML диаграммын дагуу C++ хэл дээр олон класст хувааж бүтээсэн **ажилтны мэдээллийн систем** юм. Уг систем нь объект хандалтат програмчлалын үндсэн ойлголтууд болох **унаган хамаарал (inheritance)**, **агрегаци (aggregation)**, **композици (composition)**, **динамик өгөгдөл** зэргийг ашигласан болно.

---

## 📌 Даалгаврын зорилго

- UML диаграммын дагуу олон класс үүсгэх
- Классуудыг тус тусад нь `.h` ба `.cpp` файлд салгах
- `0..1`, `0..n`, `1`, `1..n` хамаарлуудыг зөв програмчлах
- Объектууд үүсгэж хоорондын холбоог тогтоох
- Бүх мэдээллийг дэлгэцэнд хэвлэж харуулах

---

## 🗂️ Төслийн бүтэц


---

## 🧱 Классуудын тайлбар

### 1. `Person` (Superclass)
- **Атрибутууд**: `Name`, `SSNum`, `Age`
- **Функцууд**: Getter/Setter
- **Хэрэглээ**: `Spouse`, `Child`, `Employee` нь бүгд энэ классыг өвлөсөн.

---

### 2. `Employee` (Person-аас удамшсан)
- **Атрибутууд**: `CompanyID`, `Title`, `StartDate`
- **Хамаарал**:
  - `Division` (1)
  - `JobDescription` (1..n)
  - `Spouse` (0..1)
  - `Child` (0..n)
- **Функцууд**: `addJobDescription()`, `addChild()`, `setSpouse()`, `printInfo()`

---

### 3. `Spouse` (Person-аас удамшсан)
- **Атрибут**: `AnniversaryDate`
- **Хамаарал**: `Employee`-д 0 эсвэл 1 эхнэр/нөхөртэй байх боломжтой

---

### 4. `Child` (Person-аас удамшсан)
- **Атрибут**: `FavoriteToy`
- **Хамаарал**: `Employee`-д 0 эсвэл хэдэн ч хүүхэд байж болно

---

### 5. `Division`
- **Атрибут**: `DivisionName`
- **Хамаарал**: `Employee`-д заавал 1 division харьяалагдах ёстой (composition)

---

### 6. `JobDescription`
- **Атрибут**: `Description`
- **Хамаарал**: `Employee`-д 1 эсвэл түүнээс олон ажил үүрэг хамаарна (aggregation)

---

## 📥 Компайл & Ажиллуулах

### Linux / macOS:
```bash
g++ main.cpp Person.cpp Employee.cpp Spouse.cpp Child.cpp Division.cpp JobDescription.cpp -o employee_system
./employee_system
