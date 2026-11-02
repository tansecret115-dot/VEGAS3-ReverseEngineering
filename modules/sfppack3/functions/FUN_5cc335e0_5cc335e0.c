/* Module: sfppack3.dll
   Function: FUN_5cc335e0
   Address: 5cc335e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc335e0(HWND param_1,int param_2)

{
  LPSTR lpString1;
  int iVar1;
  uint uVar2;
  HWND hWnd;
  bool bVar3;
  uchar local_118 [260];
  int local_14;
  int local_10;
  uint local_c;
  LPSTR local_8;
  
  FUN_5cc7bb20(DAT_5cc982c8,(int *)&local_8,&local_14,2);
  DAT_5cc982cc = 0;
  iVar1 = FUN_5cc7bb20(DAT_5cc982c8,&local_10,(int *)&local_c,2);
  if (-1 < iVar1) {
    DAT_5cc982cc = local_c & 0xff;
  }
  if ((local_8 == (LPSTR)0x0) || (uVar2 = 1, (int)DAT_5cc982cc < 1)) {
    uVar2 = FUN_5cc4bfe0();
  }
  DAT_5cc982c0 = uVar2;
  FUN_5cc7bb20(DAT_5cc982c8,(int *)&local_c,&local_10,2);
  bVar3 = DAT_5cc982c0 == 0;
  DAT_5cc982c4 = local_c;
  hWnd = GetDlgItem(param_1,param_2);
  SendMessageA(hWnd,0x600,0,0);
  _mbscpy(local_118,(uchar *)"Sonic Foundry Flange/Wah-wah");
  if (bVar3) {
    _mbscat(local_118,(uchar *)" -- DEMO");
  }
  SendMessageA(hWnd,0x601,0xa029,0x5cc87bac);
  SendMessageA(hWnd,0x601,41000,0x5cc87ba8);
  uVar2 = lstrlenA("Sonic Foundry ");
  FUN_5cc845a0();
  FUN_5cc845a0();
  local_8 = &stack0xfffffedc;
  lstrcpynA(&stack0xfffffedc,(LPCSTR)local_118,uVar2 + 1);
  lpString1 = local_8;
  local_118[uVar2 - 0xc] = '\0';
  local_118[uVar2 - 0xc] = '\0';
  lstrcpynA(lpString1,"Sonic Foundry ",uVar2 + 1);
  local_8[uVar2] = '\0';
  local_8[uVar2] = '\0';
  iVar1 = lstrcmpiA(&stack0xfffffedc,local_8);
  FUN_5cc627c0(param_1,param_2,local_118 + (~-(uint)(iVar1 != 0) & uVar2));
  return;
}


