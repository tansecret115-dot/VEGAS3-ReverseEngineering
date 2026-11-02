/* Module: sfppack1.dll
   Function: FUN_5cdfca9b
   Address: 5cdfca9b
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdfca9b(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_5ce1f3f0) {
    puVar1 = &DAT_5ce1f30c;
    do {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(param_1,puVar1[-2]);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 5;
    } while (iVar2 < DAT_5ce1f3f0);
  }
  return;
}


