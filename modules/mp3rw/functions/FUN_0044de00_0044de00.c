/* Module: mp3rw.dll
   Function: FUN_0044de00
   Address: 0044de00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0044de00(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == -0x7ffb1fb0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar1;
}


