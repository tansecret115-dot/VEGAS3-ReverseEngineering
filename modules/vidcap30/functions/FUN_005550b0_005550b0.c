/* Module: vidcap30.exe
   Function: FUN_005550b0
   Address: 005550b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005550b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == -0x7ffb1fb0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar1;
}


