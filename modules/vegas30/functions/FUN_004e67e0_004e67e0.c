/* Module: vegas30.exe
   Function: FUN_004e67e0
   Address: 004e67e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e67e0(HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  int y;
  int iVar4;
  RECT local_10;
  
  iVar4 = param_9;
  iVar1 = param_8;
  if (param_7 != 0) {
    if ((double)CONCAT44(param_5,param_4) <= _DAT_00613da8) {
      if (param_9 < param_10) {
        psVar3 = (short *)(param_2 + param_3 * param_9 * 4);
        param_9 = param_10 - param_9;
        do {
          local_10.top = param_6 - (int)psVar3[1] / param_7;
          local_10.bottom = (param_6 - (int)*psVar3 / param_7) - local_10.top;
          if (local_10.bottom < 2) {
            local_10.bottom = 1;
          }
          local_10.bottom = local_10.bottom + local_10.top;
          local_10.left = iVar4 + iVar1;
          local_10.right = iVar4 + 1 + iVar1;
          ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
          iVar4 = iVar4 + 1;
          psVar3 = psVar3 + param_3 * 2;
        } while (iVar4 < param_10);
      }
    }
    else {
      iVar1 = param_9 + -1;
      sVar2 = *(short *)(param_2 + 2 + iVar1 * param_3 * 4);
      if (0 < iVar1) {
        sVar2 = *(short *)(param_2 + 2 + (param_9 + -2) * param_3 * 4);
      }
      y = param_6 - (int)sVar2 / param_7;
      param_9 = param_10 - param_9;
      GetCurrentPositionEx(param_1,(LPPOINT)&param_4);
      if ((param_4 != iVar1 + param_8) || (param_5 != y)) {
        MoveToEx(param_1,iVar1 + param_8,y,(LPPOINT)0x0);
      }
      if (iVar4 <= param_10) {
        psVar3 = (short *)(param_2 + 2 + param_3 * iVar4 * 4);
        do {
          if (iVar4 < param_9) {
            y = param_6 - (int)*psVar3 / param_7;
          }
          LineTo(param_1,iVar4 + param_8,y);
          iVar4 = iVar4 + 1;
          psVar3 = psVar3 + param_3 * 2;
        } while (iVar4 <= param_10);
        return;
      }
    }
  }
  return;
}


