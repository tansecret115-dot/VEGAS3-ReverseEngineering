/* Module: sfnetmedia.dll
   Function: FUN_0041d7b0
   Address: 0041d7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d7b0(HWND param_1,int param_2)

{
  ULONG_PTR *pUVar1;
  int iVar2;
  HWND hWnd;
  uint uVar3;
  DWORD DVar4;
  uchar local_208 [260];
  uchar local_104 [260];
  
  pUVar1 = *(ULONG_PTR **)(*(int *)(param_2 + 0xc) + 0x40);
  hWnd = GetParent(param_1);
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == -0x25d) {
    FUN_00412f70(0,param_1,*pUVar1,1,(uchar *)pUVar1[0x43]);
    return 1;
  }
  if (iVar2 == -0x25b) {
    uVar3 = SendMessageA(hWnd,0x465,0x104,(LPARAM)local_208);
    if (((int)uVar3 < 0) || (0x104 < uVar3)) {
      local_104[0] = '\0';
    }
    else {
      DVar4 = GetFileAttributesA((LPCSTR)local_208);
      if ((DVar4 == 0xffffffff) || ((DVar4 & 0x10) == 0)) {
        FUN_00413410(local_208,local_104,0x104);
      }
      else {
        _mbscpy(local_104,local_208);
      }
    }
    SetDlgItemTextA(hWnd,0x148,(LPCSTR)local_104);
    FUN_0041e330(local_104,local_208);
    SetDlgItemTextA(param_1,0x14e,(LPCSTR)local_208);
  }
  else if (iVar2 == -0x259) {
    FUN_0041c3e0(hWnd,(HWND)0x0,(int *)0x0,0x8001);
    return 0;
  }
  return 0;
}


