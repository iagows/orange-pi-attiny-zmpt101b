.PHONY: clean build flash

clean:
	@rm -rf build

build:
	@mkdir -p build
	@platformio run

flash: build
	# flash the compiled firmware to the device using platformio
	platformio run --target upload
