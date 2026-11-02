/* Module: vidcap30.exe
   Function: FUN_00541b00
   Address: 00541b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00541b00(undefined4 *param_1,int param_2,int *param_3)

{
  tagSCROLLINFO local_1c;
  
  local_1c.cbSize = 0x1c;
  local_1c.fMask = 0x17;
  GetScrollInfo((HWND)*param_1,param_2,&local_1c);
  if ((((local_1c.nMin == *param_3) && (local_1c.nMax == param_3[1] + param_3[3])) &&
      (local_1c.nPage == param_3[3])) && (local_1c.nPos == param_3[2])) {
    return;
  }
  local_1c.nPage = param_3[3];
  local_1c.nPos = param_3[2];
  local_1c.nMax = param_3[1] + -1 + local_1c.nPage;
  local_1c.nMin = *param_3;
  SetScrollInfo((HWND)*param_1,param_2,&local_1c,1);
  return;
}


