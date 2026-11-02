/* Module: sfppack2.dll
   Function: FUN_5ccd7180
   Address: 5ccd7180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccd7180(HWND param_1,int param_2)

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
  
  FUN_5cd45010(DAT_5cd67a00,(int *)&local_8,&local_14,2);
  DAT_5cd67a04 = 0;
  iVar1 = FUN_5cd45010(DAT_5cd67a00,&local_10,(int *)&local_c,2);
  if (-1 < iVar1) {
    DAT_5cd67a04 = local_c & 0xff;
  }
  if ((local_8 == (LPSTR)0x0) || (uVar2 = 1, (int)DAT_5cd67a04 < 1)) {
    uVar2 = FUN_5cd05aa0();
  }
  DAT_5cd679f8 = uVar2;
  FUN_5cd45010(DAT_5cd67a00,(int *)&local_c,&local_10,2);
  bVar3 = DAT_5cd679f8 == 0;
  DAT_5cd679fc = local_c;
  hWnd = GetDlgItem(param_1,param_2);
  SendMessageA(hWnd,0x600,0,0);
  _mbscpy(local_118,(uchar *)"Sonic Foundry Graphic EQ");
  if (bVar3) {
    _mbscat(local_118,(uchar *)" -- DEMO");
  }
  SendMessageA(hWnd,0x601,0xa029,0x5cd51b94);
  SendMessageA(hWnd,0x601,41000,0x5cd51b90);
  uVar2 = lstrlenA("Sonic Foundry ");
  FUN_5cd4dab0();
  FUN_5cd4dab0();
  local_8 = &stack0xfffffedc;
  lstrcpynA(&stack0xfffffedc,(LPCSTR)local_118,uVar2 + 1);
  lpString1 = local_8;
  local_118[uVar2 - 0xc] = '\0';
  local_118[uVar2 - 0xc] = '\0';
  lstrcpynA(lpString1,"Sonic Foundry ",uVar2 + 1);
  local_8[uVar2] = '\0';
  local_8[uVar2] = '\0';
  iVar1 = lstrcmpiA(&stack0xfffffedc,local_8);
  FUN_5cd22790(param_1,param_2,local_118 + (~-(uint)(iVar1 != 0) & uVar2));
  return;
}


