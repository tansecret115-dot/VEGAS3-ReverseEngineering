/* Module: mp3plug.dll
   Function: FUN_5f6e1b60
   Address: 5f6e1b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f6e1b60(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint local_1c;
  uint uStack_18;
  
  param_1[3] = *param_2;
  param_1[2] = param_2[2];
  param_1[4] = param_2[5];
  param_1[1] = param_2[3];
  *param_1 = param_2[1];
  FUN_5f6f6f10((uint *)param_1[6],param_2[9]);
  uVar4 = param_2[4];
  param_1[8] = 0;
  param_1[7] = uVar4;
  uVar10 = param_2[8];
  if (uVar10 == 0) {
    iVar5 = param_2[7];
    uVar10 = 0;
    while (uVar9 = uVar10, (int)(&DAT_5f73fd8c)[uVar10 * 3] < iVar5) {
      uVar1 = uVar10 + 2;
      uVar9 = uVar10 + 1;
      if (((5 < uVar1) || (iVar5 <= (int)(&DAT_5f73fd8c)[uVar9 * 3])) ||
         (uVar2 = uVar10 + 3, uVar10 = uVar1, uVar9 = uVar1, 5 < uVar2)) break;
    }
    if (uVar9 == 6) {
      return 1;
    }
    iVar6 = *(int *)(uVar9 * 0xc + 0x5f73fd80);
    fVar8 = (float)(iVar5 - iVar6) / (float)((&DAT_5f73fd8c)[uVar9 * 3] - iVar6);
    fVar7 = _DAT_5f75d354 - fVar8;
    param_1[9] = *(float *)(uVar9 * 0xc + 0x5f73fd84) * fVar7 +
                 *(float *)(uVar9 * 0xc + 0x5f73fd90) * fVar8;
    dVar3 = (double)((float)*(int *)(uVar9 * 0xc + 0x5f73fd88) * fVar7 +
                    (float)*(int *)(uVar9 * 0xc + 0x5f73fd94) * fVar8);
    uStack_18 = (uint)((ulonglong)dVar3 >> 0x20);
    local_1c = SUB84(dVar3,0);
    uVar10 = uStack_18 >> 0x14 & 0x7ff;
    if (uVar10 < 0x3ff) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uStack_18 << 0xb | local_1c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar10 & 0x1f);
      if ((longlong)dVar3 < 0) {
        uVar10 = -uVar10;
      }
    }
  }
  FUN_5f6f57d0(param_1[5],(float)param_2[6],uVar10);
  return 0;
}


