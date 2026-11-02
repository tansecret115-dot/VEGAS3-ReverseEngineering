/* Module: vegas30k.dll
   Function: DtCreateDirectoryTree
   Address: 01017aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtCreateDirectoryTree(struct tagDIR_TREE * *) */

long DtCreateDirectoryTree(tagDIR_TREE **param_1)

{
  tagDIR_TREE *ptVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  tagDIR_ENTRY **unaff_EDI;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  tagDIR_TREE *ptVar11;
  undefined1 local_200 [512];
  
                    /* 0x17aa0  44  ?DtCreateDirectoryTree@@YGJPAPAUtagDIR_TREE@@@Z */
  ptVar1 = calloc(1,0x270);
  if (ptVar1 == (tagDIR_TREE *)0x0) {
    *param_1 = (tagDIR_TREE *)0x0;
    return -0x7ff8fff2;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(ptVar1 + 0x254));
  FUN_01016830(ptVar1,0);
  uVar10 = 0;
  uVar9 = 0x10;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  pcVar5 = (char *)0x0;
  ptVar11 = ptVar1;
  pcVar2 = (char *)_SfGetString2_8(DAT_0120e5c8,0x107b);
  pcVar3 = (char *)_SfGetString2_8(DAT_0120e5c8,0x107b);
  lVar4 = DtAllocateDirectoryEntry
                    (ptVar1,(tagDIR_ENTRY *)0x0,pcVar3,pcVar2,pcVar5,CONCAT44(uVar7,uVar6),
                     CONCAT44(uVar9,uVar8),uVar10,(int)ptVar11,unaff_EDI);
  if (-1 < lVar4) {
    lVar4 = _SfList_CreateExZ_32(ptVar1 + 4,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
    if (lVar4 < 0) {
      uVar6 = _SfGetString2_8(DAT_0120e5c8,0x1083);
      SfPrintF(local_200,uVar6);
      FUN_01016830(ptVar1,local_200);
    }
    else {
      *param_1 = ptVar1;
    }
    if (-1 < lVar4) {
      return lVar4;
    }
  }
  DtDestroyDirectoryTree(ptVar1);
  *param_1 = (tagDIR_TREE *)0x0;
  return lVar4;
}


