/* Module: sftrans1.dll
   Function: FUN_0040e5d0
   Address: 0040e5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040e5d0(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x34),0x2c,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x5c) = 0x42480000;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(HWND *)(param_1 + 0xfc) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xfc),0x111,*(WPARAM *)(param_1 + 0x100),0);
  }
  *(undefined4 *)(param_1 + 0x8c) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


