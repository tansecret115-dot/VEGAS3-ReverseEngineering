/* Module: erv13260.dll
   Function: FUN_63602900
   Address: 63602900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_63602900(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_63603260(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_63603580(local_10,&DAT_63606bd0);
      }
      this_00 = FUN_63603900((void *)((int)this + 8),param_1);
      FUN_636033b0(this_00,local_10[0]);
    }
    FUN_636031f0((int *)local_10);
  }
  return 0;
}


