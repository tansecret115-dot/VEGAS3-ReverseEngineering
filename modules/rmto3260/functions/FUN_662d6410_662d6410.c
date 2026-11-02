/* Module: rmto3260.dll
   Function: FUN_662d6410
   Address: 662d6410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662d6410(int param_1,uint param_2)

{
  int iVar1;
  char local_44 [64];
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = -0x7ffbfff9;
  }
  if (-1 < iVar1) {
    FUN_662d6460(param_2,local_44);
    FUN_662f0810(*(int **)(param_1 + 4),s_DURATION__s_6630ac80);
  }
  return;
}


