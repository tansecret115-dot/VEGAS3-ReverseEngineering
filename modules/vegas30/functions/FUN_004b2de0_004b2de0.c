/* Module: vegas30.exe
   Function: FUN_004b2de0
   Address: 004b2de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b2de0(HWND param_1,int *param_2)

{
  HWND pHVar1;
  undefined4 uVar2;
  HWND pHVar3;
  uint wParam;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  undefined1 *puVar7;
  BOOL BVar8;
  undefined1 local_100 [256];
  
  LVar6 = 0;
  if (*(char *)(*param_2 + 8000) == '\0') {
    WVar5 = 0;
    UVar4 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x447);
    SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  }
  else {
    wParam = (uint)(*(int *)(*param_2 + 0x2058) != 0);
    UVar4 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x447);
    SendMessageA(pHVar1,UVar4,wParam,LVar6);
    LVar6 = 0;
    if (*(int *)(*param_2 + 0x2058) == 0) {
      pHVar1 = GetDlgItem(param_1,0x45b);
      EnableWindow(pHVar1,LVar6);
      BVar8 = 0;
      pHVar1 = GetDlgItem(param_1,0x45d);
      EnableWindow(pHVar1,BVar8);
      BVar8 = 0;
      pHVar1 = GetDlgItem(param_1,0x46d);
      EnableWindow(pHVar1,BVar8);
    }
    else {
      WVar5 = 0;
      UVar4 = 0x60e;
      pHVar1 = GetDlgItem(param_1,0x46d);
      SendMessageA(pHVar1,UVar4,WVar5,LVar6);
      LVar6 = 20000;
      WVar5 = 0;
      UVar4 = 0x60f;
      pHVar1 = GetDlgItem(param_1,0x46d);
      SendMessageA(pHVar1,UVar4,WVar5,LVar6);
      LVar6 = __alldiv(*(undefined4 *)(*param_2 + 0x2060),*(undefined4 *)(*param_2 + 0x2064),10000,0
                      );
      WVar5 = 0;
      UVar4 = 0x610;
      pHVar1 = GetDlgItem(param_1,0x46d);
      SendMessageA(pHVar1,UVar4,WVar5,LVar6);
      uVar2 = __alldiv(*(undefined4 *)(*param_2 + 0x2060),*(undefined4 *)(*param_2 + 0x2064),10000,0
                      );
      SfPrintF(local_100,&DAT_0061360c,uVar2);
      puVar7 = local_100;
      pHVar1 = GetDlgItem(param_1,0x45d);
      SfSetWindowText(pHVar1,puVar7);
    }
  }
  pHVar1 = param_1;
  pHVar3 = GetDlgItem(param_1,0x447);
  EnableWindow(pHVar3,(BOOL)pHVar1);
  pHVar1 = param_1;
  pHVar3 = GetDlgItem(param_1,0x45b);
  EnableWindow(pHVar3,(BOOL)pHVar1);
  pHVar1 = param_1;
  pHVar3 = GetDlgItem(param_1,0x45d);
  EnableWindow(pHVar3,(BOOL)pHVar1);
  pHVar1 = GetDlgItem(param_1,0x46d);
  EnableWindow(pHVar1,(BOOL)param_1);
  return;
}


