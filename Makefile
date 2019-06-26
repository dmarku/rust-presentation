.PHONY: all

index.html: src/slides.md
	pandoc -s -t revealjs -o $@ src/slides.md --slide-level 2 -V theme=league -V revealjs-url=reveal.js/