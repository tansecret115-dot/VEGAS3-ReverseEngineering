/* Module: vidcap30.exe
   Function: FUN_0044c620
   Address: 0044c620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c620(int param_1)

{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (*(undefined4 **)(param_1 + 0x43c) == (undefined4 *)0x0) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0x43c);
}


