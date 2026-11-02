/* Module: vidcap30.exe
   Function: FUN_00460f60
   Address: 00460f60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00460f60(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (param_2 != uVar1) {
    *(uint *)(param_1 + 0xc) = param_2;
    *(uint *)(param_1 + 0x44) =
         ((param_2 >> 0xf & 0x2000 | param_2 & 0x5000) >> 2 | param_2 & 0x200) >> 7 | param_2 & 3;
    if (param_3 != 0) {
      InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
    }
  }
  return uVar1;
}


