/* Module: vegas30k.dll
   Function: DtReparentDirEntry
   Address: 01018450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtReparentDirEntry(struct tagDIR_TREE *,struct tagDIR_ENTRY *,char *,struct
   tagDIR_ENTRY *,char *) */

long DtReparentDirEntry(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2,char *param_3,
                       tagDIR_ENTRY *param_4,char *param_5)

{
  int *piVar1;
  char *pcVar2;
  tagDIR_ENTRY *ptVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  tagDIR_ENTRY *ptVar9;
  int iVar10;
  tagDIR_ENTRY *ptVar11;
  int local_208;
  int local_204;
  undefined1 local_200 [512];
  
                    /* 0x18450  63  ?DtReparentDirEntry@@YGJPAUtagDIR_TREE@@PAUtagDIR_ENTRY@@PAD12@Z
                        */
  FUN_01016830(param_1,0);
  if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
    param_2 = *(tagDIR_ENTRY **)(param_2 + 0x21c);
  }
  if (((*(uint *)(param_4 + 8) & 0x10) != 0) &&
     (pcVar2 = DtGetCommonRootPath(param_5,param_3), *pcVar2 == '\0')) {
    uVar4 = _SfGetString2_8(DAT_0120e5c8,0x1075);
    SfPrintF(local_200,uVar4);
    FUN_01016830(param_1,local_200);
    return 0;
  }
  ptVar9 = param_4 + 0x110;
  ptVar3 = DtGetLocalDirEntry(param_2,(char *)ptVar9);
  if (ptVar3 != (tagDIR_ENTRY *)0x0) {
    ptVar11 = ptVar9;
    uVar4 = _SfGetString2_8(DAT_0120e5c8,0x1074);
    iVar5 = SfMsgBox(0,4,uVar4,ptVar11);
    if (iVar5 == 7) {
      uVar4 = _SfGetString2_8(DAT_0120e5c8,0x1074);
      SfPrintF(local_200,uVar4,ptVar9);
      FUN_01016830(param_1,local_200);
      return -0x7ffcffb0;
    }
    lVar6 = DtDeleteDirEntry(param_1,ptVar3);
    if (lVar6 < 0) {
      return lVar6;
    }
  }
  ptVar3 = *(tagDIR_ENTRY **)(param_4 + 0x21c);
  if (param_2 == ptVar3) {
    return 0x4e001;
  }
  local_208 = _SfList_AllocAndInsertItem_20
                        (*(undefined4 *)(param_2 + 0x214),param_4,*(undefined4 *)(param_4 + 4),
                         0xffffffff,&local_204);
  if (-1 < local_208) {
    piVar1 = *(int **)(param_2 + 0x214);
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if ((local_204 < 0) || (iVar5 + -1 < local_204)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar1[2] + local_204 * 4);
    }
    if (iVar5 == 0) {
      uVar4 = _SfGetString2_8(DAT_0120e5c8,0x1083);
      SfPrintF(local_200,uVar4);
      FUN_01016830(param_1,local_200);
      local_208 = -0x7ffb1ff6;
    }
    else {
      *(uint *)(iVar5 + 0x218) = *(uint *)(iVar5 + 0x218) & 0xffffffdf;
      *(tagDIR_ENTRY **)(iVar5 + 0x21c) = param_2;
      if ((*(uint *)(iVar5 + 8) & 0x10) != 0) {
        if (*(int **)(iVar5 + 0x214) == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = **(int **)(iVar5 + 0x214);
        }
        iVar7 = 0;
        if (0 < iVar8) {
          do {
            piVar1 = *(int **)(iVar5 + 0x214);
            if (piVar1 == (int *)0x0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *piVar1;
            }
            if ((iVar7 < 0) || (iVar10 + -1 < iVar7)) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(piVar1[2] + iVar7 * 4);
            }
            if (iVar10 != 0) {
              *(int *)(iVar10 + 0x21c) = iVar5;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar8);
        }
      }
      piVar1 = *(int **)(ptVar3 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      iVar8 = 0;
      if (0 < iVar5) {
        while( true ) {
          if (piVar1 == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *piVar1;
          }
          if ((iVar8 < 0) || (iVar7 + -1 < iVar8)) {
            ptVar3 = (tagDIR_ENTRY *)0x0;
          }
          else {
            ptVar3 = *(tagDIR_ENTRY **)(piVar1[2] + iVar8 * 4);
          }
          if ((ptVar3 != (tagDIR_ENTRY *)0x0) && (ptVar3 == param_4)) break;
          iVar8 = iVar8 + 1;
          if (iVar5 <= iVar8) {
            return local_208;
          }
        }
        lVar6 = _SfList_DeleteList_16(piVar1,iVar8,1,0);
        return lVar6;
      }
    }
    return local_208;
  }
  uVar4 = _SfGetString2_8(DAT_0120e5c8,0x1083);
  SfPrintF(local_200,uVar4);
  FUN_01016830(param_1,local_200);
  return local_208;
}


