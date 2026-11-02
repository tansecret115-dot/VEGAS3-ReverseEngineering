/* Module: vegas30.exe
   Function: FUN_00415df0
   Address: 00415df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415df0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  
  iVar1 = **(int **)(param_1 + 0x8c);
  if (iVar1 != 0) {
    iVar2 = (*(int **)(param_1 + 0x8c))[2];
    iVar5 = 0;
    if (0 < iVar1) {
      piVar8 = (int *)(iVar2 + 0x28);
      do {
        if ((*piVar8 != 0) && ((*(uint *)(*piVar8 + 0xc) & 0x40000) != 0)) break;
        iVar5 = iVar5 + 1;
        piVar8 = piVar8 + 0x12;
      } while (iVar5 < iVar1);
    }
    param_1 = 0;
    if (0 < iVar1) {
      piVar8 = (int *)(iVar2 + 0x2c);
      do {
        iVar2 = piVar8[-1];
        if (iVar2 != 0) {
          uVar7 = (param_1 & 0xf) << 8;
          *(uint *)(iVar2 + 0x10) =
               (int)(short)piVar8[-0xb] << 0x10 | *(uint *)(iVar2 + 0x10) & 0xdf | uVar7 | 0x20;
          if ((((int *)*piVar8 != (int *)0x0) && (iVar5 = *(int *)*piVar8, 1 < iVar5)) &&
             (uVar4 = 0, 0 < iVar5)) {
            do {
              uVar6 = uVar4 & 0xf;
              iVar3 = *(int *)(*(int *)(*piVar8 + 8) + uVar4 * 4);
              uVar4 = uVar4 + 1;
              *(uint *)(iVar3 + 0x10) =
                   (((int)(short)piVar8[-0xb] << 4 | uVar6) << 7 | (uint)(iVar3 == iVar2)) << 5 |
                   *(uint *)(iVar3 + 0x10) & 0xdf | uVar7;
            } while ((int)uVar4 < iVar5);
          }
        }
        param_1 = param_1 + 1;
        piVar8 = piVar8 + 0x12;
      } while ((int)param_1 < iVar1);
    }
  }
  return;
}


