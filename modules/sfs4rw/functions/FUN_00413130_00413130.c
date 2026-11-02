/* Module: sfs4rw.dll
   Function: FUN_00413130
   Address: 00413130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00413130(void *this,LPSTR param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  BYTE local_38 [28];
  uchar local_1c [28];
  
  local_38[0] = '\0';
  iVar1 = FUN_004141b0(this,local_38);
  if (-1 < iVar1) {
    FUN_00411e30(this,local_38);
    FUN_00414240((int)this);
  }
  uVar2 = FUN_00413770(this,local_1c,(HKEY)0x19,param_3);
  lstrcpynA(param_1,(LPCSTR)local_1c,param_2);
  param_1[param_2 + -1] = '\0';
  return uVar2;
}


