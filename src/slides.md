---
title: Rust
subtitle: An Introduction for Creative Coding II
author: Markus Dittmann
date: 12.06.2019
---

# Rust?

> Rust is a systems programming language focused on three goals: **safety, speed, and concurrency**.

<https://doc.rust-lang.org/1.8.0/book/README.html>

- compiled language
- no garbage collector
- no runtime

# But there is C? {data-background-image="Cthulhu.png"}

- **1972**; ANSI C 1989
- porting Unix assembly to PDP-11
- assembly wasn't portable and B was slow

## So What?

- ~40 years of segmentation faults
- static typing, but weak

```.c
float f = 32.525;
int x = f; // that becomes a 3

enum Direction = {
    UP, DOWN, LEFT, RIGHT
};
enum Direction d = 8;
```

# Enter Rust {data-background-image="rust_logo.svg"}

- \*07.07.2010
- Graydon Hoare at Mozilla Research
- for Servo browser engine
- memory safety
- concurrency

## Ecosystem

- Cargo & [crates.io](https://crates.io/): build system, package repo
- Rustdoc & [docs.rs](https://docs.rs/): Markdown docs
- official [Rust Book](https://doc.rust-lang.org/1.8.0/book/README.html)
- Extension for VS Code

## In the Wild

- Firefox "Quantum" (FF 57, 2017)
- Web Assembly
- Redox OS
- at Dropbox, on servers

# Getting Started

[try in a browser](https://play.rust-lang.org/)

Linux/MacOS:

```
(sudo apt install curl build-essential)
curl https://sh.rustup.rs -sSf | sh
source $HOME/.cargo/env
cargo new hello-world
cd hello-world
cargo run
```

# Features

## Hey ho!

```.rs
let names = ["Angela", "Markus", "Markus", "Valeria", "Franzi", "Simon", "Phil"];
let last = names[]
fn main() {
    println!("Hello audience");
}
```

## Primitive Data Types

| Type   | Notes             |
| ------ | ----------------- |
| `bool` | `true`, `false`   |
| `char` | Unicode character |

|

## Nested Comments!

```.rs
// this part doesn't work, leave it out for now

/*
/* explaining what that part of the code does */
fn do_weird_things(a: i32, b: bool) {
    if b {
        a * 3
    }
    else {
        a / 2
    }
}
*/
```

# Creative Coding Libraries

- Piston: game engine
- Nannou: "Creative Coding" framework

# Nannou

<https://nannou.cc>

- `nannou::sketch(view)` for simple drawing
- `nannou::app(model)` for game loop-style

- documentation is lacking in most places
