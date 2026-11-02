/* Module: vidpcore.dll
   Function: FUN_5df0a990
   Address: 5df0a990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5df0a990(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar2 = -0x7ffb1ec2;
  local_4 = 0;
  iVar1 = FUN_5df0a440(param_1,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else if (*(int *)(local_4 + 0x1c) != 0) {
    iVar1 = FUN_5df0f330(param_1);
    iVar2 = (-(uint)(iVar1 != 0) & 0x7ffffffc) + 0x8004e136;
  }
  if (local_4 != 0) {
    FUN_5de03b10(local_4);
  }
  return iVar2;
}


