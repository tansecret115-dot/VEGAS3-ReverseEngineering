/* Module: sftrkfx1.dll
   Function: FUN_5cba30d0
   Address: 5cba30d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cba30d0(int param_1,float *param_2)

{
  float *pfVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  float *pfVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  pfVar1 = (float *)(param_1 + 0x34);
  pfVar3 = pfVar1;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *param_2;
    param_2 = param_2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  EnterCriticalSection(lpCriticalSection);
  if (_DAT_5cc03f20 <= *pfVar1) {
    if (_DAT_5cc03f1c < *pfVar1) {
      *pfVar1 = 25.0;
    }
  }
  else {
    *pfVar1 = -60.0;
  }
  if (_DAT_5cc03f20 <= *(float *)(param_1 + 0x38)) {
    if (_DAT_5cc03f1c < *(float *)(param_1 + 0x38)) {
      *(undefined4 *)(param_1 + 0x38) = 0x41c80000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0xc2700000;
  }
  if (_DAT_5cc03f20 <= *(float *)(param_1 + 0x3c)) {
    if (_DAT_5cc03f24 < *(float *)(param_1 + 0x3c)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = 0xc2700000;
  }
  if (_DAT_5cc03f2c <= *(float *)(param_1 + 0x40)) {
    if (_DAT_5cc03f28 < *(float *)(param_1 + 0x40)) {
      *(undefined4 *)(param_1 + 0x40) = 0x42480000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  }
  FUN_5cba2ff0(param_1);
  FUN_5cba3030(param_1);
  FUN_5cba3070(param_1);
  FUN_5cba30a0(param_1);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


