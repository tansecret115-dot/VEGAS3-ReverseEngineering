/* Module: vegas30.exe
   Function: FUN_0058f230
   Address: 0058f230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058f230(int *param_1)

{
  int iVar1;
  
  iVar1 = _SfQueueRemove_8(param_1 + 6,0);
  if (iVar1 == 0) {
    if (*param_1 < param_1[2]) {
      FUN_0058efd0(param_1);
    }
    _SfQueueRemove_8(param_1 + 6,0);
  }
  return;
}


