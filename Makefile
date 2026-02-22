.PHONY: clean build flash

clean:
	@rm -rf build

build:
	@mkdir -p build
	@platformio run

flash: build
	@platformio run --target upload
