/* Module: vegas30k.dll
   Function: FUN_010829e0
   Address: 010829e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010829e0(float *param_1,undefined3 *param_2,int param_3,undefined4 param_4,int param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 local_18;
  undefined4 local_14;
  
  if (_DAT_011db3f0 == *(double *)(param_5 + 0x50)) {
    if (_DAT_011db3f0 == *(double *)(param_5 + 0x48)) {
      uVar4 = *(undefined4 *)(param_5 + 0x44);
      dVar2 = *(double *)(param_5 + 0x40);
      dVar1 = *(double *)(param_5 + 0x40);
      if (0 < param_3) {
        do {
          iVar3 = FUN_01084440(CONCAT13((char)((uint)uVar4 >> 0x18),*param_2));
          param_3 = param_3 + -1;
          *param_1 = (float)iVar3 * (float)dVar1 + *param_1;
          uVar4 = CONCAT31((int3)((uint)((int)param_2 + 3) >> 8),*(char *)((int)param_2 + 5));
          local_18 = CONCAT22((short)*(char *)((int)param_2 + 5),*(undefined2 *)((int)param_2 + 3));
          param_1[1] = (float)local_18 * (float)dVar2 + param_1[1];
          param_1 = param_1 + 2;
          param_2 = (undefined3 *)((int)param_2 + 6);
        } while (param_3 != 0);
        return;
      }
    }
    else {
      fVar5 = (float10)*(double *)(param_5 + 0x40);
      dVar1 = *(double *)(param_5 + 0x48);
      if (0 < param_3) {
        do {
          local_18 = CONCAT22((short)*(char *)((int)param_2 + 2),*(undefined2 *)param_2);
          param_3 = param_3 + -1;
          *param_1 = (float)((float10)local_18 * fVar5 + (float10)*param_1);
          local_14 = CONCAT22((short)*(char *)((int)param_2 + 5),*(undefined2 *)((int)param_2 + 3));
          param_1[1] = (float)((float10)local_14 * fVar5 + (float10)param_1[1]);
          fVar5 = (float10)dVar1 + fVar5;
          param_1 = param_1 + 2;
          param_2 = (undefined3 *)((int)param_2 + 6);
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
        local_14 = CONCAT22((short)*(char *)((int)param_2 + 2),*(undefined2 *)param_2);
        param_3 = param_3 + -1;
        *param_1 = (float)((float10)local_14 * fVar5 + (float10)*param_1);
        local_18 = CONCAT22((short)*(char *)((int)param_2 + 5),*(undefined2 *)((int)param_2 + 3));
        param_1[1] = (float)((float10)local_18 * fVar5 + (float10)param_1[1]);
        fVar5 = fVar6 + fVar5;
        fVar6 = (float10)dVar1 + fVar6;
        param_1 = param_1 + 2;
        param_2 = (undefined3 *)((int)param_2 + 6);
      } while (param_3 != 0);
    }
  }
  return;
}


