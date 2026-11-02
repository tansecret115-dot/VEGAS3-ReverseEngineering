/* Module: qt4plug.dll
   Function: FUN_5f522cd0
   Address: 5f522cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f522cd0(void *this,int param_1)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  UINT UVar4;
  WPARAM WVar5;
  int bEnable;
  LPARAM LVar6;
  BOOL BVar7;
  
  FUN_5f522c80(this,param_1,(int *)&DAT_5f5a2c20);
  if (param_1 == 0) {
    return;
  }
  BVar7 = *(BOOL *)((int)this + 0x5c);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x438);
  EnableWindow(pHVar1,BVar7);
  BVar7 = *(BOOL *)((int)this + 0x60);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f7);
  EnableWindow(pHVar1,BVar7);
  BVar7 = *(BOOL *)((int)this + 0x60);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3ef);
  EnableWindow(pHVar1,BVar7);
  BVar7 = *(BOOL *)((int)this + 0x68);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f8);
  EnableWindow(pHVar1,BVar7);
  if (*(int *)((int)this + 0x68) == 0) {
LAB_5f522d66:
    BVar7 = 0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f2);
    EnableWindow(pHVar1,BVar7);
  }
  else {
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0xf0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f8);
    LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    if (LVar2 == 0) goto LAB_5f522d66;
  }
  if ((*(int *)((int)this + 0x6c) == 0) || (*(int *)((int)this + 0x80) != 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  bEnable = iVar3;
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f0);
  EnableWindow(pHVar1,bEnable);
  if (iVar3 != 0) {
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0xf0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f0);
    LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    if (LVar2 != 0) goto LAB_5f522dd4;
  }
  BVar7 = 0;
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f1);
  EnableWindow(pHVar1,BVar7);
LAB_5f522dd4:
  BVar7 = *(BOOL *)((int)this + 0x70);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e8);
  EnableWindow(pHVar1,BVar7);
  BVar7 = *(BOOL *)((int)this + 0x74);
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f6);
  EnableWindow(pHVar1,BVar7);
  if (*(int *)((int)this + 0x78) == 0) {
    BVar7 = 0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e2);
    EnableWindow(pHVar1,BVar7);
    BVar7 = 0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e3);
    EnableWindow(pHVar1,BVar7);
    BVar7 = 0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e4);
    EnableWindow(pHVar1,BVar7);
    BVar7 = 0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7e5);
    EnableWindow(pHVar1,BVar7);
  }
  if (*(int *)((int)this + 0x7c) == 0) {
    BVar7 = 0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x436);
    EnableWindow(pHVar1,BVar7);
    BVar7 = 0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7ec);
    EnableWindow(pHVar1,BVar7);
  }
  return;
}


