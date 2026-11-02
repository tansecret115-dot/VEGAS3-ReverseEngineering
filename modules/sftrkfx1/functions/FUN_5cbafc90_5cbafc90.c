/* Module: sftrkfx1.dll
   Function: FUN_5cbafc90
   Address: 5cbafc90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbafc90(int param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  BOOL BVar1;
  RECT *lprc;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xa4)) {
    lprc = (RECT *)(param_1 + 0xd0);
    do {
      pt.y = param_3;
      pt.x = param_2;
      BVar1 = PtInRect(lprc,pt);
      if (BVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lprc = (RECT *)&lprc[3].right;
    } while (iVar2 < *(int *)(param_1 + 0xa4));
  }
  return -1;
}


