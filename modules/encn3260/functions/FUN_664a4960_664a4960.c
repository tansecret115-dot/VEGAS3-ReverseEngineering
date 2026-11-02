/* Module: encn3260.dll
   Function: FUN_664a4960
   Address: 664a4960
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664a4960(void *param_1)

{
  HWND hWnd;
  DWORD dwThreadId;
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  void *local_8;
  
  local_8 = param_1;
  for (hWnd = GetParent(*(HWND *)((int)param_1 + 0x111)); hWnd != (HWND)0x0; hWnd = GetParent(hWnd))
  {
    if (DAT_664f0724 == 0) {
      dwThreadId = GetCurrentThreadId();
      DAT_664f0728 = SetWindowsHookExA(4,WinDrawHelperCallWndProc,(HINSTANCE)0x0,dwThreadId);
    }
    DAT_664f0724 = DAT_664f0724 + 1;
    iVar1 = FUN_664c3eb0(&DAT_664f06b8,(uint)hWnd,(int *)&local_8);
    pvVar3 = local_8;
    if (iVar1 == 0) {
      puVar2 = operator_new(0x14);
      if (puVar2 == (undefined4 *)0x0) {
        piVar4 = FUN_664c3ef0(&DAT_664f06b8,(uint)hWnd);
        *piVar4 = 0;
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)FUN_664ba900(puVar2);
        piVar4 = FUN_664c3ef0(&DAT_664f06b8,(uint)hWnd);
        *piVar4 = (int)pvVar3;
      }
    }
    FUN_664baab0(pvVar3,param_1);
    iVar1 = FUN_664c3eb0(&DAT_664f06d8,*(uint *)((int)param_1 + 0x111),(int *)&local_8);
    pvVar3 = local_8;
    if (iVar1 == 0) {
      puVar2 = operator_new(0x14);
      if (puVar2 == (undefined4 *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)FUN_664ba900(puVar2);
      }
      piVar4 = FUN_664c3ef0(&DAT_664f06d8,*(uint *)((int)param_1 + 0x111));
      *piVar4 = (int)pvVar3;
    }
    FUN_664baab0(pvVar3,hWnd);
  }
  return;
}


