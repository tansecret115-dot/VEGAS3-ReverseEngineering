/* Module: aifplug.dll
   Function: FUN_5fbd4aa0
   Address: 5fbd4aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd4aa0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = FUN_5fbd5890(param_1);
  *(undefined **)(param_1 + 0x24) = puVar1;
  if (puVar1 != (undefined *)0x0) {
    iVar2 = FUN_5fbd5840(param_1);
    return iVar2;
  }
  return -0x7ff8fff2;
}


