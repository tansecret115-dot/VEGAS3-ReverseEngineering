/* Module: vidcap30.exe
   Function: FUN_004165b0
   Address: 004165b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004165b0(size_t param_1)

{
  void *pvVar1;
  
  if (param_1 < 5) {
    param_1 = 4;
  }
  pvVar1 = calloc(1,param_1);
  if (pvVar1 != (void *)0x0) {
    *(size_t *)((int)pvVar1 + 8) = param_1;
    *(undefined4 *)((int)pvVar1 + 0xc) = 1;
    *(undefined1 **)((int)pvVar1 + 0x1c) = &LAB_00416540;
    *(undefined4 *)((int)pvVar1 + 0x20) = 0;
    *(code **)((int)pvVar1 + 0x24) = FUN_00416550;
    *(undefined4 *)((int)pvVar1 + 0x14) = 0;
  }
  return;
}


