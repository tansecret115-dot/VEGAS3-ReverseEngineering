/* Module: qt4plug.dll
   Function: FUN_5f521d70
   Address: 5f521d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f521d70(void *this,HWND param_1)

{
  WPARAM WVar1;
  LRESULT LVar2;
  HWND pHVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  UINT Msg;
  LPARAM lParam;
  
  WVar1 = SendMessageA(param_1,0x147,0,0);
  LVar2 = SendMessageA(param_1,0x150,WVar1,0);
  uVar5 = (uint)(LVar2 != 1);
  uVar4 = (uint)(LVar2 == 5);
  uVar6 = uVar5;
  pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3ef);
  EnableWindow(pHVar3,uVar6);
  uVar6 = uVar5;
  pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f7);
  EnableWindow(pHVar3,uVar6);
  uVar6 = uVar4;
  pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f8);
  EnableWindow(pHVar3,uVar6);
  *(uint *)((int)this + 0x60) = uVar5;
  *(uint *)((int)this + 0x68) = uVar4;
  uVar6 = 0;
  if (uVar4 != 0) {
    lParam = 0;
    WVar1 = 0;
    Msg = 0xf0;
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f8);
    LVar2 = SendMessageA(pHVar3,Msg,WVar1,lParam);
    uVar6 = (uint)(LVar2 == 1);
  }
  uVar4 = uVar6;
  pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f2);
  EnableWindow(pHVar3,uVar4);
  *(uint *)((int)this + 100) = uVar6;
  return;
}


