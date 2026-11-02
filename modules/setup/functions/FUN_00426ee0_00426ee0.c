/* Module: Setup.exe
   Function: FUN_00426ee0
   Address: 00426ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00426ee0(void *this,LPCSTR param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  LPCVOID local_4;
  
  iVar3 = -0x7ffb1ec2;
  local_4 = (LPCVOID)0x0;
  iVar2 = FUN_00426910(this,param_1,&local_4);
  if (iVar2 < 0) {
    iVar3 = -0x7ffb1ed3;
  }
  else if (*(int *)((int)local_4 + 0x1c) != 0) {
    bVar1 = FUN_0042b8b0(this,param_1);
    iVar3 = (-(uint)(CONCAT31(extraout_var,bVar1) != 0) & 0x7ffffffc) + 0x8004e136;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_00403420(local_4);
  }
  return iVar3;
}


