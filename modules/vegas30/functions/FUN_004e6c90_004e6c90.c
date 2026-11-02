/* Module: vegas30.exe
   Function: FUN_004e6c90
   Address: 004e6c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e6c90(size_t param_1)

{
  void *pvVar1;
  
  if (param_1 < 5) {
    param_1 = 4;
  }
  pvVar1 = calloc(1,param_1);
  if (pvVar1 != (void *)0x0) {
    *(size_t *)((int)pvVar1 + 8) = param_1;
    *(undefined4 *)((int)pvVar1 + 0xc) = 1;
    *(undefined1 **)((int)pvVar1 + 0x20) = &LAB_004e6c20;
    *(undefined4 *)((int)pvVar1 + 0x2c) = 0;
    *(code **)((int)pvVar1 + 0x28) = FUN_004e6c30;
    *(undefined4 *)((int)pvVar1 + 0x14) = 0;
  }
  return;
}


