/* Module: vegas30k.dll
   Function: FUN_01060cb0
   Address: 01060cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01061090) */
/* WARNING: Removing unreachable block (ram,0x01060e3c) */
/* WARNING: Removing unreachable block (ram,0x010610a9) */

int FUN_01060cb0(int param_1,undefined1 *param_2,uint param_3,int param_4,code *param_5,
                code *param_6)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 local_2e0 [128];
  tSFAUDIOPEAK_SAMPLESMINMAX local_260 [512];
  longlong local_60;
  uint local_58;
  code *local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  longlong local_40;
  undefined1 *local_38;
  code *local_34;
  longlong local_30;
  int local_28;
  int local_24;
  uint local_20;
  SFSAMPLETYPE local_1c;
  undefined1 *local_18;
  int local_14;
  code *local_10;
  int local_c;
  SFSAMPLETYPE local_8;
  
  iVar9 = param_1;
  local_14 = 0;
  if (param_5 == (code *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x25c) != 0x4b504653) {
    return -0x7fff0001;
  }
  if (*(int *)(param_1 + 0x270) == 0) {
    return -0x7fff0001;
  }
  if (*(int *)(param_1 + 0x274) == 0) {
    return -0x7fff0001;
  }
  local_48 = (**(code **)(**(int **)(param_1 + 0x34) + 0x14))();
  local_1c = _SfAudio_GetSampleType_4(local_48);
  if (param_6 == (code *)0x0) {
    param_6 = (code *)local_1c;
  }
  uVar5 = *(uint *)(iVar9 + 0x274);
  uVar1 = *(uint *)(iVar9 + 0x270);
  local_8 = (-(uint)(*(uint *)(iVar9 + 0x26c) < 0x10) & 0x20) + 0x11;
  local_24 = uVar5 << 0xe;
  local_60 = (**(code **)(**(int **)(iVar9 + 0x34) + 0x1c))();
  local_10 = param_5 + param_3;
  local_c = ((int)param_5 >> 0x1f) + param_4 + (uint)CARRY4((uint)param_5,param_3);
  uVar10 = __alldiv(param_3,param_4,uVar5,0);
  local_30 = __allmul(uVar10,uVar5,0);
  uVar10 = __alldiv(local_10 + uVar5 + -1,
                    (local_c + (uint)CARRY4(uVar5,(uint)local_10)) -
                    (uint)(local_10 + uVar5 == (code *)0x0),uVar5,0);
  local_40 = __allmul(uVar10,uVar5,0);
  iVar3 = __alldiv(local_30,uVar5,0);
  local_20 = iVar3 * uVar1;
  iVar3 = __alldiv(local_40,uVar5,0);
  local_58 = iVar3 * uVar1 - local_20;
  local_4c = (*(uint *)(iVar9 + 0x26c) >> 3) << 1;
  FUN_01002100();
  local_28 = 0;
  local_18 = &stack0xfffffd14;
  _SfAudioPeak_InitMinMaxArray_12(param_6,uVar1,local_260);
  if (local_30 < CONCAT44(param_4,param_3)) {
    if (((local_8 == *(SFSAMPLETYPE *)(iVar9 + 0x2b0)) && (uVar1 == *(uint *)(iVar9 + 0x2b4))) &&
       (local_20 == *(uint *)(iVar9 + 0x2b8))) {
      SfAudioPeak_PrimeMinMaxArray
                ((SFSAMPLETYPE)param_6,uVar1,local_260,*(SFSAMPLETYPE *)(iVar9 + 0x2b0),
                 (void *)(iVar9 + 700));
      param_4 = param_3 - (int)local_30;
    }
    else {
      local_54 = (code *)_SfAudioPeak_GetMinMaxFunction_8(local_8,local_1c);
      param_4 = param_3 - (int)local_30;
      _SfAudio_BytesFromSampleType_4(local_1c);
      FUN_01002100();
      local_38 = &stack0xfffffd14;
      local_14 = (**(code **)(**(int **)(iVar9 + 0x34) + 8))
                           (local_30,param_4,&stack0xfffffd14,param_4,&local_50);
      if (((-1 < local_14) && (0 < local_50)) && (local_54 != (code *)0x0)) {
        _SfAudioPeak_InitMinMaxArray_12(local_1c,uVar1,local_260);
        (*local_54)(local_18,0,local_24,&local_38,&local_50,&local_28,uVar1,local_260);
        FUN_0105b160(param_6,local_1c,uVar1,local_260);
        goto LAB_01060f5b;
      }
    }
    local_28 = param_4 << 0xe;
    local_14 = 0;
  }
LAB_01060f5b:
  param_4 = 0;
  local_34 = param_5;
  iVar3 = __alldiv(local_10,local_c,uVar5,0);
  puVar6 = (undefined1 *)(iVar3 * uVar1 - local_20);
  local_44 = param_2;
  local_38 = puVar6;
  param_6 = (code *)_SfAudioPeak_GetMinMaxFunction_8(local_8,param_6);
  if (param_6 == (code *)0x0) {
    return -0x7fff0001;
  }
  if (0 < (int)puVar6) {
    do {
      iVar3 = param_4;
      (*param_6)(local_18,param_4,local_24,&local_44,&local_34,&local_28,uVar1,local_260);
      param_4 = iVar3 + uVar1;
      if (((int)local_34 < 0) || ((int)param_5 <= (int)local_34)) break;
    } while (param_4 < (int)local_38);
  }
  pcVar2 = param_6;
  iVar3 = param_4;
  if ((int)local_34 < 1) {
    *(undefined4 *)(iVar9 + 0x2b8) = 0xffffffff;
  }
  else {
    param_6 = (code *)(local_24 + (int)local_34 * -0x4000);
    (*pcVar2)(local_18,param_4,local_24,&local_44,&local_34,&param_6,uVar1,local_260);
    *(uint *)(iVar9 + 0x2b4) = uVar1;
    *(uint *)(iVar9 + 0x2b8) = iVar3 + local_20;
    *(SFSAMPLETYPE *)(iVar9 + 0x2b0) = local_8;
    iVar4 = _SfAudio_BytesFromSampleType_4(local_8);
    puVar7 = (undefined4 *)(local_18 + iVar3 * local_4c);
    puVar8 = (undefined4 *)(iVar9 + 700);
    for (uVar5 = (iVar4 * uVar1 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = iVar4 * uVar1 * 2 & 3; iVar9 = param_1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  iVar3 = param_4;
  if ((CONCAT44(local_c,local_10) < local_40) && (CONCAT44(local_c,local_10) < local_60)) {
    param_5 = (code *)_SfAudioPeak_GetMinMaxFunction_8(local_8,local_1c);
    param_1 = (int)local_40 - (int)local_10;
    FUN_01002100();
    param_2 = &stack0xfffffd14;
    local_14 = (**(code **)(**(int **)(iVar9 + 0x34) + 8))
                         (local_10,local_c,param_1,&stack0xfffffd14,param_1,&param_6);
    if ((local_14 < 0) || (param_5 == (code *)0x0)) {
      local_14 = 0;
    }
    else {
      _SfAudioPeak_InitMinMaxArray_12(local_1c,uVar1,local_260);
      param_1 = local_24 + (int)param_6 * -0x4000;
      (*param_5)(local_2e0,0,local_24,&param_2,&param_6,&param_1,uVar1,local_260);
      FUN_010611f0(local_8,local_18 + iVar3 * local_4c,local_2e0,uVar1);
    }
  }
  FUN_01060b90(local_20 / uVar1,local_58 / uVar1,local_8,local_18,local_10,local_c);
  if (*(int *)(iVar9 + 0x2ac) != 0) {
    FUN_0105fcb0();
  }
  FUN_01060b00(0);
  return local_14;
}


