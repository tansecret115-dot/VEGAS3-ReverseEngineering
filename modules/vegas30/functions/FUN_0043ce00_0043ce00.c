/* Module: vegas30.exe
   Function: FUN_0043ce00
   Address: 0043ce00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043ce00(int param_1)

{
  int iVar1;
  int local_4;
  
  iVar1 = FUN_0043ce40(&local_4);
  if (iVar1 != 0) {
    return *(undefined4 *)(&DAT_0063dd10 + (param_1 + local_4 * 0x1b) * 4);
  }
  return 0;
}


