/* Module: sfxpfx1.dll
   Function: FUN_5c9763eb
   Address: 5c9763eb
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c9763eb(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_5c996190) {
    puVar1 = &DAT_5c9960fc;
    do {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(param_1,puVar1[-2]);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 5;
    } while (iVar2 < DAT_5c996190);
  }
  return;
}


