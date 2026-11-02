/* Module: vegas30.exe
   Function: FUN_00452e00
   Address: 00452e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00452e00(int param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    HideCaret(*(HWND *)(param_1 + 4));
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
    return 1;
  }
  return 0;
}


