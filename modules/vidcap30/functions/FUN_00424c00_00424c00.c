/* Module: vidcap30.exe
   Function: FUN_00424c00
   Address: 00424c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00424c00(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 7) {
    if ((param_1[0x52] & 4U) != 0) {
      if ((param_1[0x52] & 0x2000U) == 0) {
        iVar1 = (**(code **)(*(int *)param_1[0xd6] + 0x1c))((int *)param_1[0xd6]);
        if (-1 < iVar1) {
          param_1[0x52] = param_1[0x52] | 0x8000;
          param_1[0x53] = param_1[0x53];
          return;
        }
      }
      else {
        FUN_00424cd0(param_1);
      }
    }
  }
  return;
}


