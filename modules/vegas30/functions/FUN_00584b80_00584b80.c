/* Module: vegas30.exe
   Function: FUN_00584b80
   Address: 00584b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00584b80(int param_1)

{
  if (*(HMENU *)(param_1 + 0x58) != (HMENU)0x0) {
    DestroyMenu(*(HMENU *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(HIMAGELIST *)(param_1 + 0x5c) != (HIMAGELIST)0x0) {
    ImageList_Destroy(*(HIMAGELIST *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}


