/* Module: mp3plug.dll
   Function: FUN_5f719700
   Address: 5f719700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5f719700(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  float10 fVar12;
  int local_68;
  int local_5c;
  double local_54;
  
  iVar3 = param_5 * 0x3100;
  iVar4 = *(int *)((int)this + iVar3);
  iVar8 = iVar4 + 3;
  iVar11 = *(int *)(param_1 + 4);
  if (*(int *)((int)this + iVar3 + 0x30fc) == 0) {
    FUN_5f719500(param_1,(int *)(iVar3 + (int)this));
  }
  iVar6 = param_5 * 0xe8 + param_4 * 0x6c;
  puVar9 = (undefined4 *)
           ((iVar8 - (((uint)(iVar8 >> 1) >> 0x1e) + 3 + iVar4 & 0xfffffffc)) * 0x9cc + 4 + iVar3 +
           (int)this);
  puVar10 = (undefined4 *)(param_2 + param_5 * 0xe8 + 0x18 + param_4 * 0x6c);
  for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar8 = *(int *)(param_1 + 0x18);
  iVar11 = iVar11 * 0x94;
  iVar4 = 0;
  if (0 < *(int *)(&DAT_5f7698b0 + iVar8 * 0x1bc + iVar11)) {
    do {
      *(undefined4 *)(param_3 + iVar4 * 4) = 0;
      iVar8 = *(int *)(param_1 + 0x18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(&DAT_5f7698b0 + iVar8 * 0x1bc + iVar11));
  }
  local_68 = 0;
  while( true ) {
    iVar4 = iVar3 + local_68 * 4;
    fVar1 = *(float *)((int)this + iVar4 + 0x30a0);
    iVar5 = *(int *)(&DAT_5f7698b4 + iVar11 + iVar8 * 0x1bc + local_68 * 4);
    iVar8 = *(int *)(&DAT_5f7698b0 + local_68 * 4 + iVar8 * 0x1bc + iVar11);
    iVar7 = iVar8;
    if ((double)*(float *)((int)this + iVar4 + 0x30a0) <= _DAT_5f7663c8) {
      if (iVar8 < iVar5) {
        iVar4 = (iVar5 - iVar8 & 0xfffffffeU) + iVar8;
        for (; iVar7 = iVar8, iVar8 < iVar4; iVar8 = iVar8 + 2) {
          *(undefined4 *)(param_3 + iVar8 * 4) = 0;
          *(undefined4 *)(param_3 + 4 + iVar8 * 4) = 0;
        }
        for (; iVar7 < iVar5; iVar7 = iVar7 + 1) {
          *(undefined4 *)(param_3 + iVar7 * 4) = 0;
        }
      }
    }
    else {
      local_54 = _DAT_5f7663d0;
      if (iVar8 < iVar5) {
        local_5c = iVar3 + iVar8 * 4;
        do {
          if (local_68 < 1) {
            fVar12 = FUN_5f719470((int)this,*(float *)((int)this + local_5c + 0x27a0));
            *(float *)(param_3 + iVar7 * 4) = (float)fVar12;
          }
          else {
            fVar12 = FUN_5f7194a0((int)this);
            *(float *)(param_3 + iVar7 * 4) = (float)fVar12;
          }
          fVar2 = *(float *)(param_3 + iVar7 * 4);
          local_54 = (double)(fVar2 * fVar2 + (float)local_54);
          local_5c = local_5c + 4;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar5);
        if ((local_54 != _DAT_5f7663d8) && (iVar7 = iVar8, iVar8 < iVar5)) {
          fVar1 = (float)SQRT((double)fVar1 / local_54);
          for (; iVar7 < (int)((iVar5 - iVar8 & 0xfffffffeU) + iVar8); iVar7 = iVar7 + 2) {
            *(float *)(param_3 + 4 + iVar7 * 4) = *(float *)(param_3 + 4 + iVar7 * 4) * fVar1;
            *(float *)(param_3 + iVar7 * 4) = *(float *)(param_3 + iVar7 * 4) * fVar1;
          }
          while (iVar7 < iVar5) {
            iVar8 = iVar7 * 4;
            iVar7 = iVar7 + 1;
            *(float *)(param_3 + -4 + iVar7 * 4) = *(float *)(param_3 + iVar8) * fVar1;
          }
        }
      }
    }
    if (0x15 < local_68 + 1) break;
    iVar8 = *(int *)(param_1 + 0x18);
    local_68 = local_68 + 1;
  }
  for (; iVar7 < 0x240; iVar7 = iVar7 + 1) {
    *(undefined4 *)(param_3 + iVar7 * 4) = 0;
  }
  *(undefined4 *)(param_2 + 100 + iVar6) =
       *(undefined4 *)(&DAT_5f769908 + *(int *)(param_1 + 0x18) * 0x1bc + iVar11);
  *(undefined4 *)(param_2 + 0x80 + iVar6) = 0x16;
  return;
}


