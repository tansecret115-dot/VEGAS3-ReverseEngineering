/* Module: vidcap30.exe
   Function: FUN_00463940
   Address: 00463940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00463940(HWND param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  LPARAM *pLVar2;
  undefined4 *puVar3;
  HWND pHVar4;
  LPARAM lParam;
  WPARAM wParam;
  LRESULT LVar5;
  HWND hWnd;
  int iVar6;
  int *piVar7;
  int *piVar8;
  LPARAM lParam_00;
  BOOL bEnable;
  int local_60 [24];
  
  puVar3 = param_2;
  FUN_00463830(param_1,param_2);
  pHVar4 = GetDlgItem(param_1,0xe7d);
  SetFocus(pHVar4);
  puVar1 = (undefined4 *)*param_2;
  piVar7 = (int *)(param_2[6] * 0x60 + param_2[4]);
  piVar8 = local_60;
  for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  param_2 = *(undefined4 **)*puVar1;
  if (param_2 != (undefined4 *)0x0) {
    piVar7 = local_60;
    do {
      pLVar2 = *(LPARAM **)(*(int *)(*(int *)*puVar3 + 8) + *piVar7 * 4);
      lParam_00 = *pLVar2;
      lParam = _SfGetString_8(DAT_005ba2a0,pLVar2[1]);
      wParam = SendMessageA(pHVar4,0x180,0,lParam);
      SendMessageA(pHVar4,0x19a,wParam,lParam_00);
      piVar7 = piVar7 + 1;
      param_2 = (undefined4 *)((int)param_2 + -1);
    } while (param_2 != (undefined4 *)0x0);
  }
  SendMessageA(pHVar4,0x186,0,0);
  LVar5 = SendMessageA(pHVar4,0x18b,0,0);
  if (LVar5 == 1) {
    bEnable = 0;
    hWnd = GetDlgItem(param_1,0xe7e);
    EnableWindow(hWnd,bEnable);
  }
  FUN_00463770(param_1,pHVar4,0);
  pHVar4 = GetDlgItem(param_1,0x51a);
  SendMessageA(pHVar4,0xf1,DAT_005bb7a4,0);
  return 0;
}


