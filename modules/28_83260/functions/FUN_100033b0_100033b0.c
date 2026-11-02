/* Module: 28_83260.dll
   Function: FUN_100033b0
   Address: 100033b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100033b0(void *this,undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0x25;
  pfVar3 = (float *)((int)this + 0x1d4);
  puVar4 = param_1;
  fVar1 = _DAT_100070a0;
  do {
    fVar2 = fVar1 * _DAT_100070ac;
    *pfVar3 = fVar1;
    *puVar4 = 0;
    pfVar3 = pfVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
    fVar1 = fVar2;
  } while (iVar5 != 0);
  *param_1 = 0x3f800000;
  puVar4 = (undefined4 *)((int)this + 0x484);
  for (iVar5 = 0x6f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)((int)this + 0x3f0);
  for (iVar5 = 0x25; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  return;
}


