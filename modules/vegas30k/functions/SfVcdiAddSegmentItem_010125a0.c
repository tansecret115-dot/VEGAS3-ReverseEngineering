/* Module: vegas30k.dll
   Function: SfVcdiAddSegmentItem
   Address: 010125a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfVcdiAddSegmentItem(struct tagDIR_TREE *,char *,unsigned int,unsigned
   char,unsigned char,unsigned short *) */

long SfVcdiAddSegmentItem
               (tagDIR_TREE *param_1,char *param_2,uint param_3,uchar param_4,uchar param_5,
               ushort *param_6)

{
  tagDIR_ENTRY *ptVar1;
  HANDLE hFindFile;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  tagDIR_ENTRY **unaff_EDI;
  byte local_15e;
  byte local_15d;
  int local_15c;
  uint local_158;
  tagSFVCD_INFO *local_154;
  char local_150 [16];
  _WIN32_FIND_DATAA local_140;
  
                    /* 0x125a0  506  ?SfVcdiAddSegmentItem@@YGJPAUtagDIR_TREE@@PADIEEPAG@Z */
  *param_6 = 0;
  ptVar1 = DtGetLocalDirEntry(*(tagDIR_ENTRY **)param_1,"SEGMENT");
  if ((ptVar1 == (tagDIR_ENTRY *)0x0) ||
     (local_154 = sfvcdGetVCD_INFO(*(tagDIR_ENTRY **)param_1), local_154 == (tagSFVCD_INFO *)0x0)) {
    return -0x7ff8ffa9;
  }
  hFindFile = FindFirstFileA(param_2,&local_140);
  if (hFindFile == (HANDLE)0xffffffff) {
    return -0x7ffb1ff9;
  }
  FindClose(hFindFile);
  iVar2 = 0;
  if (*(int **)(ptVar1 + 0x214) != (int *)0x0) {
    iVar2 = **(int **)(ptVar1 + 0x214);
  }
  local_158 = iVar2 + 1;
  SfPrintF(local_150,"ITEM%04u.DAT",local_158 & 0xffff);
  lVar3 = DtAllocateDirectoryEntry
                    (param_1,ptVar1,local_150,local_150,param_2,
                     (ulonglong)local_140.nFileSizeLow << 0x20,(ulonglong)local_140.nFileSizeHigh,1,
                     (int)&local_15c,unaff_EDI);
  if ((-1 < lVar3) && (lVar3 = FUN_010114e0(local_15c), -1 < lVar3)) {
    iVar2 = *(int *)(local_15c + 0x350);
    *(uchar *)(iVar2 + 0xd) = param_5;
    *(uint *)(iVar2 + 4) = param_3;
    *(uchar *)(iVar2 + 0xc) = param_4;
    uVar4 = local_158;
    if (param_3 % 0x96 != 0) {
      uVar4 = 0x96 - param_3 % 0x96;
    }
    uVar4 = (uVar4 + param_3) / 0x96;
    *(uint *)(iVar2 + 0x10) = uVar4;
    uVar5 = 0;
    if (uVar4 != 0) {
      local_15d = param_5 & 3;
      do {
        local_15e = ((uVar5 != 0) << 3 | param_4 & 7) << 2 | local_15e & 0xc0 ^ local_15d;
        lVar3 = _SfList_InsertList_16(*(undefined4 *)(local_154 + 0x44),0xffffffff,&local_15e,1);
        if (lVar3 < 0) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(iVar2 + 0x10));
    }
    *param_6 = (ushort)local_158;
  }
  return lVar3;
}


