/* Module: mp3plug.dll
   Function: FUN_5f698520
   Address: 5f698520
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __thiscall FUN_5f698520(void *this,int *param_1,uint *param_2)

{
  int *piVar1;
  LPCSTR lpTempFileName;
  char cVar2;
  void *pvVar3;
  uint *puVar4;
  uint uVar5;
  DWORD DVar6;
  UINT UVar7;
  BOOL BVar8;
  char *pcVar9;
  char *pcVar10;
  HGLOBAL pvVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  char *pcVar16;
  bool bVar17;
  char *local_130;
  void *local_12c;
  uint *local_128;
  SIZE_T local_124;
  DWORD local_120;
  undefined1 local_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  byte bStack_119;
  int local_114 [4];
  CHAR local_104 [260];
  
  piVar1 = (int *)((int)this + 0x7c);
  *param_1 = *(int *)((int)this + 0x7c);
  local_128 = (uint *)((int)this + 0x80);
  *param_2 = *local_128;
  iVar13 = 3;
  bVar17 = true;
  pcVar9 = (char *)*param_1;
  pcVar10 = "ID3";
  do {
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
    bVar17 = *pcVar9 == *pcVar10;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  } while (bVar17);
  local_12c = this;
  if (bVar17) {
    *param_1 = *param_1 + 3;
    *param_2 = *param_2 - 3;
    *param_1 = *param_1 + 2;
    *param_2 = *param_2 - 2;
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 - 1;
    uVar5 = *(uint *)*param_1;
    *param_1 = (int)((uint *)*param_1 + 1);
    local_11c = (undefined1)uVar5;
    uStack_11b = (undefined1)(uVar5 >> 8);
    uStack_11a = (undefined1)(uVar5 >> 0x10);
    bStack_119 = (byte)(uVar5 >> 0x18);
    *param_2 = *param_2 - 4;
    uVar5 = (((uVar5 & 0xff) << 7 | uVar5 >> 8 & 0xff) << 7 | uVar5 >> 0x10 & 0xff) << 7 |
            (uint)bStack_119;
    DVar6 = GetTempPathA(0x104,local_104);
    if (DVar6 != 0) {
      lpTempFileName = (LPCSTR)((int)local_12c + 0x8c);
      UVar7 = GetTempFileNameA(local_104,"ID3",0,lpTempFileName);
      if ((UVar7 != 0) &&
         (local_130 = CreateFileA(lpTempFileName,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                                  (HANDLE)0x0), local_130 == (char *)0xffffffff)) {
        return (char *)0x8004e006;
      }
    }
    if (uVar5 < *param_2) {
      pcVar9 = (char *)CONCAT13(bStack_119,CONCAT12(uStack_11a,CONCAT11(uStack_11b,local_11c)));
    }
    else {
      do {
        puVar4 = local_128;
        BVar8 = WriteFile(local_130,(LPCVOID)*piVar1,*local_128,&local_120,(LPOVERLAPPED)0x0);
        pvVar3 = local_12c;
        if (BVar8 == 0) {
          CloseHandle(local_130);
          return (char *)0x8004e009;
        }
        uVar5 = uVar5 - *param_2;
        FUN_5f697b30(*(int *)((int)local_12c + 0x24));
        pvVar3 = *(void **)((int)pvVar3 + 0x24);
        *piVar1 = 0;
        *puVar4 = 0;
        pcVar9 = (char *)FUN_5f697990(pvVar3,piVar1,puVar4);
        if ((int)pcVar9 < 0) {
          CloseHandle(local_130);
          return pcVar9;
        }
        *param_1 = *piVar1;
        uVar14 = *puVar4;
        *param_2 = uVar14;
      } while (uVar14 <= uVar5);
    }
    pcVar10 = local_130;
    BVar8 = WriteFile(local_130,(LPCVOID)*piVar1,uVar5 + 10,&local_120,(LPOVERLAPPED)0x0);
    if (BVar8 != 0) {
      CloseHandle(pcVar10);
      *param_1 = *param_1 + uVar5;
      *param_2 = *param_2 - uVar5;
      return pcVar9;
    }
    CloseHandle(pcVar10);
    return (char *)0x8004e009;
  }
  local_114[0] = *piVar1;
  local_114[1] = 0;
  pcVar9 = (char *)0x0;
  local_114[2] = 0;
  local_114[3] = *local_128;
  local_130 = (char *)0x0;
  local_124 = 0;
  local_120 = 0;
LAB_5f69879e:
  do {
    local_11c = (undefined1)local_114[2];
    uStack_11b = (undefined1)((uint)local_114[2] >> 8);
    uStack_11a = (undefined1)((uint)local_114[2] >> 0x10);
    bStack_119 = (byte)((uint)local_114[2] >> 0x18);
    pcVar10 = (char *)FUN_5f6982f0(local_12c,local_114,(int *)&local_130,(int *)&local_124);
    if (pcVar10 != (char *)0x0) goto LAB_5f6988f4;
    if ((int)local_120 < (int)local_124) {
      if (pcVar9 != (char *)0x0) {
        pvVar11 = GlobalHandle(pcVar9);
        GlobalUnlock(pvVar11);
        pvVar11 = GlobalHandle(pcVar9);
        GlobalFree(pvVar11);
      }
      pvVar11 = GlobalAlloc(0x42,local_124);
      pcVar9 = GlobalLock(pvVar11);
      if (pcVar9 == (char *)0x0) {
        pcVar10 = (char *)0x8007000e;
        goto LAB_5f6988f4;
      }
      local_120 = local_124;
    }
    uVar5 = 0xffffffff;
    pcVar12 = local_130;
    do {
      pcVar16 = pcVar12;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar16 = pcVar12 + 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar16;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar12 = pcVar16 + -uVar5;
    pcVar16 = pcVar9;
    for (uVar14 = uVar5 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar16 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar16 = pcVar16 + 1;
    }
    _strupr(pcVar9);
    pcVar12 = strstr(pcVar9,"ICY");
    if (pcVar12 == (char *)0x0) goto LAB_5f6988f4;
    pcVar10 = strstr(pcVar9,"ICY-NAME");
    if (pcVar10 != (char *)0x0) {
      puVar15 = (undefined4 *)((int)local_12c + 0x70);
LAB_5f698870:
      pcVar10 = FUN_5f698970(local_130 + ((int)pcVar10 - (int)pcVar9),puVar15);
      if (pcVar10 != (char *)0x0) goto LAB_5f6988f4;
      goto LAB_5f69879e;
    }
    pcVar10 = strstr(pcVar9,"ICY-GENRE");
    if (pcVar10 != (char *)0x0) {
      puVar15 = (undefined4 *)((int)local_12c + 0x74);
      goto LAB_5f698870;
    }
    pcVar10 = strstr(pcVar9,"ICY-URL");
    if (pcVar10 != (char *)0x0) {
      puVar15 = (undefined4 *)((int)local_12c + 0x78);
      goto LAB_5f698870;
    }
    pcVar10 = strstr(pcVar9,"ICY 400 SERVER FULL");
    if (pcVar10 != (char *)0x0) {
      pcVar10 = (char *)0x8004e005;
      piVar1 = *(int **)((int)local_12c + 0x1b4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))(piVar1,10,0,0);
      }
LAB_5f6988f4:
      if (local_130 != (char *)0x0) {
        pvVar11 = GlobalHandle(local_130);
        GlobalUnlock(pvVar11);
        pvVar11 = GlobalHandle(local_130);
        GlobalFree(pvVar11);
      }
      if (pcVar9 != (char *)0x0) {
        pvVar11 = GlobalHandle(pcVar9);
        GlobalUnlock(pvVar11);
        pvVar11 = GlobalHandle(pcVar9);
        GlobalFree(pvVar11);
      }
      iVar13 = CONCAT13(bStack_119,CONCAT12(uStack_11a,CONCAT11(uStack_11b,local_11c)));
      *param_1 = iVar13 + local_114[0];
      *param_2 = *local_128 - iVar13;
      return pcVar10;
    }
  } while( true );
}


