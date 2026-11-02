/* Module: vegas30.exe
   Function: FUN_00468920
   Address: 00468920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00468920(HDC param_1,int *param_2,int param_3,COLORREF param_4)

{
  COLORREF color;
  int iVar1;
  int iVar2;
  int iVar3;
  RECT local_10;
  
  color = SetBkColor(param_1,param_4);
  local_10.top = param_2[1];
  local_10.left = *param_2;
  local_10.bottom = local_10.top + param_3;
  iVar2 = param_2[2] - local_10.left;
  local_10.right = local_10.left + iVar2;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  iVar3 = param_2[1] + param_3;
  if (iVar3 < param_2[3]) {
    local_10.left = *param_2;
    iVar1 = param_2[3] - param_3;
    local_10.bottom = iVar1 + param_3;
    local_10.right = local_10.left + iVar2;
    local_10.top = iVar1;
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    if (0 < iVar1 - iVar3) {
      local_10.left = *param_2;
      local_10.right = local_10.left + param_3;
      iVar1 = (iVar1 - iVar3) + iVar3;
      local_10.top = iVar3;
      local_10.bottom = iVar1;
      ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      if (param_3 < iVar2) {
        local_10.left = param_2[2] - param_3;
        local_10.right = local_10.left + param_3;
        local_10.top = iVar3;
        local_10.bottom = iVar1;
        ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      }
    }
  }
  SetBkColor(param_1,color);
  return;
}


