/* Module: mp3plug.dll
   Function: FUN_5f6f8010
   Address: 5f6f8010
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_5f6f8010(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            char param_8,int param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  float10 fVar8;
  int local_2c;
  
  iVar6 = 0;
  if (0 < param_1) {
    do {
      iVar5 = *(int *)(param_9 + iVar6 * 4);
      if (iVar5 == -9999) {
        iVar5 = *(int *)(param_2 + iVar6 * 4);
        FUN_5f6d8cb0(0,(undefined4 *)(param_10 + iVar5 * 4),
                     *(int *)(param_2 + 4 + iVar6 * 4) - iVar5);
      }
      else {
        if (param_5 == 2) {
          if (iVar6 < 0x24) {
            local_2c = (iVar5 << (param_8 + 1U & 0x1f)) + *(int *)(param_6 + (iVar6 % 3) * 4) * 8;
          }
          else {
            local_2c = 0;
          }
        }
        else if (iVar6 < 0x15) {
          if (param_7 == 0) {
            local_2c = 0;
          }
          else {
            local_2c = (&DAT_5f742bf0)[iVar6];
          }
          local_2c = local_2c + iVar5 << (param_8 + 1U & 0x1f);
        }
        else {
          local_2c = 0;
        }
        iVar5 = *(int *)(param_2 + 4 + iVar6 * 4) - *(int *)(param_2 + iVar6 * 4);
        fVar3 = _DAT_5f75e3d4 + _DAT_5f75e3d0;
        pfVar4 = (float *)(param_3 + *(int *)(param_2 + iVar6 * 4) * 4);
        puVar7 = (uint *)(param_10 + *(int *)(param_2 + iVar6 * 4) * 4);
        fVar8 = (float10)fscale((float10)1,(float10)(-(param_4 - local_2c) >> 2));
        fVar1 = *(float *)(&DAT_5f742be0 + (-(param_4 - local_2c) & 3U) * 4);
        do {
          fVar2 = (float)((float10)*pfVar4 * fVar8 * (float10)fVar1);
          *puVar7 = (int)ROUND(*(float *)(&DAT_5f7427e0 + ((uint)ABS(fVar2) >> 0x17) * 4) *
                               *(float *)(&DAT_5f741fe0 + (((uint)fVar2 & 0x7fffff) >> 0xe) * 4) +
                               fVar3);
          *puVar7 = *puVar7 ^ (int)fVar2 >> 0x1f;
          *puVar7 = *puVar7 - ((int)fVar2 >> 0x1f);
          pfVar4 = pfVar4 + 1;
          puVar7 = puVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1);
  }
  iVar6 = *(int *)(param_2 + param_1 * 4);
  FUN_5f6d8cb0(0,(undefined4 *)(param_10 + iVar6 * 4),0x240 - iVar6);
  return;
}


