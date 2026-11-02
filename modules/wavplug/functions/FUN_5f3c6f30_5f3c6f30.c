/* Module: wavplug.dll
   Function: FUN_5f3c6f30
   Address: 5f3c6f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3c6f30(int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint local_18 [3];
  uint local_c [3];
  
  FUN_5f3c2b30(param_1,local_18);
  FUN_5f3c2a90(local_18);
  FUN_5f3c2da0(param_1,(int)local_18,local_c);
  if (*param_2 == 0) {
    FUN_5f3c2b10(param_3);
  }
  else {
    FUN_5f3c2da0((int)local_18,(int)(param_2 + 1),param_3);
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


