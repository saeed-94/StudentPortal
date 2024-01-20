<details id="english">
  <summary>English</summary>

# Students Portal Management System

This project implements a simple management system for a student portal using C++. The program allows operations such as adding students, adding courses, registration, and grading.

## Image Menu

![Image Menu](/ImageMenu.png)

### Table of Contents

- [Students Portal Management System](#students-portal-management-system)
  - [Image Menu](#image-menu)
    - [Table of Contents](#table-of-contents)
    - [Introduction](#introduction)
    - [Features](#features)
    - [Installation Guide](#installation-guide)
    - [How to Use](#how-to-use)
    - [Implementation Details](#implementation-details)
- [سامانه مدیریت پورتال دانشجویی](#سامانه-مدیریت-پورتال-دانشجویی)
    - [توضیحات کلی](#توضیحات-کلی)
    - [فهرست مطالب](#فهرست-مطالب)
    - [مقدمه](#مقدمه)
  - [تصویر منو](#تصویر-منو)
    - [ویژگی‌ها](#ویژگیها)
    - [راهنمای نصب](#راهنمای-نصب)
    - [چگونگی استفاده](#چگونگی-استفاده)
    - [جزئیات پیاده‌سازی](#جزئیات-پیادهسازی)
    

### Introduction

Welcome to the Student Portal Management System project! This program is designed to manage a student portal, allowing operations such as adding students, adding courses, registration, and grading. The project is implemented in C++.

### Features

- Add a student
- Remove a student
- Search for a student based on student ID
- Add a course
- Remove a course
- Search for course details based on course code
- Enroll/disenroll a student in a course
- Record a grade for a student in a course
- View the list of students
- View the list of courses
- View the list of enrolled students and their grades in a specific course
- View the list of enrolled students for all courses
- And more...

### Installation Guide

To run this project locally, follow these steps:

1. **Clone the repository:**ل

   ```bash
   git clone https://github.com/your-username/student-portal-project.git
   ```

   Replace `your-username` with your GitHub username.

2. **Compile the C++ code:**

   ```bash
   g++ main.cpp -o students_portal
   ```

   Compile the main C++ code using the GNU compiler (`g++`) and create an executable file named `students_portal`.

3. **Run the executable file:**

   ```bash
   ./students_portal
   ```

   Run the compiled program and start the Student Portal Management System. Use the menu options to perform various operations.

### How to Use

Enter 'Y' to access the menu. Then, enter the number of the desired option to access different functionalities of the Student Portal Management System.

### Implementation Details

This project uses C++ classes to organize and encapsulate information. The main classes include:
- `Student`: Represents student information.
- `Course`: An abstract class displaying general details about a course.
- `TheoreticalCourse` and `PracticalCourse`: Derived classes from `Course` representing specific types of courses.
- `RegistrationCourse`: Inherited from `Student`, representing student enrollment in courses.
- `GradeCourse`: Inherited from `Student`, representing student grades in courses.

  <lang dir="ltr">

...
  </lang>
</details>

---
<details id="فارسی">
  <summary>فارسی</summary>

</lang>


# سامانه مدیریت پورتال دانشجویی
### توضیحات کلی

این پروژه یک سامانه مدیریت ساده برای پورتال دانشجویی با استفاده از C++ پیاده‌سازی شده است. این برنامه امکاناتی نظیر افزودن دانشجویان، افزودن دروس، ثبت‌نام و ارزیابی را فراهم می‌کند.

### فهرست مطالب

- [مقدمه](#مقدمه)
- [ویژگی‌ها](#ویژگی‌ها)
- [راهنمای نصب](#راهنمای-نصب)
- [چگونگی استفاده](#چگونگی-استفاده)
- [جزئیات پیاده‌سازی](#جزئیات-پیاده‌سازی)


### مقدمه

به پروژه سامانه مدیریت پورتال دانشجویی خوش‌آمدید! این برنامه برای مدیریت یک پورتال دانشجویی طراحی شده است و امکاناتی نظیر افزودن دانشجویان، افزودن دروس، ثبت‌نام و ارزیابی را فراهم می‌کند. این پروژه با استفاده از C++ پیاده‌سازی شده است.

## تصویر منو

![Image Menu](/ImageMenu.png)
### ویژگی‌ها

- افزودن دانشجو
- حذف دانشجو
- جستجو بر اساس شناسه دانشجو
- افزودن درس
- حذف درس
- جستجو در جزئیات درس بر اساس کد درس
- ثبت‌نام/لغو ثبت‌نام دانشجو در یک درس
- ثبت نمره برای دانشجو در یک درس
- مشاهده لیست دانشجویان
- مشاهده لیست دروس
- مشاهده لیست دانشجویان ثبت‌نامی و نمرات آن‌ها در یک درس خاص
- مشاهده لیست دانشجویان ثبت‌نامی برای همه دروس
- و ...

### راهنمای نصب

برای اجرای این پروژه به صورت محلی، مراحل زیر را دنبال کنید:

1. **کلون کردن مخزن:**

   ```bash
   git clone https://github.com/your-username/student-portal-project.git
   ```

   نام کاربری GitHub خود را به جای `your-username` قرار دهید.

2. **کامپایل کد C++:**

   ```bash
   g++ main.cpp -o students_portal
   ```

   کد اصلی C++ را با استفاده از کامپایلر GNU (`g++`) کامپایل کنید و یک فایل قابل اجرا به نام `students_portal` ایجاد کنید.

3. **اجرای فایل قابل اجرا:**

   ```bash
   ./students_portal
   ```

   برنامه کامپایل شده را اجرا کرده و سامانه مدیریت پورتال دانشجویی را شروع کنید. از گزینه‌های منو برای انجام عملیات مختلف استفاده کنید.

### چگونگی استفاده

برای دسترسی به منو، 'Y' را وارد کنید. سپس، شماره گزینه مورد نظر را وارد کنید تا به امکانات مختلف سامانه مدیریت پورتال دانشجویی دسترسی پیدا کنید.

### جزئیات پیاده‌سازی

در این پروژه از کلاس‌های C++ برای سازماندهی و کپسوله کردن اطلاعات استفاده شده است. کلاس‌های اصلی شامل:
- `Student`: نمایانگر اطلاعات دانشجو.
- `Course`: یک کلاس انتزاعی که جزئیات عمومی در مورد یک درس را نمایش می‌دهد.
- `TheoreticalCourse` و `PracticalCourse`: کلاس‌های مشتق‌شده از `Course` که انواع خاصی از دروس را نمایندگی می‌کنند.
- `RegistrationCourse`: از `Student` به ارث برده شده و نمایانگر ثبت‌نام دانشجو در دروس است.
- `GradeCourse`: از `Student` به ارث برده شده و نمایانگر نمرات دانشجو در دروس است.



</lang>