/* Module: vegas30k.dll
   Function: SfCDProject_WriteProject
   Address: 01015790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDProject_WriteProject(char *,void *,struct tagSFCDPRJ_PROJECT *,unsigned long
   *) */

long SfCDProject_WriteProject
               (char *param_1,void *param_2,tagSFCDPRJ_PROJECT *param_3,ulong *param_4)

{
  void *hFile;
  tagSFCDPRJ_PROJECT *ptVar1;
  int iVar2;
  BOOL BVar3;
  ulong local_10;
  int local_c;
  DWORD local_8;
  undefined4 local_4;
  
                    /* 0x15790  288
                       ?SfCDProject_WriteProject@@YGJPADPAXPAUtagSFCDPRJ_PROJECT@@PAK@Z */
  hFile = param_2;
  local_10 = 4;
  local_c = 0;
  iVar2 = riff_WriteFileID(param_2,0x4a504653,0);
  if (-1 < iVar2) {
    riff_SaveLocation(hFile,&param_2);
    param_2 = (void *)((int)param_2 + -8);
    iVar2 = riff_WriteChunkHeader(hFile,0x20746d66,0x220);
    ptVar1 = param_3;
    if (-1 < iVar2) {
      BVar3 = WriteFile(hFile,param_3 + 4,0x220,&local_8,(LPOVERLAPPED)0x0);
      if ((BVar3 != 0) && (local_8 == 0x220)) {
        local_10 = local_10 + 0x228;
        iVar2 = FUN_010156a0(hFile,*(undefined4 *)(ptVar1 + 0x224),&local_c);
        if (iVar2 < 0) goto LAB_01015909;
        local_10 = local_10 + local_c;
        iVar2 = FUN_010155b0(hFile,*(undefined4 *)(ptVar1 + 0x228),&local_c);
        if (iVar2 < 0) goto LAB_01015909;
        local_10 = local_10 + local_c;
        if ((*(int *)(ptVar1 + 0x230) != 0) && (*(int *)(ptVar1 + 0x22c) != 0)) {
          iVar2 = _SfSummary_Save_12(hFile,ptVar1 + 0x22c,&local_c);
          if (iVar2 < 0) goto LAB_01015909;
          local_10 = local_10 + local_c;
        }
        riff_SaveLocation(hFile,&local_4);
        riff_RestoreLocation(hFile,param_2);
        BVar3 = WriteFile(hFile,&local_10,4,&local_8,(LPOVERLAPPED)0x0);
        if ((BVar3 != 0) && (local_8 == 4)) {
          riff_RestoreLocation(hFile,local_4);
          local_10 = local_10 + 8;
          goto LAB_01015909;
        }
      }
      iVar2 = -0x7ffb1ff7;
    }
  }
LAB_01015909:
  if (param_4 != (ulong *)0x0) {
    *param_4 = local_10;
  }
  return iVar2;
}


