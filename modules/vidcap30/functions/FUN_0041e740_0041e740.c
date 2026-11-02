/* Module: vidcap30.exe
   Function: FUN_0041e740
   Address: 0041e740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e740(HWND param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  HWND pHVar5;
  LRESULT LVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  UINT Msg;
  WPARAM wParam;
  undefined1 *puVar13;
  char *local_210;
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  uVar3 = SendDlgItemMessageA(param_1,0x9c44,0x402,0,0);
  if ((short)uVar3 != 0) {
    bVar2 = 3;
    if ((uVar3 & 0x100) != 0) {
      bVar2 = 7;
    }
    if ((uVar3 & 0x200) != 0) {
      bVar2 = bVar2 | 8;
    }
    if ((uVar3 & 0x400) != 0) {
      bVar2 = bVar2 | 0x10;
    }
    FUN_0041db40(bVar2,uVar3,local_208);
    iVar11 = 5;
    local_210 = (char *)0x0;
    iVar1 = *DAT_005bc2b8;
    pcVar9 = (char *)(iVar1 + 0xb);
    do {
      iVar4 = 0;
      pcVar12 = pcVar9;
      do {
        cVar10 = (char)uVar3;
        if ((*pcVar12 == cVar10) && ((*(byte *)(iVar1 + (iVar11 + iVar4) * 2) & 0x9f) == bVar2)) {
          puVar13 = local_208;
          uVar8 = *(undefined4 *)(iVar1 + 4 + (int)local_210 * 0x14);
          uVar7 = _SfGetString_8(DAT_005ba2a0,0x6f);
          SfPrintF(local_104,uVar7,puVar13,uVar8);
          uVar7 = 0x30;
          uVar8 = _SfGetString_8(DAT_005ba2a0,0x8b);
          _SfMessageBox_16(param_1,local_104,uVar8,uVar7);
          return;
        }
        iVar4 = iVar4 + 1;
        pcVar12 = pcVar12 + 2;
      } while (iVar4 < 4);
      iVar11 = iVar11 + 10;
      local_210 = (char *)((int)local_210 + 1);
      pcVar9 = pcVar9 + 0x14;
    } while (iVar11 < 0x7d5);
    pHVar5 = GetDlgItem(param_1,0x9c43);
    LVar6 = SendMessageA(pHVar5,0x147,0,0);
    iVar1 = DAT_005bc2b8[LVar6];
    pHVar5 = GetDlgItem(param_1,0x9c4b);
    LVar6 = SendMessageA(pHVar5,0x188,0,0);
    iVar11 = 0;
    local_210 = (char *)(iVar1 + 0xb + LVar6 * 0x14);
    do {
      if (*local_210 == '\0') break;
      if ((*local_210 == cVar10) &&
         ((*(byte *)(iVar1 + 10 + (iVar11 + LVar6 * 10) * 2) & 0x9f) == bVar2)) {
        return;
      }
      iVar11 = iVar11 + 1;
      local_210 = local_210 + 2;
    } while (iVar11 < 4);
    if (iVar11 != 4) {
      iVar4 = iVar11 + LVar6 * 10;
      *(byte *)(iVar1 + 10 + iVar4 * 2) = bVar2;
      *(char *)(iVar1 + 0xb + iVar4 * 2) = cVar10;
      puVar13 = local_208;
      wParam = 0;
      Msg = 0x180;
      pHVar5 = GetDlgItem(param_1,0x9c4c);
      SendMessageA(pHVar5,Msg,wParam,(LPARAM)puVar13);
      SendDlgItemMessageA(param_1,0x9c44,0x401,0,0);
      uVar3 = (uint)(iVar11 != 3);
      pHVar5 = GetDlgItem(param_1,40000);
      EnableWindow(pHVar5,uVar3);
    }
  }
  return;
}


