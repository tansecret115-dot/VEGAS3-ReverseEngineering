/* Module: encn3260.dll
   Function: FUN_664bd740
   Address: 664bd740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664bd740(void *this,char *param_1,long *param_2)

{
  long lVar1;
  char *local_10 [3];
  
  FUN_664bd6d0(this,local_10,param_1);
  if (0 < *(int *)(local_10[0] + -8)) {
    lVar1 = strtol(local_10[0],(char **)0x0,10);
    *param_2 = lVar1;
    FUN_664bb3e0((int *)local_10);
    return 1;
  }
  FUN_664bb3e0((int *)local_10);
  return 0;
}


