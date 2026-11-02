/* Module: vegas30k.dll
   Function: SfVcdiFreeAllSystemInfo
   Address: 010119a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfVcdiFreeAllSystemInfo(struct tagDIR_ENTRY *) */

long SfVcdiFreeAllSystemInfo(tagDIR_ENTRY *param_1)

{
  undefined4 *pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  tagDIR_ENTRY *ptVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
                    /* 0x119a0  508  ?SfVcdiFreeAllSystemInfo@@YGJPAUtagDIR_ENTRY@@@Z */
  pMem = *(undefined4 **)(param_1 + 0x350);
  lVar6 = 0;
  if (pMem != (undefined4 *)0x0) {
    switch(*pMem) {
    case 0:
      FUN_01011870(pMem);
      break;
    case 1:
      FUN_010117a0(pMem);
      break;
    case 2:
      FUN_010116d0(pMem);
      break;
    case 3:
      FUN_010115c0(pMem);
      break;
    default:
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x350));
      GlobalFree(pvVar2);
      break;
    case 0xb:
      FUN_01011540(pMem);
      break;
    case 0xc:
      FUN_010114b0(pMem);
    }
    *(undefined4 *)(param_1 + 0x350) = 0;
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    iVar5 = 0;
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar5) break;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
        ptVar3 = (tagDIR_ENTRY *)0x0;
      }
      else {
        ptVar3 = *(tagDIR_ENTRY **)(piVar1[2] + iVar5 * 4);
      }
      lVar6 = SfVcdiFreeAllSystemInfo(ptVar3);
      if (lVar6 < 0) {
        return lVar6;
      }
      iVar5 = iVar5 + 1;
    }
  }
  return lVar6;
}


