/* Module: vidcap30.exe
   Function: FUN_004a9370
   Address: 004a9370
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004a9370(HWND param_1,int param_2,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  BOOL BVar1;
  int *piVar2;
  RECT local_20;
  tagRECT local_10;
  
  GetClientRect(param_1,&local_10);
  if ((*(byte *)(param_2 + 0x8c) & 0x70) != 0) {
    local_20.left = *(LONG *)(param_2 + 0x68);
    local_20.top = local_10.top;
    local_20.bottom = local_10.bottom;
    local_20.right = local_10.right;
    pt.y = param_4;
    pt.x = param_3;
    BVar1 = PtInRect(&local_20,pt);
    if (BVar1 != 0) {
      return *(int *)(param_2 + 0xb0);
    }
  }
  param_1 = (HWND)0x0;
  if (0 < *(int *)(param_2 + 0xb0)) {
    piVar2 = (int *)(param_2 + 0x158);
    do {
      local_20.left = local_10.left;
      local_20.right = piVar2[2] + *piVar2 >> 1;
      local_20.top = local_10.top;
      local_20.bottom = local_10.bottom;
      pt_00.y = param_4;
      pt_00.x = param_3;
      BVar1 = PtInRect(&local_20,pt_00);
      if (BVar1 != 0) {
        return (int)param_1;
      }
      param_1 = (HWND)((int)param_1 + 1);
      piVar2 = piVar2 + 0xe;
    } while ((int)param_1 < *(int *)(param_2 + 0xb0));
  }
  local_20.left =
       *(int *)(param_2 + *(int *)(param_2 + 0xb0) * 0x38 + 0x128) +
       *(int *)(param_2 + 0x120 + *(int *)(param_2 + 0xb0) * 0x38) >> 1;
  local_20.right = local_10.right;
  local_20.top = local_10.top;
  local_20.bottom = local_10.bottom;
  pt_01.y = param_4;
  pt_01.x = param_3;
  BVar1 = PtInRect(&local_20,pt_01);
  if (BVar1 == 0) {
    return -1;
  }
  return *(int *)(param_2 + 0xb0);
}


