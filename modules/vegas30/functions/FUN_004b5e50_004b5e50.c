/* Module: vegas30.exe
   Function: FUN_004b5e50
   Address: 004b5e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b5e50(IEnumMIDIIn *param_1,int *param_2)

{
  IEnumMIDIIn *hDlg;
  HWND pHVar1;
  int *piVar2;
  WPARAM WVar3;
  int iVar4;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined *lParam;
  UINT UVar5;
  LPARAM LVar6;
  WPARAM WVar7;
  LPARAM LVar8;
  int *piStack_c;
  WPARAM WStack_8;
  
  hDlg = param_1;
  LVar8 = 0;
  WVar7 = 0;
  UVar5 = 0x146;
  pHVar1 = GetDlgItem((HWND)param_1,0x48f);
  WVar7 = SendMessageA(pHVar1,UVar5,WVar7,LVar8);
  while (WVar7 != 0) {
    WVar7 = WVar7 - 1;
    LVar8 = 0;
    UVar5 = 0x150;
    WVar3 = WVar7;
    pHVar1 = GetDlgItem((HWND)hDlg,0x48f);
    piVar2 = (int *)SendMessageA(pHVar1,UVar5,WVar3,LVar8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
  }
  LVar8 = 0;
  WVar7 = 0;
  UVar5 = 0x14b;
  pHVar1 = GetDlgItem((HWND)hDlg,0x48f);
  SendMessageA(pHVar1,UVar5,WVar7,LVar8);
  WStack_8 = 0;
  LVar8 = _SfGetString_8();
  WVar7 = 0;
  UVar5 = 0x143;
  pHVar1 = GetDlgItem((HWND)hDlg,0x48f);
  WVar3 = SendMessageA(pHVar1,UVar5,WVar7,LVar8);
  LVar8 = 0;
  UVar5 = 0x151;
  WVar7 = WVar3;
  pHVar1 = GetDlgItem((HWND)hDlg,0x48f);
  SendMessageA(pHVar1,UVar5,WVar7,LVar8);
  if (*(char *)(*param_2 + 8000) == '\0') {
    WStack_8 = WVar3;
  }
  param_1 = (IEnumMIDIIn *)0x0;
  Transport_EnumMIDIIn(&param_1);
  if (param_1 != (IEnumMIDIIn *)0x0) {
    LVar8 = 1;
    iVar4 = (**(code **)(*(int *)param_1 + 0xc))(param_1);
    while (iVar4 == 0) {
      (**(code **)(*unaff_EDI + 0x1c))(unaff_EDI,&DAT_0064cab0,0x20);
      lParam = &DAT_0064cab0;
      WVar7 = 0;
      UVar5 = 0x143;
      pHVar1 = GetDlgItem((HWND)hDlg,0x48f);
      WVar7 = SendMessageA(pHVar1,UVar5,WVar7,(LPARAM)lParam);
      UVar5 = 0x151;
      LVar6 = LVar8;
      pHVar1 = GetDlgItem((HWND)hDlg,0x48f);
      SendMessageA(pHVar1,UVar5,WVar7,LVar8);
      lstrcmpA(&DAT_0064cab0,(LPCSTR)(*unaff_EBP + 8000));
      iVar4 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&stack0xffffffd8,0);
      LVar8 = LVar6;
    }
    (**(code **)(*piStack_c + 8))(piStack_c);
  }
  LVar8 = 0;
  UVar5 = 0x14e;
  pHVar1 = GetDlgItem((HWND)hDlg,0x48f);
  SendMessageA(pHVar1,UVar5,WStack_8,LVar8);
  FUN_004b5c20();
  FUN_004b5280();
  FUN_004b5290();
  return;
}


