/* Module: vfplugs.dll
   Function: FUN_00422320
   Address: 00422320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422320(byte *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  HWND hWnd;
  
  if (param_2 != 0) {
    iVar1 = FUN_00421de0((int)param_1,param_3,param_4);
    if (iVar1 == 5) {
      FUN_00421db0((int)param_1,*(int *)(param_1 + 0x50));
      (**(code **)(param_1 + 0xc0))
                (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),4,
                 *(undefined4 *)(param_1 + 0x4c));
      return;
    }
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    SetFocus(*(HWND *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    hWnd = *(HWND *)(param_1 + 4);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x38));
    }
    SendMessageA(hWnd,0x111,*(ushort *)(param_1 + 0x3c) | 0x30000,*(LPARAM *)(param_1 + 0x38));
  }
  FUN_00421f20(param_1,param_3,param_4,9);
  return;
}


