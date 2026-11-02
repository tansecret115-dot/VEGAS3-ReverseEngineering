/* Module: sfppack1.dll
   Function: FUN_5cdc0a50
   Address: 5cdc0a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cdc0a50(void *this,float *param_1,int param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float *local_14;
  int local_10;
  int local_c;
  
  if (param_2 != 0) {
    iVar6 = (int)this + 0x1a0;
    local_14 = param_1;
    local_c = param_2;
    do {
      pdVar1 = (double *)(iVar6 + 0x80);
      iVar4 = 8;
      pdVar2 = pdVar1;
      do {
        if ((*(uint *)((int)pdVar2 + 4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)pdVar2 = 0;
          *(undefined4 *)((int)pdVar2 + 4) = 0;
        }
        pdVar2 = pdVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (param_3 != 0) {
        local_10 = param_3;
        pfVar5 = local_14;
        do {
          fVar7 = (float10)*pfVar5;
          fVar8 = (float10)_DAT_5ce12bf0;
          iVar4 = 8;
          pdVar2 = pdVar1;
          do {
            iVar4 = iVar4 + -1;
            fVar7 = (float10)pdVar2[-0x10] * (float10)*pdVar2 + fVar7;
            fVar8 = (float10)pdVar2[-8] * (float10)*pdVar2 + fVar8;
            pdVar2 = pdVar2 + 1;
          } while (iVar4 != 0);
          puVar3 = (undefined4 *)(iVar6 + 0xb8);
          iVar4 = 7;
          do {
            *puVar3 = puVar3[-2];
            puVar3[1] = puVar3[-1];
            puVar3 = puVar3 + -2;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          *pdVar1 = (double)fVar7;
          *pfVar5 = (float)(fVar7 * (float10)*(double *)(iVar6 + 0xc0) + fVar8);
          pfVar5 = pfVar5 + param_2;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      iVar6 = iVar6 + 200;
      local_14 = local_14 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


