/* Module: ednt3260.dll
   Function: FUN_630f4130
   Address: 630f4130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f4130(int param_1)

{
  int *piVar1;
  double *pdVar2;
  short *psVar3;
  short *psVar4;
  short sVar5;
  double *local_24;
  int local_20;
  short *local_1c;
  double *local_18;
  short *local_14;
  short *local_10;
  short *local_c;
  int local_8;
  
  local_20 = 0x5836;
  local_24 = (double *)(param_1 + 0x2d8ba);
  local_10 = (short *)(param_1 + 0xec24);
  local_1c = (short *)(param_1 + 0xb0d8);
  local_18 = (double *)(param_1 + 0x1e8ba);
  local_14 = (short *)(param_1 + 0x6408);
  psVar3 = (short *)(param_1 + 0x6468);
  piVar1 = (int *)(param_1 + 0x1b932);
  do {
    if (psVar3[-0x36] != 0) {
      sVar5 = *psVar3;
      FUN_630f8ab0((double *)(*piVar1 + sVar5 * 8),
                   (short *)(*(int *)((int)piVar1 + -0x10872) + sVar5 * 2),psVar3[6] - sVar5,0x18);
    }
    local_8 = 0;
    if (0 < *(short *)(param_1 + 0x6344)) {
      local_c = local_14;
      pdVar2 = local_18;
      psVar4 = local_1c;
      do {
        if (*local_c == 0) {
          sVar5 = 0xfd;
        }
        else {
          sVar5 = *(short *)(param_1 + (local_8 + local_20) * 2);
        }
        FUN_630f8ab0(pdVar2,psVar4,sVar5,0x18);
        local_c = local_c + 1;
        local_8 = local_8 + 1;
        psVar4 = psVar4 + 0xfd;
        pdVar2 = pdVar2 + 0x100;
      } while (local_8 < *(short *)(param_1 + 0x6344));
    }
    if (*(short *)(param_1 + 0x6312) != 0) {
      FUN_630f8ab0(local_24,local_10,psVar3[0x2620],0x18);
    }
    local_10 = local_10 + 7;
    local_18 = local_18 + 0x500;
    local_1c = local_1c + 0x4f1;
    local_20 = local_20 + 5;
    psVar3 = psVar3 + 1;
    piVar1 = piVar1 + 1;
    local_14 = local_14 + 5;
    local_24 = local_24 + 7;
  } while (local_20 < 0x5854);
  return;
}


