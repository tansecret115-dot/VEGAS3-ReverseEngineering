/* Module: vegas30k.dll
   Function: FUN_01082120
   Address: 01082120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01082120(double *param_1,undefined3 *param_2,int param_3,undefined4 param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  undefined3 *puVar6;
  undefined4 local_18;
  undefined4 local_14;
  
  if (_DAT_011db3f0 == *(double *)(param_5 + 0x50)) {
    if (_DAT_011db3f0 == *(double *)(param_5 + 0x48)) {
      uVar5 = *(undefined4 *)(param_5 + 0x44);
      dVar1 = *(double *)(param_5 + 0x40);
      if (0 < param_3) {
        do {
          iVar4 = FUN_01084440(CONCAT13((char)((uint)uVar5 >> 0x18),*param_2));
          puVar6 = (undefined3 *)((int)param_2 + 3);
          param_3 = param_3 + -1;
          uVar5 = CONCAT31((int3)((uint)puVar6 >> 8),*(char *)((int)param_2 + 5));
          local_18 = CONCAT22((short)*(char *)((int)param_2 + 5),*(undefined2 *)puVar6);
          *param_1 = ((double)local_18 + (double)iVar4) * dVar1 + *param_1;
          param_2 = puVar6;
          param_1 = param_1 + 1;
        } while (param_3 != 0);
        return;
      }
    }
    else {
      dVar1 = *(double *)(param_5 + 0x40);
      dVar2 = *(double *)(param_5 + 0x48);
      if (0 < param_3) {
        do {
          param_3 = param_3 + -1;
          local_14 = CONCAT22((short)*(char *)((int)param_2 + 2),*(undefined2 *)param_2);
          local_18 = CONCAT22((short)*(char *)((int)param_2 + 5),*(undefined2 *)((int)param_2 + 3));
          *param_1 = ((double)local_14 + (double)local_18) * dVar1 + *param_1;
          dVar1 = dVar2 + dVar1;
          param_2 = (undefined3 *)((int)param_2 + 3);
          param_1 = param_1 + 1;
        } while (param_3 != 0);
        return;
      }
    }
  }
  else {
    dVar1 = *(double *)(param_5 + 0x40);
    dVar2 = *(double *)(param_5 + 0x48);
    dVar3 = *(double *)(param_5 + 0x50);
    if (0 < param_3) {
      do {
        param_3 = param_3 + -1;
        local_18 = CONCAT22((short)*(char *)((int)param_2 + 2),*(undefined2 *)param_2);
        local_14 = CONCAT22((short)*(char *)((int)param_2 + 5),*(undefined2 *)((int)param_2 + 3));
        *param_1 = ((double)local_18 + (double)local_14) * dVar1 + *param_1;
        dVar1 = dVar2 + dVar1;
        dVar2 = dVar3 + dVar2;
        param_2 = (undefined3 *)((int)param_2 + 3);
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
  }
  return;
}


