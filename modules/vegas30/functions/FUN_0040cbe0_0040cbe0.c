/* Module: vegas30.exe
   Function: FUN_0040cbe0
   Address: 0040cbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040cbe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  
  param_1[1] = param_1[1] | 2;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = &DAT_0064b5b0;
    puVar1 = &DAT_0063d060;
    piVar4 = param_1 + 0x1a;
    do {
      if (*piVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar1;
      }
      *puVar2 = uVar3;
      puVar1 = puVar1 + 1;
      piVar4 = piVar4 + 1;
      puVar2 = puVar2 + 0x10;
    } while (puVar1 < &DAT_0063d090);
    FUN_00439680();
    FUN_00562560(&DAT_0064b538);
  }
  DestroyWindow((HWND)*param_1);
  return;
}


