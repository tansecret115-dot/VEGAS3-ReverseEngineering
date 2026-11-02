/* Module: vegas30.exe
   Function: FUN_004ba9e0
   Address: 004ba9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ba9e0(int param_1)

{
  _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0xc50),0,0xffffffff,0);
  FUN_004ba860(param_1,param_1 + 0x6c0);
  if (DAT_00647630 == param_1) {
    FUN_004ba860(param_1,param_1 + 0x960);
    if (DAT_00647aac != 0) {
      FUN_004ba860(param_1,param_1 + 0x8b8);
    }
    if (DAT_00647ab0 != 0) {
      FUN_004ba860(param_1,param_1 + 0x90c);
    }
  }
  _SfList_Sort_12(*(undefined4 *)(param_1 + 0xc50),0,&LAB_004ba800);
  return;
}


