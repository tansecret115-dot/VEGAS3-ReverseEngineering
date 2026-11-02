/* Module: mp3plug.dll
   Function: FUN_5f704c10
   Address: 5f704c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f704c10(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    if (param_1[0xec] != 0) {
      FUN_5f6d97a0(param_1[0xec]);
    }
    if (param_1[0xeb] != 0) {
      FUN_5f6d97a0(param_1[0xeb]);
    }
    if (param_1[0xed] != 0) {
      FUN_5f6d97a0(param_1[0xed]);
    }
    if (param_1[0xee] != 0) {
      FUN_5f6d97a0(param_1[0xee]);
    }
    if (param_1[0xf0] != 0) {
      FUN_5f6d97a0(param_1[0xf0]);
    }
    if (param_1[0xf1] != 0) {
      FUN_5f6d97a0(param_1[0xf1]);
    }
    if (param_1[0xf2] != 0) {
      FUN_5f6d97a0(param_1[0xf2]);
    }
    iVar3 = 0;
    iVar1 = *param_1;
    piVar2 = param_1;
    if (0 < iVar1) {
      do {
        if (piVar2[0xf5] != 0) {
          FUN_5f6d97a0(piVar2[0xf5]);
          iVar1 = *param_1;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 3;
      } while (iVar3 < iVar1);
    }
    FUN_5f6d97a0((int)param_1);
  }
  return;
}


