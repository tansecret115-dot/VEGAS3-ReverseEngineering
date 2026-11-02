/* Module: vegas30.exe
   Function: FUN_0047e950
   Address: 0047e950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0047e950(int param_1,longlong param_2,uint param_3,uint param_4)

{
  double dVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar2 = **(uint **)(param_1 + 0x30);
  if (uVar2 == 0) {
    return (float10)*(float *)(param_1 + 0x28);
  }
  puVar3 = (uint *)(*(uint **)(param_1 + 0x30))[2];
  iVar8 = 0;
  if (1 < uVar2) {
    uVar7 = 1;
    puVar5 = puVar3;
    do {
      if ((param_2._4_4_ < (int)puVar5[5]) ||
         ((param_2._4_4_ <= (int)puVar5[5] && ((uint)param_2 < puVar5[4])))) {
        uVar7 = iVar8 + 1;
        if (uVar7 < uVar2) {
          uVar2 = puVar3[iVar8 * 4];
          uVar4 = puVar3[iVar8 * 4 + 1];
          uVar6 = puVar3[uVar7 * 4];
          uVar7 = puVar3[uVar7 * 4 + 1];
          if ((uVar6 != uVar2) || (uVar7 != uVar4)) {
            if (((-1 < (int)param_4) && ((int)param_4 <= (int)uVar7)) &&
               (((int)param_4 < (int)uVar7 || (param_3 <= uVar6)))) {
              uVar6 = param_3;
              uVar7 = param_4;
            }
            fVar9 = (float10)CONCAT44((uVar7 - uVar4) - (uint)(uVar6 < uVar2),uVar6 - uVar2);
            param_2 = CONCAT44((param_2._4_4_ - uVar4) - (uint)((uint)param_2 < uVar2),
                               (uint)param_2 - uVar2);
            fVar10 = (float10)param_2;
            switch(puVar3[iVar8 * 4 + 3]) {
            case 2:
              return (fVar9 - fVar10) * (fVar9 - fVar10) *
                     (((float10)(float)puVar3[iVar8 * 4 + 2] - (float10)(float)puVar3[iVar8 * 4 + 6]
                      ) / (fVar9 * fVar9)) + (float10)(float)puVar3[iVar8 * 4 + 6];
            case 4:
              fVar10 = fVar10 / fVar9;
              return ((float10)(float)puVar3[iVar8 * 4 + 6] - (float10)(float)puVar3[iVar8 * 4 + 2])
                     * fVar10 * fVar10 * ((float10)_DAT_00610f30 - (fVar10 + fVar10)) +
                     (float10)(float)puVar3[iVar8 * 4 + 2];
            case 0xfffffffc:
              fVar10 = fVar10 / fVar9;
              fVar9 = fVar10 * fVar10 * fVar10;
              dVar1 = (double)(fVar9 + fVar9);
              fVar9 = fVar10 * fVar10 * (float10)_DAT_00610f30;
              return ((float10)(float)puVar3[iVar8 * 4 + 6] - (float10)(float)puVar3[iVar8 * 4 + 2])
                     * ((fVar9 - (float10)dVar1) +
                       (((float10)dVar1 - fVar9) + fVar10) * (float10)_DAT_00610f30) +
                     (float10)(float)puVar3[iVar8 * 4 + 2];
            default:
              return (((float10)(float)puVar3[iVar8 * 4 + 6] - (float10)(float)puVar3[iVar8 * 4 + 2]
                      ) / fVar9) * fVar10 + (float10)(float)puVar3[iVar8 * 4 + 2];
            case 0xfffffffe:
              return fVar10 * fVar10 *
                     (((float10)(float)puVar3[iVar8 * 4 + 6] - (float10)(float)puVar3[iVar8 * 4 + 2]
                      ) / (fVar9 * fVar9)) + (float10)(float)puVar3[iVar8 * 4 + 2];
            }
          }
        }
        break;
      }
      iVar8 = iVar8 + 1;
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar7 < uVar2);
  }
  return (float10)(float)puVar3[iVar8 * 4 + 2];
}


