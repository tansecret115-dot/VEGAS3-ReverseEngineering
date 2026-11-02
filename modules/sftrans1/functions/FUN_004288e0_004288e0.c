/* Module: sftrans1.dll
   Function: FUN_004288e0
   Address: 004288e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004288e0(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x38),0x10,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0x9999999a;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x3fb99999;
  }
  if (*(HWND *)(param_1 + 0x94) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0x94),0x111,*(WPARAM *)(param_1 + 0x98),0);
  }
  *(undefined4 *)(param_1 + 0x58) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


