/* Module: sfppack3.dll
   Function: FUN_5cc7242b
   Address: 5cc7242b
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc7242b(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_5cc93248) {
    puVar1 = &DAT_5cc93164;
    do {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(param_1,puVar1[-2]);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 5;
    } while (iVar2 < DAT_5cc93248);
  }
  return;
}


