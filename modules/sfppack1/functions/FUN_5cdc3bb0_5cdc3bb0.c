/* Module: sfppack1.dll
   Function: FUN_5cdc3bb0
   Address: 5cdc3bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdc3bb0(HWND param_1,int param_2)

{
  LPSTR lpString1;
  int iVar1;
  uint uVar2;
  HWND hWnd;
  bool bVar3;
  uchar local_118 [260];
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  LPSTR local_8;
  
  FUN_5ce06190(DAT_5ce237f0,&local_8,&local_14,2);
  DAT_5ce237f4 = 0;
  iVar1 = FUN_5ce06190(DAT_5ce237f0,&local_10,&local_c,2);
  if (-1 < iVar1) {
    DAT_5ce237f4 = local_c & 0xff;
  }
  if ((local_8 == (LPSTR)0x0) || (uVar2 = 1, (int)DAT_5ce237f4 < 1)) {
    uVar2 = FUN_5cdda790();
  }
  DAT_5ce237e8 = uVar2;
  FUN_5ce06190(DAT_5ce237f0,&local_c,&local_10,2);
  bVar3 = DAT_5ce237e8 == 0;
  DAT_5ce237ec = local_c;
  hWnd = GetDlgItem(param_1,param_2);
  SendMessageA(hWnd,0x600,0,0);
  _mbscpy(local_118,(uchar *)"Sonic Foundry Simple Delay");
  if (bVar3) {
    _mbscat(local_118,(uchar *)" -- DEMO");
  }
  SendMessageA(hWnd,0x601,0xa029,0x5ce12dbc);
  SendMessageA(hWnd,0x601,41000,0x5ce12db8);
  uVar2 = lstrlenA("Sonic Foundry ");
  FUN_5ce0ec20();
  FUN_5ce0ec20();
  local_8 = &stack0xfffffedc;
  lstrcpynA(&stack0xfffffedc,(LPCSTR)local_118,uVar2 + 1);
  lpString1 = local_8;
  local_118[uVar2 - 0xc] = '\0';
  local_118[uVar2 - 0xc] = '\0';
  lstrcpynA(lpString1,"Sonic Foundry ",uVar2 + 1);
  local_8[uVar2] = '\0';
  local_8[uVar2] = '\0';
  iVar1 = lstrcmpiA(&stack0xfffffedc,local_8);
  FUN_5cdece30(param_1,param_2,local_118 + (~-(uint)(iVar1 != 0) & uVar2));
  return;
}


