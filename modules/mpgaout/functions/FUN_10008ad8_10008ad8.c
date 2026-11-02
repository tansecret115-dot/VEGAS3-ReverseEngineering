/* Module: mpgaout.dll
   Function: FUN_10008ad8
   Address: 10008ad8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10008ad8(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double local_24;
  int local_18;
  
  local_18 = -1;
  iVar4 = 0;
  while (iVar4 < *(int *)(param_1 + 0x44d9c) + -1) {
    iVar1 = *(int *)(param_1 + 0x44da0);
    iVar3 = *(int *)(iVar1 + iVar4 * 4);
    local_24 = 0.0;
    dVar6 = _DAT_10008ac0;
    if (iVar3 < *(int *)(iVar1 + 4 + iVar4 * 4)) {
      pdVar2 = (double *)(param_2 + iVar3 * 0x18);
      do {
        if ((*(int *)(pdVar2 + 1) != 0x14) &&
           (dVar5 = *pdVar2,
           (byte)(_DAT_10008ac0 < dVar5 |
                  (byte)((ushort)((ushort)(NAN(_DAT_10008ac0) || NAN(dVar5)) << 10) >> 8) |
                 (byte)((ushort)((ushort)(_DAT_10008ac0 == dVar5) << 0xe) >> 8)) != 0x40)) {
          dVar5 = exp(dVar5 * _DAT_10008ac8);
          dVar6 = exp(dVar6 * _DAT_10008ac8);
          dVar6 = log10(dVar5 + dVar6);
          dVar6 = dVar6 * _DAT_10008ad0;
          dVar5 = exp(_DAT_10008ac8 * *pdVar2);
          local_24 = (*(double *)(param_4 + 8 + *(int *)(pdVar2 + 2) * 0x20) - (double)iVar4) *
                     dVar5 + local_24;
          *pdVar2 = _DAT_10008ac0;
        }
        pdVar2 = pdVar2 + 3;
        iVar3 = iVar3 + 1;
        iVar1 = *(int *)(param_1 + 0x44da0);
      } while (iVar3 < *(int *)(iVar1 + 4 + iVar4 * 4));
    }
    if (_DAT_10008ac0 < dVar6) {
      dVar5 = exp(dVar6 * _DAT_10008ac8);
      iVar1 = *(int *)(param_1 + 0x44da0);
      iVar1 = (int)ROUND((double)(*(int *)(iVar1 + 4 + iVar4 * 4) - *(int *)(iVar1 + iVar4 * 4)) *
                         (local_24 / dVar5)) + *(int *)(iVar1 + iVar4 * 4);
    }
    else {
      iVar1 = (*(int *)(iVar1 + iVar4 * 4) + *(int *)(iVar1 + 4 + iVar4 * 4)) / 2;
    }
    if (*(int *)(param_2 + 8 + iVar1 * 0x18) == 0x14) {
      if (*(int *)(param_2 + 0x20 + iVar1 * 0x18) == 0x14) {
        iVar1 = iVar1 + 1;
      }
      else {
        iVar1 = iVar1 + -1;
      }
    }
    if (local_18 == -1) {
      *param_3 = iVar1;
    }
    else {
      *(undefined4 *)(param_2 + 0xc + iVar1 * 0x18) = 0xffffffff;
      *(int *)(param_2 + 0xc + local_18 * 0x18) = iVar1;
    }
    *(double *)(param_2 + iVar1 * 0x18) = dVar6;
    *(undefined4 *)(param_2 + 8 + iVar1 * 0x18) = 10;
    iVar4 = iVar4 + 1;
    local_18 = iVar1;
  }
  return;
}


