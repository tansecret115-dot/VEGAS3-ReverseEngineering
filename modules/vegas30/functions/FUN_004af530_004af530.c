/* Module: vegas30.exe
   Function: FUN_004af530
   Address: 004af530
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004af530(HWND param_1,RECT *param_2,RECT *param_3)

{
  BOOL BVar1;
  HDC hDC;
  
  BVar1 = EqualRect(param_3,param_2);
  if (BVar1 == 0) {
    hDC = GetDC(param_1);
    BVar1 = IsRectEmpty(param_2);
    if (BVar1 == 0) {
      FUN_00468740(hDC,param_2,3,3,0x550009);
    }
    BVar1 = IsRectEmpty(param_3);
    if (BVar1 == 0) {
      FUN_00468740(hDC,param_3,3,3,0x550009);
    }
    param_2->left = param_3->left;
    param_2->top = param_3->top;
    param_2->right = param_3->right;
    param_2->bottom = param_3->bottom;
    ReleaseDC(param_1,hDC);
  }
  return;
}


