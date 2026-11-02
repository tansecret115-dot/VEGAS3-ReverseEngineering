/* Module: sftrans1.dll
   Function: FUN_004070f0
   Address: 004070f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004070f0(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined2 *)(param_1 + 0x34),0x1c,0);
  if (iVar1 < 0) {
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  }
  if (*(HWND *)(param_1 + 0xbc) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xbc),0x111,*(WPARAM *)(param_1 + 0xc0),0);
  }
  *(undefined4 *)(param_1 + 0x6c) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


