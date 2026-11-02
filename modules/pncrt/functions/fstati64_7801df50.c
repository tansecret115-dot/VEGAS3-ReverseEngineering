/* Module: pncrt.dll
   Function: fstati64
   Address: 7801df50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* fstati64 */

undefined4 __cdecl fstati64(uint param_1,uint *param_2)

{
  uint *puVar1;
  DWORD DVar2;
  int *piVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  _FILETIME local_4c;
  _SYSTEMTIME local_44;
  _BY_HANDLE_FILE_INFORMATION local_34;
  
                    /* 0x1df50  249  _fstati64 */
  if (DAT_78042840 <= param_1) {
LAB_7801dff3:
    piVar3 = _errno();
    *piVar3 = 9;
    return 0xffffffff;
  }
  piVar3 = &__pioinfo + ((int)param_1 >> 5);
  iVar6 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(iVar6 + 4 + *piVar3) & 1) == 0) goto LAB_7801dff3;
  FUN_78011b00(param_1);
  DVar2 = GetFileType(*(HANDLE *)(iVar6 + *piVar3));
  puVar1 = param_2;
  uVar5 = DVar2 & 0xffff7fff;
  if (uVar5 == 1) {
    *(undefined2 *)((int)param_2 + 6) = 0;
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined2 *)((int)param_2 + 10) = 0;
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined2 *)(param_2 + 2) = 1;
    BVar4 = GetFileInformationByHandle(*(HANDLE *)(iVar6 + *piVar3),&local_34);
    if (BVar4 != 0) {
      if (((byte)local_34.dwFileAttributes & 1) == 0) {
        *(ushort *)((int)puVar1 + 6) = *(ushort *)((int)puVar1 + 6) | 0x1b6;
      }
      else {
        *(ushort *)((int)puVar1 + 6) = *(ushort *)((int)puVar1 + 6) | 0x124;
      }
      BVar4 = FileTimeToLocalFileTime(&local_34.ftLastWriteTime,&local_4c);
      if ((BVar4 != 0) && (BVar4 = FileTimeToSystemTime(&local_4c,&local_44), BVar4 != 0)) {
        uVar5 = FUN_7802e770((uint)local_44.wYear,(uint)local_44.wMonth,(uint)local_44.wDay,
                             (uint)local_44.wHour,(uint)local_44.wMinute,(uint)local_44.wSecond,-1);
        puVar1[9] = uVar5;
        if ((local_34.ftLastAccessTime.dwLowDateTime != 0) ||
           (local_34.ftLastAccessTime.dwHighDateTime != 0)) {
          BVar4 = FileTimeToLocalFileTime(&local_34.ftLastAccessTime,&local_4c);
          if ((BVar4 == 0) || (BVar4 = FileTimeToSystemTime(&local_4c,&local_44), BVar4 == 0))
          goto LAB_7801dfd2;
          uVar5 = FUN_7802e770((uint)local_44.wYear,(uint)local_44.wMonth,(uint)local_44.wDay,
                               (uint)local_44.wHour,(uint)local_44.wMinute,(uint)local_44.wSecond,-1
                              );
        }
        puVar1[8] = uVar5;
        if ((local_34.ftCreationTime.dwLowDateTime == 0) &&
           (local_34.ftCreationTime.dwHighDateTime == 0)) {
          puVar1[10] = puVar1[9];
        }
        else {
          BVar4 = FileTimeToLocalFileTime(&local_34.ftCreationTime,&local_4c);
          if ((BVar4 == 0) || (BVar4 = FileTimeToSystemTime(&local_4c,&local_44), BVar4 == 0))
          goto LAB_7801dfd2;
          uVar5 = FUN_7802e770((uint)local_44.wYear,(uint)local_44.wMonth,(uint)local_44.wDay,
                               (uint)local_44.wHour,(uint)local_44.wMinute,(uint)local_44.wSecond,-1
                              );
          puVar1[10] = uVar5;
        }
        lVar7 = __allmul(local_34.nFileSizeHigh,0,0,1);
        *puVar1 = 0;
        *(byte *)((int)puVar1 + 7) = *(byte *)((int)puVar1 + 7) | 0x80;
        *(ulonglong *)(puVar1 + 6) = lVar7 + (ulonglong)local_34.nFileSizeLow;
        puVar1[4] = 0;
        FUN_78011b70(param_1);
        return 0;
      }
      goto LAB_7801dfd2;
    }
  }
  else {
    if (uVar5 == 2) {
      *(undefined2 *)((int)param_2 + 6) = 0x2000;
LAB_7801e024:
      *param_2 = param_1;
      param_2[4] = param_1;
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined2 *)(param_2 + 1) = 0;
      *(undefined2 *)(param_2 + 3) = 0;
      *(undefined2 *)((int)param_2 + 10) = 0;
      param_2[10] = 0;
      param_2[9] = 0;
      param_2[8] = 0;
      if (uVar5 == 2) {
        param_2[6] = 0;
        param_2[7] = 0;
        FUN_78011b70(param_1);
        return 0;
      }
      BVar4 = PeekNamedPipe(*(HANDLE *)(iVar6 + *piVar3),(LPVOID)0x0,0,(LPDWORD)0x0,
                            (LPDWORD)&param_2,(LPDWORD)0x0);
      if (BVar4 == 0) {
        puVar1[6] = 0;
        puVar1[7] = 0;
        FUN_78011b70(param_1);
        return 0;
      }
      puVar1[6] = (uint)param_2;
      puVar1[7] = (int)param_2 >> 0x1f;
      FUN_78011b70(param_1);
      return 0;
    }
    if (uVar5 == 3) {
      *(undefined2 *)((int)param_2 + 6) = 0x1000;
      goto LAB_7801e024;
    }
    if (uVar5 == 0) {
      piVar3 = _errno();
      *piVar3 = 9;
      goto LAB_7801dfd2;
    }
  }
  DVar2 = GetLastError();
  FUN_7800a870(DVar2);
LAB_7801dfd2:
  FUN_78011b70(param_1);
  return 0xffffffff;
}


