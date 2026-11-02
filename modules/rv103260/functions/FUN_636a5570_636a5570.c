/* Module: rv103260.dll
   Function: FUN_636a5570
   Address: 636a5570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636a5570(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_636a6130(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_636a6450(local_10,&DAT_636a8310);
      }
      this_00 = FUN_636a67d0((void *)((int)this + 8),param_1);
      FUN_636a6280(this_00,local_10[0]);
    }
    FUN_636a60c0((int *)local_10);
  }
  return 0;
}


