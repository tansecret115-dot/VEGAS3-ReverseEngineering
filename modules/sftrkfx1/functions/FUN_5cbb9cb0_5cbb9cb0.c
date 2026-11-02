/* Module: sftrkfx1.dll
   Function: FUN_5cbb9cb0
   Address: 5cbb9cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb9cb0(HWND param_1,int param_2)

{
  LPSTR lpString1;
  uint uVar1;
  HWND hWnd;
  int iVar2;
  uchar local_10c [260];
  LPSTR local_8;
  
  iVar2 = DAT_5cc11480;
  uVar1 = FUN_5cba18f0(1);
  if ((iVar2 == 0) || ((int)uVar1 < 1)) {
    uVar1 = FUN_5cba1960();
  }
  else {
    uVar1 = 1;
  }
  hWnd = GetDlgItem(param_1,param_2);
  SendMessageA(hWnd,0x600,0,0);
  _mbscpy(local_10c,(uchar *)"Sonic Foundry Dither");
  if (uVar1 == 0) {
    _mbscat(local_10c,(uchar *)" -- DEMO");
  }
  SendMessageA(hWnd,0x601,0xa029,0x5cc040dc);
  SendMessageA(hWnd,0x601,41000,0x5cc040d8);
  uVar1 = lstrlenA("Sonic Foundry ");
  FUN_5cc020f0();
  FUN_5cc020f0();
  local_8 = &stack0xfffffee8;
  lstrcpynA(&stack0xfffffee8,(LPCSTR)local_10c,uVar1 + 1);
  lpString1 = local_8;
  local_10c[uVar1 - 0xc] = '\0';
  local_10c[uVar1 - 0xc] = '\0';
  lstrcpynA(lpString1,"Sonic Foundry ",uVar1 + 1);
  local_8[uVar1] = '\0';
  local_8[uVar1] = '\0';
  iVar2 = lstrcmpiA(&stack0xfffffee8,local_8);
  FUN_5cbc0c80(param_1,param_2,local_10c + (~-(uint)(iVar2 != 0) & uVar1));
  return;
}


