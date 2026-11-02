/* Module: sftrkfx1.dll
   Function: FUN_5cbafce0
   Address: 5cbafce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbafce0(HWND param_1,int param_2,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  int iVar2;
  int *piVar3;
  RECT local_20;
  tagRECT local_10;
  
  GetClientRect(param_1,&local_10);
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0xa4)) {
    piVar3 = (int *)(param_2 + 0xd0);
    do {
      local_20.left = local_10.left;
      local_20.right = piVar3[2] + *piVar3 >> 1;
      local_20.top = local_10.top;
      local_20.bottom = local_10.bottom;
      pt.y = param_4;
      pt.x = param_3;
      BVar1 = PtInRect(&local_20,pt);
      if (BVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0xe;
    } while (iVar2 < *(int *)(param_2 + 0xa4));
  }
  piVar3 = (int *)(param_2 + 0x98 + *(int *)(param_2 + 0xa4) * 0x38);
  local_20.left = piVar3[2] + *piVar3 >> 1;
  local_20.right = local_10.right;
  local_20.top = local_10.top;
  local_20.bottom = local_10.bottom;
  pt_00.y = param_4;
  pt_00.x = param_3;
  BVar1 = PtInRect(&local_20,pt_00);
  if (BVar1 != 0) {
    return *(int *)(param_2 + 0xa4);
  }
  return -1;
}


