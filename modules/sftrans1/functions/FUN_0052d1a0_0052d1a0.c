/* Module: sftrans1.dll
   Function: FUN_0052d1a0
   Address: 0052d1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0052d1a0(int param_1)

{
  if (*(HWND *)(param_1 + 0x10) != (HWND)0x0) {
    SendMessageA(*(HWND *)(param_1 + 0x10),0x436,0,0);
    SendMessageA(*(HWND *)(param_1 + 0x10),0x434,0,0);
    SendMessageA(*(HWND *)(param_1 + 0x10),0x430,0,0);
    ImageList_Destroy(*(HIMAGELIST *)(param_1 + 4));
    ImageList_Destroy(*(HIMAGELIST *)(param_1 + 8));
    ImageList_Destroy(*(HIMAGELIST *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    DestroyWindow(*(HWND *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


