/* Module: 28_83260.dll
   Function: FUN_10003220
   Address: 10003220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10003220(void *this,undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  
  pfVar5 = (float *)((int)this + 0x3c);
  iVar7 = 0xb;
  puVar6 = param_2;
  fVar1 = _DAT_100070a0;
  fVar3 = _DAT_100070a0;
  do {
    fVar2 = fVar1 * _DAT_100070a4;
    pfVar5[-0xb] = fVar1;
    fVar4 = fVar3 * _DAT_100070a8;
    *pfVar5 = fVar3;
    *(undefined4 *)(((int)param_1 - (int)param_2) + (int)puVar6) = 0;
    *puVar6 = 0;
    pfVar5 = pfVar5 + 1;
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
    fVar1 = fVar2;
    fVar3 = fVar4;
  } while (iVar7 != 0);
  *param_2 = 0x3f800000;
  *param_1 = 0x3f800000;
  puVar6 = (undefined4 *)((int)this + 0x68);
  for (iVar7 = 0x50; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)((int)this + 0x1a8);
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  return;
}


