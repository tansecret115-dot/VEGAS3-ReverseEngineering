/* Module: vegas30k.dll
   Function: displist_Load
   Address: 010ffe50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall displist_Load,12 */

int displist_Load(HANDLE param_1,int *param_2,int *param_3)

{
  SIZE_T dwBytes;
  HANDLE hFile;
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_14;
  int local_10;
  DWORD local_c;
  int local_8;
  int local_4;
  
                    /* 0xffe50  1364  _displist_Load@12 */
  hFile = param_1;
  iVar5 = *param_2;
  if (iVar5 == 0) {
    return 0;
  }
  local_4 = iVar5;
  riff_SaveLocation(param_1,&local_14);
  piVar1 = param_3;
LAB_010ffe84:
  do {
    if (*piVar1 < 8) {
      riff_RestoreLocation(hFile,local_14);
      return 0;
    }
    iVar2 = riff_ReadChunkHeader(hFile,&local_10,&param_1);
    *piVar1 = *piVar1 + -8;
    if (iVar2 != 0) {
      return iVar2;
    }
    if (local_10 == 0x50534944) {
      BVar3 = ReadFile(hFile,&local_8,4,&local_c,(LPOVERLAPPED)0x0);
      if ((BVar3 == 0) || (local_c != 4)) {
        iVar5 = -0x7ffb1ff8;
LAB_010fffbb:
        displist_Free(param_2);
        riff_RestoreLocation(hFile,local_14);
        return iVar5;
      }
      iVar2 = 0;
      if (0 < iVar5) {
        piVar6 = (int *)param_2[1];
        do {
          if (local_8 == *piVar6) {
            iVar2 = iVar2 * 0xc;
            dwBytes = (int)param_1 - 4;
            hMem = GlobalAlloc(0x42,dwBytes);
            pvVar4 = GlobalLock(hMem);
            *(LPVOID *)(param_2[1] + 8 + iVar2) = pvVar4;
            if (*(int *)(param_2[1] + iVar2 + 8) == 0) {
              iVar5 = -0x7ff8fff2;
              goto LAB_010fffbb;
            }
            *(SIZE_T *)(param_2[1] + iVar2 + 4) = dwBytes;
            iVar5 = riff_ReadData(hFile,*(undefined4 *)(param_2[1] + 8 + iVar2),dwBytes);
            if (iVar5 != 0) goto LAB_010fffbb;
            if (((uint)param_1 & 1) != 0) {
              param_1 = (HANDLE)((int)param_1 + 1);
            }
            *piVar1 = *piVar1 - (int)param_1;
            iVar5 = local_4;
            goto LAB_010ffe84;
          }
          iVar2 = iVar2 + 1;
          piVar6 = piVar6 + 3;
        } while (iVar2 < iVar5);
      }
      SetFilePointer(hFile,-4,(PLONG)0x0,1);
    }
    param_1 = (HANDLE)riff_SkipChunk(hFile,param_1);
    *piVar1 = *piVar1 - (int)param_1;
  } while( true );
}


