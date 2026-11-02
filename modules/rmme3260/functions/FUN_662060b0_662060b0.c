/* Module: rmme3260.dll
   Function: FUN_662060b0
   Address: 662060b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662060b0(void *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *local_1c [3];
  char *local_10 [3];
  
  FUN_66250280(local_1c,s_TimeStampDelivery_T_priority_10__6626f494);
  FUN_66250280(local_10,s_TimeStampDelivery_T_priority_10_6626f474);
  if (param_1 == (void *)0xfffffff0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x20);
  }
  if ((iVar4 < 2) && (iVar4 < 1)) {
    iVar3 = -0x7fffbffb;
  }
  else {
    if (*(int *)((int)param_1 + 0x14) == 0) {
      iVar4 = 0;
    }
    else {
      piVar2 = (int *)FUN_66250c10(*(int *)((int)param_1 + 0x14));
      iVar4 = *piVar2;
    }
    if (iVar4 == 0) {
      iVar3 = -0x7fffbffb;
    }
    else {
      FUN_66203bc0(param_1,6);
      sVar1 = FUN_662182a0(iVar4);
      FUN_662039e0(param_1,local_1c[0],sVar1,3,0);
      iVar3 = FUN_662039e0(param_1,local_10[0],sVar1,1,0);
      iVar4 = 0;
      if (*(int *)((int)param_1 + 0x28) != 0) {
        piVar2 = (int *)FUN_66250c10(*(int *)((int)param_1 + 0x28));
        iVar4 = *piVar2;
      }
      if (iVar4 == 0) {
        iVar3 = -0x7fffbffb;
      }
      else {
        FUN_662182a0(iVar4);
      }
    }
  }
  FUN_66250210((int *)local_10);
  FUN_66250210((int *)local_1c);
  return iVar3;
}


