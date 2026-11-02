/* Module: rmme3260.dll
   Function: FUN_6623a590
   Address: 6623a590
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6623a590(void *param_1)

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
    if (DAT_6627cf2c == 0) {
      dwThreadId = GetCurrentThreadId();
      DAT_6627cf30 = SetWindowsHookExA(4,WinDrawHelperCallWndProc,(HINSTANCE)0x0,dwThreadId);
    }
    DAT_6627cf2c = DAT_6627cf2c + 1;
    iVar1 = FUN_66251030(&DAT_6627cec0,(uint)hWnd,(int *)&local_8);
    pvVar3 = local_8;
    if (iVar1 == 0) {
      puVar2 = operator_new(0x14);
      if (puVar2 == (undefined4 *)0x0) {
        piVar4 = FUN_66251070(&DAT_6627cec0,(uint)hWnd);
        *piVar4 = 0;
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)FUN_662509f0(puVar2);
        piVar4 = FUN_66251070(&DAT_6627cec0,(uint)hWnd);
        *piVar4 = (int)pvVar3;
      }
    }
    FUN_66250b60(pvVar3,param_1);
    iVar1 = FUN_66251030(&DAT_6627cee0,*(uint *)((int)param_1 + 0x111),(int *)&local_8);
    pvVar3 = local_8;
    if (iVar1 == 0) {
      puVar2 = operator_new(0x14);
      if (puVar2 == (undefined4 *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)FUN_662509f0(puVar2);
      }
      piVar4 = FUN_66251070(&DAT_6627cee0,*(uint *)((int)param_1 + 0x111));
      *piVar4 = (int)pvVar3;
    }
    FUN_66250b60(pvVar3,hWnd);
  }
  return;
}


