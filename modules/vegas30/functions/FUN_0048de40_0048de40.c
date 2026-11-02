/* Module: vegas30.exe
   Function: FUN_0048de40
   Address: 0048de40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048de40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_00647630 != 0) {
    iVar1 = *(int *)(param_1 + 0x94);
    if (iVar1 == 6) {
      FUN_004c3470(DAT_00647630,param_2,1);
      return;
    }
    if (iVar1 == 5) {
      FUN_004c3470(DAT_00647630,param_2,0);
      return;
    }
    if (iVar1 == 7) {
      FUN_004c3470(DAT_00647630,param_2,2);
      return;
    }
    FUN_004c33d0(DAT_00647630,param_2,1);
  }
  return;
}


