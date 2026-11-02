/* Module: vegas30.exe
   Function: FUN_005bd210
   Address: 005bd210
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005bd210(undefined4 param_1,int *param_2)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPCVOID local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_c = (LPCVOID)0x0;
  local_8 = 8;
  iVar1 = FUN_005d1930(param_1,&local_c,&local_4);
  if (-1 < iVar1) {
    if (local_c == (LPCVOID)0x0) {
      return -0x7fff0001;
    }
    iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_8,8,0);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_c,local_4,0);
    }
  }
  if (local_c != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(local_c);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(local_c);
    GlobalFree(pvVar2);
  }
  return iVar1;
}


