/* Module: vegas30.exe
   Function: FUN_00507060
   Address: 00507060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00507060(HWND param_1,HWND param_2)

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
  
  pHVar3 = GetDlgItem(param_1,0x434);
  LVar4 = SendMessageA(pHVar3,0x147,0,0);
  iVar2 = *(int *)(DAT_0064e51c + LVar4 * 4);
  LVar4 = SendMessageA(param_2,0x188,0,0);
  pHVar3 = GetDlgItem(param_1,0x437);
  SendMessageA(pHVar3,0x184,0,0);
  iVar5 = 0;
  local_110 = (char *)(iVar2 + 0xb + LVar4 * 0x14);
  do {
    if (*local_110 == '\0') break;
    bVar1 = *(byte *)(iVar2 + 10 + (iVar5 + LVar4 * 10) * 2);
    FUN_005071a0(bVar1,*local_110,local_104);
    if ((bVar1 & 0x60) != 0) {
      _Source = (uchar *)_SfGetString_8(DAT_00647204,0x4f27);
      _mbscat(local_104,_Source);
    }
    SendMessageA(pHVar3,0x180,0,(LPARAM)local_104);
    iVar5 = iVar5 + 1;
    local_110 = local_110 + 2;
  } while (iVar5 < 4);
  bEnable = (uint)(iVar5 != 4);
  pHVar3 = GetDlgItem(param_1,0x439);
  EnableWindow(pHVar3,bEnable);
  bEnable_00 = 0;
  pHVar3 = GetDlgItem(param_1,0x43a);
  EnableWindow(pHVar3,bEnable_00);
  return;
}


