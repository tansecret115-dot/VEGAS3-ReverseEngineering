/* Module: sftrans1.dll
   Function: FUN_00410950
   Address: 00410950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00410950(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x38),0x40,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x70) = 2;
    *(undefined4 *)(param_1 + 0x40) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x44) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x48) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x50) = 0x40800000;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x3ff00000;
    *(undefined4 *)(param_1 + 100) = 0x3ff00000;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0x3ff00000;
  }
  if (*(HWND *)(param_1 + 0x154) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x154),0x111,*(WPARAM *)(param_1 + 0x158),0);
  }
  *(undefined4 *)(param_1 + 0xb8) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


