# Models Directory

Place your quantized `.gguf` files in this directory.

### Recommended Model
Download the latest optimized weights for the Uno Q here:
[SmolLM2-135M-Instruct-ArduinoUnoQ-GGUF](https://huggingface.co/assix-research/SmolLM2-135M-Instruct-ArduinoUnoQ-GGUF)

### Execution Example
```bash
../mpu/llama-cli -m unoq_optimized.gguf -ngl 99 -t 4
```
