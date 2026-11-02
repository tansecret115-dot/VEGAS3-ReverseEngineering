/* Module: vegas30.exe
   Function: FUN_004a2440
   Address: 004a2440
   Source: Ghidra pseudocode (Stage 10 batch) */


BOOL FUN_004a2440(int param_1,int *param_2,POINT *param_3)

{
  BOOL BVar1;
  RECT local_10;
  
  if (param_1 != 0) {
    local_10.left = *param_2 + -8;
    local_10.right = *param_2 + 8;
    local_10.top = param_2[1] + -8;
    local_10.bottom = param_2[1] + 8;
    BVar1 = PtInRect(&local_10,*param_3);
    return BVar1;
  }
  return 0;
}


