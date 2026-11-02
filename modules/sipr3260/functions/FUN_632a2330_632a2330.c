/* Module: sipr3260.dll
   Function: FUN_632a2330
   Address: 632a2330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_632a2330(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_632a2e20(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_632a3140(local_10,&DAT_632a51c8);
      }
      this_00 = FUN_632a34c0((void *)((int)this + 8),param_1);
      FUN_632a2f70(this_00,local_10[0]);
    }
    FUN_632a2db0((int *)local_10);
  }
  return 0;
}


