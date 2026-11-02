/* Module: sftrans1.dll
   Function: FUN_005301d0
   Address: 005301d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005301d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar2 = -0x7ffb1ec2;
  local_4 = 0;
  iVar1 = FUN_0052fc80(param_1,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else if (*(int *)(local_4 + 0x1c) != 0) {
    iVar1 = FUN_00534b70(param_1);
    iVar2 = (-(uint)(iVar1 != 0) & 0x7ffffffc) + 0x8004e136;
  }
  if (local_4 != 0) {
    FUN_004035f0(local_4);
  }
  return iVar2;
}


