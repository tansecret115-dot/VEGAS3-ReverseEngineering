/* Module: sfppack2.dll
   Function: FUN_5ccd7330
   Address: 5ccd7330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5ccd7330(void *this,int param_1)

{
  HWND pHVar1;
  uchar *puVar2;
  BOOL BVar3;
  WPARAM wParam;
  LRESULT LVar4;
  code *pcVar5;
  int unaff_ESI;
  int iVar6;
  
  iVar6 = param_1;
  if ((*(int *)((int)this + 0x2c) == 0) || (*(int *)((int)this + 0x14) == 0)) {
    return 0;
  }
  if (param_1 == 0x7fbc) {
    iVar6 = 0;
    FUN_5ccd7900(this,1);
  }
  else if (param_1 == 0) {
    FUN_5ccd7900(this,1);
  }
  else {
    pcVar5 = SetDlgItemTextA_exref;
    if (param_1 != 0x1777) goto LAB_5ccd73e4;
  }
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x1777);
  pcVar5 = SetDlgItemTextA_exref;
  if (pHVar1 != (HWND)0x0) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x24))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar6 == 0) {
      SendMessageA(pHVar1,0x610,1,param_1);
    }
    puVar2 = FUN_5cd2b690(param_1,1,-0x1e0," dB");
    pcVar5 = SetDlgItemTextA_exref;
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x178b,(LPCSTR)puVar2);
  }
LAB_5ccd73e4:
  if (((iVar6 == 0) || (iVar6 == 0x1779)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x1779), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x34))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar6 == 0) {
      SendMessageA(pHVar1,0x610,1,unaff_ESI);
    }
    puVar2 = FUN_5cd2b690(unaff_ESI,1,-0x1e0," dB");
    (*pcVar5)(*(undefined4 *)((int)this + 0x14),0x178d,puVar2);
  }
  if (((iVar6 == 0) || (iVar6 == 0x177b)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x177b), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x44))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar6 == 0) {
      SendMessageA(pHVar1,0x610,1,unaff_ESI);
    }
    puVar2 = FUN_5cd2b690(unaff_ESI,1,-0x1e0," dB");
    (*pcVar5)(*(undefined4 *)((int)this + 0x14),0x178f,puVar2);
  }
  if (((iVar6 == 0) || (iVar6 == 0x177d)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x177d), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x54))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar6 == 0) {
      SendMessageA(pHVar1,0x610,1,unaff_ESI);
    }
    puVar2 = FUN_5cd2b690(unaff_ESI,1,-0x1e0," dB");
    (*pcVar5)(*(undefined4 *)((int)this + 0x14),0x1791,puVar2);
  }
  if (((iVar6 == 0) || (iVar6 == 0x177f)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x177f), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 100))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar6 == 0) {
      SendMessageA(pHVar1,0x610,1,unaff_ESI);
    }
    puVar2 = FUN_5cd2b690(unaff_ESI,1,-0x1e0," dB");
    (*pcVar5)(*(undefined4 *)((int)this + 0x14),0x1793,puVar2);
  }
  if (((iVar6 == 0) || (iVar6 == 0x1781)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x1781), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x74))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar6 == 0) {
      SendMessageA(pHVar1,0x610,1,unaff_ESI);
    }
    puVar2 = FUN_5cd2b690(unaff_ESI,1,-0x1e0," dB");
    (*pcVar5)(*(undefined4 *)((int)this + 0x14),0x1795,puVar2);
  }
  if (((iVar6 == 0) || (iVar6 == 0x1783)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x1783), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x84))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar6 == 0) {
      SendMessageA(pHVar1,0x610,1,unaff_ESI);
    }
    puVar2 = FUN_5cd2b690(unaff_ESI,1,-0x1e0," dB");
    (*pcVar5)(*(undefined4 *)((int)this + 0x14),0x1797,puVar2);
  }
  if (((iVar6 == 0) || (iVar6 == 0x1785)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x1785), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x94))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar6 == 0) {
      SendMessageA(pHVar1,0x610,1,param_1);
    }
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x1785);
    BVar3 = IsWindowEnabled(pHVar1);
    if (BVar3 == 0) {
      puVar2 = " ";
    }
    else {
      puVar2 = FUN_5cd2b690(param_1,1,-0x1e0," dB");
    }
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x1799,(LPCSTR)puVar2);
  }
  if (((iVar6 == 0) || (iVar6 == 0x1787)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x1787), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0xa4))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar6 == 0) {
      SendMessageA(pHVar1,0x610,1,param_1);
    }
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x1787);
    BVar3 = IsWindowEnabled(pHVar1);
    if (BVar3 == 0) {
      puVar2 = " ";
    }
    else {
      puVar2 = FUN_5cd2b690(param_1,1,-0x1e0," dB");
    }
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x179b,(LPCSTR)puVar2);
  }
  if (((iVar6 == 0) || (iVar6 == 0x1789)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x1789), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0xb4))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar6 == 0) {
      SendMessageA(pHVar1,0x610,1,param_1);
    }
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x1789);
    BVar3 = IsWindowEnabled(pHVar1);
    if (BVar3 == 0) {
      puVar2 = " ";
    }
    else {
      puVar2 = FUN_5cd2b690(param_1,1,-0x1e0," dB");
    }
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x179d,(LPCSTR)puVar2);
  }
  if (((iVar6 == 0) || (iVar6 == 0x17ce)) &&
     (pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x17ce), pHVar1 != (HWND)0x0)) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0xcc))(*(int **)((int)this + 0x2c),&param_1);
    if (iVar6 == 0) {
      SendMessageA(pHVar1,0x610,1,param_1);
    }
    puVar2 = FUN_5cd2b690(param_1,1,-0x259," dB");
    SetDlgItemTextA(*(HWND *)((int)this + 0x14),0x17d2,(LPCSTR)puVar2);
  }
  if (((iVar6 == 0) || (iVar6 == 0x17d5)) &&
     ((**(code **)(**(int **)((int)this + 0x2c) + 0xbc))(*(int **)((int)this + 0x2c),&param_1),
     iVar6 == 0)) {
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x14),0x17d5);
    wParam = SendMessageA(pHVar1,0x146,0,0);
    do {
      wParam = wParam - 1;
      if ((int)wParam < 1) break;
      LVar4 = SendMessageA(pHVar1,0x150,wParam,0);
    } while (unaff_ESI != LVar4);
    SendMessageA(pHVar1,0x14e,wParam,0);
  }
  return 1;
}


