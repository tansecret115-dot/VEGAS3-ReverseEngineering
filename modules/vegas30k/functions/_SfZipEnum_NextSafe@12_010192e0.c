/* Module: vegas30k.dll
   Function: _SfZipEnum_NextSafe@12
   Address: 010192e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfZipEnum_NextSafe_12(undefined4 param_1,int *param_2,uchar *param_3)

{
  char cVar1;
  LPSTR lpszDst;
  BOOL BVar2;
  HGLOBAL pvVar3;
  undefined2 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int local_148;
  DWORD local_140;
  int local_13c;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined2 local_12e;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  ushort local_120;
  ushort uStack_11e;
  ushort local_11c;
  undefined4 local_112;
  int local_10c;
  int local_108;
  CHAR local_104 [260];
  
                    /* 0x192e0  1316  _SfZipEnum_NextSafe@12 */
  if ((param_2 == (int *)0x0) ||
     (iVar9 = *param_2, (int)(uint)*(ushort *)(iVar9 + 0x1e) <= param_2[1] + 1)) {
    return &DAT_80070057;
  }
  SetFilePointer(*(HANDLE *)(iVar9 + 8),param_2[3],(PLONG)0x0,0);
  BVar2 = ReadFile(*(HANDLE *)(iVar9 + 8),&local_13c,0x2e,&local_140,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return (undefined1 *)0x8004e008;
  }
  if (local_13c != 0x2014b50) {
    return (undefined1 *)0x8004e008;
  }
  local_10c = local_120 + 0x31;
  local_108 = local_10c + (uint)uStack_11e;
  pvVar3 = GlobalAlloc(0x42,local_108 + 1 + (uint)local_11c);
  puVar4 = GlobalLock(pvVar3);
  if (puVar4 == (undefined2 *)0x0) {
    return (undefined1 *)0x8007000e;
  }
  local_148 = 1;
  *puVar4 = local_136;
  puVar4[1] = local_134;
  puVar4[2] = local_132;
  puVar4[3] = local_130;
  puVar4[4] = local_12e;
  *(undefined4 *)(puVar4 + 6) = local_12c;
  *(undefined4 *)(puVar4 + 8) = local_128;
  *(undefined4 *)(puVar4 + 10) = local_124;
  puVar4[0xc] = local_120;
  puVar4[0xd] = uStack_11e;
  puVar4[0xe] = local_11c;
  *(undefined4 *)(puVar4 + 0x10) = local_112;
  *(undefined2 **)(puVar4 + 0x12) = puVar4 + 0x18;
  pcVar10 = GlobalHandle_exref;
  if (local_120 != 0) {
    pvVar3 = GlobalAlloc(0x42,local_120 + 1);
    pcVar5 = GlobalLock(pvVar3);
    if ((pcVar5 == (char *)0x0) ||
       (BVar2 = ReadFile(*(HANDLE *)(iVar9 + 8),pcVar5,(uint)local_120,&local_140,(LPOVERLAPPED)0x0)
       , BVar2 == 0)) {
      local_148 = 0;
    }
    else {
      iVar11 = 0;
      local_148 = 1;
      if (*pcVar5 != '\0') {
        pcVar6 = pcVar5;
        do {
          if ((int)(uint)local_120 <= iVar11) break;
          cVar1 = *pcVar6;
          pcVar6[(int)(local_104 + -(int)pcVar5)] = cVar1;
          if (cVar1 == '/') {
            pcVar6[(int)(local_104 + -(int)pcVar5)] = '\\';
          }
          pcVar8 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          iVar11 = iVar11 + 1;
        } while (*pcVar8 != '\0');
      }
      lpszDst = *(LPSTR *)(puVar4 + 0x12);
      local_104[local_120] = '\0';
      OemToCharBuffA(local_104,lpszDst,local_120 + 1);
      if ((*(byte *)(iVar9 + 0x10) & 1) != 0) {
        uVar7 = _SfGetFileNamePtrA_4(*(undefined4 *)(puVar4 + 0x12));
        *(undefined4 *)(puVar4 + 0x12) = uVar7;
      }
    }
    pcVar10 = GlobalHandle_exref;
    if (pcVar5 != (char *)0x0) {
      pvVar3 = GlobalHandle(pcVar5);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pcVar5);
      GlobalFree(pvVar3);
    }
    if (local_148 == 0) goto LAB_010196a4;
  }
  if (uStack_11e == 0) {
    *(undefined4 *)(puVar4 + 0x14) = 0;
  }
  else {
    *(LPVOID *)(puVar4 + 0x14) = (LPVOID)(local_10c + (int)puVar4);
    local_148 = ReadFile(*(HANDLE *)(iVar9 + 8),(LPVOID)(local_10c + (int)puVar4),(uint)uStack_11e,
                         &local_140,(LPOVERLAPPED)0x0);
  }
  if (local_148 != 0) {
    *(int *)(puVar4 + 0x16) = (int)puVar4 + local_108;
    if (local_11c != 0) {
      pvVar3 = GlobalAlloc(0x42,local_11c + 1);
      pcVar5 = GlobalLock(pvVar3);
      if ((pcVar5 == (char *)0x0) ||
         (BVar2 = ReadFile(*(HANDLE *)(iVar9 + 8),pcVar5,(uint)local_11c,&local_140,
                           (LPOVERLAPPED)0x0), BVar2 == 0)) {
        local_148 = 0;
      }
      else {
        cVar1 = *pcVar5;
        pcVar6 = *(char **)(puVar4 + 0x16);
        local_148 = 1;
        pcVar8 = pcVar5;
        for (iVar9 = 0;
            (cVar1 != '\0' && (pcVar10 = GlobalHandle_exref, iVar9 < (int)(uint)local_11c));
            iVar9 = iVar9 + 1) {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar8;
          pcVar10 = GlobalHandle_exref;
        }
      }
      if (pcVar5 != (char *)0x0) {
        pvVar3 = (HGLOBAL)(*pcVar10)(pcVar5);
        GlobalUnlock(pvVar3);
        pvVar3 = (HGLOBAL)(*pcVar10)(pcVar5);
        GlobalFree(pvVar3);
      }
    }
    if (local_148 != 0) {
      param_2[2] = param_2[3];
      param_2[1] = param_2[1] + 1;
      param_2[3] = local_120 + 0x2e + (uint)uStack_11e + param_2[3] + (uint)local_11c;
      _mbscpy(param_3,*(uchar **)(puVar4 + 0x12));
      pvVar3 = (HGLOBAL)(*pcVar10)(puVar4);
      GlobalUnlock(pvVar3);
      pvVar3 = (HGLOBAL)(*pcVar10)(puVar4);
      GlobalFree(pvVar3);
      return (undefined1 *)0x0;
    }
  }
LAB_010196a4:
  pvVar3 = (HGLOBAL)(*pcVar10)(puVar4);
  GlobalUnlock(pvVar3);
  pvVar3 = (HGLOBAL)(*pcVar10)(puVar4);
  GlobalFree(pvVar3);
  return (undefined1 *)0x8004e008;
}


