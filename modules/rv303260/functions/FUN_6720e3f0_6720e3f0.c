/* Module: rv303260.dll
   Function: FUN_6720e3f0
   Address: 6720e3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6720e3f0(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_6720eda0(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_6720f0c0(local_10,&DAT_67215480);
      }
      this_00 = FUN_6720f440((void *)((int)this + 8),param_1);
      FUN_6720eef0(this_00,local_10[0]);
    }
    FUN_6720ed30((int *)local_10);
  }
  return 0;
}


