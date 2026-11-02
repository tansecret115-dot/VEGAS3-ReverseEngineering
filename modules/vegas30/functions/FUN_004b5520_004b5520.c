/* Module: vegas30.exe
   Function: FUN_004b5520
   Address: 004b5520
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b5520(HWND param_1,int *param_2)

{
  HWND hDlg;
  HWND pHVar1;
  int *piVar2;
  WPARAM WVar3;
  int iVar4;
  undefined4 *puVar5;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 *wParam;
  undefined *lParam;
  int *lParam_00;
  IEnumMIDIOut *pIVar6;
  UINT UVar7;
  WPARAM WVar8;
  undefined4 *puVar9;
  LPARAM LVar10;
  IEnumMIDIOut *pIStack_c;
  WPARAM WStack_8;
  
  hDlg = param_1;
  LVar10 = 0;
  WVar8 = 0;
  UVar7 = 0x146;
  pHVar1 = GetDlgItem(param_1,0x452);
  WVar8 = SendMessageA(pHVar1,UVar7,WVar8,LVar10);
  while (WVar8 != 0) {
    WVar8 = WVar8 - 1;
    LVar10 = 0;
    UVar7 = 0x150;
    WVar3 = WVar8;
    pHVar1 = GetDlgItem(hDlg,0x452);
    piVar2 = (int *)SendMessageA(pHVar1,UVar7,WVar3,LVar10);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  LVar10 = 0;
  WVar8 = 0;
  UVar7 = 0x14b;
  pHVar1 = GetDlgItem(hDlg,0x452);
  SendMessageA(pHVar1,UVar7,WVar8,LVar10);
  WStack_8 = 0;
  LVar10 = _SfGetString_8(DAT_00647204,0x6d91);
  WVar8 = 0;
  UVar7 = 0x143;
  pHVar1 = GetDlgItem(hDlg,0x452);
  WVar3 = SendMessageA(pHVar1,UVar7,WVar8,LVar10);
  LVar10 = 0;
  UVar7 = 0x151;
  WVar8 = WVar3;
  pHVar1 = GetDlgItem(hDlg,0x452);
  SendMessageA(pHVar1,UVar7,WVar8,LVar10);
  if (*(char *)(*param_2 + 0x2088) == '\0') {
    WStack_8 = WVar3;
  }
  pIStack_c = (IEnumMIDIOut *)0x0;
  Transport_EnumMIDIOut(&pIStack_c);
  if (pIStack_c != (IEnumMIDIOut *)0x0) {
    puVar9 = &param_1;
    piVar2 = (int *)0x1;
    pIVar6 = pIStack_c;
    iVar4 = (**(code **)(*(int *)pIStack_c + 0xc))(pIStack_c,1,puVar9,0);
    while (iVar4 == 0) {
      (**(code **)(*(int *)pIStack_c + 0x20))(pIStack_c,&stack0xffffffec);
      if (unaff_EDI == (int *)0x1) {
        (**(code **)(*unaff_EBP + 0x1c))(unaff_EBP,&DAT_0064caf0,0x20);
        iVar4 = lstrcmpA(&DAT_0064caf0,(LPCSTR)(*unaff_EBP + 0x21b0));
        if (iVar4 == 0) {
          (**(code **)(*unaff_ESI + 8))(unaff_ESI);
        }
        else {
          lParam = &DAT_0064caf0;
          WVar8 = 0;
          UVar7 = 0x143;
          pHVar1 = GetDlgItem(hDlg,0x452);
          puVar5 = (undefined4 *)SendMessageA(pHVar1,UVar7,WVar8,(LPARAM)lParam);
          UVar7 = 0x151;
          wParam = puVar5;
          lParam_00 = unaff_ESI;
          pHVar1 = GetDlgItem(hDlg,0x452);
          SendMessageA(pHVar1,UVar7,(WPARAM)wParam,(LPARAM)lParam_00);
          iVar4 = lstrcmpA(&DAT_0064caf0,(LPCSTR)(*unaff_EBP + 0x2088));
          if (iVar4 == 0) {
            puVar9 = puVar5;
          }
        }
      }
      else {
        (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      }
      iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,1,&stack0xffffffe8,0);
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI,pIVar6,piVar2,puVar9);
  }
  LVar10 = 0;
  UVar7 = 0x14e;
  WVar8 = WStack_8;
  pHVar1 = GetDlgItem(hDlg,0x452);
  SendMessageA(pHVar1,UVar7,WVar8,LVar10);
  piVar2 = param_2;
  FUN_004b52a0(hDlg,param_2);
  FUN_004b5510(hDlg,piVar2);
  return;
}


