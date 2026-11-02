/* Module: vegas30k.dll
   Function: FUN_011523e0
   Address: 011523e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011523e0(HWND param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  undefined4 local_18;
  tagRECT local_10;
  
  iVar3 = *(int *)(param_4 + 0xe4);
  local_18 = 0;
  GetClientRect(param_1,&local_10);
  uVar1 = local_10.right - *(int *)(param_4 + 0x70);
  uVar1 = ((int)uVar1 < 1) - 1 & uVar1;
  uVar5 = uVar1;
  if (param_3 != 0) {
    param_1 = (HWND)param_3;
    psVar7 = (short *)(param_2 + 2);
    do {
      *psVar7 = 0;
      if (-1 < psVar7[-1]) {
        iVar2 = MulDiv((int)psVar7[-1],iVar3,8);
        uVar5 = uVar5 - iVar2;
        if (*psVar7 != iVar2) {
          local_18 = 1;
          *psVar7 = (short)iVar2;
        }
      }
      psVar7 = psVar7 + 8;
      param_1 = (HWND)((int)param_1 - 1);
    } while (param_1 != (HWND)0x0);
  }
  if ((int)uVar5 < 1) {
    if ((int)uVar5 < 0) {
      uVar6 = 0;
      uVar5 = param_3;
      if (param_3 != 0) {
        pbVar4 = (byte *)(param_2 + 4);
        do {
          if ((*pbVar4 & 4) != 0) {
            uVar5 = uVar6;
          }
          uVar6 = uVar6 + 1;
          pbVar4 = pbVar4 + 0x10;
        } while (uVar6 < param_3);
      }
      if ((*(uint *)(param_4 + 0x164) & 0x8000) != 0) {
        uVar5 = param_3 - 1;
      }
      if (((*(byte *)(param_4 + 0x168) & 0x20) == 0) && (uVar5 < param_3)) {
        if (param_3 != 0) {
          psVar7 = (short *)(param_3 * 0x10 + -0xe + param_2);
          do {
            uVar6 = uVar1 - (int)*psVar7;
            if ((int)uVar6 < 0) break;
            param_3 = param_3 - 1;
            psVar7 = psVar7 + -8;
            uVar1 = uVar6;
          } while (param_3 != 0);
        }
        if (0 < (int)uVar1) {
          psVar7 = (short *)(uVar5 * 0x10 + 2 + param_2);
          *psVar7 = *psVar7 + (short)uVar1;
        }
      }
    }
  }
  else {
    uVar6 = 0;
    param_1 = (HWND)param_3;
    uVar1 = uVar5;
    if (param_3 != 0) {
      psVar7 = (short *)(param_2 + 2);
      do {
        if ((*(byte *)(psVar7 + 1) & 4) != 0) {
          param_1 = (HWND)uVar6;
        }
        if (psVar7[-1] < 0) {
          iVar3 = MulDiv((int)psVar7[-1],uVar5,-1000);
          uVar1 = uVar1 - iVar3;
          if (*psVar7 != iVar3) {
            local_18 = 1;
            *psVar7 = (short)iVar3;
          }
        }
        uVar6 = uVar6 + 1;
        psVar7 = psVar7 + 8;
      } while (uVar6 < param_3);
    }
    if ((*(uint *)(param_4 + 0x164) & 0x8000) != 0) {
      param_1 = (HWND)(param_3 - 1);
    }
    if ((0 < (int)uVar1) && (param_1 < param_3)) {
      psVar7 = (short *)((int)param_1 * 0x10 + 2 + param_2);
      *psVar7 = *psVar7 + (short)uVar1;
      return local_18;
    }
  }
  return local_18;
}


