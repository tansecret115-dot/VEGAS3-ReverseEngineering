/* Module: vidpcore.dll
   Function: FUN_5de50f90
   Address: 5de50f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de50f90(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x38),0x20,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x3ff00000;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(HWND *)(param_1 + 0xd4) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xd4),0x111,*(WPARAM *)(param_1 + 0xd8),0);
  }
  *(undefined4 *)(param_1 + 0x78) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return iVar1;
}


