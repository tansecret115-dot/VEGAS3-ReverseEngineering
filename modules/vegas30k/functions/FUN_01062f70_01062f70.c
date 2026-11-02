/* Module: vegas30k.dll
   Function: FUN_01062f70
   Address: 01062f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01063001) */

undefined1 * __thiscall
FUN_01062f70(int param_1,uint param_2,uint param_3,uint param_4,undefined1 *param_5,
            undefined4 param_6,uint param_7,uint *param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  longlong lVar12;
  undefined1 local_244 [512];
  undefined4 local_44;
  undefined8 local_3c;
  undefined1 *local_34;
  code *local_30;
  undefined1 *local_2c;
  uint local_28;
  code *pcStack_24;
  uint local_20;
  uint local_1c;
  int iStack_18;
  int local_14;
  undefined8 local_10;
  uint local_8;
  
  iVar7 = param_7;
  local_8 = *(uint *)(param_1 + 0x270);
  local_28 = param_4 * param_7;
  pcStack_24 = (code *)((int)local_28 >> 0x1f);
  *param_8 = 0;
  if ((0 < (int)param_4) && (-1 < (int)param_7)) {
    local_10._0_4_ = 0x4000;
    local_10._4_4_ = 0;
    iStack_18 = (int)param_7 >> 0x1f;
    local_3c = (double)(longlong)(int)local_28 * 16384.0;
    local_1c = param_7;
    local_14 = param_1;
    local_10 = __alldiv(param_7,iStack_18,2,0);
    lVar12 = ftol();
    local_44 = (undefined4)lVar12;
    if (0x7fffffff < lVar12) {
      return (undefined1 *)0x80004005;
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x34) + 0x14))();
    uVar5 = _SfAudio_GetSampleType_4(iVar4);
    if (0x20 < local_8) {
      return (undefined1 *)0x80004005;
    }
    puVar6 = (undefined1 *)(**(code **)(**(int **)(local_14 + 0x34) + 4))();
    uVar3 = param_6;
    uVar2 = param_5;
    if ((int)puVar6 < 0) {
      return puVar6;
    }
    if (param_4 == 1) {
      param_5 = (undefined1 *)FUN_01062d40(param_2,param_3,param_5,param_6,iVar7,param_8);
      (**(code **)(**(int **)(local_14 + 0x34) + 0x10))();
      FUN_010632e0(uVar2,uVar3,uVar3,(uint)*(ushort *)(iVar4 + 2) * *param_8);
      return param_5;
    }
    iStack_18 = param_3;
    local_10._4_4_ = (int)pcStack_24;
    local_20 = local_8 * iVar7;
    local_1c = param_2;
    param_7 = 0;
    local_3c = (double)((ulonglong)local_3c & 0xffffffff);
    local_10._0_4_ = local_28;
    param_3 = (uint)(0x18000 / (ulonglong)(longlong)(int)(uint)*(ushort *)(iVar4 + 0xc));
    FUN_01002100();
    uVar2 = param_5;
    local_30 = (code *)0x0;
    local_34 = &stack0xfffffdb0;
    pcStack_24 = (code *)_SfAudioPeak_GetMinMaxFunction_8(param_5,uVar5);
    uVar9 = local_8;
    if (pcStack_24 != (code *)0x0) {
LAB_0106315d:
      _SfAudioPeak_InitMinMaxArray_12(uVar5,uVar9,local_244);
      param_5 = (undefined1 *)0x0;
      if (local_20 != 0) {
        while ((uVar8 = (uint)local_10, -1 < local_10._4_4_ &&
               ((0 < local_10._4_4_ || ((uint)local_10 != 0))))) {
          local_2c = local_34;
          param_4 = param_3;
          if ((local_10._4_4_ <= (int)param_3 >> 0x1f) &&
             ((local_10._4_4_ < (int)param_3 >> 0x1f || ((uint)local_10 < param_3)))) {
            param_4 = (uint)local_10;
          }
          if ((0 < local_10._4_4_) ||
             ((uVar9 = (uint)local_10, -1 < local_10._4_4_ && (0xfffffff < (uint)local_10)))) {
            uVar9 = 0x10000000;
          }
          param_5 = (undefined1 *)
                    (**(code **)(**(int **)(local_14 + 0x34) + 8))
                              (local_1c,iStack_18,uVar9,local_34,param_4,&param_4);
          uVar9 = local_8;
          if (((int)param_5 < 0) || ((int)param_4 < 1)) break;
          bVar11 = CARRY4(local_1c,param_4);
          local_1c = local_1c + param_4;
          iStack_18 = iStack_18 + ((int)param_4 >> 0x1f) + (uint)bVar11;
          local_10._0_4_ = uVar8 - param_4;
          local_10._4_4_ = (local_10._4_4_ - ((int)param_4 >> 0x1f)) - (uint)(uVar8 < param_4);
          uVar8 = param_4;
          uVar10 = param_7;
          if (local_30 != (code *)0x0) {
            (*local_30)(local_2c,local_2c,param_4 * local_8,0x3f800000);
            uVar8 = param_4;
            uVar10 = param_7;
          }
          while ((uVar1 = param_7, param_4 = uVar8, param_7 = uVar1, 0 < (int)uVar8 &&
                 (iVar7 = (*pcStack_24)(param_6,uVar1,local_44,&local_2c,&param_4,(int)&local_3c + 4
                                        ,uVar9,local_244), uVar10 = uVar1, (int)param_4 < (int)uVar8
                 ))) {
            uVar8 = param_4;
            if ((iVar7 != 0) && (param_7 = uVar1 + uVar9, uVar10 = param_7, local_20 <= param_7))
            goto LAB_01063293;
          }
          if (local_20 <= uVar10) break;
        }
      }
LAB_01063293:
      *param_8 = param_7 / uVar9;
      (**(code **)(**(int **)(local_14 + 0x34) + 0x10))();
      return param_5;
    }
    local_30 = (code *)_SfAudio_GetCopyFunction2_8(uVar2,uVar5);
    if (local_30 != (code *)0x0) {
      iVar7 = _SfAudio_BytesFromSampleType_4(uVar2);
      uVar9 = local_8;
      uVar8 = (uint)(0x18000 / (longlong)(int)(iVar7 * local_8));
      if ((int)uVar8 <= (int)param_3) {
        param_3 = uVar8;
      }
      pcStack_24 = (code *)_SfAudioPeak_GetMinMaxFunction_8(uVar2,uVar2);
      uVar5 = uVar2;
      if (pcStack_24 != (code *)0x0) goto LAB_0106315d;
    }
  }
  return &DAT_80070057;
}


