/* Module: vegas30k.dll
   Function: SfVcdiAddMPEGItem
   Address: 01012780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfVcdiAddMPEGItem(struct tagDIR_TREE *,char *,unsigned int,int,unsigned short *)
    */

long SfVcdiAddMPEGItem(tagDIR_TREE *param_1,char *param_2,uint param_3,int param_4,ushort *param_5)

{
  int iVar1;
  tagDIR_ENTRY *ptVar2;
  HANDLE hFindFile;
  int iVar3;
  long lVar4;
  tagDIR_ENTRY **unaff_EDI;
  int local_154;
  char local_150 [16];
  _WIN32_FIND_DATAA local_140;
  
                    /* 0x12780  505  ?SfVcdiAddMPEGItem@@YGJPAUtagDIR_TREE@@PADIHPAG@Z */
  *param_5 = 0;
  ptVar2 = DtGetLocalDirEntry(*(tagDIR_ENTRY **)param_1,"MPEGAV");
  if (ptVar2 == (tagDIR_ENTRY *)0x0) {
    return -0x7ff8ffa9;
  }
  hFindFile = FindFirstFileA(param_2,&local_140);
  if (hFindFile == (HANDLE)0xffffffff) {
    lVar4 = -0x7ffb1ff9;
  }
  else {
    FindClose(hFindFile);
    iVar3 = 0;
    if (*(int **)(ptVar2 + 0x214) != (int *)0x0) {
      iVar3 = **(int **)(ptVar2 + 0x214);
    }
    SfPrintF(local_150,"AVSEQ%02u.DAT",(iVar3 + 2U & 0xffff) - 1);
    lVar4 = DtAllocateDirectoryEntry
                      (param_1,ptVar2,local_150,local_150,param_2,
                       (ulonglong)local_140.nFileSizeLow << 0x20,(ulonglong)local_140.nFileSizeHigh,
                       1,(int)&local_154,unaff_EDI);
    if (-1 < lVar4) {
      lVar4 = FUN_01011570(local_154);
      if (-1 < lVar4) {
        iVar1 = *(int *)(local_154 + 0x350);
        *(uint *)(iVar1 + 4) = param_3;
        *(int *)(iVar1 + 8) = param_4;
        *param_5 = (ushort)(iVar3 + 2U);
        return lVar4;
      }
    }
  }
  return lVar4;
}


