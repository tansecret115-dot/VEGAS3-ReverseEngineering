/* Module: vegas30.exe
   Function: FUN_00437c80
   Address: 00437c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437c80(HWND param_1)

{
  float *pfVar1;
  HWND pHVar2;
  UINT UVar3;
  longlong lVar4;
  undefined4 local_12c [2];
  undefined4 local_124;
  undefined4 local_11c;
  undefined1 local_10c [264];
  
  pfVar1 = (float *)GetWindowLongA(param_1,8);
  lVar4 = ZEXT48(pfVar1) << 0x20;
  UVar3 = 0x703;
  pHVar2 = GetDlgItem(param_1,0x5f0);
  SendMessageA(pHVar2,UVar3,(WPARAM)lVar4,(LPARAM)((ulonglong)lVar4 >> 0x20));
  lVar4 = ZEXT48(local_12c) << 0x20;
  UVar3 = 0x704;
  pHVar2 = GetDlgItem(param_1,0x5f0);
  SendMessageA(pHVar2,UVar3,(WPARAM)lVar4,(LPARAM)((ulonglong)lVar4 >> 0x20));
  SfPrintF(local_10c,&DAT_00610fc8,(double)(pfVar1[2] * _DAT_00610f24));
  pHVar2 = GetDlgItem(param_1,0x5f2);
  SfSetWindowText(pHVar2);
  SfPrintF(local_10c,&DAT_00610fc8,(double)(pfVar1[1] * _DAT_00610f24));
  pHVar2 = GetDlgItem(param_1,0x5f4);
  SfSetWindowText(pHVar2);
  SfPrintF(local_10c,&DAT_00610fc8,(double)(*pfVar1 * _DAT_00610f24));
  pHVar2 = GetDlgItem(param_1,0x5f6);
  SfSetWindowText(pHVar2);
  SfPrintF(local_10c,&DAT_00610fc8,local_12c[0]);
  pHVar2 = GetDlgItem(param_1,0x5f8);
  SfSetWindowText(pHVar2);
  SfPrintF(local_10c,&DAT_00610fc8,local_124);
  pHVar2 = GetDlgItem(param_1,0x5fa);
  SfSetWindowText(pHVar2);
  SfPrintF(local_10c,&DAT_00610fc8,local_11c);
  pHVar2 = GetDlgItem(param_1,0x605);
  SfSetWindowText(pHVar2);
  SfPrintF(local_10c,&DAT_00610fc8,(double)(pfVar1[3] * _DAT_00610f24));
  pHVar2 = GetDlgItem(param_1,0x607);
  SfSetWindowText(pHVar2);
  return;
}


