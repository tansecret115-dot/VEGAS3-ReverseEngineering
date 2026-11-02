/* Module: vidcap30.exe
   Function: FUN_00454920
   Address: 00454920
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00454920(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 != uVar1) {
    *(uint *)(param_1 + 0x10) = param_2;
    *(uint *)(param_1 + 0x5c) = param_2 >> 5 & 1;
    if (param_3 != 0) {
      InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
    }
  }
  return uVar1;
}


