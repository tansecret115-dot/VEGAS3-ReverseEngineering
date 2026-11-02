/* Module: vegas30k.dll
   Function: FUN_01062d40
   Address: 01062d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __thiscall
FUN_01062d40(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,int *param_7)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined2 local_28;
  short local_26;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined2 local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  *param_7 = 0;
  if (*(int **)(param_1 + 0x34) == (int *)0x0) {
    return &DAT_80070057;
  }
  piStack_38 = (int *)0x1062d74;
  local_8 = param_1;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x34) + 0x14))();
  piStack_3c = (int *)0x1062d7f;
  piStack_38 = (int *)iVar4;
  local_c = iVar4;
  local_10 = _SfAudio_GetSampleType_4();
  if (local_10 != param_4) {
    piStack_38 = (int *)param_4;
    sVar1 = *(short *)(iVar4 + 2);
    piStack_3c = (int *)0x1062dbb;
    uVar3 = _SfAudio_BitsFromSampleType_4();
    iVar4 = *(int *)(iVar4 + 4);
    piStack_38 = (int *)param_4;
    piStack_3c = (int *)0x1062dc9;
    local_28 = _SfAudio_FormatTagFromSampleType_4();
    uVar2 = (uVar3 >> 3) * sVar1;
    local_1c = CONCAT22(uVar3,uVar2);
    local_20 = (uint)uVar2 * iVar4;
    piStack_38 = (int *)&local_28;
    piStack_3c = param_7;
    iStack_40 = param_6;
    iStack_44 = param_5;
    iStack_48 = param_6;
    uStack_4c = param_3;
    local_18 = 0;
    uStack_50 = param_2;
    local_26 = sVar1;
    local_24 = iVar4;
    puVar5 = (undefined1 *)(**(code **)(**(int **)(local_8 + 0x34) + 0xc))();
    if (puVar5 == (undefined1 *)0x80004001) {
      pcVar6 = (code *)_SfAudio_GetCopyFunction2_8(param_4,local_10);
      if (pcVar6 == (code *)0x0) {
        return &DAT_80070057;
      }
      uVar2 = *(ushort *)(local_c + 0xc);
      if ((ushort)local_1c < uVar2) {
        local_14 = (uint)uVar2 * param_6;
        if (0x18000 < local_14) {
          local_14 = 0x18000;
        }
        local_14 = local_14 / (int)(uint)uVar2;
        FUN_01002100();
        while (0 < param_6) {
          iVar4 = local_14;
          if (param_6 < local_14) {
            iVar4 = param_6;
          }
          puVar5 = (undefined1 *)
                   (**(code **)(**(int **)(local_8 + 0x34) + 8))
                             (param_2,param_3,param_6,&uStack_50,iVar4,&local_10);
          if ((int)puVar5 < 0) {
            return puVar5;
          }
          (*pcVar6)(param_5,&uStack_50,*(ushort *)(local_c + 2) * local_10,0x3f800000);
          param_5 = param_5 + (local_1c & 0xffff) * local_10;
          bVar7 = CARRY4(param_2,local_10);
          param_2 = param_2 + local_10;
          param_3 = param_3 + ((int)local_10 >> 0x1f) + (uint)bVar7;
          param_6 = param_6 - local_10;
          *param_7 = *param_7 + local_10;
        }
      }
      else {
        puVar5 = (undefined1 *)
                 (**(code **)(**(int **)(local_8 + 0x34) + 8))
                           (param_2,param_3,param_6,param_5,param_6,param_7);
        if (-1 < (int)puVar5) {
          (*pcVar6)(param_5,param_5,(uint)*(ushort *)(local_c + 2) * *param_7,0x3f800000);
          return puVar5;
        }
      }
    }
    return puVar5;
  }
  piStack_38 = param_7;
  piStack_3c = (int *)param_6;
  iStack_40 = param_5;
  iStack_44 = param_6;
  iStack_48 = param_3;
  uStack_4c = param_2;
  uStack_50 = 0x1062da3;
  puVar5 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x34) + 8))();
  return puVar5;
}


