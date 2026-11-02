/* Module: vegas30.exe
   Function: FUN_0058af10
   Address: 0058af10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0058af10(int param_1)

{
  *(undefined4 *)(param_1 + 0x148) = 0x200;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  SetFilePointer(*(HANDLE *)(param_1 + 0x124),0x200,(PLONG)0x0,0);
  return 0;
}


