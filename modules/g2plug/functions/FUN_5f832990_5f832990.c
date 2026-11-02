/* Module: g2plug.dll
   Function: FUN_5f832990
   Address: 5f832990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f832990(int param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  BOOL BVar1;
  RECT *lprc;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xb0)) {
    lprc = (RECT *)(param_1 + 0x158);
    do {
      pt.y = param_3;
      pt.x = param_2;
      BVar1 = PtInRect(lprc,pt);
      if (BVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lprc = (RECT *)&lprc[3].right;
    } while (iVar2 < *(int *)(param_1 + 0xb0));
  }
  return -1;
}


