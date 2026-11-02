/* Module: sfxpfx2.dll
   Function: FUN_5c8982a0
   Address: 5c8982a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c8982a0(void *this,uint param_1)

{
  HWND pHVar1;
  uchar *puVar2;
  int unaff_ESI;
  uint uVar3;
  
  if ((*(int *)((int)this + 0x2c) == 0) || (*(HWND *)((int)this + 0x14) == (HWND)0x0)) {
    return 0;
  }
  if (param_1 == 0x7fbc) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1;
    if ((param_1 != 0) && (param_1 != 0xbba)) goto LAB_5c898362;
  }
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0xbba);
  (**(code **)(**(int **)((int)this + 0x2c) + 0x34))(*(int **)((int)this + 0x2c),&param_1);
  if ((pHVar1 != (HWND)0x0) && (uVar3 == 0)) {
    SendMessageA(pHVar1,0x610,1,param_1);
  }
  puVar2 = FUN_5c8bdaa0(param_1,1,0," %");
  SetDlgItemTextA(*(HWND *)((int)this + 0x14),0xbbf,(LPCSTR)puVar2);
  param_1 = 1000 - param_1;
  puVar2 = FUN_5c8bdaa0(param_1,1,0," %");
  SetDlgItemTextA(*(HWND *)((int)this + 0x14),0xbc1,(LPCSTR)puVar2);
LAB_5c898362:
  if (((uVar3 == 0) || (uVar3 == 0xbbb)) || (uVar3 == 0xbc3)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x24))(*(int **)((int)this + 0x2c),&param_1);
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0xbbb);
    if ((pHVar1 != (HWND)0x0) && (uVar3 != 0xbbb)) {
      SendMessageA(pHVar1,0x610,1,param_1);
    }
    puVar2 = FUN_5c8bdaa0(param_1,3,0,(uchar *)0x0);
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0xbc3,(LPCSTR)puVar2);
  }
  if (((uVar3 == 0) || (uVar3 == 0xbbc)) || (uVar3 == 0xbc5)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x2c))(*(int **)((int)this + 0x2c),&param_1);
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0xbbc);
    if ((pHVar1 != (HWND)0x0) && (uVar3 != 0xbbc)) {
      SendMessageA(pHVar1,0x610,1,param_1);
    }
    puVar2 = FUN_5c8bdaa0(param_1,0,0,(uchar *)0x0);
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0xbc5,(LPCSTR)puVar2);
  }
  if ((uVar3 == 0) || ((0x1f6b < uVar3 && (uVar3 < 0x1f6e)))) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x1c))(*(int **)((int)this + 0x2c),&param_1);
    CheckDlgButton(*(HWND *)((int)this + 0x14),0x1f6c,(uint)(unaff_ESI == 1));
    CheckDlgButton(*(HWND *)((int)this + 0x14),0x1f6d,(uint)(unaff_ESI == 2));
    CheckDlgButton(*(HWND *)((int)this + 0x14),0x1f6e,(uint)(unaff_ESI == 3));
  }
  return 1;
}


