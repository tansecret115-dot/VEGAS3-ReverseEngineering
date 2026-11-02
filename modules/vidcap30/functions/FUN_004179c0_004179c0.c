/* Module: vidcap30.exe
   Function: FUN_004179c0
   Address: 004179c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004179c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_00417770(&local_4,param_1,param_2,param_3,0);
  if ((iVar1 == 0) && (local_4 != 0)) {
    iVar1 = FUN_004178c0(local_4,0);
  }
  FUN_00417990(local_4);
  return iVar1;
}


