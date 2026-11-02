/* Module: aviplug.dll
   Function: FUN_5f95fdb0
   Address: 5f95fdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f95fdb0(void *param_1)

{
  HWND pHVar1;
  LRESULT LVar2;
  uint bEnable;
  UINT Msg;
  WPARAM WVar3;
  LPARAM lParam;
  int iVar4;
  
  lParam = 0;
  WVar3 = 0;
  Msg = 0xf0;
  pHVar1 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7d9);
  LVar2 = SendMessageA(pHVar1,Msg,WVar3,lParam);
  bEnable = (uint)(LVar2 == 1);
  pHVar1 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7e1);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x98) + 4);
  if ((iVar4 == 0x6e76645f) || (iVar4 == 0x6e766477)) {
    iVar4 = 0x1e002d0;
  }
  else {
    if ((iVar4 != 0x7076645f) && (iVar4 != 0x70766477)) goto LAB_5f95fe32;
    iVar4 = 0x24002d0;
  }
  WVar3 = FUN_5f95fe50(pHVar1,iVar4);
  SendMessageA(pHVar1,0x14e,WVar3,0);
  bEnable = 0;
LAB_5f95fe32:
  EnableWindow(pHVar1,bEnable);
  FUN_5f95feb0(param_1,bEnable);
  return;
}


