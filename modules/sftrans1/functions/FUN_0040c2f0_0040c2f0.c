/* Module: sftrans1.dll
   Function: FUN_0040c2f0
   Address: 0040c2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040c2f0(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x34),0x20,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x34) = 0x42340000;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(HWND *)(param_1 + 0xcc) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xcc),0x111,*(WPARAM *)(param_1 + 0xd0),0);
  }
  *(undefined4 *)(param_1 + 0x74) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


