/* Module: wmfplug2.dll
   Function: FUN_00413830
   Address: 00413830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00413830(void *this,HWND param_1)

{
  int iVar1;
  uchar local_100 [256];
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  CheckDlgButton(param_1,0xf8,*(UINT *)(iVar1 + 0x10));
  FUN_00413a70(*(uint *)(iVar1 + 0x24),local_100);
  SetDlgItemTextA(param_1,0xd4,(LPCSTR)local_100);
  CheckDlgButton(param_1,0xf9,*(UINT *)(iVar1 + 0x14));
  FUN_00413a70(*(uint *)(iVar1 + 0x28),local_100);
  SetDlgItemTextA(param_1,0xd5,(LPCSTR)local_100);
  CheckDlgButton(param_1,0xfa,*(UINT *)(iVar1 + 0x18));
  FUN_00413a70(*(uint *)(iVar1 + 0x2c),local_100);
  SetDlgItemTextA(param_1,0xf5,(LPCSTR)local_100);
  CheckDlgButton(param_1,0xfb,*(UINT *)(iVar1 + 0x1c));
  FUN_00413a70(*(uint *)(iVar1 + 0x30),local_100);
  SetDlgItemTextA(param_1,0xf6,(LPCSTR)local_100);
  CheckDlgButton(param_1,0xfc,*(UINT *)(iVar1 + 0x20));
  FUN_00413a70(*(uint *)(iVar1 + 0x34),local_100);
  SetDlgItemTextA(param_1,0xf7,(LPCSTR)local_100);
  FUN_00413960(param_1,iVar1);
  return 0;
}


