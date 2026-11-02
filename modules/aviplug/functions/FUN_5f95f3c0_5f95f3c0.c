/* Module: aviplug.dll
   Function: FUN_5f95f3c0
   Address: 5f95f3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f95f3c0(void *this,int param_1)

{
  HWND pHVar1;
  LRESULT LVar2;
  BOOL BVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  uint bEnable;
  BOOL BVar7;
  
  FUN_5f95b3d0(this,param_1,(int *)&DAT_5f9f2da8);
  if (param_1 == 0) {
    return;
  }
  BVar3 = *(BOOL *)((int)this + 0xec);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e8);
  EnableWindow(pHVar1,BVar3);
  BVar3 = *(BOOL *)((int)this + 0xdc);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3ef);
  EnableWindow(pHVar1,BVar3);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0xf0;
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3ed);
  LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  bEnable = (uint)(LVar2 == 1);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7ed);
  EnableWindow(pHVar1,bEnable);
  if ((LVar2 == 1) != 0) {
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0xf0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7ed);
    LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    if (LVar2 != 1) {
      BVar3 = 1;
      goto LAB_5f95f472;
    }
  }
  BVar3 = 0;
LAB_5f95f472:
  BVar7 = BVar3;
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3ee);
  EnableWindow(pHVar1,BVar7);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f7);
  EnableWindow(pHVar1,BVar3);
  BVar3 = *(BOOL *)((int)this + 0xe8);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f0);
  EnableWindow(pHVar1,BVar3);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0xf0;
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f0);
  LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  if ((*(int *)((int)this + 0xe8) == 0) || (LVar2 != 1)) {
    BVar3 = 0;
  }
  else {
    BVar3 = 1;
  }
  BVar7 = BVar3;
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f1);
  EnableWindow(pHVar1,BVar7);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f6);
  EnableWindow(pHVar1,BVar3);
  BVar3 = *(BOOL *)((int)this + 0xe4);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f2);
  EnableWindow(pHVar1,BVar3);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0xf0;
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f2);
  LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  if ((*(int *)((int)this + 0xe4) == 0) || (LVar2 != 1)) {
    BVar3 = 0;
  }
  else {
    BVar3 = 1;
  }
  BVar7 = BVar3;
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f3);
  EnableWindow(pHVar1,BVar7);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f8);
  EnableWindow(pHVar1,BVar3);
  if (*(int *)((int)this + 0xe0) == 0) {
    BVar3 = 0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7dd);
    EnableWindow(pHVar1,BVar3);
    BVar3 = *(BOOL *)((int)this + 0xe0);
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7de);
    EnableWindow(pHVar1,BVar3);
    BVar3 = *(BOOL *)((int)this + 0xe0);
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7dc);
    EnableWindow(pHVar1,BVar3);
    BVar3 = *(BOOL *)((int)this + 0xe0);
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3eb);
    EnableWindow(pHVar1,BVar3);
    BVar3 = *(BOOL *)((int)this + 0xe0);
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e9);
    EnableWindow(pHVar1,BVar3);
  }
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x146;
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e6);
  LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  if (LVar2 == 1) {
    BVar3 = 0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e6);
    EnableWindow(pHVar1,BVar3);
    BVar3 = 0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e1);
    EnableWindow(pHVar1,BVar3);
    BVar3 = 0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x437);
    EnableWindow(pHVar1,BVar3);
  }
  return;
}


