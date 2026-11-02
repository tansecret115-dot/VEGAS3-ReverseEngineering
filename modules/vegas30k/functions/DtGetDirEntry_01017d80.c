/* Module: vegas30k.dll
   Function: DtGetDirEntry
   Address: 01017d80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtGetDirEntry(struct tagDIR_TREE *,char *,int,struct tagDIR_ENTRY * *) */

long DtGetDirEntry(tagDIR_TREE *param_1,char *param_2,int param_3,tagDIR_ENTRY **param_4)

{
  int *piVar1;
  LPCSTR lpsz;
  int iVar2;
  LPSTR lpString1;
  tagDIR_ENTRY *ptVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  tagDIR_ENTRY *local_20c;
  long local_208;
  undefined1 local_200 [512];
  
                    /* 0x17d80  48  ?DtGetDirEntry@@YGJPAUtagDIR_TREE@@PADHPAPAUtagDIR_ENTRY@@@Z */
  FUN_01016830(param_1,0);
  local_20c = *(tagDIR_ENTRY **)param_1;
  local_208 = 0;
  cVar6 = *param_2;
  lpsz = param_2;
  while ((cVar6 != '\0' && (cVar6 != '\\'))) {
    lpsz = CharNextA(lpsz);
    cVar6 = *lpsz;
  }
  cVar6 = *lpsz;
  *lpsz = '\0';
  iVar2 = lstrcmpA(param_2,(LPCSTR)(*(int *)param_1 + 0x110));
  if (iVar2 != 0) {
    uVar4 = _SfGetString2_8(DAT_0120e5c8,0x107e);
    SfPrintF(local_200,uVar4,param_2);
    FUN_01016830(param_1,local_200);
    return -0x7ff8ffa9;
  }
  *lpsz = cVar6;
  if (cVar6 != '\0') {
    ptVar3 = (tagDIR_ENTRY *)0x0;
    do {
      lpString1 = lpsz;
      if (cVar6 == '\\') {
        lpString1 = CharNextA(lpsz);
      }
      cVar6 = *lpString1;
      lpsz = lpString1;
      while ((cVar6 != '\0' && (cVar6 != '\\'))) {
        lpsz = CharNextA(lpsz);
        cVar6 = *lpsz;
      }
      cVar6 = *lpsz;
      *lpsz = '\0';
      iVar2 = 0;
      while( true ) {
        piVar1 = *(int **)(local_20c + 0x214);
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        if (iVar5 <= iVar2) break;
        if (piVar1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *piVar1;
        }
        if ((iVar2 < 0) || (iVar5 + -1 < iVar2)) {
          ptVar3 = (tagDIR_ENTRY *)0x0;
        }
        else {
          ptVar3 = *(tagDIR_ENTRY **)(piVar1[2] + iVar2 * 4);
        }
        iVar5 = lstrcmpA(lpString1,(LPCSTR)(ptVar3 + 0x110));
        if (iVar5 == 0) break;
        iVar2 = iVar2 + 1;
      }
      iVar5 = 0;
      if (*(int **)(local_20c + 0x214) != (int *)0x0) {
        iVar5 = **(int **)(local_20c + 0x214);
      }
      if (iVar2 == iVar5) {
        uVar4 = _SfGetString2_8(DAT_0120e5c8,0x107e);
        SfPrintF(local_200,uVar4,lpString1);
        FUN_01016830(param_1,local_200);
        local_208 = -0x7ffb1ff6;
        break;
      }
      *lpsz = cVar6;
      local_20c = ptVar3;
    } while (cVar6 != '\0');
  }
  if (((*(uint *)(local_20c + 8) & 0x10) == 0) && (param_3 != 0)) {
    local_20c = *(tagDIR_ENTRY **)(local_20c + 0x21c);
  }
  *param_4 = local_20c;
  return local_208;
}


