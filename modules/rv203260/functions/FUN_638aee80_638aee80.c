/* Module: rv203260.dll
   Function: FUN_638aee80
   Address: 638aee80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638aee80(void *this,byte *param_1,char *param_2)

{
  int *this_00;
  char *local_10 [3];
  
  if (param_2 != (char *)0x0) {
    FUN_638af830(local_10,param_2);
    if (*(int *)(local_10[0] + -8) != 0) {
      if (local_10[0][*(int *)(local_10[0] + -8) + -1] != '\\') {
        FUN_638afb50(local_10,&DAT_638b5390);
      }
      this_00 = FUN_638afed0((void *)((int)this + 8),param_1);
      FUN_638af980(this_00,local_10[0]);
    }
    FUN_638af7c0((int *)local_10);
  }
  return 0;
}


