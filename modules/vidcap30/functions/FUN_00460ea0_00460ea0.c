/* Module: vidcap30.exe
   Function: FUN_00460ea0
   Address: 00460ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00460ea0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x44) & 0x10) != 0)) {
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
  }
  return uVar1;
}


