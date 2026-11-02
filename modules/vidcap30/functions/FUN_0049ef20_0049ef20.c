/* Module: vidcap30.exe
   Function: FUN_0049ef20
   Address: 0049ef20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049ef20(undefined4 *param_1)

{
  code *pcVar1;
  short sVar2;
  LPCSTR pCVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  DWORD local_758;
  int local_754;
  int local_750;
  int local_74c;
  UINT local_748;
  UINT local_744;
  DWORD local_740;
  DWORD local_73c;
  DWORD local_738;
  DWORD local_734;
  undefined1 local_730 [4];
  undefined4 local_72c [4];
  uint *local_71c;
  CHAR local_70c [259];
  undefined1 local_609;
  uint local_608;
  int local_604;
  int local_600;
  undefined4 *local_5fc;
  ushort local_5f8;
  ushort uStack_5f6;
  undefined2 local_5f4;
  undefined1 local_5f2;
  undefined1 local_3e8 [64];
  undefined1 local_3a8 [64];
  CHAR local_368 [260];
  CHAR local_264 [260];
  undefined1 local_160 [4];
  int local_15c;
  undefined1 local_154 [340];
  
  local_744 = SetErrorMode(1);
  local_5f8 = 3;
  local_74c = 0;
  do {
    PTR_DAT_005b7404._0_1_ = (char)local_74c + 'A';
    local_754 = 1;
    DAT_005b7408 = CONCAT11(DAT_005b7408._1_1_,(char)PTR_DAT_005b7404);
    local_368[0] = '\0';
    local_264[0] = '\0';
    local_748 = GetDriveTypeA((LPCSTR)&PTR_DAT_005b7404);
    local_70c[0] = '\0';
    switch(local_748) {
    case 2:
      pCVar3 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1092);
      lstrcpynA(local_70c,pCVar3,0x104);
      local_609 = 0;
      lstrlenA(local_70c);
      local_754 = 0;
      goto LAB_0049f1af;
    case 3:
      pCVar3 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1096);
      lstrcpynA(local_70c,pCVar3,0x104);
      local_609 = 0;
      lstrlenA(local_70c);
      local_758 = 0x104;
      BVar4 = GetVolumeInformationA
                        ((LPCSTR)&PTR_DAT_005b7404,local_368,0x104,&local_758,&local_758,&local_758,
                         local_264,0x104);
      if (BVar4 == 0) {
        local_754 = 0;
      }
      if (local_264[0] != '\0') goto LAB_0049f1af;
      goto switchD_0049ef90_default;
    case 4:
      pCVar3 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1093);
      lstrcpynA(local_70c,pCVar3,0x104);
      local_609 = 0;
      lstrlenA(local_70c);
      break;
    case 5:
      pCVar3 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1095);
      lstrcpynA(local_70c,pCVar3,0x104);
      local_609 = 0;
      lstrlenA(local_70c);
      break;
    case 6:
      pCVar3 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1094);
      lstrcpynA(local_70c,pCVar3,0x104);
      local_609 = 0;
      lstrlenA(local_70c);
      break;
    default:
      goto switchD_0049ef90_default;
    }
    local_758 = 0x104;
    BVar4 = GetVolumeInformationA
                      ((LPCSTR)&PTR_DAT_005b7404,local_368,0x104,&local_758,&local_758,&local_758,
                       local_264,0x104);
    if (BVar4 == 0) {
      local_754 = 0;
    }
LAB_0049f1af:
    sVar2 = FUN_0049ee50(&PTR_DAT_005b7404,local_160,0x4201);
    uStack_5f6 = sVar2 + 1;
    local_600 = local_15c;
    local_604 = local_15c;
    uVar7 = 0;
    local_5f4 = DAT_005b7408;
    uVar8 = 0;
    local_5f2 = DAT_005b740a;
    if (local_748 == 3) {
LAB_0049f264:
      local_604 = local_600;
      FUN_0049ecb0(local_368);
      BVar4 = GetDiskFreeSpaceA((LPCSTR)&PTR_DAT_005b7404,&local_738,&local_740,&local_73c,
                                &local_734);
      if (BVar4 == 0) {
        iVar5 = wsprintfA((LPSTR)((int)&local_5f4 + (uint)local_5f8),"%s (%s)\t%s",local_368,
                          &DAT_005b7408,local_70c);
        sVar2 = (short)iVar5;
      }
      else {
        uVar7 = __allmul(local_738,0,local_740,0);
        uVar8 = __allmul(local_734,0,uVar7);
        uVar7 = __allmul(local_73c,0,uVar7);
        _SfGetByteSizeText_12(uVar8,local_3a8);
        _SfGetByteSizeText_12(uVar7,local_3e8);
        sVar2 = SfPrintF((int)&local_5f4 + (uint)local_5f8,"%s (%s)\t%s\t%s\t%s",local_368,
                         &DAT_005b7408,local_70c,local_3a8,local_3e8);
      }
    }
    else {
      if (local_748 == 5) {
        local_600 = *(int *)(local_750 + 4) + 7;
        goto LAB_0049f264;
      }
      iVar5 = wsprintfA((LPSTR)((int)&local_5f4 + (uint)local_5f8),"%s\t%s",local_154,local_70c);
      sVar2 = (short)iVar5;
      uVar8 = 0;
      uVar7 = 0;
    }
    uStack_5f6 = sVar2 + 1;
    local_608 = 0x190000;
    if ((local_754 != 0) && (iVar5 = FUN_0049ed10(&DAT_005b7408), iVar5 != 0)) {
      local_608 = local_608 | 0x20000;
    }
    puVar6 = calloc(1,0x18);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[2] = (int)uVar8;
      puVar6[4] = (int)uVar7;
      *puVar6 = 7;
      puVar6[1] = local_74c;
      puVar6[3] = (int)((ulonglong)uVar8 >> 0x20);
      puVar6[5] = (int)((ulonglong)uVar7 >> 0x20);
      local_5fc = puVar6;
      if ((local_748 == 5) && (pcVar1 = *(code **)(local_750 + 0x3a0), pcVar1 != (code *)0x0)) {
        puVar6 = local_72c;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        local_71c = &local_608;
        local_72c[0] = 0x411;
        (*pcVar1)(local_750,local_72c,*(undefined4 *)(local_750 + 0x3a4),local_730);
      }
      _SfList_AllocAndInsertItem_20(param_1,&local_608,uStack_5f6 + 0x1a,0xffffffff,0);
    }
switchD_0049ef90_default:
    local_74c = local_74c + 1;
    if (0x19 < local_74c) {
      SetErrorMode(local_744);
      return *param_1;
    }
  } while( true );
}


