/* Module: vidcap30.exe
   Function: FUN_004a4200
   Address: 004a4200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a4200(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00524bd0("1.0.2",0,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    FUN_004a3b20(param_1);
    return 0x80004005;
  }
  iVar1 = FUN_0052aba0(iVar1);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    FUN_004a3b20(param_1);
    return 0x80004005;
  }
  FUN_0052aa00(*(undefined4 *)(param_1 + 4),8);
  return 0;
}


