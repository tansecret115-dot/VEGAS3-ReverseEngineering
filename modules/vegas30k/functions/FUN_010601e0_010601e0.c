/* Module: vegas30k.dll
   Function: FUN_010601e0
   Address: 010601e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x010604ba) */
/* WARNING: Removing unreachable block (ram,0x01060491) */
/* WARNING: Removing unreachable block (ram,0x010602ca) */
/* WARNING: Removing unreachable block (ram,0x010604a9) */
/* WARNING: Removing unreachable block (ram,0x010605ed) */

undefined1 * __thiscall FUN_010601e0(int param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  code *pcVar6;
  uint uVar7;
  DWORD nNumberOfBytesToWrite;
  bool bVar8;
  longlong lVar9;
  undefined1 local_394 [512];
  undefined1 local_194 [260];
  undefined4 local_90;
  undefined4 uStack_8c;
  int local_88;
  LONG local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  double local_58;
  undefined1 *local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  code *local_38;
  undefined1 *local_34;
  longlong local_30;
  int local_28;
  undefined8 local_24;
  code *local_1c;
  undefined8 local_18;
  uint local_10;
  DWORD local_c;
  undefined1 *local_8;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 600) != -1)) {
    local_8 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x34) + 4))();
    if (-1 < (int)local_8) {
      local_48 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x34) + 0x14))();
      local_60 = (uint)*(ushort *)(local_48 + 3);
      local_1c = (code *)_SfAudio_GetSampleType_4(local_48);
      local_28 = *(int *)(param_1 + 0x270);
      local_30 = (**(code **)(**(int **)(param_1 + 0x34) + 0x1c))();
      pcVar6 = (code *)((-(uint)(*(uint *)(param_1 + 0x26c) < 0x10) & 0x20) + 0x11);
      lVar9 = local_30 + (ulonglong)(*(int *)(param_1 + 0x274) - 1);
      local_34 = (undefined1 *)((ulonglong)lVar9 >> 0x20);
      iVar2 = __alldiv(lVar9,*(int *)(param_1 + 0x274),0);
      local_4c = 0;
      uVar1 = local_4c;
      if (iVar2 != 0) {
        local_18._0_4_ = 0x4000;
        local_18._4_4_ = 0;
        local_24._4_4_ = iVar2 >> 0x1f;
        local_58 = (double)local_30 * 16384.0;
        local_24._0_4_ = iVar2;
        local_18 = __alldiv(iVar2,local_24._4_4_,2,0);
        lVar9 = ftol();
        uVar1 = (int)lVar9;
        if (0x7fffffff < lVar9) {
          (**(code **)(**(int **)(param_1 + 0x34) + 0x10))();
          return (undefined1 *)0x80004005;
        }
      }
      local_4c = uVar1;
      FUN_01002100();
      if (&stack0x00000000 == (undefined1 *)0x3a0) {
        local_34 = &stack0xfffffc60;
        (**(code **)(**(int **)(param_1 + 0x34) + 0x10))();
        return (undefined1 *)0x8007000e;
      }
      local_40 = 4;
      if (*(uint *)(param_1 + 0x26c) < 0x10) {
        local_40 = 2;
      }
      local_5c = (uint)(0x18000 / (ulonglong)(longlong)(int)(uint)*(ushort *)(local_48 + 3));
      local_34 = &stack0xfffffc60;
      FUN_01002100();
      pcVar5 = local_1c;
      local_38 = (code *)0x0;
      local_50 = &stack0xfffffc60;
      local_1c = (code *)_SfAudioPeak_GetMinMaxFunction_8(pcVar6,local_1c);
      if (local_1c == (code *)0x0) {
        if (((int)pcVar5 < 0x40) || (0x42 < (int)pcVar5)) {
          local_38 = (code *)_SfAudio_GetCopyFunction2_8(pcVar6,pcVar5);
          pcVar5 = pcVar6;
        }
        else {
          local_80 = CONCAT22((short)((uint)*local_48 >> 0x10),1);
          local_7c = local_48[1];
          local_78 = local_48[2];
          local_74 = local_48[3];
          local_70 = *(undefined2 *)(local_48 + 4);
          local_1c = (code *)_SfAudio_GetSampleType_4(&local_80);
          local_38 = (code *)_SfAudio_GetCopyFunction2_8(local_1c,pcVar5);
          pcVar5 = local_1c;
        }
        local_1c = (code *)_SfAudioPeak_GetMinMaxFunction_8(pcVar6,pcVar5);
        if ((local_38 == (code *)0x0) || (local_1c == (code *)0x0)) {
          (**(code **)(**(int **)(param_1 + 0x34) + 0x10))();
          return &DAT_80070057;
        }
      }
      if (param_3 != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x34) + 0x20))(local_194,0x104);
        iVar2 = (**(code **)(*param_3 + 4))(local_194,10000,0);
        if (iVar2 == 0) {
          local_8 = (undefined1 *)0x8004e00c;
        }
      }
      *(undefined4 *)(param_1 + 0x278) = 0;
      *(undefined4 *)(param_1 + 0x27c) = 0;
      *(undefined4 *)(param_1 + 0x2ac) = 1;
      _SfAudioPeak_InitMinMaxArray_12(pcVar5,local_28,local_394);
      local_c = 0;
      local_44 = 0;
      local_18._0_4_ = 0;
      local_18._4_4_ = 0;
      local_64 = 0;
      lVar9 = local_30;
      do {
        do {
          if (((int)local_8 < 0) || (local_24._0_4_ = (uint)lVar9, lVar9 < 1)) goto LAB_010606c8;
          uVar7 = local_5c;
          if (lVar9 < (int)local_5c) {
            uVar7 = (uint)local_24;
          }
          if (0xfffffff < lVar9) {
            local_24._0_4_ = 0x10000000;
          }
          local_3c = local_50;
          local_8 = (undefined1 *)
                    (**(code **)(**(int **)(param_1 + 0x34) + 8))
                              ((uint)local_18,local_18._4_4_,(uint)local_24,local_50,uVar7,&local_10
                              );
          local_24 = lVar9;
          if ((local_8 == (undefined1 *)0x1) || (local_8 == (undefined1 *)0x800a0026)) {
            _SfAudio_FillSilence_12(local_48,local_3c + local_10 * local_60,uVar7 - local_10);
            local_8 = (undefined1 *)0x0;
            local_10 = uVar7;
          }
          else {
            lVar9 = local_24;
            if ((int)local_8 < 0) goto LAB_010606c8;
          }
          lVar9 = local_24;
          if ((int)local_10 < 0) goto LAB_010606c8;
          bVar8 = CARRY4((uint)local_18,local_10);
          local_18._0_4_ = (uint)local_18 + local_10;
          local_18._4_4_ = local_18._4_4_ + ((int)local_10 >> 0x1f) + (uint)bVar8;
          local_24 = local_24 - (int)local_10;
          if (local_38 != (code *)0x0) {
            (*local_38)(local_3c,local_3c,local_10 * local_28,0x3f800000);
          }
          if ((int)local_10 < 1) goto LAB_010605d3;
          do {
            iVar2 = local_c * local_40;
            local_6c = (double)CONCAT44(local_40 * local_28,(undefined4)local_6c);
            do {
              uVar7 = local_10;
              iVar3 = (*local_1c)(local_34,local_c,local_4c,&local_3c,&local_10,&local_64,local_28,
                                  local_394);
              if ((int)uVar7 <= (int)local_10) break;
              if (iVar3 != 0) {
                local_c = local_c + local_28;
                iVar2 = iVar2 + local_6c._4_4_;
                if (0x1ffff < iVar2) break;
              }
            } while (0 < (int)local_10);
LAB_010605d3:
            nNumberOfBytesToWrite = local_c * local_40;
            if ((0x1ffff < (int)nNumberOfBytesToWrite) ||
               ((0 < (int)nNumberOfBytesToWrite && (local_24 < 1)))) {
              local_88 = *(int *)(param_1 + 0x264) + local_44;
              local_c = 0;
              local_84 = 0;
              SetFilePointer(*(HANDLE *)(param_1 + 600),local_88,&local_84,0);
              WriteFile(*(HANDLE *)(param_1 + 600),local_34,nNumberOfBytesToWrite,&local_c,
                        (LPOVERLAPPED)0x0);
              local_44 = local_44 + local_c;
              iVar2 = nNumberOfBytesToWrite - local_c;
              local_c = 0;
              if (iVar2 != 0) {
                local_8 = (undefined1 *)0x8004e009;
              }
            }
          } while (0 < (int)local_10);
          lVar9 = local_24;
        } while (param_3 == (int *)0x0);
        iVar2 = *param_3;
        local_90 = 10000;
        uStack_8c = 0;
        local_6c = (double)CONCAT44(local_18._4_4_,(uint)local_18) * 10000.0;
        local_58 = (double)__alldiv(local_30,2,0);
        iVar3 = ftol();
        iVar2 = (**(code **)(iVar2 + 8))(iVar3,iVar3 >> 0x1f);
        lVar9 = local_24;
      } while (iVar2 != 0);
      local_8 = (undefined1 *)0x8004e00c;
LAB_010606c8:
      local_24 = lVar9;
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 0xc))(local_8);
      }
      (**(code **)(**(int **)(param_1 + 0x34) + 0x10))();
      if (-1 < (int)local_8) {
        *(longlong *)(param_1 + 0x278) = local_30;
        puVar4 = (undefined1 *)FUN_0105fcb0();
        return puVar4;
      }
      if ((local_8 == (undefined1 *)0x8004e00c) && ((param_2 & 0x40000000) != 0)) {
        *(undefined4 *)(param_1 + 0x274) = 0x200000;
        return (undefined1 *)0x8004e00c;
      }
    }
  }
  else {
    local_8 = (undefined1 *)0x8004e007;
  }
  return local_8;
}


