/* Module: sftrkfx1.dll
   Function: FUN_5cbb0670
   Address: 5cbb0670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbb0670(undefined4 param_1,LONG param_2,LONG param_3,int param_4)

{
  int *piVar1;
  POINT pt;
  int iVar2;
  BOOL BVar3;
  tagRECT local_10;
  
  if ((*(int *)(param_4 + 8) != 0) && (iVar2 = FUN_5cbafc90(param_4,param_2,param_3), -1 < iVar2)) {
    piVar1 = (int *)(param_4 + 0xd0 + iVar2 * 0x38);
    local_10.left = *piVar1;
    local_10.top = piVar1[1];
    local_10.right = piVar1[2];
    local_10.bottom = piVar1[3];
    InflateRect(&local_10,-2,-2);
    local_10.left = local_10.left + -2;
    local_10.right = (local_10.bottom - local_10.top) + local_10.left;
    InflateRect(&local_10,1,2);
    pt.y = param_3;
    pt.x = param_2;
    BVar3 = PtInRect(&local_10,pt);
    if (BVar3 != 0) {
      return iVar2;
    }
  }
  return -1;
}


