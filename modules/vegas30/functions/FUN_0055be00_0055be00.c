/* Module: vegas30.exe
   Function: FUN_0055be00
   Address: 0055be00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055be00(HWND param_1,int *param_2)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  undefined8 uVar4;
  UINT UVar5;
  WPARAM wParam;
  LPARAM LVar6;
  
  LVar6 = 0;
  wParam = 0;
  UVar5 = 0x60a;
  pHVar2 = GetDlgItem(param_1,0x5de);
  LVar3 = SendMessageA(pHVar2,UVar5,wParam,LVar6);
  iVar1 = *param_2;
  *(LRESULT *)(iVar1 + 0x2e60) = LVar3;
  *(LRESULT *)(iVar1 + 0x2e64) = LVar3 >> 0x1f;
  iVar1 = *param_2;
  uVar4 = __allmul(*(undefined4 *)(iVar1 + 0x2e60),*(undefined4 *)(iVar1 + 0x2e64),10,0);
  *(undefined8 *)(iVar1 + 0x2e60) = uVar4;
  iVar1 = *param_2;
  uVar4 = __allmul(*(undefined4 *)(iVar1 + 0x2e60),*(undefined4 *)(iVar1 + 0x2e64),10,0);
  LVar6 = 0;
  UVar5 = 0x468;
  *(undefined8 *)(iVar1 + 0x2e60) = uVar4;
  pHVar2 = GetParent(param_1);
  SendMessageA(pHVar2,UVar5,(WPARAM)param_1,LVar6);
  param_2[0x1a] = 1;
  return;
}


