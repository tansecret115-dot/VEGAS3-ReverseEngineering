/* Module: rmme3260.dll
   Function: FUN_662062d0
   Address: 662062d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662062d0(void *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  char *local_10 [3];
  
  FUN_66250280(local_10,s_TimeStampDelivery_T_priority_10__6626f494);
  if (param_1 == (void *)0xfffffff0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0x20);
  }
  if ((iVar3 < 2) && (iVar3 < 1)) {
    FUN_66250210((int *)local_10);
    return -0x7fffbffb;
  }
  if (*(int *)((int)param_1 + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_66250c10(*(int *)((int)param_1 + 0x14));
    iVar3 = *piVar2;
  }
  if (iVar3 == 0) {
    FUN_66250210((int *)local_10);
    return -0x7fffbffb;
  }
  FUN_66203bc0(param_1,6);
  sVar1 = FUN_662182a0(iVar3);
  iVar3 = FUN_662039e0(param_1,local_10[0],sVar1,3,0);
  FUN_66250210((int *)local_10);
  return iVar3;
}


