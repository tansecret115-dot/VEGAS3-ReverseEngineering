/* Module: vidcap30.exe
   Function: FUN_00460ee0
   Address: 00460ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00460ee0(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x44) >> 4 & 1) != param_2) {
    if (param_2 == 0) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xefffffff;
      FUN_00431d30(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 4));
    }
    else {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10000000;
      FUN_00461160(param_1);
    }
    *(uint *)(param_1 + 0x44) = (param_2 & 1) << 4 | *(uint *)(param_1 + 0x44) & 0xffffffef;
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
  }
  return;
}


