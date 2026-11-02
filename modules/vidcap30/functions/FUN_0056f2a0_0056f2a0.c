/* Module: vidcap30.exe
   Function: FUN_0056f2a0
   Address: 0056f2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0056f2a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_0056f310(&local_4);
  if (iVar1 < 0) {
    return 0;
  }
  if (local_4 == -1) {
    return 0;
  }
  local_4 = local_4 - param_1;
  if (local_4 < 0) {
    local_4 = 0;
  }
  uVar2 = FUN_0056f2f0(local_4);
  return uVar2;
}


