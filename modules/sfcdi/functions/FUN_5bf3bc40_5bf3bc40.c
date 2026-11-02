/* Module: sfcdi.dll
   Function: FUN_5bf3bc40
   Address: 5bf3bc40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3bc40(undefined4 *param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_4;
  
  iVar2 = 0;
  local_4 = 0;
  uVar5 = param_3;
  if (param_3 != 0) {
    while( true ) {
      uVar4 = param_1[4];
      puVar1 = param_1 + 4;
      if (uVar5 <= uVar4) {
        puVar6 = (undefined4 *)(param_1[6] + param_1[5]);
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_2 = *puVar6;
          puVar6 = puVar6 + 1;
          param_2 = param_2 + 1;
        }
        for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)param_2 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
        param_1[5] = param_1[5] + uVar5;
        *puVar1 = *puVar1 - uVar5;
        *param_4 = param_3;
        return local_4;
      }
      if (uVar4 != 0) {
        puVar6 = (undefined4 *)(param_1[6] + param_1[5]);
        puVar7 = param_2;
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        uVar5 = uVar5 - *puVar1;
        param_2 = (undefined4 *)((int)param_2 + *puVar1);
      }
      param_1[5] = 0;
      iVar2 = FUN_5bf46110((undefined4 *)*param_1,(undefined4 *)param_1[6],(undefined4 *)param_1[3],
                           puVar1);
      if (iVar2 < 0) break;
      if (param_1[2] == -1) {
        param_1[2] = 0;
      }
      else {
        param_1[2] = param_1[3] + param_1[2];
      }
      if ((param_1[4] == 0) || (local_4 = iVar2, uVar5 == 0)) break;
    }
  }
  *param_4 = param_3 - uVar5;
  return iVar2;
}


