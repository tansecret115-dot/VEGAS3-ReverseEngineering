/* Module: vegas30.exe
   Function: FUN_004b2ff0
   Address: 004b2ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b2ff0(HWND param_1,int *param_2)

{
  int iVar1;
  LPARAM LVar2;
  HWND pHVar3;
  undefined4 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  UINT UVar8;
  WPARAM WVar9;
  undefined1 *puVar10;
  BOOL BVar11;
  undefined1 local_100 [256];
  
  pcVar6 = GetDlgItem_exref;
  iVar1 = *param_2;
  if (*(char *)(iVar1 + 8000) == '\0') {
    LVar2 = 0;
    WVar9 = 0;
    UVar8 = 0xf1;
    pHVar3 = GetDlgItem(param_1,0x447);
    SendMessageA(pHVar3,UVar8,WVar9,LVar2);
    pcVar5 = EnableWindow_exref;
  }
  else if (*(int *)(iVar1 + 0x2058) == 0) {
    BVar11 = 0;
    pHVar3 = GetDlgItem(param_1,0x45c);
    pcVar5 = EnableWindow_exref;
    EnableWindow(pHVar3,BVar11);
    BVar11 = 0;
    pHVar3 = GetDlgItem(param_1,0x45e);
    EnableWindow(pHVar3,BVar11);
    BVar11 = 0;
    pHVar3 = GetDlgItem(param_1,0x46e);
    EnableWindow(pHVar3,BVar11);
  }
  else {
    uVar7 = FUN_004b2cd0(4,*(undefined4 *)(iVar1 + 0x2044));
    LVar2 = __alldiv(uVar7,10000,0);
    pcVar6 = GetDlgItem_exref;
    WVar9 = 0;
    UVar8 = 0x60e;
    pHVar3 = GetDlgItem(param_1,0x46e);
    SendMessageA(pHVar3,UVar8,WVar9,LVar2);
    LVar2 = 1000;
    WVar9 = 0;
    UVar8 = 0x60f;
    pHVar3 = GetDlgItem(param_1,0x46e);
    SendMessageA(pHVar3,UVar8,WVar9,LVar2);
    LVar2 = __alldiv(*(undefined4 *)(*param_2 + 0x2068),*(undefined4 *)(*param_2 + 0x206c),10000,0);
    WVar9 = 0;
    UVar8 = 0x610;
    pHVar3 = GetDlgItem(param_1,0x46e);
    SendMessageA(pHVar3,UVar8,WVar9,LVar2);
    uVar4 = __alldiv(*(undefined4 *)(*param_2 + 0x2068),*(undefined4 *)(*param_2 + 0x206c),10000,0);
    SfPrintF(local_100,&DAT_0061360c,uVar4);
    puVar10 = local_100;
    pHVar3 = GetDlgItem(param_1,0x45e);
    SfSetWindowText(pHVar3,puVar10);
    pcVar5 = EnableWindow_exref;
  }
  uVar4 = (*pcVar6)(param_1,0x447,*(char *)(*param_2 + 8000) != '\0');
  (*pcVar5)(uVar4);
  if ((*(int *)(*param_2 + 0x2058) == 0) || (*(char *)(*param_2 + 8000) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  uVar4 = (*pcVar6)(param_1,0x45c,uVar4);
  (*pcVar5)(uVar4);
  if ((*(int *)(*param_2 + 0x2058) == 0) || (*(char *)(*param_2 + 8000) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  uVar4 = (*pcVar6)(param_1,0x45e,uVar4);
  (*pcVar5)(uVar4);
  if ((*(int *)(*param_2 + 0x2058) == 0) || (*(char *)(*param_2 + 8000) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  uVar4 = (*pcVar6)(param_1,0x46e,uVar4);
  (*pcVar5)(uVar4);
  return;
}


