# Search Engine Autocomplete System

---

## Project Overview

This project implements a **Search Engine Autocomplete System** using the **Trie (Prefix Tree)** data structure.  
It provides fast, real-time search suggestions based on user-entered prefixes, similar to modern search engines like Google.

The system is designed to handle large volumes of search queries and return relevant suggestions with minimal latency.

---

## Problem Statement

Traditional search systems scan all stored terms to find prefix matches, which becomes inefficient for large datasets.  
This project solves the problem by using a **Trie**, enabling prefix-based searching in **O(K)** time, where **K** is the length of the input prefix.

---

## Technology Stack

- C++
- Trie (Prefix Tree)
- Hash Maps
- Strings
- File Handling

---

## System Design

1. Search queries are loaded from `data.txt`
2. Each query is inserted into a Trie data structure
3. The Trie is traversed using the user’s input prefix
4. All valid completions are collected and displayed as suggestions

This design allows the system to return results instantly even for large datasets.

---

## Project Structure

main.cpp - Handles user input and output
trie.cpp - Implements Trie logic
trie.h - Defines Trie structure
data.txt - Search query dataset
seed.txt - Base queries
generate.py - Expands base queries into a large dataset

yaml
Copy code

---

## How to Run

Compile the program:

g++ main.cpp trie.cpp -o search

yaml
Copy code

Run the application:

./search

yaml
Copy code

Type any prefix such as `how`, `best`, or `python` to get autocomplete suggestions.

---

## Key Features

- Supports 10,000+ search queries  
- Fast prefix-based lookup  
- Real-time autocomplete suggestions  
- Memory-efficient Trie implementation  
- Expandable dataset using query generator  

---

## Why Trie?

A **Trie** allows prefix searches in **O(K)** time, where K is the length of the user’s input.  
This makes it much faster than scanning all words, making it ideal for search engines and autocomplete systems.

---

## Author

Manisha Bharadwaj