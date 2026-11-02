/* Module: vegas30.exe
   Function: FUN_004c8540
   Address: 004c8540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004c8540(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004d4e00(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    FUN_004d48f0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),3);
  }
  return 0;
}


