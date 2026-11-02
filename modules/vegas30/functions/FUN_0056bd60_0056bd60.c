/* Module: vegas30.exe
   Function: FUN_0056bd60
   Address: 0056bd60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056bd60(int *param_1,undefined4 param_2,undefined4 param_3,ISFGraphBuilder *param_4)

{
  byte *pbVar1;
  bool bVar2;
  undefined4 *puVar3;
  HCURSOR hCursor;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LPCSTR lpMultiByteStr;
  int local_20;
  int local_1c;
  int iStack_14;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;
  HCURSOR local_4;
  
  iVar7 = 0;
  local_20 = 0;
  iVar6 = *param_1;
  if (((iVar6 == 0) || (*(int *)param_1[2] == 0)) ||
     (pbVar1 = *(byte **)(*(int *)param_1[2] + 0x20c), pbVar1 == (byte *)0x0)) {
    return 0;
  }
  local_c = iVar6;
  if (param_4 == (ISFGraphBuilder *)0x0) {
    if ((*pbVar1 & 1) != 0) {
      return 0x7f88;
    }
    lVar4 = Mixer_CanAddFXBus();
    local_20 = (-(uint)(lVar4 != 0) & 0x7f78) + 0x10;
  }
  else {
    if (param_4 == (ISFGraphBuilder *)0x2) {
      return 1;
    }
    if (param_4 == (ISFGraphBuilder *)0x3) {
      iVar8 = 0;
      local_1c = 0;
      local_8 = DAT_0064b138;
      hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
      local_4 = SetCursor(hCursor);
      param_4 = (ISFGraphBuilder *)0x0;
      lVar4 = Mixer_CanAddFXBus();
      if ((lVar4 == 0) && (lVar4 = Mixer_CreateGraph(&param_4), -1 < lVar4)) {
        local_10 = 0x20;
        (**(code **)(*(int *)param_4 + 0x6c))(param_4,1,&local_10);
        bVar2 = false;
        iStack_14 = 0;
        if (0 < iVar6) {
          do {
            iVar6 = *(int *)(param_1[2] + iStack_14 * 4);
            if (((iVar6 != 0) && (pbVar1 = *(byte **)(iVar6 + 0x20c), pbVar1 != (byte *)0x0)) &&
               (((*pbVar1 & 5) == 0 && (iVar6 = *(int *)(pbVar1 + 4), iVar6 != 0)))) {
              lpMultiByteStr = (LPCSTR)(iVar6 + 0x20);
              MultiByteToWideChar(0,1,lpMultiByteStr,-1,(LPWSTR)&DAT_006595c8,0x100);
              _DAT_006597c6 = 0;
              if (iVar7 < 0x20) {
                iVar8 = (**(code **)(*(int *)param_4 + 0x8c))
                                  (param_4,*(undefined4 *)(iVar6 + 0x10),
                                   *(undefined4 *)(iVar6 + 0x14),*(undefined4 *)(iVar6 + 0x18),
                                   *(undefined4 *)(iVar6 + 0x1c),&DAT_006595c8,0,iVar7);
                if (iVar8 < 0) {
                  local_1c = iVar8;
                  if (iVar8 == -0x7ffbfeac) {
                    uVar5 = _SfGetString_8(DAT_00647204,0x4f57);
                    SfErrorHandler_DetailsAddString(0x80040154,uVar5,lpMultiByteStr);
                  }
                  else {
                    uVar5 = _SfGetString_8(DAT_00647204,0x4f58);
                    SfErrorHandler_DetailsAddString(iVar8,uVar5);
                  }
                }
                else {
                  iVar7 = iVar7 + 1;
                  bVar2 = true;
                  iVar8 = local_1c;
                }
              }
              else {
                local_1c = -0x7ffb1fd2;
                uVar5 = _SfGetString_8(DAT_00647204,0x4f77);
                SfErrorHandler_DetailsAddString(0x8004e02e,uVar5,lpMultiByteStr);
                iVar8 = -0x7ffb1fd2;
              }
            }
            iStack_14 = iStack_14 + 1;
          } while (iStack_14 < local_c);
          if (iVar8 < 0) {
            if (iVar7 == 0) {
              uVar5 = _SfGetString_8(DAT_00647204,0x4f59);
              SfErrorHandler_DetailsAddString(iVar8,uVar5);
              bVar2 = false;
            }
            else {
              uVar5 = _SfGetString_8(DAT_00647204,0x4f5a);
              SfErrorHandler_DetailsAddString(iVar8,uVar5,iVar7);
            }
            _SfErrorHandler_MsgBox_24(0,0x30,2,iVar8,0,0);
          }
          puVar3 = local_8;
          if ((bVar2) && (iVar6 = FUN_005d31e0(local_8,5,param_4,1), iVar6 == 0)) {
            FUN_005733d0();
            FUN_005749b0();
            local_20 = 1;
            *(uint *)*puVar3 = *(uint *)*puVar3 | 0x8000;
          }
        }
      }
      if (param_4 != (ISFGraphBuilder *)0x0) {
        (**(code **)(*(int *)param_4 + 8))(param_4);
      }
      SetCursor(local_4);
      return local_20;
    }
  }
  return local_20;
}


