/* Module: aviplug.dll
   Function: FUN_5f994540
   Address: 5f994540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f994540(byte *param_1,double *param_2,int param_3,double *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_5 == param_3) {
    if (param_2 != param_4) {
      iVar1 = FUN_5f992ec0(*(undefined4 *)param_1);
      uVar2 = iVar1 * *(int *)(param_1 + 4) * param_3;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)param_2 = *(undefined4 *)param_4;
        param_4 = (double *)((int)param_4 + 4);
        param_2 = (double *)((int)param_2 + 4);
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)param_4;
        param_4 = (double *)((int)param_4 + 1);
        param_2 = (double *)((int)param_2 + 1);
      }
    }
    return param_3;
  }
  *(double *)(param_1 + 0x18) = (double)param_3 / (double)param_5;
  *(double *)(param_1 + 0x28) = _DAT_5f9d7c98 / ((double)param_3 / (double)param_5);
  switch(*(undefined4 *)param_1) {
  case 0x10:
    iVar1 = FUN_5f998af0((byte *)param_2,param_3,(byte *)param_4,param_5,param_1);
    return iVar1;
  case 0x11:
    iVar1 = FUN_5f998ea0((short *)param_2,param_3,(short *)param_4,param_5,(int)param_1);
    return iVar1;
  case 0x12:
    iVar1 = FUN_5f999220((undefined2 *)param_2,param_3,(uint3 *)param_4,param_5,
                         (undefined2 *)param_1);
    return iVar1;
  case 0x13:
    iVar1 = FUN_5f999700((int *)param_2,param_3,(int *)param_4,param_5,(int)param_1);
    return iVar1;
  default:
    return -1;
  case 0x20:
    iVar1 = FUN_5f999a70((float *)param_2,param_3,(float *)param_4,param_5,(int)param_1,
                         (uint)(*(int *)(param_1 + 0x1d5c) != 0));
    return iVar1;
  case 0x21:
    iVar1 = FUN_5f999db0(param_2,param_3,param_4,param_5,(int)param_1,
                         (uint)(*(int *)(param_1 + 0x1d5c) != 0));
    return iVar1;
  case 0x30:
    iVar1 = FUN_5f999700((int *)param_2,param_3,(int *)param_4,param_5,(int)param_1);
    return iVar1;
  }
}


