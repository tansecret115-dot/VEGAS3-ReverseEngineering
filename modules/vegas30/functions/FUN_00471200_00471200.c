/* Module: vegas30.exe
   Function: FUN_00471200
   Address: 00471200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00471200(HDC param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  tagPOINT local_14;
  uint local_c;
  uint local_8;
  
  if (((0 < (int)param_5) && (param_7 != 0)) && (param_5 != 0)) {
    if ((int)param_5 < (int)param_4) {
      iVar5 = 0;
      local_8 = param_5;
      uVar2 = (param_4 - 1) / param_4;
      sVar1 = *(short *)(param_2 + 2);
      if (0 < (int)uVar2) {
        iVar5 = (int)(((ulonglong)(uVar2 - 1) * (ulonglong)param_5) / (ulonglong)param_4);
        sVar1 = *(short *)(param_2 + 2 + uVar2 * param_3 * 4);
      }
      iVar4 = param_6 - (int)sVar1 / param_7;
      local_c = uVar2;
      GetCurrentPositionEx(param_1,&local_14);
      if ((local_14.x != param_8 + iVar5) || (local_14.y != iVar4)) {
        MoveToEx(param_1,param_8 + iVar5,iVar4,(LPPOINT)0x0);
      }
      if ((int)uVar2 <= (int)param_5) {
        psVar3 = (short *)(param_2 + 2 + uVar2 * param_3 * 4);
        do {
          uVar2 = local_c;
          iVar5 = (int)(((ulonglong)local_c * (ulonglong)param_4) / (ulonglong)local_8);
          if (param_9 <= iVar5) {
            LineTo(param_1,iVar5 + param_8,param_6 - (int)*psVar3 / param_7);
          }
          local_c = uVar2 + 1;
          psVar3 = psVar3 + param_3 * 2;
        } while ((int)local_c <= (int)param_5);
        return;
      }
    }
    else if ((int)(param_5 * 10) / 0xd <= (int)param_4) {
      iVar5 = param_9 + -1;
      sVar1 = *(short *)(param_2 + 2 + iVar5 * param_3 * 4);
      if (0 < iVar5) {
        sVar1 = *(short *)(param_2 + 2 + (param_9 + -2) * param_3 * 4);
      }
      iVar4 = param_6 - (int)sVar1 / param_7;
      GetCurrentPositionEx(param_1,&local_14);
      if ((local_14.x != iVar5 + param_8) || (local_14.y != iVar4)) {
        MoveToEx(param_1,iVar5 + param_8,iVar4,(LPPOINT)0x0);
      }
      if (param_9 <= param_10) {
        psVar3 = (short *)(param_2 + 2 + param_3 * param_9 * 4);
        do {
          if (param_9 < (int)param_4) {
            iVar4 = param_6 - (int)*psVar3 / param_7;
          }
          LineTo(param_1,param_9 + param_8,iVar4);
          param_9 = param_9 + 1;
          psVar3 = psVar3 + param_3 * 2;
        } while (param_9 <= param_10);
      }
    }
  }
  return;
}


