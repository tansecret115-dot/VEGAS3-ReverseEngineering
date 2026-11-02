/* Module: vegas30.exe
   Function: FUN_0056d050
   Address: 0056d050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0056d050(HMENU param_1,int param_2)

{
  UINT uEnable;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 4) == 0)) {
    uEnable = 1;
  }
  else {
    uEnable = 0;
  }
  SetMenuDefaultItem(param_1,0,1);
  EnableMenuItem(param_1,0xa0bf,1);
  EnableMenuItem(param_1,0xa0c0,1);
  EnableMenuItem(param_1,0xa0c1,uEnable);
  EnableMenuItem(param_1,0xa0c2,uEnable);
  EnableMenuItem(param_1,0xa0c3,1);
  EnableMenuItem(param_1,0xa0c4,1);
  if (param_2 != 0) {
    CheckMenuItem(param_1,0xa0c2,(*(uint *)(param_2 + 0xc) & 1) << 3);
    CheckMenuItem(param_1,0xa0c1,(*(uint *)(param_2 + 0xc) & 2) << 2);
  }
  return;
}


