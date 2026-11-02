/* Module: vidcap30.exe
   Function: FUN_004548d0
   Address: 004548d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004548d0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (param_2 != uVar1) {
    *(uint *)(param_1 + 0xc) = param_2;
    *(uint *)(param_1 + 0x58) = param_2 >> 0x1c & 1;
    if (param_3 != 0) {
      InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
    }
  }
  return uVar1;
}


