/* Module: aviplug.dll
   Function: FUN_5f966e10
   Address: 5f966e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f966e10(int param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  double *pdVar7;
  int *in_stack_0000001c;
  int *local_330;
  int local_328;
  int *local_320;
  int local_31c;
  int *local_314;
  int local_310;
  double local_308 [8];
  double local_2c8;
  double local_288;
  double local_248;
  double local_208 [8];
  double local_1c8 [16];
  undefined1 local_148 [324];
  
  piVar6 = (int *)(param_1 + 0x700);
  pdVar1 = (double *)in_stack_0000001c[0x7ea2];
  FUN_5f975010(param_2,(int)piVar6);
  local_31c = 5;
  do {
    FUN_5f971d20(piVar6,pdVar1);
    local_330 = piVar6 + 2;
    local_328 = 6;
    pdVar7 = pdVar1;
    do {
      if ((*(uint *)*local_330 & 4) == 0) {
        local_314 = in_stack_0000001c + 2;
        FUN_5f96e9a0(pdVar7,local_208);
        local_320 = in_stack_0000001c;
      }
      else {
        local_320 = in_stack_0000001c + 1;
        local_314 = in_stack_0000001c + 0x3f4a;
        FUN_5f96e9f0(pdVar7,local_208);
      }
      FUN_5f96da00(local_208,pdVar7);
      pdVar3 = local_308;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pdVar3 = 0;
        pdVar3 = (double *)((int)pdVar3 + 4);
      }
      iVar4 = 4;
      pdVar3 = local_1c8;
      do {
        iVar4 = iVar4 + -1;
        local_308[0] = ABS(*pdVar3 + pdVar3[-8]) + local_308[0];
        local_2c8 = ABS(pdVar3[-8] - *pdVar3) + local_2c8;
        local_288 = local_288 + pdVar3[-8];
        local_248 = local_248 + *pdVar3;
        pdVar3 = pdVar3 + 0x10;
      } while (iVar4 != 0);
      puVar5 = local_148;
      local_310 = 3;
      dVar2 = _DAT_5f9d78f0;
      do {
        iVar4 = 8;
        pdVar3 = (double *)(puVar5 + -0xc0);
        do {
          iVar4 = iVar4 + -1;
          dVar2 = ABS(*pdVar3 - *(double *)
                                 (puVar5 + (-0x88 - (int)(puVar5 + -0xc0)) + (int)(pdVar3 + 1))) +
                  dVar2;
          pdVar3 = pdVar3 + 1;
        } while (iVar4 != 0);
        puVar5 = puVar5 + 0x80;
        local_310 = local_310 + -1;
      } while (local_310 != 0);
      *(double *)(local_314 + *local_320 * 2) = dVar2;
      local_330 = local_330 + 1;
      *local_320 = *local_320 + 1;
      pdVar7 = pdVar7 + 0x40;
      local_328 = local_328 + -1;
    } while (local_328 != 0);
    piVar6 = piVar6 + 0x12;
    local_31c = local_31c + -1;
  } while (local_31c != 0);
  return;
}


