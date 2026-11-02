/* Module: vidcap30.exe
   Function: FUN_00405b60
   Address: 00405b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405b60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  
  param_1[1] = param_1[1] | 2;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = &DAT_005bbb30;
    puVar1 = &DAT_005b2560;
    piVar4 = param_1 + 0x1b;
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
    } while (puVar1 < &DAT_005b257c);
    FUN_004534e0(param_1);
  }
  FUN_00410ec0(param_1[0x27]);
  param_1[0x27] = 0;
  DestroyWindow((HWND)param_1[0x26]);
  param_1[0x26] = 0;
  DestroyWindow((HWND)*param_1);
  return;
}


