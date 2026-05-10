# UnoQ-Edge-Reasoner

An optimized implementation of LLM inferencing on the Arduino Uno Q (Qualcomm QRB2210 + STM32U585). This project demonstrates a "Dual-Brain" architecture where the MCU handles real-time triggers and the MPU provides local LLM reasoning.

## Hardware Specs
- **MPU:** Qualcomm Dragonwing (Debian Linux)
- **GPU:** Adreno 702 (Accelerated via OpenCL)
- **MCU:** STM32U585
- **Inference Hardware:** NVIDIA DGX Spark (for quantization)

## Performance
- **Model:** SmolLM2-135M-Instruct (Q4_0 Quantization)
- **Prompt Processing:** ~60 t/s
- **Generation:** ~26 t/s

## Getting Started
1. Flash the MCU sketch in `/mcu`.
2. Run the Python orchestrator in `/mpu`.
3. Use the optimized `llama-cli` binary provided.
