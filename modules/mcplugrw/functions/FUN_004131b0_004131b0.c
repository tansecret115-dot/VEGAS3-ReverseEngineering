/* Module: mcplugrw.dll
   Function: FUN_004131b0
   Address: 004131b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004131b0(void *this,LPSTR param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  BYTE local_38 [28];
  uchar local_1c [28];
  
  local_38[0] = '\0';
  iVar1 = FUN_00414230(this,local_38);
  if (-1 < iVar1) {
    FUN_00411eb0(this,local_38);
    FUN_004142c0((int)this);
  }
  uVar2 = FUN_004137f0(this,local_1c,(HKEY)0x19,param_3);
  lstrcpynA(param_1,(LPCSTR)local_1c,param_2);
  param_1[param_2 + -1] = '\0';
  return uVar2;
}


