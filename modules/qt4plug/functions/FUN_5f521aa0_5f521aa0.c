/* Module: qt4plug.dll
   Function: FUN_5f521aa0
   Address: 5f521aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f521aa0(void *this,undefined4 param_1,int param_2,LRESULT param_3,UINT param_4)

{
  HWND pHVar1;
  LPSTR pCVar2;
  UINT Msg;
  WPARAM WVar3;
  LPARAM lParam;
  undefined4 local_4;
  
  lParam = 0;
  WVar3 = 0;
  Msg = 0xf0;
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d9);
  SendMessageA(pHVar1,Msg,WVar3,lParam);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x438);
  if (param_3 == 0) {
    WVar3 = SendMessageA(pHVar1,0x147,0,0);
    if (WVar3 == 0xffffffff) {
      param_3 = 1;
    }
    else {
      param_3 = SendMessageA(pHVar1,0x150,WVar3,0);
    }
  }
  SendMessageA(pHVar1,0x14b,0,0);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x7c) = 1;
  pCVar2 = FUN_5f527a90(DAT_5f5a4158,0x1b6);
  WVar3 = SendMessageA(pHVar1,0x143,0,(LPARAM)pCVar2);
  SendMessageA(pHVar1,0x151,WVar3,1);
  SendMessageA(pHVar1,0x14e,WVar3,0);
  local_4 = 0;
  if ((*(uint *)(param_2 + 0x2c) & 0x800000) != 0) {
    pCVar2 = FUN_5f527a90(DAT_5f5a4158,0x1b8);
    WVar3 = SendMessageA(pHVar1,0x143,0,(LPARAM)pCVar2);
    SendMessageA(pHVar1,0x151,WVar3,3);
    *(undefined4 *)((int)this + 0x5c) = 1;
    if (param_3 != 1) {
      SendMessageA(pHVar1,0x14e,WVar3,0);
      local_4 = 1;
    }
  }
  if (param_4 != 0) {
    SetDlgItemInt(*(HWND *)((int)this + 0x10),0x3ef,param_4,0);
    *(undefined4 *)((int)this + 0x60) = local_4;
    return;
  }
  *(undefined4 *)((int)this + 0x60) = local_4;
  return;
}


