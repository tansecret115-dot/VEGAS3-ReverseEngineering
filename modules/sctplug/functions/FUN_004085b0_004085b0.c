/* Module: sctplug.dll
   Function: FUN_004085b0
   Address: 004085b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004085b0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = FUN_00408d70(param_1);
  *(undefined **)(param_1 + 0x1c) = puVar1;
  if (puVar1 != (undefined *)0x0) {
    iVar2 = FUN_00408d20(param_1);
    return iVar2;
  }
  return -0x7ff8fff2;
}


