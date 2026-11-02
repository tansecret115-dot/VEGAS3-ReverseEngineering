/* Module: vegas30.exe
   Function: FUN_00551310
   Address: 00551310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00551310(int param_1)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_0054d650(param_1);
  FUN_0043c0e0(*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(HWND *)(param_1 + 0x9c) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(HWND *)(param_1 + 0x98) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(LPCVOID *)(param_1 + 0x548) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x548));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x548));
      GlobalFree(pvVar1);
      *(undefined4 *)(param_1 + 0x548) = 0;
    }
  }
  if (*(HWND *)(param_1 + 0xa0) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    _SfList_DeleteList_16(*(int *)(param_1 + 0xb4),0,0xffffffff,0);
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0xb4));
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_004ec820(*(int *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xd0) != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xd0)) {
      puVar2 = (undefined4 *)(param_1 + 0x2d4);
      do {
        DeleteObject((HGDIOBJ)*puVar2);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < *(int *)(param_1 + 0xd0));
    }
    puVar2 = (undefined4 *)(param_1 + 0x2d4);
    for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = (undefined4 *)(param_1 + 0xd4);
    for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  ImageList_Destroy(*(HIMAGELIST *)(param_1 + 0xcc));
  FUN_0057b2c0();
  DrawDibClose(*(undefined4 *)(param_1 + 0x4d4));
  return 0;
}


