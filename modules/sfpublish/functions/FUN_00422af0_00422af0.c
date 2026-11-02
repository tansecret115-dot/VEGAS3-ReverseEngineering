/* Module: sfpublish.dll
   Function: FUN_00422af0
   Address: 00422af0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00422af0(void *this,undefined4 param_1,void *param_2)

{
  BYTE BVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  byte *pbVar5;
  undefined *puVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uchar *puVar11;
  DWORD DVar12;
  BYTE *pBVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  uchar *puVar16;
  bool bVar17;
  bool bVar18;
  char *pcVar19;
  undefined4 uVar20;
  char *pcVar21;
  uchar local_2bc [260];
  BYTE local_1b8 [256];
  byte local_b8 [100];
  undefined4 local_54 [7];
  int local_38;
  DWORD local_2c;
  undefined1 *local_28;
  HANDLE local_24;
  uint local_20;
  byte *local_1c;
  uint local_18;
  undefined1 *local_14;
  DWORD local_10;
  uchar *local_c;
  int local_8;
  
  local_1b8[0] = '\0';
  iVar4 = FUN_00422970(*(HKEY *)((int)this + 0x8c),local_1b8,0x100);
  if (iVar4 < 0) {
    pcVar21 = "ReadContentTypeForFile on file \'%s\' failed with hr=%x.";
    uVar20 = 0xc64;
    pcVar19 = "sfinternet.cpp";
    uVar8 = 1;
    puVar6 = FUN_004012b0();
    FUN_00415b60((int)puVar6,uVar8,pcVar19,uVar20,pcVar21);
    return iVar4;
  }
  uVar8 = 0xffffffff;
  pBVar13 = local_1b8;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    BVar1 = *pBVar13;
    pBVar13 = pBVar13 + 1;
  } while (BVar1 != '\0');
  local_20 = ~uVar8 - 1;
  local_b8[0] = 0;
  iVar4 = FUN_00422a60(*(char **)((int)this + 0x84),(undefined4 *)local_b8,100);
  if (iVar4 < 0) {
    pcVar19 = "FindMultipartBoundaryDelimiter failed with hr=%x.";
    uVar20 = 0xc5f;
  }
  else {
    uVar8 = 0xffffffff;
    pbVar5 = local_b8;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    iVar9 = ~uVar8 - 1;
    local_c = (uchar *)iVar9;
    local_1c = (byte *)(*(int *)((int)this + 0x84) + -2 + iVar9);
    iVar4 = (*(int *)((int)this + 0x84) - (int)local_1c) + *(int *)((int)this + 0x88);
    do {
      if (local_1c == (byte *)0x0) goto LAB_00422bd8;
      if (iVar4 < 1) goto LAB_00422c12;
      pbVar5 = FUN_00423220(local_1c,iVar4,local_b8,iVar9);
      if (pbVar5 == (byte *)0x0) goto LAB_00422bd8;
      local_1c = pbVar5 + iVar9;
      iVar4 = (*(int *)((int)this + 0x88) - (int)local_1c) + *(int *)((int)this + 0x84);
    } while (((iVar4 < 2) || (*local_1c != 0x2d)) || (local_1c[1] != 0x2d));
    local_1c = local_1c + -iVar9;
LAB_00422c12:
    if (local_1c == (byte *)0x0) {
LAB_00422bd8:
      pcVar21 = "pEndingBoundary toast.";
      uVar20 = 0xc5a;
      pcVar19 = "sfinternet.cpp";
      uVar8 = 1;
      puVar6 = FUN_004012b0();
      FUN_00415b60((int)puVar6,uVar8,pcVar19,uVar20,pcVar21);
      return -0x7ffb1f0c;
    }
    local_18 = (*(int *)((int)this + 0x88) - (int)local_1c) + *(int *)((int)this + 0x84);
    bVar17 = false;
    iVar4 = 0;
    bVar18 = true;
    pbVar5 = local_1c;
    pbVar15 = local_b8;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar17 = *pbVar5 < *pbVar15;
      bVar18 = *pbVar5 == *pbVar15;
      pbVar5 = pbVar5 + 1;
      pbVar15 = pbVar15 + 1;
    } while (bVar18);
    if (!bVar18) {
      iVar4 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
    }
    if (iVar4 != 0) {
      pcVar21 = "Did not find ending boundary delimiter hr=%x.";
      uVar20 = 0xc55;
      pcVar19 = "sfinternet.cpp";
      uVar8 = 1;
      puVar6 = FUN_004012b0();
      FUN_00415b60((int)puVar6,uVar8,pcVar19,uVar20,pcVar21);
      return -0x7ffb1f0c;
    }
    _mbscpy(local_2bc,*(uchar **)((int)this + 0x8c));
    iVar4 = -1;
    puVar11 = local_2bc;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      uVar3 = *puVar11;
      puVar11 = puVar11 + 1;
    } while (uVar3 != '\0');
    local_24 = CreateFileA(*(LPCSTR *)((int)this + 0x8c),0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,
                           0x8000000,(HANDLE)0x0);
    if (local_24 != (HANDLE)0xffffffff) {
      local_2c = GetFileSize(local_24,(LPDWORD)&local_28);
      puVar14 = local_54;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      local_54[0] = 0x28;
      FUN_004328f0();
      uVar8 = 0xffffffff;
      pbVar5 = local_b8;
      do {
        pbVar15 = pbVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pbVar15 = pbVar5 + 1;
        bVar2 = *pbVar5;
        pbVar5 = pbVar15;
      } while (bVar2 != 0);
      uVar8 = ~uVar8;
      pbVar5 = pbVar15 + -uVar8;
      pbVar15 = &stack0xfffffd38;
      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar15 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar15 = pbVar15 + 4;
      }
      local_c = &stack0xfffffd38;
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar15 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar15 = pbVar15 + 1;
      }
      _mbscat(&stack0xfffffd38,(uchar *)"\r\nContent-Disposition: form-data; name=\"");
      puVar11 = local_c;
      _mbscat(local_c,*(uchar **)((int)this + 0x90));
      _mbscat(puVar11,(uchar *)"\"; filename=\"");
      _mbscat(puVar11,local_2bc);
      _mbscat(puVar11,(uchar *)"\"\r\nContent-Type: ");
      _mbscat(puVar11,local_1b8);
      _mbscat(puVar11,"\r\n\r\n");
      uVar8 = 0xffffffff;
      puVar16 = puVar11;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        uVar3 = *puVar16;
        puVar16 = puVar16 + 1;
      } while (uVar3 != '\0');
      local_c = (uchar *)(~uVar8 - 1);
      local_38 = *(int *)((int)this + 0x88) + local_2c + (int)local_c;
      *(int *)((int)this + 0x58) = local_38;
      *(undefined4 *)((int)this + 0x5c) = 0;
      iVar4 = HttpSendRequestExA();
      if (iVar4 == 0) {
        GetLastError();
        pcVar21 = "HttpSendRequestEx failed GLE=%d.";
        uVar20 = 0xc3f;
        pcVar19 = "sfinternet.cpp";
        uVar8 = 1;
        puVar6 = FUN_004012b0();
        FUN_00415b60((int)puVar6,uVar8,pcVar19,uVar20,pcVar21);
        DVar12 = GetLastError();
        local_8 = (-(uint)(DVar12 != 0x2ee2) & 0xfffffff6) + 0x8004e0f6;
      }
      else {
        if (*(int *)((int)this + 0x34) != 0) {
          local_8 = -0x7ffb1ff4;
          CloseHandle(local_24);
          return local_8;
        }
        local_8 = 0;
        iVar4 = *(int *)((int)this + 0x88) - local_18;
        local_14 = *(undefined1 **)((int)this + 0x84);
        while (puVar16 = local_c, iVar4 != 0) {
          local_10 = 0;
          iVar9 = InternetWriteFile(param_1,local_14,iVar4,&local_10);
          if (iVar9 == 0) {
            local_8 = -0x7fffbffb;
            GetLastError();
            pcVar19 = "InternetWriteFile failed with cbLeftToWrite=%d, GLE=%d.";
            uVar20 = 0xc39;
            goto LAB_00422e2a;
          }
          uVar8 = *(uint *)((int)this + 0x50);
          iVar4 = iVar4 - local_10;
          local_14 = local_14 + local_10;
          *(uint *)((int)this + 0x50) = uVar8 + local_10;
          *(uint *)((int)this + 0x54) = *(int *)((int)this + 0x54) + (uint)CARRY4(uVar8,local_10);
          FUN_00420550((int)this);
        }
        while (puVar16 != (uchar *)0x0) {
          local_10 = 0;
          iVar4 = InternetWriteFile(param_1,puVar11,puVar16,&local_10);
          if (iVar4 == 0) {
            local_8 = -0x7fffbffb;
            GetLastError();
            pcVar19 = "InternetWriteFile failed with cbLeftToWrite=%d, GLE=%d.";
            uVar20 = 0xc34;
            goto LAB_00422e2a;
          }
          uVar8 = *(uint *)((int)this + 0x50);
          puVar16 = (uchar *)((int)puVar16 - local_10);
          puVar11 = puVar11 + local_10;
          *(uint *)((int)this + 0x50) = uVar8 + local_10;
          *(uint *)((int)this + 0x54) = *(int *)((int)this + 0x54) + (uint)CARRY4(uVar8,local_10);
          FUN_00420550((int)this);
        }
        FUN_004328f0();
        local_c = (uchar *)0x0;
        local_28 = &stack0xfffffd24;
        do {
          local_10 = 0;
          BVar7 = ReadFile(local_24,local_28,0x20000,&local_10,(LPOVERLAPPED)0x0);
          if (BVar7 == 0) {
            local_8 = -0x7ffb1ff8;
            GetLastError();
            pcVar21 = "ReadFile failed - buffer size %d GLE=%d.";
            uVar20 = 0xbf9;
            pcVar19 = "sfinternet.cpp";
            uVar8 = 1;
            puVar6 = FUN_004012b0();
            FUN_00415b60((int)puVar6,uVar8,pcVar19,uVar20,pcVar21);
LAB_00422fee:
            if (*(int *)((int)this + 0x34) != 0) goto LAB_0042300a;
          }
          else {
            if (local_10 == 0) {
              local_c = (uchar *)0x1;
              goto LAB_00422fee;
            }
            local_14 = local_28;
            DVar12 = local_10;
            do {
              local_20 = 0;
              uVar8 = 0x1c84;
              if (DVar12 < 0x1c85) {
                uVar8 = DVar12;
              }
              iVar4 = InternetWriteFile(param_1,local_14,uVar8,&local_20);
              if (iVar4 == 0) {
                local_8 = -0x7ffb1ff7;
                GetLastError();
                pcVar21 = "InternetWriteFile failed - tried to write %d bytes GLE=%d.";
                uVar20 = 0xbe9;
                pcVar19 = "sfinternet.cpp";
                uVar8 = 1;
                puVar6 = FUN_004012b0();
                FUN_00415b60((int)puVar6,uVar8,pcVar19,uVar20,pcVar21);
              }
              else {
                local_14 = local_14 + local_20;
                DVar12 = DVar12 - local_20;
                uVar8 = *(uint *)((int)this + 0x50);
                *(uint *)((int)this + 0x50) = uVar8 + local_20;
                *(uint *)((int)this + 0x54) =
                     *(int *)((int)this + 0x54) + (uint)CARRY4(uVar8,local_20);
                FUN_00420550((int)this);
              }
              if (*(int *)((int)this + 0x34) != 0) goto LAB_00422fb3;
            } while ((-1 < local_8) && (DVar12 != 0));
            if (*(int *)((int)this + 0x34) != 0) {
LAB_00422fb3:
              local_8 = -0x7ffb1ff4;
              goto LAB_00422fee;
            }
          }
        } while ((-1 < local_8) && (local_c == (uchar *)0x0));
        if (*(int *)((int)this + 0x34) != 0) {
LAB_0042300a:
          local_8 = -0x7ffb1ff4;
          CloseHandle(local_24);
          return local_8;
        }
        uVar8 = local_18;
        pbVar5 = local_1c;
        if (-1 < local_8) {
          while (uVar8 != 0) {
            local_18 = 0;
            iVar4 = InternetWriteFile(param_1,pbVar5,uVar8,&local_18);
            if (iVar4 == 0) {
              local_8 = -0x7fffbffb;
              GetLastError();
              pcVar19 = "InternetWriteFile failed - tried to write %d bytes GLE=%d.";
              uVar20 = 0xc1a;
LAB_00422e2a:
              pcVar21 = "sfinternet.cpp";
              uVar8 = 1;
              puVar6 = FUN_004012b0();
              FUN_00415b60((int)puVar6,uVar8,pcVar21,uVar20,pcVar19);
              CloseHandle(local_24);
              return local_8;
            }
            uVar10 = *(uint *)((int)this + 0x50);
            uVar8 = uVar8 - local_18;
            pbVar5 = pbVar5 + local_18;
            *(uint *)((int)this + 0x50) = uVar10 + local_18;
            *(uint *)((int)this + 0x54) = *(int *)((int)this + 0x54) + (uint)CARRY4(uVar10,local_18)
            ;
            FUN_00420550((int)this);
          }
          iVar4 = HttpEndRequestA(param_1,0,0,this);
          if (iVar4 == 0) {
            local_8 = -0x7fffbffb;
            GetLastError();
            pcVar21 = "HttpEndRequest failed GLE=%d.";
            uVar20 = 0xc2d;
            pcVar19 = "sfinternet.cpp";
            uVar8 = 1;
            puVar6 = FUN_004012b0();
            FUN_00415b60((int)puVar6,uVar8,pcVar19,uVar20,pcVar21);
            CloseHandle(local_24);
            return local_8;
          }
          local_8 = FUN_004215d0(param_2,param_1);
        }
      }
      CloseHandle(local_24);
      return local_8;
    }
    iVar4 = -0x7ffb1ff9;
    pcVar19 = "Could not open local file %s.";
    uVar20 = 0xc50;
    local_24 = (HANDLE)0xffffffff;
  }
  pcVar21 = "sfinternet.cpp";
  uVar8 = 1;
  puVar6 = FUN_004012b0();
  FUN_00415b60((int)puVar6,uVar8,pcVar21,uVar20,pcVar19);
  return iVar4;
}


