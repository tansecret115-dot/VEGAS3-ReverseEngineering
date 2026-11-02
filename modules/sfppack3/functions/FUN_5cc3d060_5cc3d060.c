/* Module: sfppack3.dll
   Function: FUN_5cc3d060
   Address: 5cc3d060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc3d060(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  double *pdVar3;
  float10 fVar4;
  int local_14;
  
  fVar4 = FUN_5cc3d190(param_1[3],-800);
  *(double *)((int)this + 0x160) = (double)fVar4;
  *(double *)((int)this + 0x168) = (double)param_1[1] * _DAT_5cc87d28;
  FUN_5cc3cdb0(this,*param_1);
  pdVar3 = (double *)((int)this + 0x170);
  local_14 = 1000;
  do {
    fVar4 = (float10)_CIpow();
    *pdVar3 = (double)fVar4;
    pdVar3 = pdVar3 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  iVar1 = ftol();
  *(double *)((int)this + 0x20b0) = _DAT_5cc87bf8 / (double)iVar1;
  if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x20c0) = 0;
    *(undefined4 *)((int)this + 0x20c8) = 0;
    *(undefined4 *)((int)this + 0x20c4) = 0;
    *(undefined4 *)((int)this + 0x20cc) = 0;
    puVar2 = (undefined4 *)((int)this + 0x21d0);
    iVar1 = 0x20;
    do {
      puVar2[-0x40] = 0;
      puVar2[-0x3f] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined4 *)((int)this + 0x22d0) = 0;
    *(undefined4 *)((int)this + 0x22d4) = 0;
  }
  *(undefined4 *)((int)this + 0x154) = 1;
  return 0;
}


