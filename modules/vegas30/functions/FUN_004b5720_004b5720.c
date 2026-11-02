/* Module: vegas30.exe
   Function: FUN_004b5720
   Address: 004b5720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b5720(HWND param_1,int *param_2)

{
  HWND pHVar1;
  int *piVar2;
  WPARAM WVar3;
  int iVar4;
  undefined4 *puVar5;
  HWND pHVar6;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 *wParam;
  undefined *lParam;
  int *lParam_00;
  IEnumMIDIOut *pIVar7;
  UINT UVar8;
  WPARAM WVar9;
  undefined4 *puVar10;
  LPARAM LVar11;
  IEnumMIDIOut *pIStack_c;
  WPARAM WStack_8;
  
  pHVar6 = param_1;
  LVar11 = 0;
  WVar9 = 0;
  UVar8 = 0x146;
  pHVar1 = GetDlgItem(param_1,0x454);
  WVar9 = SendMessageA(pHVar1,UVar8,WVar9,LVar11);
  while (WVar9 != 0) {
    WVar9 = WVar9 - 1;
    LVar11 = 0;
    UVar8 = 0x150;
    WVar3 = WVar9;
    pHVar1 = GetDlgItem(pHVar6,0x454);
    piVar2 = (int *)SendMessageA(pHVar1,UVar8,WVar3,LVar11);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  LVar11 = 0;
  WVar9 = 0;
  UVar8 = 0x14b;
  pHVar1 = GetDlgItem(pHVar6,0x454);
  SendMessageA(pHVar1,UVar8,WVar9,LVar11);
  WStack_8 = 0;
  LVar11 = _SfGetString_8(DAT_00647204,0x6d91);
  WVar9 = 0;
  UVar8 = 0x143;
  pHVar1 = GetDlgItem(pHVar6,0x454);
  WVar3 = SendMessageA(pHVar1,UVar8,WVar9,LVar11);
  LVar11 = 0;
  UVar8 = 0x151;
  WVar9 = WVar3;
  pHVar1 = GetDlgItem(pHVar6,0x454);
  SendMessageA(pHVar1,UVar8,WVar9,LVar11);
  if (*(char *)(*param_2 + 0x21b0) == '\0') {
    WStack_8 = WVar3;
  }
  pIStack_c = (IEnumMIDIOut *)0x0;
  Transport_EnumMIDIOut(&pIStack_c);
  if (pIStack_c != (IEnumMIDIOut *)0x0) {
    puVar10 = &param_1;
    piVar2 = (int *)0x1;
    pIVar7 = pIStack_c;
    iVar4 = (**(code **)(*(int *)pIStack_c + 0xc))(pIStack_c,1,puVar10,0);
    while (iVar4 == 0) {
      (**(code **)(*(int *)pIStack_c + 0x20))(pIStack_c,&stack0xffffffec);
      if (unaff_EDI == (int *)0x1) {
        (**(code **)(*unaff_EBP + 0x1c))(unaff_EBP,&DAT_0064cad0,0x20);
        iVar4 = lstrcmpA(&DAT_0064cad0,(LPCSTR)(*unaff_EBP + 0x2088));
        if (iVar4 == 0) {
          (**(code **)(*unaff_ESI + 8))(unaff_ESI);
        }
        else {
          lParam = &DAT_0064cad0;
          WVar9 = 0;
          UVar8 = 0x143;
          pHVar1 = GetDlgItem(pHVar6,0x454);
          puVar5 = (undefined4 *)SendMessageA(pHVar1,UVar8,WVar9,(LPARAM)lParam);
          UVar8 = 0x151;
          wParam = puVar5;
          lParam_00 = unaff_ESI;
          pHVar1 = GetDlgItem(pHVar6,0x454);
          SendMessageA(pHVar1,UVar8,(WPARAM)wParam,(LPARAM)lParam_00);
          iVar4 = lstrcmpA(&DAT_0064cad0,(LPCSTR)(*unaff_EBP + 0x21b0));
          if (iVar4 == 0) {
            puVar10 = puVar5;
          }
        }
      }
      else {
        (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      }
      iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,1,&stack0xffffffe8,0);
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI,pIVar7,piVar2,puVar10);
  }
  LVar11 = 0;
  UVar8 = 0x14e;
  WVar9 = WStack_8;
  pHVar6 = GetDlgItem(pHVar6,0x454);
  SendMessageA(pHVar6,UVar8,WVar9,LVar11);
  return;
}


