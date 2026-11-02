/* Module: vegas30k.dll
   Function: SfDvdiParseVIDEO_TS
   Address: 01088980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiParseVIDEO_TS(void *,char *,struct tagSFVMG_INFO *) */

long SfDvdiParseVIDEO_TS(void *param_1,char *param_2,tagSFVMG_INFO *param_3)

{
  int *piVar1;
  HANDLE hFile;
  DWORD dwBytes;
  HGLOBAL pvVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  tagVMGI_MAT *lpBuffer;
  DWORD local_8;
  undefined4 local_4;
  
                    /* 0x88980  374  ?SfDvdiParseVIDEO_TS@@YGJPAXPADPAUtagSFVMG_INFO@@@Z */
  lVar7 = 0;
  lpBuffer = (tagVMGI_MAT *)0x0;
  if (param_1 == (void *)0x0) {
    return -0x7fffbffb;
  }
  hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return -0x7ffb1ff9;
  }
  dwBytes = GetFileSize(hFile,(LPDWORD)0x0);
  if ((dwBytes != 0) && (dwBytes != 0xffffffff)) {
    pvVar2 = GlobalAlloc(0x40,dwBytes);
    lpBuffer = GlobalLock(pvVar2);
    if (lpBuffer == (tagVMGI_MAT *)0x0) {
      lVar7 = -0x7ff8fff2;
      goto LAB_01088bfd;
    }
    BVar3 = ReadFile(hFile,lpBuffer,dwBytes,&local_8,(LPOVERLAPPED)0x0);
    if ((BVar3 != 0) && (local_8 == dwBytes)) {
      SfCdiSwap_VMGI_MAT(lpBuffer);
      *param_3 = (tagSFVMG_INFO)lpBuffer[0x21];
      *(tagVMGI_MAT *)(param_3 + 1) = lpBuffer[0x23];
      *(undefined2 *)(param_3 + 2) = *(undefined2 *)(lpBuffer + 0x26);
      *(undefined2 *)(param_3 + 4) = *(undefined2 *)(lpBuffer + 0x28);
      *(tagVMGI_MAT *)(param_3 + 6) = lpBuffer[0x2a];
      if (*(int *)(lpBuffer + 0x84) == 0) {
        *(undefined4 *)(param_3 + 0x1c) = 0;
      }
      else {
        *(undefined4 *)(param_3 + 0x1c) = 1;
        lVar7 = SfCdiGetProgramChainInfo
                          ((tagPGCI_GI *)(lpBuffer + *(ulong *)(lpBuffer + 0x84)),
                           *(ulong *)(lpBuffer + 0x84),0,*(tagSFIFO_PGCI **)(param_3 + 0x20));
        if (lVar7 < 0) goto LAB_01088bfd;
      }
      if ((((((*(int *)(lpBuffer + 0xc4) == 0) ||
             (lVar7 = FUN_01088910(param_3,lpBuffer + *(int *)(lpBuffer + 0xc4) * 0x800), -1 < lVar7
             )) && ((*(int *)(lpBuffer + 200) == 0 ||
                    (lVar7 = FUN_01088700(param_3,lpBuffer + *(int *)(lpBuffer + 200) * 0x800),
                    -1 < lVar7)))) &&
           ((*(int *)(lpBuffer + 0xcc) == 0 ||
            (lVar7 = FUN_010885c0(param_3,lpBuffer + *(int *)(lpBuffer + 0xcc) * 0x800), -1 < lVar7)
            ))) && ((*(int *)(lpBuffer + 0xd8) == 0 ||
                    (lVar7 = FUN_01088550(param_3,lpBuffer + *(int *)(lpBuffer + 0xd8) * 0x800),
                    -1 < lVar7)))) &&
         (((*(undefined2 *)(param_3 + 0x3c) = *(undefined2 *)(lpBuffer + 0x100),
           lpBuffer[0x103] == (tagVMGI_MAT)0x0 ||
           (lVar7 = _SfList_AllocAndInsertItem_20
                              (*(undefined4 *)(param_3 + 0x40),lpBuffer + 0x104,8,0xffffffff,0),
           -1 < lVar7)) &&
          ((lpBuffer[0x155] == (tagVMGI_MAT)0x0 ||
           (lVar7 = _SfList_AllocAndInsertItem_20
                              (*(undefined4 *)(param_3 + 0x44),lpBuffer + 0x156,6,0xffffffff,0),
           -1 < lVar7)))))) {
        iVar6 = 0;
        while( true ) {
          piVar1 = *(int **)((int)param_1 + 0x48);
          if (piVar1 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar1;
          }
          if (iVar5 <= iVar6) break;
          if (piVar1 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar1;
          }
          if ((iVar6 < 0) || (iVar5 + -1 < iVar6)) {
            local_4 = 0;
          }
          else {
            local_4 = *(undefined4 *)(piVar1[2] + iVar6 * 4);
          }
          lVar7 = _SfList_AllocAndInsertItem_20(piVar1,&local_4,4,0xffffffff,0);
          iVar6 = iVar6 + 1;
        }
        iVar6 = 0;
        piVar1 = *(int **)((int)param_1 + 0x4c);
        while( true ) {
          if (piVar1 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar1;
          }
          if (iVar5 <= iVar6) goto LAB_01088be9;
          if (piVar1 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar1;
          }
          if ((iVar6 < 0) || (iVar5 + -1 < iVar6)) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = *(undefined4 **)(piVar1[2] + iVar6 * 4);
          }
          if (*(int *)*puVar4 != 0) break;
          iVar6 = iVar6 + 1;
        }
        *(int **)(param_3 + 0xc) = (int *)*puVar4;
LAB_01088be9:
        _SfList_Sort_12(*(undefined4 *)(param_3 + 8),0,&LAB_010871b0);
      }
      goto LAB_01088bfd;
    }
  }
  lVar7 = -0x7ffb1ff8;
LAB_01088bfd:
  CloseHandle(hFile);
  if (lpBuffer != (tagVMGI_MAT *)0x0) {
    pvVar2 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar2);
  }
  return lVar7;
}


