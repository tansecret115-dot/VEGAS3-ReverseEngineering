/* Module: vegas30.exe
   Function: FUN_00471650
   Address: 00471650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00471650(HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  short *psVar1;
  int iVar2;
  RECT local_10;
  
  iVar2 = param_5 / 2 + param_4;
  param_5 = param_4 + param_5;
  if ((param_6 != 0) && (param_8 < param_9)) {
    psVar1 = (short *)(param_2 + param_3 * param_8 * 4);
    do {
      local_10.top = iVar2 - (int)psVar1[1] / param_6;
      local_10.bottom = (iVar2 - (int)*psVar1 / param_6) + 1;
      if ((param_4 <= local_10.bottom) && (local_10.top < param_5)) {
        if (local_10.top <= param_4) {
          local_10.top = param_4;
        }
        if (param_5 <= local_10.bottom) {
          local_10.bottom = param_5;
        }
        local_10.left = param_8 + param_7;
        local_10.right = param_8 + 1 + param_7;
        ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      }
      param_8 = param_8 + 1;
      psVar1 = psVar1 + param_3 * 2;
    } while (param_8 < param_9);
  }
  return;
}


