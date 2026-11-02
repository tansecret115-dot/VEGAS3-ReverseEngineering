/* Module: sfcdi.dll
   Function: FUN_5bf1f400
   Address: 5bf1f400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Variable defined which should be unmapped: param_2 */

uint * __thiscall
FUN_5bf1f400(int param_1,uint *param_2,undefined4 param_3,void *param_4,int *param_5,
            undefined4 param_6)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  cdrcaps_tag *pcVar4;
  undefined4 *puVar5;
  cdrcaps_tag local_64 [100];
  
  puVar2 = (uint *)cdr_GetDeviceCaps((HSFCD__ *)param_2[2],local_64);
  if ((int)puVar2 < 0) {
    param_2 = puVar2;
    return param_2;
  }
  puVar1 = (uint *)(param_1 + 0x1de4);
  *puVar1 = param_2[2];
  pcVar4 = local_64;
  puVar5 = (undefined4 *)(param_1 + 0x1de8);
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x1e4c) = 0;
  *(uint *)(param_1 + 0x1e50) = param_2[1];
  *(uint *)(param_1 + 0x1e54) = *param_2 >> 1 & 1;
  *(undefined4 *)(param_1 + 0x1e58) = param_6;
  param_2 = puVar2;
  switch(param_6) {
  case 0:
    param_5 = (int *)(param_1 + 0x1e64);
    *(undefined4 *)(param_1 + 0x1e7c) = param_3;
    param_2 = (uint *)FUN_5bf205f0((int)param_5,puVar1);
    memmove((void *)(param_1 + 0x54),(void *)(param_1 + 0x1e80),0x1d90);
    break;
  case 1:
    param_5 = (int *)(param_1 + 0x1e64);
    *(undefined4 *)(param_1 + 0x1e7c) = param_3;
    param_2 = (uint *)FUN_5bf1fee0((int)param_5,puVar1);
    memmove((void *)(param_1 + 0x54),(void *)(param_1 + 0x1e80),0x1d90);
    break;
  case 2:
    memmove((void *)(param_1 + 0x54),param_4,0x1d90);
    *(int **)(param_1 + 0x1e5c) = param_5;
    goto switchD_5bf1f47a_default;
  case 3:
    param_2 = (uint *)FUN_5bf210b0((undefined4 *)(param_1 + 8),param_5);
    break;
  default:
    goto switchD_5bf1f47a_default;
  }
  *(int **)(param_1 + 0x1e5c) = param_5;
switchD_5bf1f47a_default:
  if (-1 < (int)param_2) {
    FUN_5bf2bf00(param_1 + 0x54);
    FUN_5bf1f1a0(param_1 + 0x54,0);
  }
  return param_2;
}


