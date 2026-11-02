/* Module: rmme3260.dll
   Function: FUN_66224800
   Address: 66224800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_66224800(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(double *)(param_1 + 7) < _DAT_6626bd18) {
    param_1[7] = 0;
    param_1[8] = 0x3ff00000;
  }
  if (_DAT_6626bd20 <= *(double *)(param_1 + 7)) {
    param_1[5] = 200;
  }
  else {
    param_1[5] = 0x32;
  }
  if (0 < param_1[1]) {
    do {
      piVar1 = *(int **)(*param_1 + iVar2 * 4);
      (**(code **)(*piVar1 + 0x10))(piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return;
}


