/* Module: vegas30.exe
   Function: FUN_004f37f0
   Address: 004f37f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f37f0(HWND param_1,int *param_2)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  undefined8 uVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x60a;
  pHVar2 = GetDlgItem(param_1,0x435);
  LVar3 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  iVar1 = *param_2;
  *(LRESULT *)(iVar1 + 0x7c8) = LVar3;
  *(LRESULT *)(iVar1 + 0x7cc) = LVar3 >> 0x1f;
  iVar1 = *param_2;
  uVar4 = __allmul(*(undefined4 *)(iVar1 + 0x7c8),*(undefined4 *)(iVar1 + 0x7cc),10,0);
  *(undefined8 *)(iVar1 + 0x7c8) = uVar4;
  iVar1 = *param_2;
  uVar4 = __allmul(*(undefined4 *)(iVar1 + 0x7c8),*(undefined4 *)(iVar1 + 0x7cc),10000,0);
  *(undefined8 *)(iVar1 + 0x7c8) = uVar4;
  iVar1 = *param_2;
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x60a;
  *(undefined4 *)(iVar1 + 0x1d68) = *(undefined4 *)(iVar1 + 0x7c8);
  *(undefined4 *)(iVar1 + 0x1d6c) = *(undefined4 *)(iVar1 + 0x7cc);
  pHVar2 = GetDlgItem(param_1,0x437);
  LVar3 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 0;
  UVar5 = 0x468;
  *(LRESULT *)(*param_2 + 0xe4c) = LVar3 << 0x14;
  pHVar2 = GetParent(param_1);
  SendMessageA(pHVar2,UVar5,(WPARAM)param_1,LVar7);
  param_2[2] = 1;
  param_2[0x19] = 1;
  return;
}


