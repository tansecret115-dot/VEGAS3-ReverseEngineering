/* Module: sftrkfx1.dll
   Function: FUN_5cbb5540
   Address: 5cbb5540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5cbb5540(void *this,int param_1)

{
  double dVar1;
  int iVar2;
  int *piVar3;
  double *pdVar4;
  int *piVar5;
  
  piVar3 = (int *)(param_1 + 0x20);
  param_1 = 4;
  pdVar4 = (double *)((int)this + 200);
  piVar5 = (int *)((int)this + 0x128);
  do {
    if ((piVar3[0xc] == 0) || (piVar3[-8] == 0)) {
      *(undefined4 *)pdVar4 = 0;
      *(undefined4 *)((int)pdVar4 + 4) = 0;
    }
    else {
      *pdVar4 = (double)piVar3[-8] * _DAT_5cc04238;
    }
    dVar1 = (double)*piVar3 / (double)*(uint *)(*(int *)((int)this + 0x28) + 4);
    pdVar4[4] = dVar1;
    if (_DAT_5cc04118 < dVar1) {
      dVar1 = _DAT_5cc04118;
    }
    pdVar4[4] = dVar1;
    pdVar4[8] = (double)piVar3[-4] * _DAT_5cc04238;
    *piVar5 = piVar3[4];
    iVar2 = piVar3[8];
    piVar5[4] = iVar2;
    if (((*piVar5 != 2) && (_DAT_5cc04718 < *pdVar4)) && (1 < iVar2)) {
      *pdVar4 = (double)((float)*pdVar4 / ((float)iVar2 * _DAT_5cc04950));
    }
    pdVar4 = pdVar4 + 1;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  iVar2 = FUN_5cbb5280((int *)((int)this + 0x148),(undefined4 *)((int)this + 0xb8));
  *(uint *)((int)this + 0x2c) = (uint)(-1 < iVar2);
  return;
}


