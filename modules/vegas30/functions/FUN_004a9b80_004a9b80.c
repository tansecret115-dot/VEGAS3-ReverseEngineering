/* Module: vegas30.exe
   Function: FUN_004a9b80
   Address: 004a9b80
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_004a9b80(undefined4 param_1,LPCWSTR param_2,int param_3)

{
  int *piVar1;
  HRESULT HVar2;
  IID *rclsid;
  int iVar3;
  CHAR local_28 [39];
  undefined1 local_1;
  
  HVar2 = -0x7fffbffb;
  piVar1 = *(int **)(param_2 + 0xa0);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if (iVar3 + -1 < 0) {
    rclsid = (IID *)0x0;
  }
  else {
    rclsid = *(IID **)piVar1[2];
  }
  if ((rclsid != (IID *)0x0) && (HVar2 = StringFromCLSID(rclsid,&param_2), -1 < HVar2)) {
    if ((param_2 == (LPCWSTR)0x0) || (*param_2 != L'\0')) {
      WideCharToMultiByte(0,0,param_2,-1,local_28,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x28) {
      local_28[0] = '\0';
    }
    local_1 = 0;
    CoTaskMemFree(param_2);
    if (param_3 == 1) {
      lstrcpynA(&DAT_00649998,local_28,0x28);
      DAT_006499bf = 0;
    }
    else {
      if (param_3 == 2) {
        lstrcpynA(&DAT_006499c0,local_28,0x28);
        DAT_006499e7 = 0;
        return HVar2;
      }
      if (param_3 == 3) {
        lstrcpynA(&DAT_006499e8,local_28,0x28);
        DAT_00649a0f = 0;
        return HVar2;
      }
    }
  }
  return HVar2;
}


