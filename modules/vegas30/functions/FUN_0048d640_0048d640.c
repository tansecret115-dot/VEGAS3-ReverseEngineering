/* Module: vegas30.exe
   Function: FUN_0048d640
   Address: 0048d640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048d640(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 == 6) {
    FUN_005b8990(*(undefined4 *)(param_1 + 0x130));
    return;
  }
  if (iVar1 == 5) {
    FUN_005b8980(*(undefined4 *)(param_1 + 0x130));
    return;
  }
  if (iVar1 == 7) {
    FUN_005b89b0(*(undefined4 *)(param_1 + 0x130));
    return;
  }
  FUN_005b8970(*(undefined4 *)(param_1 + 0x130));
  return;
}


