/* Module: vidcap30.exe
   Function: FUN_0051f300
   Address: 0051f300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051f300(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = ((uint)(param_2 == 0) ^ *(uint *)(param_1 + 0xc)) & 1 ^ *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = ((int)(uVar1 << 0x1f) >> 0x18 ^ uVar1) & 0x80 ^ uVar1;
  InvalidateRect(*(HWND *)(param_1 + 0x30),(RECT *)(param_1 + 0x3c),0);
  if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
    UpdateWindow(*(HWND *)(param_1 + 0x30));
  }
  return;
}


