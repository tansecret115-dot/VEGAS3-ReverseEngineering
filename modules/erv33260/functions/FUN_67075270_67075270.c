/* Module: erv33260.dll
   Function: FUN_67075270
   Address: 67075270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67075270(int param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_90 [17];
  int aiStack_4c [18];
  
  iVar3 = 0;
  piVar5 = local_90;
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  if (0 < param_1) {
    do {
      pbVar1 = (byte *)(iVar3 + param_2);
      iVar3 = iVar3 + 1;
      local_90[*pbVar1] = local_90[*pbVar1] + 1;
    } while (iVar3 < param_1);
  }
  aiStack_4c[1] = 0;
  piVar5 = aiStack_4c + 2;
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 4;
    iVar2 = iVar3 + 4;
    iVar3 = iVar3 + 4;
    *piVar5 = (*(int *)((int)local_90 + iVar4) + *(int *)((int)aiStack_4c + iVar2)) * 2;
    piVar5 = piVar5 + 1;
  } while (iVar3 < 0x3d);
  iVar3 = 0;
  if (0 < param_1) {
    do {
      *param_3 = aiStack_4c[*(byte *)(iVar3 + param_2)];
      pbVar1 = (byte *)(iVar3 + param_2);
      iVar3 = iVar3 + 1;
      aiStack_4c[*pbVar1] = aiStack_4c[*pbVar1] + 1;
      param_3 = param_3 + 1;
    } while (iVar3 < param_1);
  }
  return;
}


