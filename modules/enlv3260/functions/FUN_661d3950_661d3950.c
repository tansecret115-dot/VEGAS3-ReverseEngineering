/* Module: enlv3260.dll
   Function: FUN_661d3950
   Address: 661d3950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_661d3950(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_661d2cf0(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_661d3010(local_10,&DAT_661d6288);
      }
      this_00 = FUN_661d4570((void *)((int)this + 8),param_1);
      FUN_661d2e40(this_00,local_10[0]);
    }
    FUN_661d2c80((int *)local_10);
  }
  return 0;
}


