/* Module: vegas30k.dll
   Function: DtPrepareDirectoryTree
   Address: 01017490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtPrepareDirectoryTree(struct tagDIR_TREE *,struct tagDIR_ENTRY *) */

long DtPrepareDirectoryTree(tagDIR_TREE *param_1,tagDIR_ENTRY *param_2)

{
  int *piVar1;
  HANDLE hObject;
  undefined4 uVar2;
  int iVar3;
  tagDIR_ENTRY *ptVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  tagDIR_ENTRY *ptVar8;
  undefined1 local_200 [512];
  
                    /* 0x17490  62  ?DtPrepareDirectoryTree@@YGJPAUtagDIR_TREE@@PAUtagDIR_ENTRY@@@Z
                        */
  lVar6 = 0;
  FUN_01016830(param_1,0);
  if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
    ptVar4 = param_2 + 0x224;
    hObject = CreateFileA((LPCSTR)ptVar4,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0)
    ;
    while( true ) {
      if (hObject != (HANDLE)0xffffffff) {
        CloseHandle(hObject);
        return 0;
      }
      ptVar8 = ptVar4;
      uVar2 = _SfGetString2_8(DAT_0120e5c8,0x1073);
      iVar3 = SfMsgBox(0,2,uVar2,ptVar8);
      if (iVar3 == 3) {
        uVar2 = _SfGetString2_8(DAT_0120e5c8,0x1081);
        SfPrintF(local_200,uVar2,ptVar4);
        FUN_01016830(param_1,local_200);
        return -0x7ffb1ff8;
      }
      if (iVar3 != 4) break;
      hObject = CreateFileA((LPCSTR)ptVar4,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                            (HANDLE)0x0);
    }
  }
  else {
    if (*(int **)(param_2 + 0x214) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(param_2 + 0x214);
    }
    iVar7 = 0;
    if (0 < iVar3) {
      do {
        piVar1 = *(int **)(param_2 + 0x214);
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        if ((iVar7 < 0) || (iVar5 + -1 < iVar7)) {
          ptVar4 = (tagDIR_ENTRY *)0x0;
        }
        else {
          ptVar4 = *(tagDIR_ENTRY **)(piVar1[2] + iVar7 * 4);
        }
      } while (((ptVar4 == (tagDIR_ENTRY *)0x0) ||
               (lVar6 = DtPrepareDirectoryTree(param_1,ptVar4), -1 < lVar6)) &&
              (iVar7 = iVar7 + 1, iVar7 < iVar3));
    }
  }
  return lVar6;
}


