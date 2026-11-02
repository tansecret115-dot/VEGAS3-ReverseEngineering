/* Module: vidcap30.exe
   Function: FUN_0041e570
   Address: 0041e570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e570(HWND param_1,HWND param_2)

{
  byte bVar1;
  int iVar2;
  HWND pHVar3;
  LRESULT LVar4;
  uchar *_Source;
  uint bEnable;
  int iVar5;
  BOOL bEnable_00;
  char *local_110;
  uchar local_104 [260];
  
  pHVar3 = GetDlgItem(param_1,0x9c43);
  LVar4 = SendMessageA(pHVar3,0x147,0,0);
  iVar2 = *(int *)(DAT_005bc2b8 + LVar4 * 4);
  LVar4 = SendMessageA(param_2,0x188,0,0);
  pHVar3 = GetDlgItem(param_1,0x9c4c);
  SendMessageA(pHVar3,0x184,0,0);
  iVar5 = 0;
  local_110 = (char *)(iVar2 + 0xb + LVar4 * 0x14);
  do {
    if (*local_110 == '\0') break;
    bVar1 = *(byte *)(iVar2 + 10 + (iVar5 + LVar4 * 10) * 2);
    FUN_0041db40(bVar1,*local_110,local_104);
    if ((bVar1 & 0x60) != 0) {
      _Source = (uchar *)_SfGetString_8(DAT_005ba2a0,0x83);
      _mbscat(local_104,_Source);
    }
    SendMessageA(pHVar3,0x180,0,(LPARAM)local_104);
    iVar5 = iVar5 + 1;
    local_110 = local_110 + 2;
  } while (iVar5 < 4);
  bEnable = (uint)(iVar5 != 4);
  pHVar3 = GetDlgItem(param_1,40000);
  EnableWindow(pHVar3,bEnable);
  bEnable_00 = 0;
  pHVar3 = GetDlgItem(param_1,0x9c41);
  EnableWindow(pHVar3,bEnable_00);
  return;
}


