/* Module: vegas30.exe
   Function: FUN_0043e510
   Address: 0043e510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043e510(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  uint *local_268;
  uint local_264;
  uchar *local_260;
  uint local_25c;
  int local_258;
  undefined4 local_254;
  int local_250;
  int *local_24c;
  undefined8 local_248;
  undefined8 local_240;
  uint local_228;
  uint local_210;
  uchar local_208 [259];
  undefined1 local_105;
  CHAR local_104 [260];
  
  uVar4 = DAT_0064b138;
  local_254 = DAT_0064b138;
  FUN_005b8d80(DAT_0064b138);
  piVar2 = (int *)FUN_005b89b0(uVar4);
  local_24c = piVar2;
  if (((piVar2 == (int *)0x0) || (*piVar2 < 1)) ||
     (iVar3 = SfMsgBox(param_1,0x34,
                       "This will clear all existing CD Track markers.\n\nAre you sure you want to continue?"
                      ), iVar3 == 6)) {
    FUN_004e9f70(uVar4,0x251,0);
    FUN_004ead60(uVar4,0,9);
    FUN_005b89e0(piVar2);
    _SfList_CreateExZ_32(&local_268,4,0x10,0x10,0,0,0,0);
    FUN_005b9e60(uVar4,local_268,0,0,1);
    _SfList_Sort_12(local_268,0,&LAB_0043e870);
    iVar3 = 0xe;
    uVar8 = 0;
    uVar7 = *local_268;
    puVar10 = &local_248;
    while( true ) {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      *(undefined4 *)puVar10 = 0;
      puVar10 = (undefined8 *)((int)puVar10 + 4);
    }
    local_25c = uVar7;
    if (uVar7 != 0) {
      local_258 = 0;
      do {
        local_250 = *(int *)(local_268[2] + uVar8 * 4);
        local_248._4_4_ = 0;
        if (uVar8 == 0) {
          local_248._0_4_ = 0;
        }
        else {
          local_248._0_4_ = *(uint *)(local_250 + 0x18);
          local_248._4_4_ = *(int *)(local_250 + 0x1c);
        }
        if (uVar8 < uVar7 - 1) {
          local_264 = uVar8;
          if (uVar8 < uVar7) {
            uVar6 = local_268[2];
            iVar3 = local_250;
            do {
              iVar5 = *(int *)(uVar6 + local_264 * 4);
              local_210 = *(uint *)(iVar5 + 0x18);
              iVar1 = *(int *)(iVar5 + 0x1c);
              uVar8 = *(uint *)(iVar5 + 0x20) + local_210;
              iVar5 = *(int *)(iVar5 + 0x24) + iVar1 +
                      (uint)CARRY4(*(uint *)(iVar5 + 0x20),local_210);
              uVar11 = *(uint *)(iVar3 + 0x20) + *(uint *)(iVar3 + 0x18);
              iVar9 = *(int *)(iVar3 + 0x24) + *(int *)(iVar3 + 0x1c) +
                      (uint)CARRY4(*(uint *)(iVar3 + 0x20),*(uint *)(iVar3 + 0x18));
              uVar4 = local_254;
              uVar7 = local_25c;
              if ((iVar9 <= iVar5) && ((iVar9 < iVar5 || (uVar11 < uVar8)))) {
                if ((iVar9 < iVar1) || ((iVar9 <= iVar1 && (uVar11 < local_210)))) {
                  uVar8 = *(uint *)(iVar3 + 0x20) + *(uint *)(iVar3 + 0x18);
                  local_240 = CONCAT44(((*(int *)(iVar3 + 0x24) + *(int *)(iVar3 + 0x1c) +
                                        (uint)CARRY4(*(uint *)(iVar3 + 0x20),*(uint *)(iVar3 + 0x18)
                                                    )) - local_248._4_4_) -
                                       (uint)(uVar8 < (uint)local_248),uVar8 - (uint)local_248);
                  uVar8 = local_264;
                  break;
                }
                local_240 = CONCAT44((iVar5 - local_248._4_4_) - (uint)(uVar8 < (uint)local_248),
                                     uVar8 - (uint)local_248);
                uVar6 = local_268[2];
                iVar3 = *(int *)(uVar6 + local_264 * 4);
              }
              uVar8 = local_264 + 1;
              local_264 = uVar8;
            } while (uVar8 < local_25c);
          }
        }
        else {
          uVar6 = *(uint *)(local_250 + 0x20) + *(uint *)(local_250 + 0x18);
          local_240 = CONCAT44(((*(int *)(local_250 + 0x24) + *(int *)(local_250 + 0x1c) +
                                (uint)CARRY4(*(uint *)(local_250 + 0x20),*(uint *)(local_250 + 0x18)
                                            )) - local_248._4_4_) - (uint)(uVar6 < (uint)local_248),
                               uVar6 - (uint)local_248);
          uVar8 = uVar8 + 1;
        }
        local_248 = FUN_0043e430((uint)local_248,local_248._4_4_);
        uVar12 = FUN_0043e470(local_240);
        local_228 = local_228 | 1;
        iVar3 = *(int *)(local_250 + 0x50);
        if (iVar3 == 0) {
          local_208[0] = '\0';
LAB_0043e7a1:
          local_260 = local_208;
          local_240 = uVar12;
        }
        else {
          local_240 = uVar12;
          if (*(LPCSTR *)(iVar3 + 0x20) != (LPCSTR)0x0) {
            lstrcpynA((LPSTR)local_208,*(LPCSTR *)(iVar3 + 0x20),0x104);
            local_105 = 0;
            uVar12 = local_240;
            goto LAB_0043e7a1;
          }
          if (*(int *)(iVar3 + 0x18) != 0) {
            uVar13 = FUN_005f2d10();
            FUN_0043e400(uVar13,local_104);
            lstrcpynA((LPSTR)local_208,local_104,0x104);
            local_260 = local_208;
            local_105 = 0;
          }
        }
        iVar3 = lstrlenA((LPCSTR)local_260);
        piVar2 = local_24c;
        iVar5 = _SfList_AllocAndInsertItem_20(local_24c,&local_248,iVar3 + 0x39,0xffffffff,0);
        iVar3 = local_258;
        if (-1 < iVar5) {
          _mbscpy((uchar *)(*(int *)(piVar2[2] + local_258) + 0x30),local_260);
          local_258 = iVar3 + 4;
        }
      } while (uVar8 < uVar7);
    }
    _SfList_Destroy_4(local_268);
    FUN_004eb2b0(uVar4);
    FUN_004ea040(uVar4,0);
    FUN_0048f940(uVar4,0,7);
    iVar3 = DAT_00647630;
    if (DAT_00647630 != 0) {
      uVar13 = 2;
      *(uint *)**(undefined4 **)(DAT_00647630 + 0xbc8) =
           *(uint *)**(undefined4 **)(DAT_00647630 + 0xbc8) | 0x10000;
      uVar4 = FUN_005b89b0(uVar4);
      FUN_004c3470(iVar3,uVar4,uVar13);
      FUN_004b8880(iVar3,iVar3 + 0x768,0x9e77);
    }
  }
  return;
}


