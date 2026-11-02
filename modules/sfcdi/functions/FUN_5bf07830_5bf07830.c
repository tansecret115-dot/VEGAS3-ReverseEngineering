/* Module: sfcdi.dll
   Function: FUN_5bf07830
   Address: 5bf07830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf07830(int *param_1)

{
  int iVar1;
  uint uVar2;
  HSFSCSIADAPTER__ *pHVar3;
  ulong uVar4;
  HSFSCSIPORT__ *pHVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  HSFSCSIPORT__ **ppHVar10;
  uint *puVar11;
  ulong *puVar12;
  int local_66c;
  uint local_668;
  uint local_664;
  ulong local_65c;
  HSFSCSIADAPTER__ *local_658;
  _INQUIRYDATA local_654 [8];
  CHAR local_64c [8];
  CHAR local_644 [80];
  undefined4 local_5f4 [5];
  uchar local_5e0 [32];
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  uint local_590 [3];
  uchar local_584 [160];
  uchar local_4e4 [80];
  uchar local_494 [80];
  uchar local_444 [80];
  int local_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 local_3dc;
  drivedbentry local_3d8 [34];
  char local_3b6 [90];
  tSFSCSIINQUIRYDATA local_35c [68];
  uchar local_318 [64];
  HSFSCSIPORT__ *local_2d8 [2];
  uint local_2d0;
  uint local_2cc;
  undefined4 local_184;
  
  iVar1 = FUN_5bf2b110(param_1,4,-1,-1,0x40000002);
  if (-1 < iVar1) {
    uVar2 = SfScsi_GetNumAdapters();
    if (uVar2 != 0) {
      ppHVar10 = local_2d8;
      for (iVar1 = 0xb5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *ppHVar10 = (HSFSCSIPORT__ *)0x0;
        ppHVar10 = ppHVar10 + 1;
      }
      *(undefined2 *)ppHVar10 = 0;
      local_184 = 0;
      local_668 = 0;
      if (uVar2 != 0) {
        do {
          pHVar3 = SfScsi_OpenAdapter(local_668,0x84,&local_65c);
          local_658 = pHVar3;
          if (pHVar3 != (HSFSCSIADAPTER__ *)0x0) {
            iVar1 = SfScsi_GetInquiryData(pHVar3,local_35c);
            if (iVar1 != 0) {
              local_664 = 0;
              local_2d0 = local_668;
              do {
                puVar12 = &local_65c;
                local_2cc = local_664;
                uVar4 = SfScsi_GetDefIOBufferSize();
                pHVar5 = SfScsi_Open(local_668,local_664,uVar4,puVar12);
                if (pHVar5 != (HSFSCSIPORT__ *)0x0) {
                  iVar1 = SfScsi_ScanDevice(pHVar5,local_654,3000);
                  uVar9 = 0xffffffff;
                  local_2d8[0] = pHVar5;
                  if ((-1 < iVar1) &&
                     ((((byte)local_654[0] & 0x1f) == 5 || (((byte)local_654[0] & 0x1f) == 4)))) {
                    puVar11 = local_590;
                    for (iVar7 = 0x8d; iVar7 != 0; iVar7 = iVar7 + -1) {
                      *puVar11 = 0;
                      puVar11 = puVar11 + 1;
                    }
                    lVar6 = DriveDB_GetDriveEntry(DAT_5bf65ff0,local_654,local_3d8);
                    if (-1 < lVar6) {
                      uVar9 = cdr_FindInterface(local_3b6);
                      local_3dc = 1;
                    }
                    local_590[1] = local_668;
                    local_590[2] = local_664;
                    local_590[0] = uVar9;
                    local_3f4 = iVar1;
                    _mbscpy(local_4e4,local_318);
                    SfScsi_FormatInquiryName((char *)local_494,local_654);
                    FUN_5bf074a0((int)local_590,(int)local_654);
                    if ((int)uVar9 < 0) {
                      local_2d8[1] = (HSFSCSIPORT__ *)0xffffffff;
                      SfScsi_FormatInquiryName((char *)local_444,local_654);
                      local_3f0 = 0x2000;
                      FUN_5bf2ade0((int *)*param_1,(int *)local_590,0x234,-1,(int *)0x0);
                    }
                    else {
                      local_5f4[0] = 100;
                      cdr_GetInterfaceCaps(local_590[0],(cdrcaps_tag *)local_5f4);
                      _mbscpy(local_584,local_5e0);
                      SfScsi_FormatInquiryName((char *)local_444,local_654);
                      iVar1 = FUN_5bf2ade0((int *)*param_1,(int *)local_590,0x234,-1,(int *)0x0);
                      if (iVar1 < 0) {
                        return iVar1;
                      }
                    }
                  }
                  SfScsi_Close(pHVar5);
                }
                local_664 = local_664 + 1;
                pHVar3 = local_658;
              } while (local_664 < 8);
            }
            SfScsi_CloseAdapter(pHVar3);
          }
          local_668 = local_668 + 1;
        } while (local_668 < uVar2);
      }
      local_654[0] = (_INQUIRYDATA)((byte)local_654[0] | 0x1f);
      lstrcpyA(local_64c,"SIMID");
      lstrcpyA(local_644,"SIMID");
      local_2d8[0] = (HSFSCSIPORT__ *)0x0;
      local_66c = 0;
      if (0 < DAT_5bf66620) {
        piVar8 = &DAT_5bf664a8;
        do {
          iVar1 = (*(code *)piVar8[-1])(0,0xe,local_2d8,local_654);
          if (-1 < iVar1) {
            local_5f4[0] = 100;
            puVar11 = local_590;
            for (iVar7 = 0x8d; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            }
            local_3f4 = 4;
            local_590[0] = *piVar8 + iVar1;
            local_590[1] = 0xffffffff;
            local_590[2] = 0xffffffff;
            cdr_GetInterfaceCaps(local_590[0],(cdrcaps_tag *)local_5f4);
            _mbscpy(local_584,local_5e0);
            _mbscpy(local_494,local_5e0);
            _mbscpy(local_4e4,local_5e0);
            _mbscpy(local_444,local_5e0);
            uStack_3ec = uStack_5bc;
            local_3f0 = uStack_5c0;
            uStack_3e8 = uStack_5b8;
            iVar1 = FUN_5bf2ade0((int *)*param_1,(int *)local_590,0x234,-1,(int *)0x0);
            if (iVar1 < 0) {
              return iVar1;
            }
          }
          local_66c = local_66c + 1;
          piVar8 = piVar8 + 3;
        } while (local_66c < DAT_5bf66620);
      }
      FUN_5bf077a0();
    }
    iVar1 = 0;
  }
  return iVar1;
}


