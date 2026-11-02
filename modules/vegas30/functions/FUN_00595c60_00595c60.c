/* Module: vegas30.exe
   Function: FUN_00595c60
   Address: 00595c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00595c60(int param_1,int param_2)

{
  int iVar1;
  
  _SfQueueInsert_8(param_1 + 0xc,param_2);
  if (param_2 != 0) {
    do {
      iVar1 = _SfQueueRemove_8(param_1 + 0x30,0xffffffff);
      if (iVar1 == 0) {
        return 0x8004e02c;
      }
    } while (iVar1 != param_2);
  }
  return 0;
}


