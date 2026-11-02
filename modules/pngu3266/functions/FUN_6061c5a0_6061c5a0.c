/* Module: pngu3266.dll
   Function: FUN_6061c5a0
   Address: 6061c5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6061c5a0(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_60618d40(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_60619100(local_10,&DAT_60649620);
      }
      this_00 = FUN_606201b0((void *)((int)this + 8),param_1);
      FUN_60618ed0(this_00,local_10[0]);
    }
    FUN_60618cd0((int *)local_10);
  }
  return 0;
}


