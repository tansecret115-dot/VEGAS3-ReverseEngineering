/* Module: vegas30.exe
   Function: FUN_005a2630
   Address: 005a2630
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a2630(IID *param_1)

{
  IID *rclsid;
  int iVar1;
  HRESULT HVar2;
  uint uVar3;
  CHAR local_28 [39];
  undefined1 local_1;
  
  rclsid = param_1;
  if (param_1 == (IID *)0x0) {
    return;
  }
  iVar1 = FUN_00508ae0();
  if (iVar1 != 5) {
    return;
  }
  HVar2 = StringFromCLSID(rclsid,(LPOLESTR *)&param_1);
  if (HVar2 < 0) {
    return;
  }
  if ((param_1 == (IID *)0x0) || ((short)param_1->Data1 != 0)) {
    WideCharToMultiByte(0,0,(LPCWSTR)param_1,-1,local_28,0x28,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x28) {
    local_28[0] = '\0';
  }
  local_1 = 0;
  CoTaskMemFree(param_1);
  param_1 = (IID *)0x0;
  iVar1 = lstrcmpiA("{00000000-0000-0000-0000-000000000000}",local_28);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = lstrcmpiA("{da6f7c17-cd66-11d1-9aa7-00a0c99b12c5}",local_28);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = lstrcmpiA(&DAT_00649998,local_28);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = lstrcmpiA(&DAT_006499c0,local_28);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = lstrcmpiA(&DAT_006499e8,local_28);
  if (iVar1 == 0) {
    return;
  }
  uVar3 = 99;
  iVar1 = lstrcmpiA(&DAT_00649a10,local_28);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  iVar1 = lstrcmpiA(&DAT_00649a38,local_28);
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  iVar1 = lstrcmpiA(&DAT_00649a60,local_28);
  if (iVar1 == 0) {
    uVar3 = 3;
  }
  iVar1 = lstrcmpiA(&DAT_00649a88,local_28);
  if (iVar1 == 0) {
    uVar3 = 4;
  }
  iVar1 = lstrcmpiA(&DAT_00649ab0,local_28);
  if (iVar1 == 0) {
    uVar3 = 5;
  }
  else if (uVar3 < 5) goto LAB_005a279d;
  _mbscpy(&DAT_00649ab0,&DAT_00649a88);
LAB_005a279d:
  if (3 < uVar3) {
    _mbscpy(&DAT_00649a88,&DAT_00649a60);
  }
  if (2 < uVar3) {
    _mbscpy(&DAT_00649a60,&DAT_00649a38);
  }
  if (1 < uVar3) {
    _mbscpy(&DAT_00649a38,&DAT_00649a10);
  }
  lstrcpynA(&DAT_00649a10,local_28,0x28);
  DAT_00649a37 = 0;
  return;
}


