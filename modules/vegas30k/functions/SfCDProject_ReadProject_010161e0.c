/* Module: vegas30k.dll
   Function: SfCDProject_ReadProject
   Address: 010161e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDProject_ReadProject(void *,struct tagSFCDPRJ_PROJECT *,long *) */

long SfCDProject_ReadProject(void *param_1,tagSFCDPRJ_PROJECT *param_2,long *param_3)

{
  void *hFile;
  tagSFCDPRJ_PROJECT *ptVar1;
  long lVar2;
  BOOL BVar3;
  int iVar4;
  tagSFCDPRJ_PROJECT *ptVar5;
  tagSFCDPRJ_PROJECT *ptVar6;
  tagSFCDPRJ_PROJECT *local_20;
  int local_1c;
  tagSFCDPRJ_PROJECT *local_18;
  undefined4 local_14;
  int local_10;
  DWORD local_c [3];
  
  ptVar1 = param_2;
                    /* 0x161e0  286  ?SfCDProject_ReadProject@@YGJPAXPAUtagSFCDPRJ_PROJECT@@PAJ@Z */
  hFile = param_1;
  ptVar6 = (tagSFCDPRJ_PROJECT *)*param_3;
  ptVar5 = param_2;
  for (iVar4 = 0x8d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)ptVar5 = 0;
    ptVar5 = ptVar5 + 4;
  }
  *(uint *)param_2 = *(uint *)param_2 | 1;
  local_20 = ptVar6;
  riff_SaveLocation(param_1,&local_14);
  lVar2 = riff_FindChunkHeader(hFile,0x20746d66,&param_2,&local_20);
  if ((-1 < lVar2) &&
     (local_20 = ptVar6, lVar2 = riff_ReadDataBounded(hFile,ptVar1 + 4,0x220,param_2), -1 < lVar2))
  {
    if (((uint)param_2 & 1) != 0) {
      param_2 = param_2 + 1;
    }
    riff_RestoreLocation(hFile,local_14);
    while ((tagSFCDPRJ_PROJECT *)0x7 < ptVar6) {
      iVar4 = riff_ReadChunkHeader(hFile,&local_10,&param_2);
      if (iVar4 < 0) goto LAB_0101640a;
      ptVar5 = ptVar6 + -8;
      if (local_10 == 0x5453494c) {
        BVar3 = ReadFile(hFile,&local_1c,4,local_c,(LPOVERLAPPED)0x0);
        if ((BVar3 == 0) || (local_c[0] != 4)) {
          SfCDProject_FreeProject(ptVar1);
          return -0x7ffb1ff8;
        }
        if (local_1c == 0x74736c66) {
          riff_SaveLocation(hFile,&param_1);
          local_18 = param_2;
          iVar4 = FUN_01015930(hFile,ptVar1 + 0x224,&local_18,*(undefined4 *)(ptVar1 + 4));
          if (iVar4 < 0) goto LAB_0101640a;
          riff_RestoreLocation(hFile,param_1);
        }
        if (local_1c == 0x74736c74) {
          riff_SaveLocation(hFile,&param_1);
          local_18 = param_2;
          iVar4 = FUN_01016140(hFile,ptVar1 + 0x228,param_2 + -4,*(undefined4 *)(ptVar1 + 4));
          if (iVar4 < 0) goto LAB_0101640a;
          riff_RestoreLocation(hFile,param_1);
        }
        local_c[1] = 0xfffffffc;
        local_c[2] = 0xffffffff;
        SetFilePointer(hFile,-4,(PLONG)(local_c + 2),1);
      }
      param_2 = (tagSFCDPRJ_PROJECT *)riff_SkipChunk(hFile,param_2);
      if ((ptVar5 < param_2) && (ptVar5 = ptVar6 + -7, ptVar5 != param_2)) {
        return 0x4e000;
      }
      ptVar6 = ptVar5 + -(int)param_2;
    }
    *param_3 = (long)ptVar6;
    riff_RestoreLocation(hFile,local_14);
    iVar4 = riff_FindListChunk(hFile,0x4f464e49,&param_2,&local_20);
    if (-1 < iVar4) {
      local_20 = param_2;
      iVar4 = _SfSummary_Load_12(hFile,ptVar1 + 0x22c,&local_20);
      if (iVar4 < 0) {
LAB_0101640a:
        SfCDProject_FreeProject(ptVar1);
        return iVar4;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}


