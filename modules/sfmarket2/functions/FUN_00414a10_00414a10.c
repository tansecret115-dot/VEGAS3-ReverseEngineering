/* Module: sfmarket2.dll
   Function: FUN_00414a10
   Address: 00414a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00414a10(void *this,LPCSTR param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  LPCVOID local_4;
  
  iVar3 = -0x7ffb1ec2;
  local_4 = (LPCVOID)0x0;
  iVar2 = FUN_004144c0(this,param_1,&local_4);
  if (iVar2 < 0) {
    iVar3 = -0x7ffb1ed3;
  }
  else if (*(int *)((int)local_4 + 0x1c) != 0) {
    bVar1 = FUN_004193b0(this,param_1);
    iVar3 = (-(uint)(CONCAT31(extraout_var,bVar1) != 0) & 0x7ffffffc) + 0x8004e136;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_004028d0(local_4);
  }
  return iVar3;
}


