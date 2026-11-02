/* Module: vidpcore.dll
   Function: FUN_5de44a80
   Address: 5de44a80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de44a80(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x38),0x28,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(undefined4 *)(param_1 + 0x4c) = 0x3fe00000;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x12d687;
  }
  if (*(HWND *)(param_1 + 0xf4) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xf4),0x111,*(WPARAM *)(param_1 + 0xf8),0);
  }
  *(undefined4 *)(param_1 + 0x88) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return iVar1;
}


