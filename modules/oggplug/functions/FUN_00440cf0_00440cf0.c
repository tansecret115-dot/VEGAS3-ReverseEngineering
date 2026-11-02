/* Module: oggplug.dll
   Function: FUN_00440cf0
   Address: 00440cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00440cf0(int param_1,int param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar7 = param_2;
  pdVar5 = (double *)&stack0xffffffe0;
  local_8 = 0;
  FUN_00444a80();
  pfVar4 = param_3;
  if (0 < param_2) {
    do {
      *pdVar5 = (double)*pfVar4;
      pdVar5 = pdVar5 + 1;
      param_2 = param_2 + -1;
      pfVar4 = pfVar4 + 1;
    } while (param_2 != 0);
  }
  while( true ) {
    dVar1 = _DAT_0044c570;
    if (0 < iVar7) {
      pdVar5 = (double *)&stack0xffffffe0;
      param_2 = iVar7;
      do {
        dVar2 = (double)*(float *)(param_1 + iVar7 * 4);
        dVar3 = _DAT_0044c570;
        if (-1 < iVar7 + -1) {
          pfVar4 = (float *)(param_1 + (iVar7 + -1) * 4);
          iVar6 = iVar7;
          do {
            iVar6 = iVar6 + -1;
            dVar3 = *pdVar5 * dVar3 + dVar2;
            dVar2 = dVar2 * *pdVar5 + (double)*pfVar4;
            pfVar4 = pfVar4 + -1;
          } while (iVar6 != 0);
        }
        dVar2 = dVar2 / dVar3;
        param_2 = param_2 + -1;
        *pdVar5 = *pdVar5 - dVar2;
        dVar1 = dVar2 * dVar2 + dVar1;
        pdVar5 = pdVar5 + 1;
      } while (param_2 != 0);
    }
    pdVar5 = (double *)&stack0xffffffe0;
    if (0x28 < local_8) break;
    local_8 = local_8 + 1;
    if (dVar1 <= _DAT_0044d820) {
      if (0 < iVar7) {
        do {
          dVar1 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          *param_3 = (float)dVar1;
          param_3 = param_3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      return 0;
    }
  }
  return 0xffffffff;
}


