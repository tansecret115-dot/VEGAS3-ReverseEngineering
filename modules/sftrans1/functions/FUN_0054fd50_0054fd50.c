/* Module: sftrans1.dll
   Function: FUN_0054fd50
   Address: 0054fd50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0054fd50(int param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  double *pdVar8;
  undefined4 *puVar9;
  double *pdVar10;
  int local_24;
  
  if ((-1 < param_4) && (param_4 < *(int *)(param_1 + 0x148))) {
    uVar1 = *(undefined4 *)(param_1 + 0x14c);
    *(int *)(param_1 + 0x14c) = param_4;
    local_24 = 0;
    iVar3 = **(int **)(*(int *)(param_1 + 0x150) + param_4 * 8);
    if (param_3 < iVar3) {
      while (iVar3 = iVar3 + -1, param_3 <= iVar3) {
        FUN_0054ed50(iVar3,1);
      }
      local_24 = 1;
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      if (iVar3 < param_3) {
        iVar4 = 0;
        puVar6 = param_2;
        if (0 < iVar3) {
          do {
            iVar4 = iVar4 + 1;
            puVar7 = puVar6;
            puVar9 = *(undefined4 **)
                      (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8)
                               + 8) + -4 + iVar4 * 4);
            for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            puVar6 = puVar6 + 0x1a;
          } while (iVar4 < iVar3);
        }
        puVar6 = param_2 + iVar3 * 0x1a;
        local_24 = iVar3;
        do {
          iVar4 = FUN_0054eb40(*puVar6,puVar6[1],puVar6[2],puVar6[3]);
          if (iVar4 == -1) {
            return 0;
          }
          puVar6 = puVar6 + 0x1a;
          local_24 = local_24 + 1;
        } while (local_24 < param_3);
        local_24 = 1;
        iVar4 = iVar3;
      }
    }
    if (iVar4 < param_3) {
      pdVar5 = (double *)(param_2 + iVar4 * 0x1a + 10);
      do {
        pdVar10 = *(double **)
                   (*(int *)(*(int *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + 8
                            ) + iVar4 * 4);
        if ((((*pdVar10 != pdVar5[-5]) || (pdVar10[1] != pdVar5[-4])) || (pdVar10[5] != *pdVar5)) ||
           (((pdVar10[6] != pdVar5[1] || (pdVar10[10] != pdVar5[5])) || (pdVar10[0xb] != pdVar5[6]))
           )) {
          local_24 = 1;
          pdVar8 = pdVar5 + -5;
          for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pdVar10 = *(undefined4 *)pdVar8;
            pdVar8 = (double *)((int)pdVar8 + 4);
            pdVar10 = (double *)((int)pdVar10 + 4);
          }
        }
        iVar4 = iVar4 + 1;
        pdVar5 = pdVar5 + 0xd;
      } while (iVar4 < param_3);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x150) + 4 + param_4 * 8) = param_5;
    *(undefined4 *)(param_1 + 0x14c) = uVar1;
    return local_24;
  }
  return 0;
}


