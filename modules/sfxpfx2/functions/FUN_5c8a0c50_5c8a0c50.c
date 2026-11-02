/* Module: sfxpfx2.dll
   Function: FUN_5c8a0c50
   Address: 5c8a0c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c8a0c50(void *this,int param_1)

{
  HWND pHVar1;
  uchar *puVar2;
  int iVar3;
  
  if ((*(int *)((int)this + 0x2c) == 0) || (*(HWND *)((int)this + 0x14) == (HWND)0x0)) {
    return 0;
  }
  if (param_1 == 0x7fbc) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1;
    if ((param_1 != 0) && (param_1 != 0x7d2)) goto LAB_5c8a0d12;
  }
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7d2);
  if (pHVar1 != (HWND)0x0) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x1c))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar3 == 0) {
      SendMessageA(pHVar1,0x610,1,param_1);
    }
  }
  puVar2 = FUN_5c8bdaa0(param_1,1,0," %");
  SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x7d9,(LPCSTR)puVar2);
  param_1 = 1000 - param_1;
  puVar2 = FUN_5c8bdaa0(param_1,1,0," %");
  SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x7d7,(LPCSTR)puVar2);
LAB_5c8a0d12:
  if ((iVar3 == 0) || (iVar3 == 0x7d4)) {
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7d4);
    if (pHVar1 != (HWND)0x0) {
      (**(code **)(**(int **)((int)this + 0x2c) + 0x34))(*(int **)((int)this + 0x2c),&param_1);
      if (iVar3 == 0) {
        SendMessageA(pHVar1,0x610,1,param_1);
      }
    }
    puVar2 = FUN_5c8bdaa0(param_1,1,0," dB");
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x7dd,(LPCSTR)puVar2);
  }
  if ((iVar3 == 0) || (iVar3 == 0x7d3)) {
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7d3);
    if (pHVar1 != (HWND)0x0) {
      (**(code **)(**(int **)((int)this + 0x2c) + 0x6c))(*(int **)((int)this + 0x2c),&param_1);
      if (iVar3 == 0) {
        SendMessageA(pHVar1,0x610,1,param_1);
      }
    }
    puVar2 = FUN_5c8bdaa0(param_1,1,0," dB");
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x7df,(LPCSTR)puVar2);
  }
  if ((iVar3 == 0) || (iVar3 == 0x7d5)) {
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x7d5);
    if (pHVar1 != (HWND)0x0) {
      (**(code **)(**(int **)((int)this + 0x2c) + 0x74))(*(int **)((int)this + 0x2c),&param_1);
      if (iVar3 == 0) {
        SendMessageA(pHVar1,0x610,1,param_1);
      }
    }
    puVar2 = FUN_5c8bdaa0(param_1,1,0," dB");
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x7de,(LPCSTR)puVar2);
  }
  return 1;
}


