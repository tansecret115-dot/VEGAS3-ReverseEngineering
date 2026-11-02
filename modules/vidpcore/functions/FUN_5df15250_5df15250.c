/* Module: vidpcore.dll
   Function: FUN_5df15250
   Address: 5df15250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df15250(undefined4 param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18 [12];
  uint local_c [3];
  
  FUN_5df10b20(param_1,local_18);
  FUN_5df10a80(local_18);
  FUN_5df10d90(param_1,local_18,local_c);
  if (*param_2 == 0) {
    FUN_5df10b00(param_3);
  }
  else {
    FUN_5df10d90(local_18,param_2 + 1,param_3);
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


