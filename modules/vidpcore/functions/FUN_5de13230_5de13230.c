/* Module: vidpcore.dll
   Function: FUN_5de13230
   Address: 5de13230
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de13230(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x38),8,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0x3ff00000;
  }
  if (*(HWND *)(param_1 + 0x74) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x74),0x111,*(WPARAM *)(param_1 + 0x78),0);
  }
  *(undefined4 *)(param_1 + 0x48) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


