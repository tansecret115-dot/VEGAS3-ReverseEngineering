/* Module: vegas30.exe
   Function: FUN_0054e120
   Address: 0054e120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0054e120(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  HGLOBAL pvVar6;
  uchar *puVar7;
  undefined4 uVar8;
  int iVar9;
  BOOL BVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  bool bVar14;
  undefined4 uVar15;
  uchar *puVar16;
  uchar *local_24c;
  uint *local_244;
  uint local_240;
  uint local_23c;
  int local_238;
  int local_234;
  int local_230;
  uint *local_22c;
  uint local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  uint local_20c;
  undefined1 local_208 [520];
  
  uVar8 = DAT_0064b138;
  local_21c = 0;
  Transport_Suspend();
  iVar1 = FUN_0054c960(param_1,&local_244);
  if (iVar1 < 0) goto LAB_0054e6eb;
  iVar1 = FUN_004e9f70(uVar8,0x21f,0);
  if (-1 < iVar1) {
    local_218 = 0;
    local_240 = 0;
    local_23c = 0;
    local_22c = (uint *)FUN_005b87b0(uVar8);
    local_20c = *local_22c;
    local_228 = 0;
    if (local_20c != 0) {
      do {
        local_238 = 0;
        iVar9 = *(int *)(local_22c[2] + local_228 * 4);
        local_224 = **(int **)(iVar9 + 0x24);
        while (local_224 = local_224 + -1, -1 < local_224) {
          local_214 = 0;
          iVar5 = *(int *)(*(int *)(*(int *)(iVar9 + 0x24) + 8) + local_224 * 4);
          local_234 = FUN_005c68e0(iVar5);
          while (local_234 = local_234 + -1, -1 < local_234) {
            local_230 = FUN_005c6910(iVar5,local_234);
            uVar13 = 0;
            if (*local_244 != 0) {
              piVar12 = (int *)local_244[2];
              do {
                if (*(int *)(local_230 + 0x18) == *piVar12) {
                  bVar14 = true;
                  if ((DAT_006495d8 != 0) && (local_218 == 0)) {
                    local_220 = DAT_006495d8;
                    uVar15 = FUN_005f2d10();
                    uVar2 = _SfGetString_8(DAT_00647204,0x661b);
                    piVar12 = &local_220;
                    uVar3 = _SfGetString_8(DAT_00647204,0x6d90);
                    iVar4 = SfMsgBox_CustomEx(*(undefined4 *)(param_1 + 0x8c),0x103a,0,uVar3,piVar12
                                              ,uVar2,uVar15);
                    if (iVar4 == 2) {
                      iVar1 = -0x7ffb1ff4;
                      goto LAB_0054e446;
                    }
                    DAT_006495d8 = local_220;
                    if (iVar4 == 100) {
                      local_218 = 1;
                    }
                    else if (iVar4 == 7) {
                      bVar14 = false;
                    }
                  }
                  if (bVar14) {
                    local_214 = 1;
                    if (local_238 == 0) {
                      iVar1 = FUN_004ea250(uVar8,iVar9,1,1);
                      if (iVar1 < 0) goto LAB_0054e446;
                      local_238 = 1;
                    }
                    bVar14 = *(int *)(iVar5 + 0x50) == local_230;
                    if (bVar14) {
                      local_210 = FUN_005c6950(iVar5);
                    }
                    iVar1 = FUN_005c6b30(uVar8,iVar5,local_230);
                    if (((-1 < iVar1) && (FUN_004eb2b0(uVar8), bVar14)) &&
                       (iVar4 = FUN_005c68e0(iVar5), 0 < iVar4)) {
                      if (iVar4 <= local_210) {
                        local_210 = iVar4 + -1;
                      }
                      iVar1 = FUN_005c86c0(uVar8,iVar5,local_210);
                    }
                    local_240 = 1;
                    *(uint *)(iVar9 + 0x10) = *(uint *)(iVar9 + 0x10) | 0x200000;
                  }
                  else {
                    _SfList_DeleteList_16(local_244,uVar13,1,0);
                  }
                  break;
                }
                uVar13 = uVar13 + 1;
                piVar12 = piVar12 + 1;
              } while (uVar13 < *local_244);
            }
            if (iVar1 < 0) goto LAB_0054e446;
          }
          if (iVar1 < 0) goto LAB_0054e446;
          if ((local_214 != 0) && (iVar5 = FUN_005c68e0(iVar5), iVar5 == 0)) {
            if ((local_23c == 0) && (iVar1 = FUN_004ea880(uVar8), -1 < iVar1)) {
              local_23c = 1;
            }
            if (local_238 == 0) {
              iVar1 = FUN_004ea250(uVar8,iVar9,1,1);
              if (iVar1 < 0) goto LAB_0054e446;
              local_238 = 1;
            }
            if ((iVar1 < 0) || (iVar1 = FUN_005c8970(uVar8,iVar9,local_224,0,1), iVar1 < 0))
            goto LAB_0054e446;
            FUN_004eb2b0(uVar8);
          }
        }
      } while ((-1 < iVar1) && (local_228 = local_228 + 1, local_228 < local_20c));
    }
LAB_0054e446:
    uVar13 = *local_244;
    local_24c = (uchar *)0x0;
    local_23c = uVar13;
    if ((param_2 != 0) && (uVar13 != 0)) {
      pvVar6 = GlobalAlloc(0x40,uVar13 * 0x104);
      local_24c = GlobalLock(pvVar6);
      puVar7 = local_24c;
      for (uVar11 = uVar13; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar7 = '\0';
        puVar7 = puVar7 + 0x104;
      }
    }
    if (iVar1 < 0) {
LAB_0054e5bc:
      uVar15 = 1;
    }
    else {
      local_22c = (uint *)FUN_005bad20(uVar8);
      FUN_005b83b0(uVar8,1);
      if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
        FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
      }
      uVar11 = 0;
      puVar7 = local_24c;
      if (uVar13 != 0) {
        do {
          iVar9 = *(int *)(local_244[2] + uVar11 * 4);
          iVar1 = FUN_004eb0f0(uVar8,0x28,iVar9);
          uVar13 = local_23c;
          if (iVar1 < 0) break;
          iVar1 = FUN_005fc5b0();
          if (((iVar1 != 0) && (iVar1 = FUN_005fc5d0(), iVar1 != 0)) &&
             (*(int *)(iVar1 + 0x18) == iVar9)) {
            local_21c = 1;
          }
          if ((local_24c != (uchar *)0x0) && (param_2 != 0)) {
            iVar1 = FUN_005f03a0((LPCSTR)(iVar9 + 0x170));
            if (iVar1 == 0) {
              lstrcpynA((LPSTR)puVar7,(LPCSTR)(iVar9 + 0x170),0x104);
              puVar7[0x103] = '\0';
            }
          }
          iVar1 = FUN_005ed410(iVar9,0,0);
          uVar13 = local_23c;
          if (iVar1 < 0) break;
          uVar11 = uVar11 + 1;
          puVar7 = puVar7 + 0x104;
        } while (uVar11 < local_23c);
      }
      FUN_005b84d0(uVar8,1);
      if (iVar1 < 0) goto LAB_0054e5bc;
      if (uVar13 != 0) {
        FUN_004eb2b0(uVar8);
        DAT_0064767c = DAT_0064767c | 0x100;
        FUN_005498f0(param_1);
      }
      uVar15 = 0;
    }
    iVar1 = FUN_004ea040(uVar8,uVar15);
    if (local_240 != 0) {
      FUN_005b8da0(uVar8,0,1);
    }
    puVar7 = local_24c;
    uVar11 = local_240;
    if (local_24c != (uchar *)0x0) {
      while (local_240 = uVar13, local_240 != 0) {
        if (*puVar7 != '\0') {
          puVar16 = puVar7;
          uVar8 = _SfGetString_8(DAT_00647204,0x6e4f);
          SfPrintF(local_208,uVar8,puVar16);
          iVar9 = SfMsgBox(DAT_00647624,0x34,local_208);
          if (iVar9 == 6) {
            BVar10 = DeleteFileA((LPCSTR)puVar7);
            if (BVar10 == 0) {
              puVar16 = puVar7;
              uVar8 = _SfGetString_8(DAT_00647204,0x6e50);
              SfPrintF(local_208,uVar8,puVar16);
              SfMsgBox(DAT_00647624,0x10,local_208);
            }
            iVar9 = lstrlenA((LPCSTR)puVar7);
            _mbsncat(puVar7,".sfk",0x103 - iVar9);
            DeleteFileA((LPCSTR)puVar7);
          }
        }
        puVar7 = puVar7 + 0x104;
        uVar11 = local_240 - 1;
        uVar13 = local_240 - 1;
      }
      local_240 = uVar11;
      pvVar6 = GlobalHandle(local_24c);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(local_24c);
      GlobalFree(pvVar6);
    }
  }
  _SfList_Destroy_4(local_244);
  local_244 = (uint *)0x0;
LAB_0054e6eb:
  Transport_Resume(local_21c);
  return iVar1;
}


