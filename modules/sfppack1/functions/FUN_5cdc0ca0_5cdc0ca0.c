/* Module: sfppack1.dll
   Function: FUN_5cdc0ca0
   Address: 5cdc0ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cdc0ca0(void *this,short *param_1,int param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  short *local_18;
  int local_14;
  int local_10;
  
  if (param_2 != 0) {
    iVar8 = (int)this + 0x1a0;
    local_18 = param_1;
    local_10 = param_2;
    do {
      pdVar2 = (double *)(iVar8 + 0x80);
      iVar7 = 8;
      pdVar5 = pdVar2;
      do {
        if ((*(uint *)((int)pdVar5 + 4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)pdVar5 = 0;
          *(undefined4 *)((int)pdVar5 + 4) = 0;
        }
        pdVar5 = pdVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      if (param_3 != 0) {
        local_14 = param_3;
        psVar9 = local_18;
        do {
          iVar7 = 8;
          dVar4 = (double)(int)*psVar9 * _DAT_5ce13270;
          pdVar5 = pdVar2;
          do {
            pdVar1 = pdVar5 + -0x10;
            dVar3 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            iVar7 = iVar7 + -1;
            dVar4 = *pdVar1 * dVar3 + dVar4;
          } while (iVar7 != 0);
          puVar6 = (undefined4 *)(iVar8 + 0xb8);
          iVar7 = 7;
          do {
            *puVar6 = puVar6[-2];
            puVar6[1] = puVar6[-1];
            puVar6 = puVar6 + -2;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          *pdVar2 = dVar4;
          iVar7 = ftol();
          if (iVar7 < -0x8000) {
            iVar7 = -0x8000;
          }
          else if (0x7fff < iVar7) {
            iVar7 = 0x7fff;
          }
          *psVar9 = (short)iVar7;
          psVar9 = psVar9 + param_2;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      iVar8 = iVar8 + 200;
      local_18 = local_18 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}


