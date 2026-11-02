/* Module: sfcdi.dll
   Function: FUN_5bf074a0
   Address: 5bf074a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf074a0(int param_1,int param_2)

{
  undefined4 uVar1;
  LSTATUS LVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  DWORD local_304;
  HKEY local_300;
  HKEY local_2fc;
  DWORD local_2f8;
  DWORD local_2f4;
  HKEY local_2f0;
  DWORD local_2ec;
  int local_2e8;
  BYTE local_2e4 [12];
  BYTE local_2d8 [12];
  byte local_2cc [24];
  byte local_2b4 [24];
  _OSVERSIONINFOA local_29c;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  iVar6 = 0;
  local_2e8 = 0;
  local_29c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_29c);
  if (local_29c.dwPlatformId == 2) {
    uVar1 = FUN_5bf0bb40(*(uint *)(param_1 + 4),*(uint *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  }
  else {
    local_2fc = (HKEY)0x0;
    LVar2 = RegOpenKeyExA((HKEY)0x80000002,"Enum\\SCSI",0,0x20019,&local_2fc);
    if (LVar2 == 0) {
      local_2ec = 0;
      do {
        local_304 = 0x104;
        LVar2 = RegEnumKeyExA(local_2fc,local_2ec,local_208,&local_304,(LPDWORD)0x0,(LPSTR)0x0,
                              (LPDWORD)0x0,(PFILETIME)0x0);
        if (LVar2 != 0) break;
        LVar2 = RegOpenKeyExA(local_2fc,local_208,0,0x20019,&local_2f0);
        if (LVar2 == 0) {
          local_2f4 = 0;
          while (iVar6 == 0) {
            iVar4 = -1;
            local_304 = 0x104;
            LVar2 = RegEnumKeyExA(local_2f0,local_2f4,local_104,&local_304,(LPDWORD)0x0,(LPSTR)0x0,
                                  (LPDWORD)0x0,(PFILETIME)0x0);
            if (LVar2 != 0) break;
            LVar2 = RegOpenKeyExA(local_2f0,local_104,0,0x20019,&local_300);
            if (LVar2 == 0) {
              local_304 = 0x18;
              LVar2 = RegQueryValueExA(local_300,s_Manufacturer_5bf620c0,(LPDWORD)0x0,&local_2f8,
                                       local_2b4,&local_304);
              if (LVar2 == 0) {
                local_304 = 0x18;
                LVar2 = RegQueryValueExA(local_300,s_ProductId_5bf620d0,(LPDWORD)0x0,&local_2f8,
                                         local_2cc,&local_304);
                if (LVar2 == 0) {
                  local_304 = 10;
                  LVar2 = RegQueryValueExA(local_300,s_SCSITargetID_5bf620dc,(LPDWORD)0x0,&local_2f8
                                           ,local_2e4,&local_304);
                  if (LVar2 == 0) {
                    if (local_2f8 == 1) {
                      iVar4 = FUN_5bf2cbc0(local_2e4,0);
                    }
                    local_304 = 10;
                    LVar2 = RegQueryValueExA(local_300,s_CurrentDriveLetterAssignment_5bf620a0,
                                             (LPDWORD)0x0,&local_2f8,local_2d8,&local_304);
                    if (LVar2 == 0) {
                      iVar3 = 8;
                      bVar8 = false;
                      iVar6 = 0;
                      bVar9 = true;
                      pbVar5 = local_2b4;
                      pbVar7 = (byte *)(param_2 + 8);
                      do {
                        if (iVar3 == 0) break;
                        iVar3 = iVar3 + -1;
                        bVar8 = *pbVar5 < *pbVar7;
                        bVar9 = *pbVar5 == *pbVar7;
                        pbVar5 = pbVar5 + 1;
                        pbVar7 = pbVar7 + 1;
                      } while (bVar9);
                      if (!bVar9) {
                        iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                      }
                      if (iVar6 == 0) {
                        iVar3 = 0x10;
                        bVar8 = false;
                        iVar6 = 0;
                        bVar9 = true;
                        pbVar5 = local_2cc;
                        pbVar7 = (byte *)(param_2 + 0x10);
                        do {
                          if (iVar3 == 0) break;
                          iVar3 = iVar3 + -1;
                          bVar8 = *pbVar5 < *pbVar7;
                          bVar9 = *pbVar5 == *pbVar7;
                          pbVar5 = pbVar5 + 1;
                          pbVar7 = pbVar7 + 1;
                        } while (bVar9);
                        if (!bVar9) {
                          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                        }
                        if ((((iVar6 == 0) && (iVar4 == *(int *)(param_1 + 8))) &&
                            ('@' < (char)local_2d8[0])) && ((char)local_2d8[0] < '[')) {
                          local_2e8 = 1;
                          *(int *)(param_1 + 0x1ac) = (char)local_2d8[0] + -0x40;
                        }
                      }
                      RegCloseKey(local_300);
                      iVar6 = local_2e8;
                    }
                    else {
                      RegCloseKey(local_300);
                    }
                  }
                  else {
                    RegCloseKey(local_300);
                  }
                }
                else {
                  RegCloseKey(local_300);
                }
              }
              else {
                RegCloseKey(local_300);
              }
            }
            local_2f4 = local_2f4 + 1;
          }
          RegCloseKey(local_2f0);
        }
        local_2ec = local_2ec + 1;
      } while (iVar6 == 0);
      RegCloseKey(local_2fc);
      return 0;
    }
  }
  return 0;
}


