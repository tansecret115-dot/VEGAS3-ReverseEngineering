/* Module: vidcap30.exe
   Function: FUN_00424fe0
   Address: 00424fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00424fe0(int *param_1)

{
  int iVar1;
  undefined4 local_8;
  int local_4;
  
  if (*param_1 == 7) {
    local_4 = param_1[0x53];
    if ((param_1[0x52] & 4U) != 0) {
      if ((param_1[0x52] & 0x400U) == 0) {
        iVar1 = FUN_00424bb0(param_1);
        if (-1 < iVar1) {
          FUN_00424cd0(param_1);
        }
      }
      else {
        iVar1 = FUN_00424cd0(param_1);
        if (-1 < iVar1) {
          iVar1 = FUN_00424f60(param_1,&local_8);
          if (-1 < iVar1) {
            FUN_00424ef0(param_1,local_8,local_4);
            return;
          }
        }
      }
    }
  }
  return;
}


