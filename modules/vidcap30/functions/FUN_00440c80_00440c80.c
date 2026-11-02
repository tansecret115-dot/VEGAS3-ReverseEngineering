/* Module: vidcap30.exe
   Function: FUN_00440c80
   Address: 00440c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00440c80(int param_1)

{
  LPSTR pCVar1;
  int iVar2;
  LPCVOID pMem;
  uint uVar3;
  undefined4 uVar4;
  uchar *puVar5;
  int iVar6;
  HGLOBAL pvVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int *local_32c;
  int local_328;
  int local_31c;
  int local_318;
  uchar local_30c [260];
  uchar local_208 [260];
  uchar local_104 [260];
  
  local_31c = 0;
  local_318 = 0;
  uVar12 = FUN_0045bb80(DAT_005bb4ec,0);
  uVar4 = DAT_005bb838;
  iVar11 = (int)((ulonglong)uVar12 >> 0x20);
  if ((*(uint *)(param_1 + 0x1c34) & 0x200) == 0) {
    if (DAT_005bb4e8 != 0) {
      iVar10 = **(int **)(param_1 + 0x1c64);
      while (iVar10 = iVar10 + -1, -1 < iVar10) {
        local_32c = (int *)0x0;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c64) + 8);
        iVar6 = *(int *)(iVar2 + iVar10 * 4);
        if (0 < iVar10) {
          local_32c = *(int **)(iVar2 + iVar10 * 4 + -4);
        }
        if (((*(int *)(iVar6 + 0x1c) <= iVar11) &&
            ((((*(int *)(iVar6 + 0x1c) < iVar11 || (*(uint *)(iVar6 + 0x18) < (uint)uVar12)) &&
              (*(int *)(iVar6 + 4) == 0)) && (*(char *)(iVar6 + 0x2d8) == '\0')))) &&
           ((local_32c == (int *)0x0 || (*(char *)((int)local_32c + 0x2d8) == '\0')))) {
          pMem = *(LPCVOID *)(iVar6 + 0x2d0);
          if (pMem != (LPCVOID)0x0) {
            pvVar7 = GlobalHandle(pMem);
            GlobalUnlock(pvVar7);
            pvVar7 = GlobalHandle(pMem);
            GlobalFree(pvVar7);
          }
          FUN_0045b8c0(iVar6 + 0x134);
          _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x1c64),iVar10,1,0);
        }
      }
    }
    local_32c = (int *)0x0;
    local_328 = 0;
    iVar11 = **(int **)(param_1 + 0x1c64);
    if (0 < iVar11) {
      do {
        uVar3 = *(uint *)(*(int *)(*(int *)(param_1 + 0x1c64) + 8) + local_328 * 4);
        pCVar1 = (LPSTR)(uVar3 + 0x134);
        puVar5 = (uchar *)_SfGetFileNameExtensionPtrA_4(pCVar1);
        uVar8 = FUN_004436d0(uVar4,uVar3 + 0x238,0);
        do {
          if (*(int *)(uVar3 + 4) == 0) {
            iVar10 = local_31c + 1;
            local_31c = iVar10;
          }
          else {
            iVar10 = local_318 + 1;
            local_318 = iVar10;
          }
          pcVar9 = "Still";
          if (*(int *)(uVar3 + 4) == 0) {
            pcVar9 = "Clip";
          }
          SfPrintF(local_104,"%s - %s %.03d",uVar3 + 0x238,pcVar9,iVar10);
          _SfGetPathNameFromFilePath_12(pCVar1,local_30c,0x104);
          _mbscat(local_30c,local_104);
          _mbscat(local_30c,puVar5);
          iVar10 = lstrcmpiA((LPCSTR)local_30c,pCVar1);
        } while ((iVar10 != 0) &&
                ((iVar10 = FUN_004444d0(uVar4,uVar8,local_104,0), iVar10 != 0 ||
                 (iVar10 = _SfDoesFileExist_4(local_30c), iVar10 != 0))));
        iVar10 = lstrcmpiA((LPCSTR)local_30c,pCVar1);
        if (iVar10 != 0) {
          iVar10 = FUN_0045b950(pCVar1,local_30c);
          if (iVar10 != 0) {
            lstrcpynA(pCVar1,(LPCSTR)local_30c,0x104);
            *(undefined1 *)(uVar3 + 0x237) = 0;
            lstrcpynA((LPSTR)(uVar3 + 0x30),(LPCSTR)local_104,0x104);
            *(undefined1 *)(uVar3 + 0x133) = 0;
          }
          if (local_32c != (int *)0x0) {
            lstrcpynA((LPSTR)((int)local_32c + 0x2d8),(LPCSTR)local_30c,0x104);
            *(undefined1 *)((int)local_32c + 0x3db) = 0;
          }
        }
        local_32c = (int *)(-(uint)(*(char *)(uVar3 + 0x2d8) != '\0') & uVar3);
        local_328 = local_328 + 1;
      } while (local_328 < iVar11);
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x1c34) & 0x80) == 0) {
      local_32c = (int *)FUN_00446490(*(undefined4 *)(DAT_005ba4c0 + 0x70));
    }
    else {
      local_32c = *(int **)(param_1 + 0x1c6c);
    }
    iVar11 = **(int **)(param_1 + 0x1c64);
    iVar10 = *local_32c;
    local_328 = 0;
    if (0 < iVar11) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c64) + 8) + local_328 * 4);
        if ((0 < iVar10) && (*(int *)(iVar2 + 0x3dc) < iVar10)) {
          pCVar1 = (LPSTR)(iVar2 + 0x134);
          iVar6 = *(int *)(local_32c[2] + *(int *)(iVar2 + 0x3dc) * 4);
          puVar5 = (uchar *)_SfGetFileNameExtensionPtrA_4(pCVar1);
          _SfGetPathNameFromFilePath_12(pCVar1,local_208,0x104);
          _mbscat(local_208,*(uchar **)(iVar6 + 0x10));
          _mbscat(local_208,puVar5);
          iVar6 = FUN_0045b950(pCVar1,local_208);
          if (iVar6 != 0) {
            lstrcpynA(pCVar1,(LPCSTR)local_208,0x104);
            *(undefined1 *)(iVar2 + 0x237) = 0;
          }
        }
        local_328 = local_328 + 1;
      } while (local_328 < iVar11);
      return;
    }
  }
  return;
}


