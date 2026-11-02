/* Module: vegas30k.dll
   Function: FUN_010627a0
   Address: 010627a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01062873) */

undefined1 * __thiscall
FUN_010627a0(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,uint param_6
            ,int param_7,uint param_8,uint *param_9)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  uint uStack_268;
  undefined8 local_264;
  code *local_25c;
  int iStack_258;
  undefined1 *puStack_254;
  int local_250;
  uint local_24c;
  int iStack_248;
  uint local_244;
  int local_240;
  uint uStack_23c;
  int iStack_238;
  undefined4 *puStack_234;
  int iStack_230;
  uint uStack_22c;
  uint uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined2 uStack_214;
  double local_210;
  undefined4 local_208;
  undefined1 auStack_200 [512];
  
  local_24c = *(uint *)(param_1 + 0x270);
  *param_9 = 0;
  if ((param_7 < 0) || (((param_7 < 1 && (param_6 == 0)) || ((int)param_8 < 1)))) {
    puStack_254 = &DAT_80070057;
  }
  else {
    if (0x20 < local_24c) {
      return (undefined1 *)0x80004005;
    }
    local_264._0_4_ = 0x4000;
    local_264._4_4_ = 0;
    iStack_258 = (int)param_8 >> 0x1f;
    local_210 = (double)CONCAT44(param_7,param_6) * 16384.0;
    local_244 = param_8;
    local_25c = (code *)param_8;
    local_250 = param_1;
    local_240 = iStack_258;
    local_264 = __alldiv(param_8,iStack_258,2,0);
    lVar11 = ftol();
    local_208 = (undefined4)lVar11;
    if (0x7fffffff < lVar11) {
      return (undefined1 *)0x80004005;
    }
    puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x34) + 0x14))();
    puStack_234 = puVar4;
    iVar5 = _SfAudio_GetSampleType_4(puVar4);
    uVar1 = *(ushort *)(puVar4 + 3);
    uStack_224 = *puVar4;
    uStack_220 = puVar4[1];
    uStack_21c = puVar4[2];
    uStack_218 = puVar4[3];
    uStack_214 = *(undefined2 *)(puVar4 + 4);
    uVar9 = 0;
    iStack_238 = 0;
    if ((iVar5 == 0x31) || ((0x3f < iVar5 && (iVar5 < 0x43)))) {
      uVar8 = (uint)uStack_224 >> 0x10;
      uStack_224 = CONCAT22((short)uVar8,1);
      iStack_238 = 1;
      iVar5 = _SfAudio_GetSampleType_4(&uStack_224);
    }
    local_25c = (code *)_SfAudioPeak_GetMinMaxFunction_8(param_4,iVar5);
    if (local_25c == (code *)0x0) {
      return (undefined1 *)0x8000ffff;
    }
    iStack_248 = FUN_0105a820(&uStack_228);
    uStack_22c = uStack_228 / uVar1;
    if (iStack_248 == 0) {
      return (undefined1 *)0x8007000e;
    }
    puStack_254 = (undefined1 *)(**(code **)(**(int **)(local_250 + 0x34) + 4))();
    if (-1 < (int)puStack_254) {
      if ((local_240 < param_7) || ((local_240 <= param_7 && (local_244 < param_6)))) {
        local_264._4_4_ = param_3;
        local_264._0_4_ = param_2;
        uStack_23c = local_24c * param_8;
        local_240 = param_7;
        local_210 = (double)((ulonglong)local_210 & 0xffffffff00000000);
        _SfAudioPeak_InitMinMaxArray_12(iVar5,local_24c,auStack_200);
        if (uStack_23c != 0) {
          while ((-1 < local_240 && ((0 < local_240 || (param_6 != 0))))) {
            iStack_230 = iStack_248;
            uStack_268 = uStack_22c;
            if ((local_240 <= (int)uStack_22c >> 0x1f) &&
               ((local_240 < (int)uStack_22c >> 0x1f || (param_6 < uStack_22c)))) {
              uStack_268 = param_6;
            }
            if ((0 < local_240) || ((uVar8 = param_6, -1 < local_240 && (0xfffffff < param_6)))) {
              uVar8 = 0x10000000;
            }
            puStack_254 = (undefined1 *)
                          (**(code **)(**(int **)(local_250 + 0x34) + 8))
                                    ((uint)local_264,local_264._4_4_,uVar8,iStack_248,uStack_268,
                                     &uStack_268);
            if ((puStack_254 != (undefined1 *)0x0) || ((int)uStack_268 < 1)) break;
            bVar10 = CARRY4((uint)local_264,uStack_268);
            local_264._0_4_ = (uint)local_264 + uStack_268;
            local_264._4_4_ = local_264._4_4_ + ((int)uStack_268 >> 0x1f) + (uint)bVar10;
            uVar8 = param_6 - uStack_268;
            local_240 = (local_240 - ((int)uStack_268 >> 0x1f)) - (uint)(param_6 < uStack_268);
            uVar2 = uStack_268;
            local_244 = uVar8;
            if (iStack_238 != 0) {
              _SfAudio_Copy_24(&uStack_224,iStack_230,puStack_234,iStack_230,uStack_268,0x3f800000);
              uVar2 = uStack_268;
            }
            while ((param_6 = uVar8, uStack_268 = uVar2, 0 < (int)uVar2 &&
                   (iVar5 = (*local_25c)(param_5,uVar9,local_208,&iStack_230,&uStack_268,&local_210,
                                         local_24c,auStack_200), param_6 = local_244,
                   (int)uStack_268 < (int)uVar2))) {
              uVar8 = local_244;
              uVar2 = uStack_268;
              if ((iVar5 != 0) && (uVar9 = uVar9 + local_24c, uStack_23c <= uVar9))
              goto LAB_01062c27;
            }
            if (uStack_23c <= uVar9) break;
          }
        }
LAB_01062c27:
        *param_9 = uVar9 / local_24c;
        (**(code **)(**(int **)(local_250 + 0x34) + 0x10))();
        return puStack_254;
      }
      iVar7 = 0;
      local_25c = (code *)param_2;
      iStack_258 = param_3;
      uVar9 = param_6;
      while (0 < (int)uVar9) {
        uStack_268 = uStack_22c;
        if ((int)uVar9 < (int)uStack_22c) {
          uStack_268 = uVar9;
        }
        puStack_254 = (undefined1 *)
                      (**(code **)(**(int **)(local_250 + 0x34) + 8))
                                (local_25c,iStack_258,uVar9,iStack_248,uStack_268,&uStack_268);
        if ((puStack_254 != (undefined1 *)0x0) || ((int)uStack_268 < 1)) break;
        bVar10 = CARRY4((uint)local_25c,uStack_268);
        local_25c = (code *)((int)local_25c + uStack_268);
        iStack_258 = iStack_258 + ((int)uStack_268 >> 0x1f) + (uint)bVar10;
        uVar9 = uVar9 - uStack_268;
        if (iStack_238 != 0) {
          _SfAudio_Copy_24(&uStack_224,iStack_248,puStack_234,iStack_248,uStack_268,0x3f800000);
        }
        iVar6 = uStack_268 * local_24c;
        FUN_0105ef60(param_4,param_5,iVar7,iVar5,iStack_248,iVar6);
        iVar7 = iVar7 + iVar6;
      }
      puVar3 = puStack_254;
      (**(code **)(**(int **)(local_250 + 0x34) + 0x10))();
      *param_9 = param_6 - uVar9;
      return puVar3;
    }
  }
  return puStack_254;
}


