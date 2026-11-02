/* Module: vegas30k.dll
   Function: SfDvdiParseVTS_IFO
   Address: 0108a1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiParseVTS_IFO(void *,char *,struct tagSFVTS_INFO *) */

long SfDvdiParseVTS_IFO(void *param_1,char *param_2,tagSFVTS_INFO *param_3)

{
  int *piVar1;
  void *pvVar2;
  HANDLE hFile;
  DWORD dwBytes;
  HGLOBAL pvVar3;
  BOOL BVar4;
  char *_Src;
  int iVar5;
  undefined4 uVar6;
  tagVTSI_MAT tVar7;
  tagVTSI_MAT *lpBuffer;
  char *_Format;
  tagSFVTS_INFO *ptVar8;
  DWORD local_4;
  
                    /* 0x8a1e0  375  ?SfDvdiParseVTS_IFO@@YGJPAXPADPAUtagSFVTS_INFO@@@Z */
  pvVar2 = param_1;
  lpBuffer = (tagVTSI_MAT *)0x0;
  if (param_1 == (void *)0x0) {
    return -0x7ff8ffa9;
  }
  hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return -0x7ffb1ff9;
  }
  dwBytes = GetFileSize(hFile,(LPDWORD)0x0);
  if ((dwBytes != 0) && (dwBytes != 0xffffffff)) {
    pvVar3 = GlobalAlloc(0x40,dwBytes);
    lpBuffer = GlobalLock(pvVar3);
    if (lpBuffer == (tagVTSI_MAT *)0x0) {
      iVar5 = -0x7ff8fff2;
      goto LAB_0108a4ce;
    }
    BVar4 = ReadFile(hFile,lpBuffer,dwBytes,&local_4,(LPOVERLAPPED)0x0);
    if ((BVar4 != 0) && (local_4 == dwBytes)) {
      _Format = "VTS_%02u_0.IFO";
      ptVar8 = param_3;
      _Src = (char *)_SfGetFileNamePtrA_4(param_2);
      sscanf(_Src,_Format,ptVar8);
      SfCdiSwap_VTSI_MAT(lpBuffer);
      *(tagVTSI_MAT *)(param_3 + 1) = lpBuffer[0x21];
      *(tagVTSI_MAT *)(param_3 + 2) = lpBuffer[0x25];
      *(undefined2 *)(param_3 + 0x24) = *(undefined2 *)(lpBuffer + 0x100);
      if (lpBuffer[0x103] != (tagVTSI_MAT)0x0) {
        iVar5 = _SfList_AllocAndInsertItem_20
                          (*(undefined4 *)(param_3 + 0x28),lpBuffer + 0x104,8,0xffffffff,0);
        if (iVar5 < 0) goto LAB_0108a4ce;
      }
      if (lpBuffer[0x155] != (tagVTSI_MAT)0x0) {
        iVar5 = _SfList_AllocAndInsertItem_20
                          (*(undefined4 *)(param_3 + 0x2c),lpBuffer + 0x156,6,0xffffffff,0);
        if (iVar5 < 0) goto LAB_0108a4ce;
      }
      tVar7 = (tagVTSI_MAT)0x0;
      *(undefined2 *)(param_3 + 0x54) = *(undefined2 *)(lpBuffer + 0x200);
      param_1 = (void *)0x0;
      if (lpBuffer[0x203] != (tagVTSI_MAT)0x0) {
        do {
          iVar5 = _SfList_AllocAndInsertItem_20
                            (*(undefined4 *)(param_3 + 0x58),lpBuffer + (int)param_1 * 8 + 0x204,8,
                             0xffffffff,0);
          if (iVar5 < 0) break;
          tVar7 = (tagVTSI_MAT)((char)tVar7 + '\x01');
          param_1 = (void *)(uint)(byte)tVar7;
        } while ((byte)tVar7 < (byte)lpBuffer[0x203]);
      }
      tVar7 = (tagVTSI_MAT)0x0;
      param_1 = (void *)0x0;
      if (lpBuffer[0x255] != (tagVTSI_MAT)0x0) {
        do {
          iVar5 = _SfList_AllocAndInsertItem_20
                            (*(undefined4 *)(param_3 + 0x5c),lpBuffer + (int)param_1 * 6 + 0x256,6,
                             0xffffffff,0);
          if (iVar5 < 0) break;
          tVar7 = (tagVTSI_MAT)((char)tVar7 + '\x01');
          param_1 = (void *)(uint)(byte)tVar7;
        } while ((byte)tVar7 < (byte)lpBuffer[0x255]);
      }
      memmove(param_3 + 0x60,lpBuffer + 0x318,0xc0);
      iVar5 = FUN_01089e60(param_3,lpBuffer + *(int *)(lpBuffer + 0xcc) * 0x800);
      if ((-1 < iVar5) &&
         (iVar5 = FUN_01089fd0(param_3,lpBuffer + *(int *)(lpBuffer + 200) * 0x800), -1 < iVar5)) {
        if (*(int *)(lpBuffer + 0xd0) != 0) {
          FUN_01089c20(param_3,lpBuffer + *(int *)(lpBuffer + 0xd0) * 0x800);
        }
        if (*(int *)(lpBuffer + 0xd4) != 0) {
          FUN_01089b10(param_3,lpBuffer + *(int *)(lpBuffer + 0xd4) * 0x800);
        }
        if (*(int *)(lpBuffer + 0xd8) != 0) {
          FUN_01089aa0(param_3,lpBuffer + *(int *)(lpBuffer + 0xd8) * 0x800);
        }
        if (*(int *)(lpBuffer + 0xe0) != 0) {
          FUN_01089a30(param_3,lpBuffer + *(int *)(lpBuffer + 0xe0) * 0x800);
        }
        *(void **)(param_3 + 4) = pvVar2;
        param_1 = (void *)0x0;
        while( true ) {
          piVar1 = *(int **)(param_3 + 0x30);
          if (piVar1 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar1;
          }
          if (iVar5 <= (int)param_1) break;
          if (piVar1 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar1;
          }
          if (iVar5 + -1 < (int)param_1) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)(piVar1[2] + (int)param_1 * 4);
          }
          iVar5 = FUN_01087280(pvVar2,param_3,uVar6);
          if (iVar5 < 0) break;
          param_1 = (void *)(uint)(byte)((char)param_1 + 1);
        }
        iVar5 = FUN_010874a0(pvVar2,param_3);
        if (-1 < iVar5) {
          FUN_01089710(pvVar2,param_3);
        }
      }
      goto LAB_0108a4ce;
    }
  }
  iVar5 = -0x7ffb1ff8;
LAB_0108a4ce:
  CloseHandle(hFile);
  if (lpBuffer != (tagVTSI_MAT *)0x0) {
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar3);
  }
  return iVar5;
}


