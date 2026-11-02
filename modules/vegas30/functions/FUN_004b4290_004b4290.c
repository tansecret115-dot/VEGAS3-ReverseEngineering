/* Module: vegas30.exe
   Function: FUN_004b4290
   Address: 004b4290
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b4290(HWND param_1,int *param_2)

{
  int *piVar1;
  HWND pHVar2;
  WPARAM WVar3;
  uint uVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  undefined1 *lParam;
  uint lParam_00;
  undefined1 local_14 [20];
  
  piVar1 = param_2;
  uVar4 = (uint)(*(char *)(*param_2 + 0x2088) != '\0');
  pHVar2 = GetDlgItem(param_1,0x47e);
  EnableWindow(pHVar2,uVar4);
  uVar4 = (uint)(*(char *)(*param_2 + 0x2088) != '\0');
  pHVar2 = GetDlgItem(param_1,0x47f);
  EnableWindow(pHVar2,uVar4);
  uVar4 = (uint)(*(char *)(*param_2 + 0x2088) != '\0');
  pHVar2 = GetDlgItem(param_1,0x480);
  EnableWindow(pHVar2,uVar4);
  if (*(char *)(*param_2 + 0x2088) != '\0') {
    uVar4 = (uint)(*(int *)(*param_2 + 0x2198) != 0);
    LVar7 = 0;
    UVar5 = 0xf1;
    pHVar2 = GetDlgItem(param_1,0x47e);
    SendMessageA(pHVar2,UVar5,uVar4,LVar7);
    uVar4 = (uint)(*(int *)(*param_2 + 0x2198) != 0);
    pHVar2 = GetDlgItem(param_1,0x47f);
    EnableWindow(pHVar2,uVar4);
    uVar4 = (uint)(*(int *)(*param_2 + 0x2198) != 0);
    pHVar2 = GetDlgItem(param_1,0x480);
    EnableWindow(pHVar2,uVar4);
    LVar7 = 0;
    WVar6 = 0;
    UVar5 = 0x14b;
    pHVar2 = GetDlgItem(param_1,0x480);
    SendMessageA(pHVar2,UVar5,WVar6,LVar7);
    if (*(int *)(*param_2 + 0x2198) != 0) {
      param_2 = (int *)0x0;
      uVar4 = 2;
      do {
        _SfDWordToText_12(uVar4,local_14,0);
        lParam = local_14;
        WVar6 = 0;
        UVar5 = 0x143;
        pHVar2 = GetDlgItem(param_1,0x480);
        WVar3 = SendMessageA(pHVar2,UVar5,WVar6,(LPARAM)lParam);
        UVar5 = 0x151;
        WVar6 = WVar3;
        lParam_00 = uVar4;
        pHVar2 = GetDlgItem(param_1,0x480);
        SendMessageA(pHVar2,UVar5,WVar6,lParam_00);
        if (uVar4 == *(uint *)(*piVar1 + 0x21a8)) {
          param_2 = (int *)WVar3;
        }
        uVar4 = uVar4 * 2;
      } while (uVar4 < 0x40);
      LVar7 = 0;
      UVar5 = 0x14e;
      pHVar2 = GetDlgItem(param_1,0x480);
      SendMessageA(pHVar2,UVar5,(WPARAM)param_2,LVar7);
    }
  }
  return;
}


