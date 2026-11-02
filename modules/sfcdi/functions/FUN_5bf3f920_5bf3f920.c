/* Module: sfcdi.dll
   Function: FUN_5bf3f920
   Address: 5bf3f920
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3f920(int param_1)

{
  undefined4 *pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pMem = *(undefined4 **)(param_1 + 0x350);
  iVar5 = 0;
  if (pMem != (undefined4 *)0x0) {
    switch(*pMem) {
    case 0:
      FUN_5bf3f7f0(pMem);
      break;
    case 1:
      FUN_5bf3f720(pMem);
      break;
    case 2:
      FUN_5bf3f650(pMem);
      break;
    case 3:
      FUN_5bf3f540(pMem);
      break;
    default:
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0x350));
      GlobalFree(pvVar2);
      break;
    case 0xb:
      FUN_5bf3f4c0(pMem);
      break;
    case 0xc:
      FUN_5bf3f430(pMem);
    }
    *(undefined4 *)(param_1 + 0x350) = 0;
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    iVar4 = 0;
    while( true ) {
      piVar1 = *(int **)(param_1 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if (iVar3 <= iVar4) break;
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      if ((iVar4 < 0) || (iVar5 + -1 < iVar4)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(piVar1[2] + iVar4 * 4);
      }
      iVar5 = FUN_5bf3f920(iVar5);
      if (iVar5 < 0) {
        return iVar5;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return iVar5;
}


