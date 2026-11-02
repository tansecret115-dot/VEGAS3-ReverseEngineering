/* Module: stl2plg.dll
   Function: FUN_004083e0
   Address: 004083e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004083e0(int param_1)

{
  LPCWSTR lpWideCharStr;
  int iVar1;
  bool bVar2;
  HANDLE hFile;
  HGLOBAL pvVar3;
  uint *puVar4;
  DWORD DVar5;
  int iVar6;
  LPVOID pvVar7;
  undefined3 extraout_var;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int local_10c;
  CHAR local_104 [259];
  undefined1 local_1;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  local_10c = 0;
  if (*(int *)(param_1 + 4) == 0) {
    return -0x7ffb1ff9;
  }
  lpWideCharStr = (LPCWSTR)(param_1 + 0x34);
  if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
    WideCharToMultiByte(0,0,lpWideCharStr,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x104) {
    local_104[0] = '\0';
  }
  local_1 = 0;
  hFile = CreateFileA(local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    ((LPFILETIME)(param_1 + 0xc))->dwLowDateTime = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,(LPFILETIME)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(LPCVOID *)(param_1 + 0x14) != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x14));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x14));
      GlobalFree(pvVar3);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (*(LPCVOID *)(param_1 + 0x18) != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x18));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x18));
      GlobalFree(pvVar3);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (*(LPCVOID *)(param_1 + 0x1c) != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c));
      GlobalFree(pvVar3);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    puVar4 = FUN_004077a0(hFile);
    *(uint **)(param_1 + 0x14) = puVar4;
    if (puVar4 == (uint *)0x0) {
      local_10c = -0x7ff8fff2;
    }
    else {
      DVar5 = SetFilePointer(hFile,0,(PLONG)0x0,1);
      *(DWORD *)(param_1 + 0x20) = DVar5;
      FUN_00408600((byte *)(param_1 + 0x248),0x100,*(int *)(param_1 + 0x14));
      piVar9 = *(int **)(param_1 + 0x14);
      if (piVar9[4] == 3) {
        iVar6 = 0xc;
      }
      else {
        iVar6 = piVar9[8] << 2;
      }
      pvVar3 = GlobalAlloc(0x42,iVar6 + *piVar9);
      pvVar7 = GlobalLock(pvVar3);
      *(LPVOID *)(param_1 + 0x18) = pvVar7;
      if (pvVar7 != (LPVOID)0x0) {
        bVar2 = FUN_0040f860(*(int *)(param_1 + 0x14));
        if (CONCAT31(extraout_var,bVar2) == 0) {
          piVar9 = *(int **)(param_1 + 0x14);
          if (piVar9[4] == 3) {
            iVar6 = 0xc;
          }
          else {
            iVar6 = piVar9[8] << 2;
          }
          iVar1 = *piVar9;
          piVar10 = *(int **)(param_1 + 0x18);
          for (uVar8 = (uint)(iVar6 + iVar1) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *piVar10 = *piVar9;
            piVar9 = piVar9 + 1;
            piVar10 = piVar10 + 1;
          }
          for (uVar8 = iVar6 + iVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(char *)piVar10 = (char)*piVar9;
            piVar9 = (int *)((int)piVar9 + 1);
            piVar10 = (int *)((int)piVar10 + 1);
          }
        }
        else {
          FUN_0040fe70(*(undefined4 **)(param_1 + 0x18),0x1b,*(int *)(*(int *)(param_1 + 0x14) + 4),
                       *(int *)(*(int *)(param_1 + 0x14) + 8),(uint *)0x0,0,(int *)0x0);
        }
      }
    }
    CloseHandle(hFile);
  }
  *(uint *)(param_1 + 8) = (uint)(-1 < local_10c);
  return local_10c;
}


