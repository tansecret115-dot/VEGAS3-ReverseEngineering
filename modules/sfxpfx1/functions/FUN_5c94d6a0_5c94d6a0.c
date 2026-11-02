/* Module: sfxpfx1.dll
   Function: FUN_5c94d6a0
   Address: 5c94d6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c94d6a0(HWND param_1,int param_2)

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
  
  FUN_5c97fb70(DAT_5c998768,(int *)&local_8,&local_14,2);
  DAT_5c99876c = 0;
  iVar1 = FUN_5c97fb70(DAT_5c998768,&local_10,(int *)&local_c,2);
  if (-1 < iVar1) {
    DAT_5c99876c = local_c & 0xff;
  }
  if ((local_8 == (LPSTR)0x0) || (uVar2 = 1, (int)DAT_5c99876c < 1)) {
    uVar2 = FUN_5c9540e0();
  }
  DAT_5c998760 = uVar2;
  FUN_5c97fb70(DAT_5c998768,(int *)&local_c,&local_10,2);
  bVar3 = DAT_5c998760 == 0;
  DAT_5c998764 = local_c;
  hWnd = GetDlgItem(param_1,param_2);
  SendMessageA(hWnd,0x600,0,0);
  _mbscpy(local_118,(uchar *)"Sonic Foundry ExpressFX Distortion");
  if (bVar3) {
    _mbscat(local_118,(uchar *)" -- DEMO");
  }
  SendMessageA(hWnd,0x601,0xa029,0x5c98b81c);
  SendMessageA(hWnd,0x601,41000,0x5c98b818);
  uVar2 = lstrlenA("Sonic Foundry ");
  FUN_5c9885f0();
  FUN_5c9885f0();
  local_8 = &stack0xfffffedc;
  lstrcpynA(&stack0xfffffedc,(LPCSTR)local_118,uVar2 + 1);
  lpString1 = local_8;
  local_118[uVar2 - 0xc] = '\0';
  local_118[uVar2 - 0xc] = '\0';
  lstrcpynA(lpString1,"Sonic Foundry ",uVar2 + 1);
  local_8[uVar2] = '\0';
  local_8[uVar2] = '\0';
  iVar1 = lstrcmpiA(&stack0xfffffedc,local_8);
  FUN_5c966780(param_1,param_2,local_118 + (~-(uint)(iVar1 != 0) & uVar2));
  return;
}


