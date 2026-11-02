/* Module: sftrans1.dll
   Function: FUN_00552ac0
   Address: 00552ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00552ac0(HWND param_1,int *param_2)

{
  tagRECT local_20;
  tagRECT local_10;
  
  GetClientRect(param_1,&local_20);
  GetWindowRect(param_1,&local_10);
  MapWindowPoints(param_1,(HWND)0x0,(LPPOINT)&local_20,2);
  *param_2 = *param_2 + (local_10.left - local_20.left);
  param_2[1] = param_2[1] + (local_10.top - local_20.top);
  return;
}


