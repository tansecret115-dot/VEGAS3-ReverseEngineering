/* Module: sftrkfx1.dll
   Function: FUN_5cbab1e0
   Address: 5cbab1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbab1e0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    if ((*(int *)(param_1 + 0x5c) != 0) &&
       (*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x28))) {
      while( true ) {
        iVar1 = FUN_5cba9e60(param_1,param_2,*(uint *)(param_1 + 0x5c));
        if (iVar1 == 0) break;
        if (*(int *)(param_1 + 0x60) == 0) {
          return;
        }
      }
    }
    MessageBeep(0);
  }
  return;
}


