/* Module: vegas30k.dll
   Function: FUN_01138a00
   Address: 01138a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138a00(HWND param_1)

{
  int *piVar1;
  HWND pHVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  UINT UVar8;
  WPARAM WVar9;
  int nIDDlgItem;
  LPARAM LVar10;
  BOOL BVar11;
  
  piVar1 = (int *)GetWindowLongA(param_1,8);
  LVar10 = 0;
  if (*(int *)(*piVar1 + 0xc) == 0) {
    WVar9 = 0;
    UVar8 = 0x18b;
    pHVar2 = GetDlgItem(param_1,0x423);
    LVar3 = SendMessageA(pHVar2,UVar8,WVar9,LVar10);
    uVar5 = (uint)(0 < LVar3);
    uVar6 = uVar5;
    pHVar2 = GetDlgItem(param_1,0x423);
    pcVar7 = EnableWindow_exref;
    EnableWindow(pHVar2,uVar6);
    uVar6 = uVar5;
    pHVar2 = GetDlgItem(param_1,0x426);
    EnableWindow(pHVar2,uVar6);
    uVar6 = uVar5;
    pHVar2 = GetDlgItem(param_1,0x424);
    EnableWindow(pHVar2,uVar6);
    uVar6 = uVar5;
    pHVar2 = GetDlgItem(param_1,0x425);
    EnableWindow(pHVar2,uVar6);
    uVar6 = uVar5;
    pHVar2 = GetDlgItem(param_1,4);
    EnableWindow(pHVar2,uVar6);
    pHVar2 = GetDlgItem(param_1,1);
    EnableWindow(pHVar2,uVar5);
    BVar11 = 0;
    if (LVar3 != 0) {
      WVar9 = 0;
      UVar8 = 0x18b;
      pHVar2 = GetDlgItem(param_1,0x426);
      LVar3 = SendMessageA(pHVar2,UVar8,WVar9,BVar11);
      LVar10 = 0;
      WVar9 = 0;
      UVar8 = 0x188;
      pHVar2 = GetDlgItem(param_1,0x426);
      LVar4 = SendMessageA(pHVar2,UVar8,WVar9,LVar10);
      if (((LVar3 == 0) || (LVar3 < 2)) || (LVar4 < 1)) {
        BVar11 = 0;
      }
      else {
        BVar11 = 1;
      }
      pHVar2 = GetDlgItem(param_1,0x43b);
      EnableWindow(pHVar2,BVar11);
      if (((LVar3 == 0) || (LVar3 < 2)) || (LVar3 + -1 <= LVar4)) {
        BVar11 = 0;
      }
      else {
        BVar11 = 1;
      }
      pHVar2 = GetDlgItem(param_1,0x43c);
      EnableWindow(pHVar2,BVar11);
      uVar5 = (uint)(0 < LVar3);
      uVar6 = uVar5;
      pHVar2 = GetDlgItem(param_1,0x409);
      EnableWindow(pHVar2,uVar6);
      pHVar2 = GetDlgItem(param_1,3);
      EnableWindow(pHVar2,uVar5);
      LVar10 = 0;
      WVar9 = 0;
      UVar8 = 0x146;
      pHVar2 = GetDlgItem(param_1,0x427);
      LVar3 = SendMessageA(pHVar2,UVar8,WVar9,LVar10);
      uVar6 = (uint)(0 < LVar3);
      pHVar2 = GetDlgItem(param_1,0x427);
      EnableWindow(pHVar2,uVar6);
      return;
    }
    pHVar2 = GetDlgItem(param_1,0x427);
    EnableWindow(pHVar2,BVar11);
    nIDDlgItem = 0x409;
  }
  else {
    pHVar2 = GetDlgItem(param_1,0x425);
    pcVar7 = EnableWindow_exref;
    EnableWindow(pHVar2,LVar10);
    BVar11 = 0;
    pHVar2 = GetDlgItem(param_1,0x409);
    EnableWindow(pHVar2,BVar11);
    BVar11 = 0;
    pHVar2 = GetDlgItem(param_1,0x424);
    EnableWindow(pHVar2,BVar11);
    BVar11 = 0;
    pHVar2 = GetDlgItem(param_1,0x427);
    EnableWindow(pHVar2,BVar11);
    BVar11 = 0;
    pHVar2 = GetDlgItem(param_1,0x426);
    EnableWindow(pHVar2,BVar11);
    BVar11 = 0;
    pHVar2 = GetDlgItem(param_1,0x423);
    EnableWindow(pHVar2,BVar11);
    nIDDlgItem = 4;
  }
  pHVar2 = GetDlgItem(param_1,nIDDlgItem);
  (*pcVar7)(pHVar2);
  pHVar2 = GetDlgItem(param_1,3);
  (*pcVar7)(pHVar2);
  return;
}


