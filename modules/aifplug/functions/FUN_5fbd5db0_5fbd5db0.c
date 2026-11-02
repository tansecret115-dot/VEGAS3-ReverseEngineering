/* Module: aifplug.dll
   Function: FUN_5fbd5db0
   Address: 5fbd5db0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_5fbd5db0(void *this,int *param_1)

{
  LPCWSTR lpWideCharStr;
  int *piVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  LPVOID lpBuffer;
  void *pvVar4;
  HANDLE pvVar5;
  HGLOBAL pvVar6;
  int iVar7;
  LPVOID lpBuffer_00;
  SIZE_T dwBytes;
  BOOL BVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  code *pcVar12;
  SIZE_T dwBytes_00;
  bool bVar13;
  uint uStack_14c;
  int *local_148;
  ushort *puStack_144;
  uint uStack_140;
  LPVOID pvStack_13c;
  SIZE_T local_138;
  void *local_134;
  uint local_130;
  int local_12c;
  uint local_128;
  int local_124;
  uint local_120;
  int local_11c;
  code *local_118;
  int iStack_114;
  SIZE_T SStack_110;
  undefined1 auStack_10c [8];
  CHAR local_104 [259];
  undefined1 local_1;
  
  uVar10 = 0;
  puVar11 = (ushort *)0x0;
  lpWideCharStr = (LPCWSTR)((int)this + 0xc);
  local_148 = (int *)0x0;
  local_128 = 0;
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_130 = 0;
  local_12c = 0;
  local_118 = (code *)0x0;
  local_138 = 0;
  local_134 = this;
  if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
    WideCharToMultiByte(0,0,lpWideCharStr,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x104) {
    local_104[0] = '\0';
  }
  local_1 = 0;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))(param_1,0,100,0);
  }
  pvVar5 = CreateFileA(local_104,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x8000000,(HANDLE)0x0);
  *(HANDLE *)((int)this + 0x218) = pvVar5;
  pcVar12 = GlobalHandle_exref;
  uVar9 = uStack_14c;
  if (pvVar5 == (HANDLE)0xffffffff) {
    uVar10 = 0x8004e006;
    goto LAB_5fbd5e6b;
  }
  piVar1 = *(int **)((int)this + 0x21c);
  if (piVar1 == (int *)0x0) {
LAB_5fbd5ef4:
    uVar10 = 0x8000ffff;
    pcVar12 = GlobalHandle_exref;
    uVar9 = uStack_14c;
    goto LAB_5fbd5e6b;
  }
  if (*piVar1 == 0) goto LAB_5fbd5e6b;
  puVar2 = *(undefined4 **)piVar1[2];
  (**(code **)*puVar2)(puVar2,&DAT_5fbfeaa0,&local_148);
  if (puVar2 == (undefined4 *)0x0) goto LAB_5fbd5ef4;
  puVar3 = *(ushort **)(*(int *)((int)this + 0x224) + 0x424);
  puStack_144 = puVar3;
  iVar7 = (**(code **)(*local_148 + 0x30))(local_148,0,0,&local_138,0,0,0);
  if (iVar7 < 0) {
    return 0x8000ffff;
  }
  pvVar6 = GlobalAlloc(0x42,local_138);
  puVar11 = GlobalLock(pvVar6);
  if ((puVar11 != (ushort *)0x0) &&
     (uVar10 = (**(code **)(*local_148 + 0x30))(local_148,puVar11,local_138,&local_138,0,0,0),
     pcVar12 = GlobalHandle_exref, uVar9 = uStack_14c, (int)uVar10 < 0)) goto LAB_5fbd5e6b;
  (**(code **)(*local_148 + 0x2c))(local_148,auStack_10c);
  *puVar3 = (puVar3[7] != 8) - 0x1ff;
  uVar10 = FUN_5fbd6250(*(HANDLE *)((int)this + 0x218),(int)puVar3,0);
  dwBytes_00 = (uint)puVar11[6] << 0xd;
  SStack_110 = dwBytes_00;
  pvVar6 = GlobalAlloc(0x42,dwBytes_00);
  lpBuffer_00 = GlobalLock(pvVar6);
  if (lpBuffer_00 == (LPVOID)0x0) {
    uVar10 = 0x8007000e;
    pcVar12 = GlobalHandle_exref;
    uVar9 = 0;
    goto LAB_5fbd5e6b;
  }
  pvStack_13c = (LPVOID)0x0;
  if ((puVar11[7] == puStack_144[7]) && (*puVar11 == *puStack_144)) {
LAB_5fbd6030:
    if (-1 < (int)uVar10) {
      do {
        do {
          iStack_114 = *local_148;
          uVar10 = (**(code **)(iStack_114 + 0x3c))
                             (local_148,local_128,local_124,lpBuffer_00,dwBytes_00 / puVar11[6],
                              &uStack_140);
          lpBuffer = pvStack_13c;
          uVar9 = uStack_140;
          if ((uVar10 != 0) || (uStack_140 == 0)) {
            if (uVar10 == 1) {
              uVar10 = 0;
            }
            goto LAB_5fbd61aa;
          }
          if (pvStack_13c == (LPCVOID)0x0) {
            BVar8 = WriteFile(*(HANDLE *)((int)local_134 + 0x218),lpBuffer_00,
                              puVar11[6] * uStack_140,&uStack_14c,(LPOVERLAPPED)0x0);
            if (BVar8 == 0) goto LAB_5fbd619c;
            uVar9 = uStack_14c / puStack_144[6];
          }
          else {
            (*local_118)(pvStack_13c,lpBuffer_00,puVar11[1] * uStack_140,0x3f800000);
            BVar8 = WriteFile(*(HANDLE *)((int)local_134 + 0x218),lpBuffer,puStack_144[6] * uVar9,
                              &uStack_14c,(LPOVERLAPPED)0x0);
            if (BVar8 == 0) {
LAB_5fbd619c:
              uVar10 = 0x8004e009;
              goto LAB_5fbd61aa;
            }
          }
          bVar13 = CARRY4(local_128,uStack_140);
          local_128 = local_128 + uStack_140;
          local_124 = local_124 + (uint)bVar13;
          bVar13 = CARRY4(local_120,uStack_14c);
          local_120 = local_120 + uStack_14c;
          local_11c = local_11c + (uint)bVar13;
          bVar13 = CARRY4(local_130,uVar9);
          local_130 = local_130 + uVar9;
          local_12c = local_12c + (uint)bVar13;
          dwBytes_00 = SStack_110;
        } while (param_1 == (int *)0x0);
        iVar7 = ftol();
        iVar7 = (**(code **)(*param_1 + 0x18))(param_1,iVar7,iVar7 >> 0x1f);
        dwBytes_00 = SStack_110;
      } while (-1 < iVar7);
      uVar10 = 0x8004e00c;
    }
  }
  else {
    uStack_140 = (uint)puStack_144[6];
    dwBytes = ftol();
    pvVar6 = GlobalAlloc(0x42,dwBytes);
    pvStack_13c = GlobalLock(pvVar6);
    local_118 = (code *)FUN_5fbf1040(puStack_144,puVar11);
    if (local_118 != (code *)0x0) goto LAB_5fbd6030;
    uVar10 = 0x80004001;
  }
LAB_5fbd61aa:
  pcVar12 = GlobalHandle_exref;
  pvVar6 = GlobalHandle(lpBuffer_00);
  GlobalUnlock(pvVar6);
  pvVar6 = GlobalHandle(lpBuffer_00);
  GlobalFree(pvVar6);
  if (pvStack_13c != (LPCVOID)0x0) {
    pvVar6 = GlobalHandle(pvStack_13c);
    GlobalUnlock(pvVar6);
    pvVar6 = GlobalHandle(pvStack_13c);
    GlobalFree(pvVar6);
  }
  pvVar4 = local_134;
  uVar9 = 0;
  if (-1 < (int)uVar10) {
    SetFilePointer(*(HANDLE *)((int)local_134 + 0x218),0,(PLONG)0x0,0);
    uVar10 = FUN_5fbd6250(*(HANDLE *)((int)pvVar4 + 0x218),(int)puStack_144,local_130);
  }
LAB_5fbd5e6b:
  if (local_148 != (int *)0x0) {
    (**(code **)(*local_148 + 8))(local_148);
  }
  if (uVar9 != 0) {
    pvVar6 = (HGLOBAL)(*pcVar12)(uVar9);
    GlobalUnlock(pvVar6);
    pvVar6 = (HGLOBAL)(*pcVar12)(uVar9);
    GlobalFree(pvVar6);
  }
  if (puVar11 != (ushort *)0x0) {
    pvVar6 = (HGLOBAL)(*pcVar12)(puVar11);
    GlobalUnlock(pvVar6);
    pvVar6 = (HGLOBAL)(*pcVar12)(puVar11);
    GlobalFree(pvVar6);
  }
  if (*(HANDLE *)((int)local_134 + 0x218) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)((int)local_134 + 0x218));
  }
  return uVar10;
}


