/* Module: ednt3260.dll
   Function: FUN_630f28b0
   Address: 630f28b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_630f28b0(int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  float10 fVar4;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 6;
  do {
    sVar3 = 0;
    if (0 < *(short *)(param_1 + 0x6346)) {
      do {
        iVar2 = (int)sVar3;
        sVar1 = *(short *)(param_1 + 0x46 +
                          *(short *)(&DAT_630ff8c8 + (iVar2 + *(short *)(param_1 + 0x630a) * 6) * 2)
                          * 2);
        fVar4 = FUN_630f97d0((double *)
                             (sVar1 * local_8 * 0x800 +
                             *(int *)(param_1 + 0x2e +
                                     *(short *)(&DAT_630ff8c8 +
                                               (iVar2 + *(short *)(param_1 + 0x630a) * 6) * 2) * 4))
                             ,sVar1,0x100);
        sVar3 = sVar3 + 1;
        *(double *)(param_1 + 0x18da + (local_c + iVar2) * 8) = (double)fVar4;
      } while (sVar3 < *(short *)(param_1 + 0x6346));
    }
    local_8 = local_8 + 1;
    local_c = local_c + 6;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  return;
}


