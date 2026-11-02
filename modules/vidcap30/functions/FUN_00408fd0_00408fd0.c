/* Module: vidcap30.exe
   Function: FUN_00408fd0
   Address: 00408fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408fd0(int param_1,int param_2)

{
  tagRECT local_10;
  
  if (((byte)*(undefined4 *)(param_1 + 0xc) & 7) == 2) {
    GetClientRect(*(HWND *)(*(int *)(param_1 + 4) + 0x18),&local_10);
    FUN_00408f00(&local_10,*(uint *)(param_1 + 0xc) >> 4 & 1,*(uint *)(param_1 + 0xc) & 7);
    *(LONG *)(param_2 + 8) = local_10.right - local_10.left;
    *(LONG *)(param_2 + 0x10) = local_10.left;
    *(LONG *)(param_2 + 0xc) = local_10.bottom - local_10.top;
    *(LONG *)(param_2 + 0x14) = local_10.top;
  }
  return;
}


