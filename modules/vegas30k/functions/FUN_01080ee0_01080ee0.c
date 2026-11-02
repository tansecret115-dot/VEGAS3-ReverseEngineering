/* Module: vegas30k.dll
   Function: FUN_01080ee0
   Address: 01080ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01080ee0(double *param_1,undefined2 *param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 local_28;
  undefined4 local_24;
  
  param_3 = param_3 * param_4;
  if (_DAT_011db3f0 == *(double *)(param_5 + 0x50)) {
    if (_DAT_011db3f0 == *(double *)(param_5 + 0x48)) {
      dVar1 = *(double *)(param_5 + 0x40);
      if (0 < param_3) {
        do {
          param_3 = param_3 + -1;
          local_28 = (undefined2 *)CONCAT22((short)*(char *)(param_2 + 1),*param_2);
          *param_1 = (double)(int)local_28 * dVar1 + *param_1;
          param_1 = param_1 + 1;
          param_2 = (undefined2 *)((int)param_2 + 3);
        } while (param_3 != 0);
        return;
      }
    }
    else {
      dVar1 = *(double *)(param_5 + 0x40);
      dVar2 = *(double *)(param_5 + 0x48);
      iVar7 = 0;
      if (0 < param_3) {
        local_28 = param_2;
        do {
          pdVar4 = param_1;
          if (param_4 != 0) {
            iVar7 = iVar7 + param_4;
            pdVar4 = param_1 + param_4;
            puVar8 = (undefined2 *)((int)local_28 + param_4 * 3);
            iVar5 = param_4;
            puVar6 = local_28;
            do {
              iVar5 = iVar5 + -1;
              local_24 = CONCAT22((short)*(char *)(puVar6 + 1),*puVar6);
              *param_1 = (double)local_24 * dVar1 + *param_1;
              param_1 = param_1 + 1;
              puVar6 = (undefined2 *)((int)puVar6 + 3);
              local_28 = puVar8;
            } while (iVar5 != 0);
          }
          dVar1 = dVar1 + dVar2;
          param_1 = pdVar4;
        } while (iVar7 < param_3);
        return;
      }
    }
  }
  else {
    dVar1 = *(double *)(param_5 + 0x40);
    dVar2 = *(double *)(param_5 + 0x48);
    dVar3 = *(double *)(param_5 + 0x50);
    iVar7 = 0;
    if (0 < param_3) {
      local_28 = param_2;
      do {
        pdVar4 = param_1;
        if (param_4 != 0) {
          iVar7 = iVar7 + param_4;
          pdVar4 = param_1 + param_4;
          puVar8 = (undefined2 *)((int)local_28 + param_4 * 3);
          iVar5 = param_4;
          puVar6 = local_28;
          do {
            iVar5 = iVar5 + -1;
            local_24 = CONCAT22((short)*(char *)(puVar6 + 1),*puVar6);
            *param_1 = (double)local_24 * dVar1 + *param_1;
            param_1 = param_1 + 1;
            puVar6 = (undefined2 *)((int)puVar6 + 3);
            local_28 = puVar8;
          } while (iVar5 != 0);
        }
        dVar1 = dVar2 + dVar1;
        dVar2 = dVar2 + dVar3;
        param_1 = pdVar4;
      } while (iVar7 < param_3);
    }
  }
  return;
}


