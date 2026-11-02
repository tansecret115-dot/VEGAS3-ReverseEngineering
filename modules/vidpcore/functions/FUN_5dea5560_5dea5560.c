/* Module: vidpcore.dll
   Function: FUN_5dea5560
   Address: 5dea5560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5dea5560(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  HWND pHVar3;
  HWND pHVar4;
  undefined4 local_70 [8];
  CHAR local_50 [40];
  CHAR local_28 [40];
  
  if ((*(byte *)(param_1 + 4) & 0x20) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x138) == 0) {
    FUN_5dea52f0(local_70,param_1,0);
    GetWindowTextA(*(HWND *)(param_1 + 0x2dc),local_28,0x28);
    uVar1 = ftol();
    FUN_5deb5050(local_50,&DAT_5df34110,uVar1);
    iVar2 = lstrcmpA(local_50,local_28);
    if (iVar2 != 0) {
      pHVar4 = *(HWND *)(param_1 + 0x2dc);
      pHVar3 = GetFocus();
      if (pHVar3 != pHVar4) {
        SetWindowTextA(pHVar4,local_50);
      }
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e0),local_28,0x28);
    uVar1 = ftol();
    FUN_5deb5050(local_50,&DAT_5df34110,uVar1);
    iVar2 = lstrcmpA(local_50,local_28);
    if (iVar2 != 0) {
      pHVar4 = *(HWND *)(param_1 + 0x2e0);
      pHVar3 = GetFocus();
      if (pHVar3 != pHVar4) {
        SetWindowTextA(pHVar4,local_50);
      }
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e4),local_28,0x28);
    uVar1 = ftol();
    FUN_5deb5050(local_50,&DAT_5df34110,uVar1);
    iVar2 = lstrcmpA(local_50,local_28);
    if (iVar2 != 0) {
      pHVar4 = *(HWND *)(param_1 + 0x2e4);
      pHVar3 = GetFocus();
      if (pHVar3 != pHVar4) {
        SetWindowTextA(pHVar4,local_50);
      }
    }
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      return 1;
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e8),local_28,0x28);
    uVar1 = ftol();
    FUN_5deb5050(local_50,&DAT_5df34110,uVar1);
    iVar2 = lstrcmpA(local_50,local_28);
    if (iVar2 == 0) {
      return 1;
    }
    pHVar4 = *(HWND *)(param_1 + 0x2e8);
    pHVar3 = GetFocus();
    if (pHVar3 == pHVar4) {
      return 1;
    }
  }
  else {
    FUN_5dea5370(local_70,param_1,0);
    GetWindowTextA(*(HWND *)(param_1 + 0x2dc),local_28,0x28);
    uVar1 = ftol();
    FUN_5deb5050(local_50,&DAT_5df34110,uVar1);
    iVar2 = lstrcmpA(local_50,local_28);
    if (iVar2 != 0) {
      pHVar4 = *(HWND *)(param_1 + 0x2dc);
      pHVar3 = GetFocus();
      if (pHVar3 != pHVar4) {
        SetWindowTextA(pHVar4,local_50);
      }
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e0),local_28,0x28);
    uVar1 = ftol();
    FUN_5deb5050(local_50,&DAT_5df34110,uVar1);
    iVar2 = lstrcmpA(local_50,local_28);
    if (iVar2 != 0) {
      pHVar4 = *(HWND *)(param_1 + 0x2e0);
      pHVar3 = GetFocus();
      if (pHVar3 != pHVar4) {
        SetWindowTextA(pHVar4,local_50);
      }
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e4),local_28,0x28);
    uVar1 = ftol();
    FUN_5deb5050(local_50,&DAT_5df34110,uVar1);
    iVar2 = lstrcmpA(local_50,local_28);
    if (iVar2 != 0) {
      pHVar4 = *(HWND *)(param_1 + 0x2e4);
      pHVar3 = GetFocus();
      if (pHVar3 != pHVar4) {
        SetWindowTextA(pHVar4,local_50);
      }
    }
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      return 1;
    }
    GetWindowTextA(*(HWND *)(param_1 + 0x2e8),local_28,0x28);
    uVar1 = ftol();
    FUN_5deb5050(local_50,&DAT_5df34110,uVar1);
    iVar2 = lstrcmpA(local_50,local_28);
    if (iVar2 == 0) {
      return 1;
    }
    pHVar4 = *(HWND *)(param_1 + 0x2e8);
    pHVar3 = GetFocus();
    if (pHVar3 == pHVar4) {
      return 1;
    }
  }
  SetWindowTextA(pHVar4,local_50);
  return 1;
}


