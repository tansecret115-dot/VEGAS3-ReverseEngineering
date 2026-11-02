/* Module: rmme3260.dll
   Function: FUN_662406f0
   Address: 662406f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662406f0(int *param_1)

{
  HWND hWnd;
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = param_1;
  for (hWnd = GetParent((HWND)param_1[0x51]); hWnd != (HWND)0x0; hWnd = GetParent(hWnd)) {
    iVar1 = FUN_66251030(&DAT_6627cf40,(uint)hWnd,(int *)&local_8);
    if (iVar1 == 0) {
      puVar2 = operator_new(0x14);
      if (puVar2 == (undefined4 *)0x0) {
        local_8 = (int *)0x0;
      }
      else {
        local_8 = (int *)FUN_662509f0(puVar2);
      }
      FUN_66250fc0(&DAT_6627cf40,(uint)hWnd,(int)local_8);
    }
    iVar1 = (**(code **)(*local_8 + 0x18))(param_1,0);
    if (iVar1 == 0) {
      FUN_66250b60(local_8,param_1);
    }
  }
  return;
}


