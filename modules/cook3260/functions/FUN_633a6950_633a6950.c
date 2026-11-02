/* Module: cook3260.dll
   Function: FUN_633a6950
   Address: 633a6950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_633a6950(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_633a6cc0(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_633a6ec0(local_10,&DAT_633ac6f8);
      }
      this_00 = FUN_633a7200((void *)((int)this + 8),param_1);
      FUN_633a6da0(this_00,local_10[0]);
    }
    FUN_633a6c50((int *)local_10);
  }
  return 0;
}


