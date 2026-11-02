/* Module: vfplugs.dll
   Function: FUN_0041a550
   Address: 0041a550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041a550(int param_1)

{
  int iVar1;
  HWND pHVar2;
  HWND pHVar3;
  double local_70 [4];
  uchar local_50 [40];
  CHAR local_28 [40];
  
  if ((*(byte *)(param_1 + 4) & 0x20) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x138) == 0) {
    FUN_0041a2e0((undefined4 *)local_70,param_1,0);
    GetWindowTextA(*(HWND *)(param_1 + 0x2dc),local_28,0x28);
    ftol();
    FUN_0042a040(local_50,"%u");
    iVar1 = lstrcmpA((LPCSTR)local_50,local_28);
    if (iVar1 != 0) {
      pHVar3 = *(HWND *)(param_1 + 0x2dc);
      pHVar2 = GetFocus();
      if (pHVar2 != pHVar3) {
        SetWindowTextA(pHVar3,(LPCSTR)local_50);
      }
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e0),local_28,0x28);
    ftol();
    FUN_0042a040(local_50,"%u");
    iVar1 = lstrcmpA((LPCSTR)local_50,local_28);
    if (iVar1 != 0) {
      pHVar3 = *(HWND *)(param_1 + 0x2e0);
      pHVar2 = GetFocus();
      if (pHVar2 != pHVar3) {
        SetWindowTextA(pHVar3,(LPCSTR)local_50);
      }
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e4),local_28,0x28);
    ftol();
    FUN_0042a040(local_50,"%u");
    iVar1 = lstrcmpA((LPCSTR)local_50,local_28);
    if (iVar1 != 0) {
      pHVar3 = *(HWND *)(param_1 + 0x2e4);
      pHVar2 = GetFocus();
      if (pHVar2 != pHVar3) {
        SetWindowTextA(pHVar3,(LPCSTR)local_50);
      }
    }
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      return 1;
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e8),local_28,0x28);
    ftol();
    FUN_0042a040(local_50,"%u");
    iVar1 = lstrcmpA((LPCSTR)local_50,local_28);
    if (iVar1 == 0) {
      return 1;
    }
    pHVar3 = *(HWND *)(param_1 + 0x2e8);
    pHVar2 = GetFocus();
    if (pHVar2 == pHVar3) {
      return 1;
    }
  }
  else {
    FUN_0041a360(local_70,param_1,0);
    GetWindowTextA(*(HWND *)(param_1 + 0x2dc),local_28,0x28);
    ftol();
    FUN_0042a040(local_50,"%u");
    iVar1 = lstrcmpA((LPCSTR)local_50,local_28);
    if (iVar1 != 0) {
      pHVar3 = *(HWND *)(param_1 + 0x2dc);
      pHVar2 = GetFocus();
      if (pHVar2 != pHVar3) {
        SetWindowTextA(pHVar3,(LPCSTR)local_50);
      }
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e0),local_28,0x28);
    ftol();
    FUN_0042a040(local_50,"%u");
    iVar1 = lstrcmpA((LPCSTR)local_50,local_28);
    if (iVar1 != 0) {
      pHVar3 = *(HWND *)(param_1 + 0x2e0);
      pHVar2 = GetFocus();
      if (pHVar2 != pHVar3) {
        SetWindowTextA(pHVar3,(LPCSTR)local_50);
      }
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e4),local_28,0x28);
    ftol();
    FUN_0042a040(local_50,"%u");
    iVar1 = lstrcmpA((LPCSTR)local_50,local_28);
    if (iVar1 != 0) {
      pHVar3 = *(HWND *)(param_1 + 0x2e4);
      pHVar2 = GetFocus();
      if (pHVar2 != pHVar3) {
        SetWindowTextA(pHVar3,(LPCSTR)local_50);
      }
    }
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      return 1;
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e8),local_28,0x28);
    ftol();
    FUN_0042a040(local_50,"%u");
    iVar1 = lstrcmpA((LPCSTR)local_50,local_28);
    if (iVar1 == 0) {
      return 1;
    }
    pHVar3 = *(HWND *)(param_1 + 0x2e8);
    pHVar2 = GetFocus();
    if (pHVar2 == pHVar3) {
      return 1;
    }
  }
  SetWindowTextA(pHVar3,(LPCSTR)local_50);
  return 1;
}


