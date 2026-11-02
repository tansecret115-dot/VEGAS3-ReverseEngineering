/* Module: mp3plug.dll
   Function: FUN_5f6f6510
   Address: 5f6f6510
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6f6510(int param_1,int *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_34;
  
  if (0 < param_3) {
    iVar8 = 0;
    local_34 = 0;
    piVar4 = param_2;
    do {
      iVar6 = 0;
      if (0 < *(int *)((int)param_2 + iVar8 + 0xb0)) {
        iVar7 = 0;
        fVar2 = _DAT_5f75e334;
        fVar3 = _DAT_5f75e338;
        do {
          iVar5 = local_34 + iVar7;
          fVar1 = (float)piVar4[iVar6 + 0x55];
          *(undefined4 *)(param_1 + iVar5) = 1;
          if (((param_3 == 2) && (*param_2 != 0)) &&
             (_DAT_5f75e33c * fVar1 < *(float *)((int)param_2 + iVar6 * 4 + (0xce8 - iVar8)))) {
            *(undefined4 *)(param_1 + iVar5) = 0;
          }
          if ((*(int *)((int)param_2 + iVar8 + 0xa4) != 2) &&
             ((fVar1 < _DAT_5f75e340 * fVar3 || (fVar1 < _DAT_5f75e344 * fVar2)))) {
            *(undefined4 *)(param_1 + iVar5) = 0;
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 4;
          fVar2 = fVar3;
          fVar3 = fVar1;
        } while (iVar6 < *(int *)((int)param_2 + iVar8 + 0xb0));
      }
      piVar4 = piVar4 + 0x2e5;
      local_34 = local_34 + 0x9c;
      iVar8 = iVar8 + 0xb94;
    } while (iVar8 < param_3 * 0xb94);
  }
  return;
}


