/* Module: vidcap30.exe
   Function: FUN_004347a0
   Address: 004347a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004347a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042f0a0(DAT_005bb838);
  if (iVar1 == 1) {
    FUN_0043b8d0(param_1,0,0);
  }
  FUN_0043b8d0(param_1,iVar1,1);
  return;
}


