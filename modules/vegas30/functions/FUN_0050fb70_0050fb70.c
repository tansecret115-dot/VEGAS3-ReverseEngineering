/* Module: vegas30.exe
   Function: FUN_0050fb70
   Address: 0050fb70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050fb70(HDC param_1,LONG param_2,LONG param_3,LONG param_4,LONG param_5,int param_6,
                 int param_7,HBRUSH param_8,HBRUSH param_9)

{
  tagRECT local_10;
  
  local_10.left = param_2;
  local_10.top = param_3;
  local_10.right = param_4;
  local_10.bottom = param_5;
  OffsetRect(&local_10,param_6,param_7);
  FillRect(param_1,&local_10,param_8);
  FrameRect(param_1,&local_10,param_9);
  InflateRect(&local_10,1,1);
  FrameRect(param_1,&local_10,param_8);
  return;
}


