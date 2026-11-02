/* Module: wavplug.dll
   Function: FUN_5f38f590
   Address: 5f38f590
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f38f590(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = FUN_5f38ff60(param_1);
  *(undefined **)(param_1 + 0x1c) = puVar1;
  if (puVar1 != (undefined *)0x0) {
    iVar2 = FUN_5f38ff10(param_1);
    return iVar2;
  }
  return -0x7ff8fff2;
}


