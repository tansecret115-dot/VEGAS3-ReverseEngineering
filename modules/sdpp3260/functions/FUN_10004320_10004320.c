/* Module: sdpp3260.dll
   Function: FUN_10004320
   Address: 10004320
   Source: Ghidra pseudocode (Stage 10 batch) */


void * FUN_10004320(void *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int local_1c [3];
  int local_10 [3];
  
  iVar1 = FUN_100058b0((int)param_2);
  if (iVar1 == 2) {
    (**(code **)(*param_2 + 4))(param_1);
    return param_1;
  }
  iVar1 = FUN_100058b0((int)param_2);
  if (iVar1 == 1) {
    (**(code **)(*param_2 + 4))(local_10);
    pcVar2 = operator_new(*(uint *)(local_10[0] + -8));
    FUN_10007630(local_10[0],*(int *)(local_10[0] + -8),(int)pcVar2);
    FUN_10006770(local_1c,pcVar2);
    operator_delete(pcVar2);
    FUN_10006600(param_1,local_1c);
    FUN_10006700(local_1c);
    FUN_10006700(local_10);
    return param_1;
  }
  FUN_10006770(param_1,&DAT_10009744);
  return param_1;
}


