/* Module: vidpcore.dll
   Function: FUN_5de4daf0
   Address: 5de4daf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de4daf0(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x34),0x38,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0x3dc0c0c1;
    *(undefined4 *)(param_1 + 0x38) = 0x3e8e8e8f;
    *(undefined4 *)(param_1 + 0x34) = 0x3f71f1f2;
    *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x54) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(HWND *)(param_1 + 0xa8) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xa8),0x111,*(WPARAM *)(param_1 + 0xac),0);
  }
  *(undefined4 *)(param_1 + 0xa4) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


