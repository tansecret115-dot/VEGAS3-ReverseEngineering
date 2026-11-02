/* Module: vidpcore.dll
   Function: FUN_5de9b220
   Address: 5de9b220
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de9b220(undefined4 param_1,int param_2,int param_3,uint param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *_Memory;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_14;
  
  iVar3 = param_2;
  _Memory = calloc(1,param_4);
  if (_Memory != (undefined4 *)0x0) {
    iVar5 = 1;
    local_14 = 1;
    if (param_3 / 9 < 1) goto LAB_5de9b28a;
    do {
      iVar5 = iVar5 * 3 + 1;
      local_14 = iVar5;
    } while (iVar5 <= param_3 / 9);
    for (; 0 < local_14; local_14 = local_14 / 3) {
LAB_5de9b28a:
      if (local_14 < param_3) {
        iVar6 = local_14 * param_4;
        iVar5 = local_14;
        param_2 = iVar6;
        do {
          puVar8 = (undefined4 *)(param_2 + iVar3);
          puVar9 = _Memory;
          for (uVar7 = param_4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar7 = param_4 & 3; iVar1 = iVar5, iVar2 = param_2, uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          while ((local_14 <= iVar1 &&
                 (iVar4 = (*param_5)(param_1,(iVar2 - iVar6) + iVar3,_Memory), 0 < iVar4))) {
            puVar8 = (undefined4 *)((iVar2 - iVar6) + iVar3);
            puVar9 = (undefined4 *)(iVar2 + iVar3);
            for (uVar7 = param_4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar7 = param_4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            iVar1 = iVar1 - local_14;
            iVar2 = iVar2 - iVar6;
          }
          puVar8 = _Memory;
          puVar9 = (undefined4 *)(iVar1 * param_4 + iVar3);
          for (uVar7 = param_4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          iVar5 = iVar5 + 1;
          for (uVar7 = param_4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          param_2 = param_2 + param_4;
        } while (iVar5 < param_3);
      }
    }
    free(_Memory);
  }
  return;
}


