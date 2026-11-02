/* Module: vidcap30.exe
   Function: FUN_00454250
   Address: 00454250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454250(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((uVar1 & 1) != param_2) {
    if (param_2 == 0) {
      uVar2 = *(uint *)(param_1 + 0xc) & 0xefffffff;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xc) | 0x10000000;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    *(uint *)(param_1 + 0x58) = (uVar1 ^ param_2) & 1 ^ uVar1;
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
  }
  return;
}


