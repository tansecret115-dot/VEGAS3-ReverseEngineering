/* Module: vidcap30.exe
   Function: FUN_0056e810
   Address: 0056e810
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0056e810(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar2 = -0x7ffb1ec2;
  local_4 = 0;
  iVar1 = FUN_0056e2c0(param_1,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else if (*(int *)(local_4 + 0x1c) != 0) {
    iVar1 = FUN_005731b0(param_1);
    iVar2 = (-(uint)(iVar1 != 0) & 0x7ffffffc) + 0x8004e136;
  }
  if (local_4 != 0) {
    FUN_00404b20(local_4);
  }
  return iVar2;
}


