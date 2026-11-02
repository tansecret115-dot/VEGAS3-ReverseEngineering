/* Module: sftrans1.dll
   Function: FUN_0042ba20
   Address: 0042ba20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042ba20(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,(undefined4 *)(param_1 + 0x34),0x3b4,0);
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x34) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x38) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x3c8) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x3c) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x3cc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x3d4) = 0;
    *(undefined4 *)(param_1 + 0x3d0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x3d8) = 0;
    *(undefined4 *)(param_1 + 0x3e4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x3dc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x3e0) = 0x3f800000;
    puVar2 = (undefined4 *)(param_1 + 0x48);
    iVar3 = 0x20;
    do {
      puVar2[-2] = 0;
      *puVar2 = 0;
      puVar2[2] = 0x3f800000;
      puVar2[3] = 0x3f800000;
      puVar2[4] = 0x3f800000;
      puVar2[-1] = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_0042bb00();
  }
  if (*(HWND *)(param_1 + 0xf1c) != (HWND)0x0) {
    PostMessageA(*(HWND *)(param_1 + 0xf1c),0x111,*(WPARAM *)(param_1 + 0xf20),0);
  }
  *(undefined4 *)(param_1 + 0x79c) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return iVar1;
}


