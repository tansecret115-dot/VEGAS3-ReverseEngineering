/* Module: vidcap30.exe
   Function: FUN_00448310
   Address: 00448310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00448310(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  HMENU hMenu;
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  undefined1 local_c8 [200];
  
  uVar7 = DAT_005bb838;
  local_d4 = DAT_005bb838;
  local_e0 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_d8 = 0;
  if (param_5 != 0) {
    hMenu = (HMENU)FUN_00404200(0x184,0);
    if (hMenu == (HMENU)0x0) {
      return -0x7ffb1ffd;
    }
    SetMenuDefaultItem(hMenu,(param_4 != 0) + 0x9cd9,0);
    EnableMenuItem(hMenu,0x9cd9,(uint)(*(int *)(param_1 + 0x2f0) == 0));
    EnableMenuItem(hMenu,0x9cda,(uint)(*(int *)(param_1 + 0x2f4) == 0));
    DVar1 = GetMessagePos();
    local_d0 = (int)(short)DVar1;
    local_cc = (int)(short)(DVar1 >> 0x10);
    iVar2 = FUN_00404270(*(undefined4 *)(param_1 + 8),hMenu,&local_d0,2);
    if (iVar2 == 0x9cd9) {
      param_4 = 0;
    }
    else {
      if (iVar2 != 0x9cda) {
        return 1;
      }
      param_4 = 1;
    }
  }
  iVar2 = 0;
  local_dc = *param_3;
  if (0 < local_dc) {
    do {
      if (local_e0 < 0) break;
      iVar5 = *(int *)(param_3[2] + iVar2 * 4);
      iVar3 = *(int *)(iVar5 + 0x20c);
      local_d0 = iVar5;
      if (iVar3 == -1) {
        if (((*(int *)(iVar5 + 0x208) == 5) || (*(int *)(iVar5 + 0x208) == 4)) &&
           (iVar3 = FUN_0045b2c0(iVar5,DAT_005bba28), iVar3 != 0)) {
          local_e0 = FUN_0044dd90(uVar7,iVar5,param_2);
          if (local_e0 < 0) {
            uVar4 = _SfGetString_8(DAT_005ba2a0,0x95);
            SfErrorHandler_DetailsAddString(local_e0,uVar4,iVar5);
          }
        }
        else {
          uVar4 = _SfGetString_8(DAT_005ba2a0,0x95);
          SfErrorHandler_DetailsAddString(0x8004e033,uVar4,iVar5);
        }
      }
      else {
        iVar5 = FUN_0044cae0(param_2);
        if (iVar5 == 3) {
          local_e0 = FUN_0044e6e0(iVar3,param_2);
          if ((param_4 != 0) && (-1 < local_e0)) {
            FUN_0044ca40(iVar3,0,2,0,0);
          }
        }
        else {
          iVar5 = FUN_0044cae0(param_2);
          if (iVar5 == 6) {
            local_d8 = 1;
            uVar4 = FUN_0044cae0(iVar3);
            switch(uVar4) {
            case 1:
            case 2:
              piVar6 = (int *)FUN_0042e4f0(uVar7);
              if (piVar6 != (int *)0x0) {
                local_dc = *piVar6;
                iVar2 = 0;
                if (0 < local_dc) {
                  do {
                    uVar7 = *(undefined4 *)(piVar6[2] + iVar2 * 4);
                    iVar5 = FUN_00443780(uVar7);
                    FUN_004434f0(uVar7,1,&local_e4);
                    local_e8 = local_e8 + (iVar5 - local_e4);
                    iVar2 = iVar2 + 1;
                    uVar7 = local_d4;
                  } while (iVar2 < local_dc);
                }
              }
              break;
            case 3:
              uVar4 = FUN_0044c6a0(iVar3);
              local_e4 = FUN_0045f2b0(uVar7,uVar4,1,1);
              iVar5 = FUN_0045f4c0(uVar7,uVar4,1);
              local_e8 = local_e8 + (iVar5 - local_e4);
              break;
            case 4:
              uVar4 = FUN_0044c6c0(iVar3);
              iVar5 = FUN_00443780(uVar4);
              FUN_004434f0(uVar4,1,&local_e4);
              local_e8 = local_e8 + (iVar5 - local_e4);
              break;
            case 5:
              iVar5 = FUN_0044c6e0(iVar3);
              FUN_00443b20(iVar5,*(uint *)(iVar5 + 0x38) >> 3 & 4,4);
              if ((*(byte *)(iVar5 + 0x38) & 0x20) == 0) {
                local_e8 = local_e8 + 1;
              }
              break;
            case 7:
              local_dc = FUN_0044c620(iVar3);
              iVar2 = 0;
              if (0 < local_dc) {
                do {
                  uVar7 = FUN_0044c5c0(iVar3,iVar2);
                  iVar5 = FUN_0044c6e0(uVar7);
                  FUN_00443b20(iVar5,*(uint *)(iVar5 + 0x38) >> 3 & 4,4);
                  if ((*(byte *)(iVar5 + 0x38) & 0x20) == 0) {
                    local_e8 = local_e8 + 1;
                  }
                  iVar2 = iVar2 + 1;
                  uVar7 = local_d4;
                } while (iVar2 < local_dc);
              }
            }
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_dc);
  }
  if (*(int *)(local_d0 + 0x20c) == -1) {
    PostMessageA(DAT_005ba4bc,0x111,0x427,0);
  }
  if ((local_d8 != 0) && (0 < local_e8)) {
    _SfLoadString_16(DAT_005ba2a0,0xc538,local_c8,200);
    SfMsgBox(*(undefined4 *)(param_1 + 8),0x40,
             "One or more clips could not be marked for capture.\n\n%s",local_c8);
  }
  return local_e0;
}


