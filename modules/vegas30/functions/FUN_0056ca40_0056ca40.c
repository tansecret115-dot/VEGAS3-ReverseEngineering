/* Module: vegas30.exe
   Function: FUN_0056ca40
   Address: 0056ca40
   Source: Ghidra pseudocode (Stage 10 batch) */


HCURSOR __thiscall
FUN_0056ca40(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  HCURSOR pHVar6;
  int unaff_EBX;
  int *unaff_ESI;
  bool bVar7;
  LPCSTR lpMultiByteStr;
  int iVar8;
  ISFGraphBuilder *local_234;
  HCURSOR local_230;
  int local_22c;
  ISFGraphBuilder *local_228;
  HCURSOR local_224;
  int iStack_220;
  int local_21c;
  uint local_218;
  int iStack_214;
  int local_210;
  WCHAR aWStack_20c [2];
  int local_208;
  int local_204;
  undefined2 uStack_e;
  int iStack_8;
  int iStack_4;
  
  local_208 = *param_3;
  local_230 = (HCURSOR)0x0;
  if (((local_208 != 0) && (*(int *)param_3[2] != 0)) &&
     (pbVar1 = *(byte **)(*(int *)param_3[2] + 0x20c), pbVar1 != (byte *)0x0)) {
    local_204 = param_1;
    if (param_6 == 0) {
      local_230 = (HCURSOR)0x7f88;
      if (((*pbVar1 & 1) == 0) &&
         (lVar4 = Mixer_GetDeviceGraph(&local_234,4,*(ulong *)(param_2 + 0x224)), -1 < lVar4)) {
        (**(code **)(*(int *)local_234 + 0x70))(local_234,1,&local_224);
        if (local_230 != (HCURSOR)0xffffffff) {
          (**(code **)(*unaff_ESI + 0x70))(unaff_ESI,2,&iStack_220);
        }
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      }
    }
    else {
      if (param_6 == 2) {
        return (HCURSOR)0x1;
      }
      if (param_6 == 3) {
        local_218 = 0;
        lVar4 = Mixer_GetDeviceGraph(&local_228,4,*(ulong *)(param_2 + 0x224));
        if (-1 < lVar4) {
          local_234 = (ISFGraphBuilder *)0x0;
          local_21c = 0;
          local_224 = (HCURSOR)0x0;
          local_22c = 0;
          (**(code **)(*(int *)local_228 + 0x70))(local_228,1,&local_210);
          bVar7 = local_21c != -1;
          if (bVar7) {
            (**(code **)(*(int *)local_234 + 0x70))(local_234,2,&local_22c);
            iStack_220 = local_21c - local_22c;
          }
          local_218 = (uint)bVar7;
          FUN_004e9f70(*(undefined4 *)(param_1 + 0x290),*(int *)(param_2 + 0x224) + 0x198,0);
          FUN_004ea590(*(undefined4 *)(param_1 + 0x290),4,*(undefined4 *)(param_2 + 0x224),0x1d);
          local_22c = 0;
          if (0 < iStack_214) {
            do {
              iVar2 = local_22c;
              iVar8 = *(int *)(*(int *)(iStack_4 + 8) + local_22c * 4);
              local_22c = iVar2;
              if (((iVar8 != 0) && (pbVar1 = *(byte **)(iVar8 + 0x20c), pbVar1 != (byte *)0x0)) &&
                 (((*pbVar1 & 5) == 0 && (iVar8 = *(int *)(pbVar1 + 4), iVar8 != 0)))) {
                lpMultiByteStr = (LPCSTR)(iVar8 + 0x20);
                MultiByteToWideChar(0,1,lpMultiByteStr,-1,aWStack_20c,0x100);
                uStack_e = 0;
                if ((local_218 == 0) || (unaff_EBX < iStack_220)) {
                  if (local_228 == (ISFGraphBuilder *)0x0) {
                    pHVar6 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
                    local_230 = SetCursor(pHVar6);
                    Transport_Suspend();
                    local_228 = (ISFGraphBuilder *)0x1;
                  }
                  pHVar6 = (HCURSOR)(**(code **)(*(int *)local_234 + 0x88))
                                              (local_234,*(undefined4 *)(iVar8 + 0x10),
                                               *(undefined4 *)(iVar8 + 0x14),
                                               *(undefined4 *)(iVar8 + 0x18),
                                               *(undefined4 *)(iVar8 + 0x1c),aWStack_20c,0);
                  if ((int)pHVar6 < 0) {
                    local_224 = pHVar6;
                    if (pHVar6 == (HCURSOR)0x80040154) {
                      uVar5 = _SfGetString_8(DAT_00647204,0x4f60);
                      SfErrorHandler_DetailsAddString(0x80040154,uVar5,lpMultiByteStr);
                    }
                    else {
                      uVar5 = _SfGetString_8(DAT_00647204,0x4f58);
                      SfErrorHandler_DetailsAddString(pHVar6,uVar5);
                    }
                  }
                  else {
                    unaff_EBX = unaff_EBX + 1;
                  }
                  unaff_ESI = (int *)0x1;
                  param_2 = iStack_8;
                }
                else {
                  local_224 = (HCURSOR)0x8004e02e;
                  uVar5 = _SfGetString_8(DAT_00647204,0x4f77);
                  SfErrorHandler_DetailsAddString(0x8004e02e,uVar5,lpMultiByteStr);
                  local_22c = iVar2;
                  param_2 = iStack_8;
                }
              }
              local_22c = local_22c + 1;
            } while (local_22c < iStack_214);
            param_1 = local_210;
            if (unaff_ESI != (int *)0x0) {
              FUN_004eb2b0(*(undefined4 *)(local_210 + 0x290));
            }
          }
          FUN_004ea040(*(undefined4 *)(param_1 + 0x290),0);
          (**(code **)(*(int *)local_234 + 8))(local_234);
          uVar3 = local_218;
          local_228 = (ISFGraphBuilder *)0x0;
          if ((int)local_218 < 0) {
            if (local_22c == 0) {
              uVar5 = _SfGetString_8(DAT_00647204,0x4f5d);
              SfErrorHandler_DetailsAddString(uVar3,uVar5);
            }
            else {
              iVar8 = local_22c;
              uVar5 = _SfGetString_8(DAT_00647204,0x4f5e);
              SfErrorHandler_DetailsAddString(uVar3,uVar5,iVar8);
            }
            _SfErrorHandler_MsgBox_24(0,0x30,2,uVar3,0,0);
          }
          if (local_21c != 0) {
            Transport_Resume(0);
            SetCursor(local_224);
          }
          if (local_234 != (ISFGraphBuilder *)0x0) {
            *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
            FUN_00574c40(param_2);
            if (local_22c != 0) {
              *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x8000;
              return (HCURSOR)0x1;
            }
          }
        }
      }
    }
    return local_230;
  }
  return (HCURSOR)0x0;
}


