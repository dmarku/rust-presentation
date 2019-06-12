.PHONY: all

index.html: src/slides.md
	pandoc -s -t revealjs -o $@ src/slides.md -V revealjs-url=reveal.js/