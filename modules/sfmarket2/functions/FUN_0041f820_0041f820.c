/* Module: sfmarket2.dll
   Function: FUN_0041f820
   Address: 0041f820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f820(int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint local_18 [3];
  uint local_c [3];
  
  FUN_0041b0f0(param_1,local_18);
  FUN_0041b050(local_18);
  FUN_0041b360(param_1,(int)local_18,local_c);
  if (*param_2 == 0) {
    FUN_0041b0d0(param_3);
  }
  else {
    FUN_0041b360((int)local_18,(int)(param_2 + 1),param_3);
  }
  iVar3 = (int)local_c - (int)param_3;
  puVar2 = (uint *)(param_2 + 4);
  iVar4 = 3;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *param_3 = *(uint *)(iVar3 + (int)param_3) ^ *param_3 ^ uVar1;
    param_3 = param_3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


