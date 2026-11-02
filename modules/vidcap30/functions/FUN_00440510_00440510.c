/* Module: vidcap30.exe
   Function: FUN_00440510
   Address: 00440510
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00440510(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  char *pcVar1;
  LPCSTR lpMultiByteStr;
  LPCVOID pMem;
  char cVar2;
  HCURSOR hCursor;
  HGLOBAL pvVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iStack_450;
  undefined1 local_44c [4];
  int *local_448;
  int local_444;
  int local_440;
  int local_43c;
  int local_438;
  undefined4 local_434;
  int local_430;
  int local_42c;
  HCURSOR local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  _FILETIME _Stack_41c;
  WCHAR aWStack_414 [259];
  undefined2 uStack_20e;
  undefined4 uStack_20c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  FUN_0046ed20();
  local_444 = 0;
  local_434 = 0;
  local_43c = 0;
  local_440 = 0;
  if (param_3 != (int *)0x0) {
    hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
    local_428 = SetCursor(hCursor);
    local_42c = *param_3;
    local_430 = 0;
    iVar7 = 0;
    if (0 < local_42c) {
      do {
        local_434 = 0;
        iVar7 = *(int *)(param_3[2] + local_430 * 4);
        if (*(int *)(iVar7 + 0x2d0) != 0) {
          local_448 = (int *)0x0;
          FUN_00426110(param_1 + 0xa48,&local_448);
          FUN_004272f0(*(undefined4 *)(iVar7 + 0x2d0),*(undefined4 *)(iVar7 + 0x2d4),local_448,
                       &local_434);
          pMem = *(LPCVOID *)(iVar7 + 0x2d0);
          if (pMem != (LPCVOID)0x0) {
            pvVar3 = GlobalHandle(pMem);
            GlobalUnlock(pvVar3);
            pvVar3 = GlobalHandle(pMem);
            GlobalFree(pvVar3);
          }
          *(undefined4 *)(iVar7 + 0x2d0) = 0;
        }
        pcVar1 = (char *)(iVar7 + 0x134);
        local_438 = FUN_0046fdd0(pcVar1,local_44c,0,0);
        if (((((*pcVar1 != '\0') && (iVar4 = _SfDoesFileExist_4(pcVar1), iVar4 != 0)) &&
             (lpMultiByteStr = (LPCSTR)(iVar7 + 0x2d8), *(char *)(iVar7 + 0x2d8) != '\0')) &&
            ((iVar4 = _SfDoesFileExist_4(lpMultiByteStr), iVar4 != 0 && (DAT_005bb7cc != 0)))) &&
           (-1 < local_438)) {
          local_448 = (int *)0x0;
          MultiByteToWideChar(0,1,lpMultiByteStr,-1,local_208,0x104);
          local_2 = 0;
          iVar4 = FUN_004713e0(&local_448);
          if (iVar4 < 0) {
            SfErrorHandler_DetailsAddString
                      (iVar4,"Could not chain file \'%s\' to \'%s\'.",pcVar1,lpMultiByteStr);
          }
          else {
            FUN_004b95a0(local_448,local_208,0x104);
            (**(code **)(*local_448 + 8))(local_448);
          }
        }
        if ((local_43c != 0) || (local_43c = 0, *(int *)(iVar7 + 4) == 0)) {
          local_43c = 1;
        }
        if ((local_440 != 0) || (local_440 = 0, *(int *)(iVar7 + 4) != 0)) {
          local_440 = 1;
        }
        if (-1 < local_438) {
          iVar4 = FUN_004715a0(2);
          uStack_424 = *(undefined4 *)(*(int *)(iVar4 + 0x30) + 4);
          uStack_420 = *(undefined4 *)(*(int *)(iVar4 + 0x30) + 8);
          uVar9 = *(undefined4 *)(iVar7 + 4);
          uVar6 = *(uint *)(param_1 + 0x1ac0) & 1;
          puVar8 = &uStack_424;
          uVar5 = FUN_00472ea0(puVar8,uVar9,uVar6);
          local_438 = FUN_0044db70(param_2,&iStack_450,iVar7 + 0x238,pcVar1,
                                   *(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(iVar7 + 0x14),
                                   *(undefined4 *)(iVar7 + 0x18),*(undefined4 *)(iVar7 + 0x1c),
                                   *(undefined4 *)(iVar4 + 0x48),*(undefined4 *)(iVar4 + 0x4c),
                                   *(undefined4 *)(iVar4 + 0x50),*(undefined4 *)(iVar4 + 0x54),uVar5
                                   ,puVar8,uVar9,uVar6);
          if ((local_444 != 0) || (local_444 = 0, *(int *)(iVar7 + 0xc) != 0)) {
            local_444 = 1;
          }
          if (-1 < local_438) {
            if ((((*(uint *)(param_1 + 0x1ae8) & 0x80) == 0) ||
                ((*(uint *)(param_1 + 0x1ae8) & 0x100) == 0)) || (*(int *)(iVar7 + 4) != 0)) {
              cVar2 = '\0';
            }
            else {
              cVar2 = '\x01';
            }
            FUN_00444250(param_2,iStack_450,*(undefined4 *)(iVar7 + 0xc),0,
                         *(undefined4 *)(iVar7 + 8),0,*(undefined4 *)(iVar7 + 0x28),
                         *(undefined4 *)(iVar7 + 0x2c),*(undefined4 *)(iVar7 + 700));
            FUN_00443f60(param_2,iStack_450,local_434);
            if (*(short *)(iVar7 + 0x2c0) != 0) {
              SystemTimeToFileTime((SYSTEMTIME *)(iVar7 + 0x2c0),&_Stack_41c);
              FUN_004442b0(param_2,iStack_450,&_Stack_41c);
            }
            FUN_00443b20(iStack_450,-cVar2 & 0x20,0x20);
            if (iStack_450 != 0) {
              iVar4 = FUN_004715a0(2);
              FUN_00443b20(iStack_450,-(iVar4 != 0) & 0x40,0x40);
              iVar4 = FUN_004715a0(1);
              FUN_00443b20(iStack_450,-(iVar4 != 0) & 0x80,0x80);
              FUN_00443b20(iStack_450,0x100,0x100);
              uVar6 = *(uint *)(iVar7 + 0x10);
              FUN_0044e390(pcVar1,iVar7 + 0x238,uVar6,*(int *)(iVar7 + 0x14),
                           uVar6 + *(uint *)(iVar7 + 0x18),
                           *(int *)(iVar7 + 0x14) + *(int *)(iVar7 + 0x1c) +
                           (uint)CARRY4(uVar6,*(uint *)(iVar7 + 0x18)));
              FUN_0042f4b0(param_2,1);
              FUN_004713b0();
              FUN_00471030(0);
              FUN_0042f5d0(param_2,1);
              if (iStack_450 != 0) {
                MultiByteToWideChar(0,1,*(LPCSTR *)(iStack_450 + 0x14),-1,aWStack_414,0x104);
                uStack_20e = 0;
                uStack_20c = FUN_00444400(iStack_450);
                FUN_0045b7b0(0x667,aWStack_414,0x20c);
              }
            }
          }
        }
        local_430 = local_430 + 1;
        iVar7 = local_438;
      } while (local_430 < local_42c);
    }
    if (param_4 != 0) {
      _SfList_DeleteList_16(param_3,0,0xffffffff,0);
    }
    SetCursor(local_428);
    if ((local_444 != 0) && (DAT_005bb7c0 == 0)) {
      SfMsgBox_CustomEx(*(undefined4 *)(param_1 + 8),0x1030,0,"&Do not show this message again",
                        &DAT_005bb7c0,
                        "Dropped frames were detected during capture.\n\nRefer to the $(AppName) online Help for tips on how to optimize performance."
                       );
    }
    if (((local_43c != 0) && (DAT_005bb4f0 != 0)) || ((local_440 != 0 && (DAT_005bb4f4 != 0)))) {
      PostMessageA(DAT_005ba4bc,0x111,0x427,0);
    }
    return iVar7;
  }
  return -0x7fffbffd;
}


