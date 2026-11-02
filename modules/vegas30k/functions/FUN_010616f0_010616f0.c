/* Module: vegas30k.dll
   Function: FUN_010616f0
   Address: 010616f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
FUN_010616f0(uint param_1,int param_2,uint param_3,int param_4,int param_5,undefined4 *param_6,
            uint param_7,uint *param_8,int param_9,int param_10,uint param_11,undefined4 *param_12,
            int param_13)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined1 *local_10;
  uint local_c;
  
  *param_8 = 0;
  iVar7 = (int)param_11 >> 0x1f;
  local_10 = (undefined1 *)0x0;
  iVar1 = __alldiv(param_1,param_2,param_11,iVar7);
  uVar11 = __allmul(param_7,(int)param_7 >> 0x1f,param_3,param_4);
  uVar2 = (uint)uVar11 + param_11;
  iVar3 = uVar2 + param_1;
  iVar3 = __alldiv(iVar3 + -1,
                   ((int)((ulonglong)uVar11 >> 0x20) + iVar7 + (uint)CARRY4((uint)uVar11,param_11) +
                    param_2 + (uint)CARRY4(uVar2,param_1)) - (uint)(iVar3 == 0),param_11,iVar7);
  uVar2 = iVar3 - iVar1;
  if ((int)uVar2 < 0) {
    return &DAT_80070057;
  }
  local_c = uVar2;
  if ((int)param_12 < iVar3) {
    local_c = (int)param_12 - iVar1;
    if ((int)uVar2 < 1) {
      return &DAT_80070057;
    }
    uVar4 = param_11 * (int)param_12;
    iVar3 = (uVar4 - param_1) + param_3;
    param_7 = __alldiv(iVar3 + -1,
                       (((((int)uVar4 >> 0x1f) - param_2) - (uint)(uVar4 < param_1)) + param_4 +
                       (uint)CARRY4(uVar4 - param_1,param_3)) - (uint)(iVar3 == 0),param_3,param_4);
  }
  if (0 < (int)param_7) {
    iVar3 = _SfAudio_BytesFromSampleType_4(param_9);
    uVar4 = iVar3 * 2;
    puVar9 = (undefined4 *)(uVar4 * iVar1 * param_10 + param_13);
    param_12 = param_6;
    iVar3 = _SfAudio_BytesFromSampleType_4(param_5);
    if ((uint)(iVar3 * 2) < uVar4) {
      FUN_01002100();
      param_12 = (undefined4 *)&stack0xffffffd8;
    }
    if (param_7 == uVar2) {
      param_7 = local_c;
      if ((int)uVar2 <= (int)local_c) {
        param_7 = uVar2;
      }
      uVar4 = uVar4 * param_7 * param_10;
      puVar10 = param_12;
      for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
    else {
      iVar3 = param_10;
      if ((iVar7 < param_4) || ((iVar7 <= param_4 && (param_11 <= param_3)))) {
        iVar8 = (int)param_3 >> 0x1f;
        uVar11 = __allmul(iVar1,iVar1 >> 0x1f,param_11,iVar7);
        uVar5 = __allrem(uVar11,param_3,iVar8);
        uVar4 = param_3;
        param_3 = param_11;
        if (iVar8 != param_4) {
          uVar11 = __allmul(uVar2,(int)uVar2 >> 0x1f,iVar1,iVar1 >> 0x1f);
          uVar5 = __allrem(uVar11,param_7,(int)param_7 >> 0x1f);
          uVar4 = uVar2;
          param_3 = param_7;
        }
      }
      else {
        uVar5 = __allrem(param_1,param_2,param_11,iVar7);
        uVar4 = param_11;
      }
      local_10 = (undefined1 *)
                 _SfAudioPeak_Resample_32(param_9,param_12,uVar4,param_3,uVar5,puVar9,local_c,iVar3)
      ;
    }
    if (param_9 != param_5) {
      pcVar6 = (code *)_SfAudio_GetCopyFunction2_8(param_5,param_9);
      if (pcVar6 == (code *)0x0) {
        return (undefined1 *)0x8000ffff;
      }
      (*pcVar6)(param_6,param_12,param_7 * param_10 * 2,0x3f800000);
    }
    *param_8 = param_7;
    return local_10;
  }
  return (undefined1 *)0x1;
}


