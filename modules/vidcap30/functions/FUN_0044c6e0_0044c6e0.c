/* Module: vidcap30.exe
   Function: FUN_0044c6e0
   Address: 0044c6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044c6e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044cae0(param_1);
  if (iVar1 == 5) {
    return *(undefined4 *)(param_1 + 0x420);
  }
  return 0;
}


