/* Module: mcplug.dll
   Function: FUN_00472f80
   Address: 00472f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00472f80(int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint local_18 [3];
  uint local_c [3];
  
  FUN_0046eb80(param_1,local_18);
  FUN_0046eae0(local_18);
  FUN_0046edf0(param_1,(int)local_18,local_c);
  if (*param_2 == 0) {
    FUN_0046eb60(param_3);
  }
  else {
    FUN_0046edf0((int)local_18,(int)(param_2 + 1),param_3);
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


