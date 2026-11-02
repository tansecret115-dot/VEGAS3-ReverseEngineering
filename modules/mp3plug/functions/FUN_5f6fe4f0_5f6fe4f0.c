/* Module: mp3plug.dll
   Function: FUN_5f6fe4f0
   Address: 5f6fe4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6fe4f0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  uint local_4c;
  uint uStack_48;
  uint local_3c;
  uint uStack_38;
  uint local_2c;
  uint uStack_28;
  int local_1c;
  int local_18;
  
  local_18 = 0;
  if (param_1 < 1) {
    return;
  }
  do {
    fVar1 = _DAT_5f75e7f4 / (float)*(int *)(param_2 + 0x504);
    local_1c = *(int *)(param_2 + 0x504);
    dVar5 = (double)((float)*(int *)(param_2 + 0x3a4 + local_18 * 4) * fVar1);
    uStack_48 = (uint)((ulonglong)dVar5 >> 0x20);
    local_4c = SUB84(dVar5,0);
    uVar3 = uStack_48 >> 0x14 & 0x7ff;
    if (uVar3 < 0x3ff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uStack_48 << 0xb | local_4c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar3 & 0x1f);
      if ((longlong)dVar5 < 0) {
        uVar3 = -uVar3;
      }
    }
    while( true ) {
      if (local_18 < param_1 + -1) {
        dVar5 = (double)((float)(*(int *)(param_2 + 0x3a8 + local_18 * 4) +
                                *(int *)(param_2 + 0x3a4 + local_18 * 4)) * fVar1);
        uStack_38 = (uint)((ulonglong)dVar5 >> 0x20);
        local_3c = SUB84(dVar5,0);
        uVar4 = uStack_38 >> 0x14 & 0x7ff;
        if (uVar4 < 0x3ff) {
          uVar4 = 0;
        }
        else {
          uVar4 = (uStack_38 << 0xb | local_3c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar4 & 0x1f)
          ;
          if ((longlong)dVar5 < 0) {
            uVar4 = -uVar4;
          }
        }
      }
      else {
        uVar4 = *(int *)(param_2 + 0x3a4 + local_18 * 4) / local_1c;
      }
      fVar1 = *(float *)(&DAT_5f7473a4 + uVar4 * 4);
      if (*(float *)(&DAT_5f7473a4 + uVar3 * 4) < fVar1) {
        fVar1 = *(float *)(&DAT_5f7473a4 + uVar3 * 4);
      }
      dVar5 = pow(_DAT_5f75e7f8,(double)((fVar1 - _DAT_5f75e7ec) * _DAT_5f75e800));
      iVar2 = *(int *)(param_2 + 0x504);
      *(float *)(param_2 + 0x670 + local_18 * 4) = (float)dVar5;
      *(float *)(param_2 + 0x670 + local_18 * 4) =
           (float)(*(int *)(param_2 + 0xc + local_18 * 4) - *(int *)(param_2 + 8 + local_18 * 4)) *
           (float)dVar5 * _DAT_5f75e7e8;
      *(undefined4 *)(param_2 + 0x508 + local_18 * 4) =
           *(undefined4 *)(&DAT_5f747340 + (*(int *)(param_2 + 0x3a4 + local_18 * 4) / iVar2) * 4);
      local_18 = local_18 + 1;
      if (param_1 <= local_18) {
        return;
      }
      if (local_18 < 1) break;
      fVar1 = _DAT_5f75e808 / (float)*(int *)(param_2 + 0x504);
      local_1c = *(int *)(param_2 + 0x504);
      dVar5 = (double)((float)(*(int *)(param_2 + 0x3a0 + local_18 * 4) +
                              *(int *)(param_2 + 0x3a4 + local_18 * 4)) * fVar1);
      uStack_28 = (uint)((ulonglong)dVar5 >> 0x20);
      local_2c = SUB84(dVar5,0);
      uVar3 = uStack_28 >> 0x14 & 0x7ff;
      if (uVar3 < 0x3ff) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uStack_28 << 0xb | local_2c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar3 & 0x1f);
        if ((longlong)dVar5 < 0) {
          uVar3 = -uVar3;
        }
      }
    }
  } while( true );
}


