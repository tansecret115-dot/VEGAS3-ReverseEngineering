/* Module: 28_83260.dll
   Function: FUN_10001cb0
   Address: 10001cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10001cb0(void *this,undefined4 *param_1)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0x25;
  pfVar2 = (float *)((int)this + 0x1d4);
  puVar3 = param_1;
  fVar1 = _DAT_10007094;
  do {
    *pfVar2 = fVar1;
    fVar1 = fVar1 * *(float *)((int)this + 0x1c50);
    *puVar3 = 0;
    pfVar2 = pfVar2 + 1;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *param_1 = 0x3f800000;
  puVar3 = (undefined4 *)((int)this + 0x3f0);
  for (iVar4 = 0x25; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}


