# Programming Language Performance Analysis

A comparative performance analysis of **Python, C++, and Shell Script** for processing large CSV datasets.

## 📊 Project Overview

This project evaluates and compares the performance characteristics of three programming languages when processing a 2.5MB CSV file containing employment survey data. The study examines execution time, memory efficiency, and code complexity across different language paradigms.

## 👥 Team Members

**Course:** CSE425 - Programming Languages  
**Semester:** Summer 2019  
**Section:** 06

- **Sazzad Hossain** (ID: 1610139042) - Python Implementation
- **Ebna Saykot Rayhan** (ID: 1520503042) - C++ Implementation  
- **Sumaiya Ashfaque Shachcho** (ID: 1611691042) - Shell Script Implementation

## 🎯 Objectives

- Analyze CSV processing performance across different programming paradigms
- Compare execution time, memory usage, and development efficiency
- Process real-world employment survey data (2018 Nature of Work Survey)
- Demonstrate practical implementation skills in multiple languages
- Provide insights on language selection for data processing tasks

## 📁 Project Structure
```
.
├── assignment/
│   └── 1610139042-1520503042-1611691042/
│       ├── C++,Python,Shell Script code/
│       │   ├── CSVpython.py          # Python implementation
│       │   ├── C++code.cpp           # C++ implementation
│       │   └── Bashcsv.sh            # Shell script implementation
│       ├── Comparison.pdf            # Performance comparison report
│       ├── Team description.txt      # Team information
│       └── Video demo upload link of YouTube.txt
├── Videos/                           # Demo recordings
└── survey-2018-nature-of-work-csv.csv  # Dataset (2.5MB)
```

## 🛠️ Technologies Used

### Programming Languages
- **Python 3.x** - High-level scripting with pandas/csv libraries
- **C++** - Compiled language for performance optimization
- **Bash Shell Script** - Unix text processing utilities (awk, sed, grep)

### Tools
- Standard library implementations for fair comparison
- Performance profiling and benchmarking tools

## 📊 Dataset

**Source:** 2018 Nature of Work Survey  
**Size:** 2.5 MB  
**Records:** Employment and workforce statistics

**Data Fields:**
- Employment type (permanent, temporary, contract)
- Industry classifications
- Company size categories
- Geographic regions
- Workforce statistics

## 🎥 Demo Video

Watch our complete project demonstration and performance comparison:  
**[YouTube Demo](https://www.youtube.com/watch?v=UkwCG2upOCM)**

## 📈 Performance Results

Detailed performance metrics and analysis are documented in the `Comparison.pdf` report, including:

- **Execution Time Benchmarks** - Processing speed comparison
- **Memory Usage Analysis** - RAM consumption patterns
- **Code Complexity Metrics** - Lines of code and maintainability
- **Development Time** - Implementation effort comparison
- **Use Case Recommendations** - When to use each language

## 🚀 How to Run

### Python Version
```bash
cd "assignment/1610139042-1520503042- 1611691042/C++,Python,Shell Script code/"
python CSVpython.py
```

### C++ Version
```bash
cd "assignment/1610139042-1520503042- 1611691042/C++,Python,Shell Script code/"
g++ -O2 C++code.cpp -o csvprocessor
./csvprocessor
```

### Shell Script Version
```bash
cd "assignment/1610139042-1520503042- 1611691042/C++,Python,Shell Script code/"
bash Bashcsv.sh
```

## 🔍 Key Findings

*(Refer to Comparison.pdf for detailed analysis)*

- **C++**: Fastest execution, lowest memory footprint, higher development complexity
- **Python**: Moderate speed, excellent readability, rich libraries
- **Shell Script**: Fast for simple operations, great for Unix pipelines, limited functionality

## 📚 Course Information

**Course:** CSE425 - Programming Languages  
**Institution:** North South University  
**Instructor:** [Course Instructor Name]  
**Semester:** Summer 2019  
**Completion Date:** July 2019

## 🎓 Learning Outcomes

This project demonstrates:
- Multi-paradigm programming skills (procedural, OOP, scripting)
- Performance optimization techniques
- Comparative language analysis methodology
- Real-world data processing experience
- Team collaboration and project management

## 🤝 Acknowledgments

Special thanks to our course instructor for guidance on comparative language analysis, performance benchmarking techniques, and providing the dataset for this study.

## 📄 License

This project is submitted as part of CSE425 coursework at North South University. Code is available for educational purposes.

---

**Note:** This is an academic project demonstrating programming language comparison and performance analysis for educational purposes.
