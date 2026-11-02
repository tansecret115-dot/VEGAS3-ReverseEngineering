/* Module: vidcap30.exe
   Function: FUN_00460fd0
   Address: 00460fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00460fd0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 != uVar1) {
    *(uint *)(param_1 + 0x10) = param_2;
    *(uint *)(param_1 + 0x4c) = (param_2 >> 3 & 0x40 | param_2 & 0x20) >> 5;
    if (param_3 != 0) {
      InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
    }
  }
  return uVar1;
}


