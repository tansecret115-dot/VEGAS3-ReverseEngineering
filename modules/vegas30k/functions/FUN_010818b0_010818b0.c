/* Module: vegas30k.dll
   Function: FUN_010818b0
   Address: 010818b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010818b0(float *param_1,undefined3 *param_2,int param_3,undefined4 param_4,int param_5)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 *puVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 local_18;
  undefined4 local_14;
  
  if (_DAT_011db3f0 == *(double *)(param_5 + 0x50)) {
    if (_DAT_011db3f0 == *(double *)(param_5 + 0x48)) {
      uVar3 = *(undefined4 *)(param_5 + 0x44);
      dVar1 = *(double *)(param_5 + 0x40);
      if (0 < param_3) {
        do {
          iVar2 = FUN_01084440(CONCAT13((char)((uint)uVar3 >> 0x18),*param_2));
          puVar4 = (undefined3 *)((int)param_2 + 3);
          param_3 = param_3 + -1;
          uVar3 = CONCAT31((int3)((uint)puVar4 >> 8),*(char *)((int)param_2 + 5));
          local_18 = CONCAT22((short)*(char *)((int)param_2 + 5),*(undefined2 *)puVar4);
          *param_1 = ((float)local_18 + (float)iVar2) * (float)dVar1 + *param_1;
          param_2 = puVar4;
          param_1 = param_1 + 1;
        } while (param_3 != 0);
        return;
      }
    }
    else {
      fVar5 = (float10)*(double *)(param_5 + 0x40);
      dVar1 = *(double *)(param_5 + 0x48);
      if (0 < param_3) {
        do {
          param_3 = param_3 + -1;
          local_14 = CONCAT22((short)*(char *)((int)param_2 + 2),*(undefined2 *)param_2);
          local_18 = CONCAT22((short)*(char *)((int)param_2 + 5),*(undefined2 *)((int)param_2 + 3));
          *param_1 = (float)(((float10)local_14 + (float10)local_18) * fVar5 + (float10)*param_1);
          fVar5 = (float10)dVar1 + fVar5;
          param_2 = (undefined3 *)((int)param_2 + 3);
          param_1 = param_1 + 1;
        } while (param_3 != 0);
        return;
      }
    }
  }
  else {
    fVar5 = (float10)*(double *)(param_5 + 0x40);
    fVar6 = (float10)*(double *)(param_5 + 0x48);
    dVar1 = *(double *)(param_5 + 0x50);
    if (0 < param_3) {
      do {
        param_3 = param_3 + -1;
        local_18 = CONCAT22((short)*(char *)((int)param_2 + 2),*(undefined2 *)param_2);
        local_14 = CONCAT22((short)*(char *)((int)param_2 + 5),*(undefined2 *)((int)param_2 + 3));
        *param_1 = (float)(((float10)local_18 + (float10)local_14) * fVar5 + (float10)*param_1);
        fVar5 = fVar6 + fVar5;
        fVar6 = (float10)dVar1 + fVar6;
        param_2 = (undefined3 *)((int)param_2 + 3);
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
  }
  return;
}


