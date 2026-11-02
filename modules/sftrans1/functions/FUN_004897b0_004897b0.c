/* Module: sftrans1.dll
   Function: FUN_004897b0
   Address: 004897b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004897b0(HDC param_1,RECT *param_2)

{
  RECT local_10;
  
  local_10.right = param_2->right;
  local_10.left = param_2->left;
  local_10.top = param_2->top;
  local_10.bottom = param_2->bottom;
  ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  DrawFocusRect(param_1,param_2);
  return;
}


