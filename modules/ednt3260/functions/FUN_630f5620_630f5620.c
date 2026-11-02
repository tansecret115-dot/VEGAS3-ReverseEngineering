/* Module: ednt3260.dll
   Function: FUN_630f5620
   Address: 630f5620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_630f5620(void *this,undefined2 *param_1)

{
  double dVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int local_8;
  
  dVar1 = _DAT_63101b10;
  local_8 = 0;
  psVar6 = (short *)((int)this + 0xa3ea);
  do {
    iVar5 = psVar6[-6] + 1;
    if (iVar5 < *psVar6) {
      psVar3 = (short *)((int)this + (local_8 + iVar5) * 2 + 0xa3f6);
      do {
        if (psVar3[-1] + 2 < (int)*psVar3) {
          *psVar3 = psVar3[-1] + 2;
        }
        iVar5 = iVar5 + 1;
        psVar3 = psVar3 + 1;
      } while (iVar5 < *psVar6);
    }
    local_8 = local_8 + 0xfd;
    psVar6 = psVar6 + 1;
  } while (local_8 < 0x5ee);
  local_8 = 0xfd;
  psVar6 = (short *)((int)this + 0xa3ec);
  do {
    param_1 = param_1 + 1;
    psVar6[0x5f3] = 0;
    iVar5 = (int)psVar6[-6];
    if (iVar5 < *psVar6) {
      psVar3 = (short *)((int)this + (iVar5 + local_8) * 2 + 0xa1fc);
      do {
        iVar4 = (int)psVar3[0xfd] - (int)*psVar3;
        if (iVar4 < 0) {
          sVar2 = *psVar3 - psVar3[0xfd];
        }
        else {
          sVar2 = (short)iVar4;
        }
        psVar3 = psVar3 + 1;
        psVar6[0x5f3] = psVar6[0x5f3] + *(short *)(&DAT_63101a98 + sVar2 * 2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *psVar6);
    }
    if ((double)((int)*psVar6 - (int)psVar6[-6]) < (double)(int)psVar6[0x5f3] / dVar1) {
      *param_1 = 1;
    }
    local_8 = local_8 + 0xfd;
    psVar6 = psVar6 + 1;
  } while (local_8 < 0x5ee);
  return;
}


