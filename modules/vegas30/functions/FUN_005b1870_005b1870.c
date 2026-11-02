/* Module: vegas30.exe
   Function: FUN_005b1870
   Address: 005b1870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b1870(undefined4 param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x83c);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((int)pvVar1 + 0x10) = param_1;
  }
  return;
}


