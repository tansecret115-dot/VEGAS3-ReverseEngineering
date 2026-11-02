/* Module: sfxpfx1.dll
   Function: FUN_5c948960
   Address: 5c948960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c948960(void *this,int param_1)

{
  HWND pHVar1;
  uchar *puVar2;
  WPARAM wParam;
  LRESULT LVar3;
  int unaff_ESI;
  int iVar4;
  
  if ((*(int *)((int)this + 0x2c) == 0) || (*(HWND *)((int)this + 0x14) == (HWND)0x0)) {
    return 0;
  }
  if (param_1 == 0x7fbc) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_1;
    if ((param_1 != 0) && (param_1 != 0x7d2)) goto LAB_5c948a22;
  }
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7d2);
  if ((pHVar1 != (HWND)0x0) &&
     ((**(code **)(**(int **)((int)this + 0x2c) + 0x74))(*(int **)((int)this + 0x2c),&param_1),
     iVar4 == 0)) {
    SendMessageA(pHVar1,0x610,1,param_1);
  }
  puVar2 = FUN_5c96c170(param_1,1,0," %");
  SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x7d9,(LPCSTR)puVar2);
  param_1 = 1000 - param_1;
  puVar2 = FUN_5c96c170(param_1,1,0," %");
  SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x7d7,(LPCSTR)puVar2);
LAB_5c948a22:
  if ((((iVar4 == 0) || (iVar4 == 0x7d3)) || (iVar4 == 0x7db)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7d3), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x44))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar4 != 0x7d3) {
      SendMessageA(pHVar1,0x610,1,param_1);
    }
    puVar2 = FUN_5c96c170(param_1,0,0,(uchar *)0x0);
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x7db,(LPCSTR)puVar2);
  }
  if ((((iVar4 == 0) || (iVar4 == 0x7d4)) || (iVar4 == 0x7dd)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7d4), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x4c))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar4 != 0x7d4) {
      SendMessageA(pHVar1,0x610,1,param_1);
    }
    puVar2 = FUN_5c96c170(param_1 * 5,1,0,(uchar *)0x0);
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x7dd,(LPCSTR)puVar2);
  }
  if (((iVar4 == 0) || (iVar4 == 0x7d5)) &&
     ((**(code **)(**(int **)((int)this + 0x2c) + 0x1c))(*(int **)((int)this + 0x2c),&param_1),
     iVar4 == 0)) {
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7d5);
    wParam = SendMessageA(pHVar1,0x146,0,0);
    do {
      wParam = wParam - 1;
      if ((int)wParam < 1) break;
      LVar3 = SendMessageA(pHVar1,0x150,wParam,0);
    } while (unaff_ESI != LVar3);
    SendMessageA(pHVar1,0x14e,wParam,0);
  }
  return 1;
}


