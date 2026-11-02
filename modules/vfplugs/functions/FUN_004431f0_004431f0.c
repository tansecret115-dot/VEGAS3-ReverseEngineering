/* Module: vfplugs.dll
   Function: FUN_004431f0
   Address: 004431f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004431f0(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int local_10;
  
  if (0 < param_2) {
    pdVar4 = (double *)(param_4 + 0x10);
    pdVar3 = (double *)(param_5 + 0x10 + (param_2 * 4 + -4) * 8);
    do {
      local_10 = SUB84(pdVar3[-2] + pdVar4[-2] + _DAT_0048cd80,0);
      local_10 = local_10 + -0x80000000;
      if (local_10 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0xff;
        if (local_10 < 0x100) {
          iVar5 = local_10;
        }
      }
      dVar1 = pdVar3[-1];
      dVar2 = pdVar4[-1];
      *param_1 = (char)iVar5;
      local_10 = SUB84(dVar1 + dVar2 + _DAT_0048cd80,0);
      local_10 = local_10 + -0x80000000;
      if (local_10 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0xff;
        if (local_10 < 0x100) {
          iVar5 = local_10;
        }
      }
      dVar1 = *pdVar3;
      dVar2 = *pdVar4;
      param_1[1] = (char)iVar5;
      local_10 = SUB84(dVar1 + dVar2 + _DAT_0048cd80,0);
      local_10 = local_10 + -0x80000000;
      if (local_10 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0xff;
        if (local_10 < 0x100) {
          iVar5 = local_10;
        }
      }
      dVar1 = pdVar3[1];
      dVar2 = pdVar4[1];
      param_1[2] = (char)iVar5;
      local_10 = SUB84(dVar1 + dVar2 + _DAT_0048cd80,0);
      local_10 = local_10 + -0x80000000;
      if (local_10 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0xff;
        if (local_10 < 0x100) {
          iVar5 = local_10;
        }
      }
      param_1[3] = (char)iVar5;
      param_1 = param_1 + param_3;
      pdVar3 = pdVar3 + -4;
      pdVar4 = pdVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


