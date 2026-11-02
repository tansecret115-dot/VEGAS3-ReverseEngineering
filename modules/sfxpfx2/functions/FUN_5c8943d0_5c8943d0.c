/* Module: sfxpfx2.dll
   Function: FUN_5c8943d0
   Address: 5c8943d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c8943d0(void *this,int param_1)

{
  HWND pHVar1;
  uchar *puVar2;
  int unaff_ESI;
  int iVar3;
  
  if ((*(int *)((int)this + 0x2c) == 0) || (*(HWND *)((int)this + 0x14) == (HWND)0x0)) {
    return 0;
  }
  if (param_1 == 0x7fbc) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1;
    if ((param_1 != 0) && (param_1 != 0xfa2)) goto LAB_5c894492;
  }
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfa2);
  (**(code **)(**(int **)((int)this + 0x2c) + 0x5c))(*(int **)((int)this + 0x2c),&param_1);
  if ((pHVar1 != (HWND)0x0) && (iVar3 == 0)) {
    SendMessageA(pHVar1,0x610,1,param_1);
  }
  puVar2 = FUN_5c8bdaa0(param_1,1,0," %");
  SetDlgItemTextA(*(HWND *)((int)this + 0x14),0xfa8,(LPCSTR)puVar2);
  param_1 = 1000 - param_1;
  puVar2 = FUN_5c8bdaa0(param_1,1,0," %");
  SetDlgItemTextA(*(HWND *)((int)this + 0x14),0xfa6,(LPCSTR)puVar2);
LAB_5c894492:
  if (((iVar3 == 0) || (iVar3 == 0xfa4)) || (iVar3 == 0xfac)) {
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfa4);
    if (pHVar1 != (HWND)0x0) {
      (**(code **)(**(int **)((int)this + 0x2c) + 0x34))(*(int **)((int)this + 0x2c),&param_1);
      if (iVar3 != 0xfa4) {
        SendMessageA(pHVar1,0x610,1,param_1);
      }
      puVar2 = FUN_5c8bdaa0(param_1,1,0,(uchar *)0x0);
      SetDlgItemTextA(*(HWND *)((int)this + 0x14),0xfac,(LPCSTR)puVar2);
    }
  }
  if (((iVar3 == 0) || (iVar3 == 0xfa3)) || (iVar3 == 0xfaa)) {
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0xfa3);
    if (pHVar1 != (HWND)0x0) {
      (**(code **)(**(int **)((int)this + 0x2c) + 0x2c))(*(int **)((int)this + 0x2c),&param_1);
      if (iVar3 != 0xfa3) {
        SendMessageA(pHVar1,0x610,1,unaff_ESI);
      }
      puVar2 = FUN_5c8bdaa0(unaff_ESI,1,0,(uchar *)0x0);
      SetDlgItemTextA(*(HWND *)((int)this + 0x14),0xfaa,(LPCSTR)puVar2);
    }
  }
  return 1;
}


