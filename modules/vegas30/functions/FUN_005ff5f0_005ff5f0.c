/* Module: vegas30.exe
   Function: FUN_005ff5f0
   Address: 005ff5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ff5f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar2 = -0x7ffb1ec2;
  local_4 = 0;
  iVar1 = FUN_005ff0a0(param_1,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else if (*(int *)(local_4 + 0x1c) != 0) {
    iVar1 = FUN_00603f90(param_1);
    iVar2 = (-(uint)(iVar1 != 0) & 0x7ffffffc) + 0x8004e136;
  }
  if (local_4 != 0) {
    FUN_0040bfc0(local_4);
  }
  return iVar2;
}


