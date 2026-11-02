/* Module: vegas30.exe
   Function: FUN_004fabd0
   Address: 004fabd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fabd0(undefined4 *param_1)

{
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    HideCaret((HWND)*param_1);
    param_1[3] = param_1[3] & 0xfffffffe;
    return 1;
  }
  return 0;
}


