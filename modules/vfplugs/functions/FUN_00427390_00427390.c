/* Module: vfplugs.dll
   Function: FUN_00427390
   Address: 00427390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427390(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = ((uint)(param_2 == 0) ^ *(uint *)(param_1 + 0xc)) & 1 ^ *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar1;
  if ((uVar1 & 0x100000) == 0) {
    InvalidateRect(*(HWND *)(param_1 + 0x28),(RECT *)(param_1 + 0x34),0);
    UpdateWindow(*(HWND *)(param_1 + 0x28));
  }
  return;
}


