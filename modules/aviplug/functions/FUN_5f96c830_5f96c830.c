/* Module: aviplug.dll
   Function: FUN_5f96c830
   Address: 5f96c830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96c830(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = 8;
  piVar3 = param_3;
  do {
    FUN_5f96c1b0(piVar3,(int *)((param_4 - (int)param_3) + (int)piVar3));
    piVar3 = piVar3 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = (int)param_3 - (int)param_2;
  iVar2 = 8;
  do {
    FUN_5f96c5b0(param_2,(int *)(iVar1 + (int)param_2));
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar1 = 8;
  iVar2 = (int)param_3 - (int)param_1;
  do {
    FUN_5f96c390(param_1,(int *)(iVar2 + (int)param_1));
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


