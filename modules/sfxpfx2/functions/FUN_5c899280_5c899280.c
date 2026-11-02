/* Module: sfxpfx2.dll
   Function: FUN_5c899280
   Address: 5c899280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c899280(void *this,undefined4 *param_1)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  dVar1 = (double)(int)param_1[3] * _DAT_5c8dc928;
  *(double *)((int)this + 0x58) = dVar1;
  *(double *)((int)this + 0x60) = _DAT_5c8dc920 - dVar1;
  if (*(int *)((int)this + 0x30) != 0) {
    iVar4 = FUN_5c899030(this,param_1);
    *(undefined4 *)((int)this + 0x30) = 0;
    *(uint *)((int)this + 0x50) = (uint)(-1 < iVar4);
    return iVar4;
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x3ff00000;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0x3ff00000;
  puVar5 = &DAT_5c8dccf0;
  puVar6 = (undefined4 *)((int)this + 0xd8);
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = &DAT_5c8dcd40;
  pdVar2 = (double *)((int)this + 0x128);
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    pdVar2 = (double *)((int)pdVar2 + 4);
  }
  iVar4 = 10;
  pdVar2 = (double *)((int)this + 0x128);
  do {
    iVar4 = iVar4 + -1;
    pdVar2[-10] = pdVar2[-10] * *(double *)((int)this + 0x208);
    *pdVar2 = *pdVar2 * *(double *)((int)this + 0x208);
    pdVar2 = pdVar2 + 1;
  } while (iVar4 != 0);
  dVar1 = *(double *)((int)this + 0x208) * _DAT_5c8dce28;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(double *)((int)this + 0x208) = dVar1;
  dVar1 = dVar1 * _DAT_5c8dce28;
  *(double *)((int)this + 0x210) = dVar1;
  *(double *)((int)this + 0x218) = dVar1 * _DAT_5c8dce28;
  if (param_1[1] == 0) {
    *(undefined4 *)((int)this + 0x198) = 0;
    *(undefined4 *)((int)this + 0x19c) = 0x3ff00000;
    iVar4 = 3;
    pdVar2 = (double *)((int)this + 0x220);
  }
  else {
    iVar4 = 3;
    *(double *)((int)this + 0x198) = _DAT_5c8dc900 / (double)(int)param_1[1];
    pdVar2 = (double *)((int)this + 0x220);
  }
  do {
    iVar3 = ftol();
    iVar4 = iVar4 + -1;
    *pdVar2 = (double)iVar3;
    pdVar2[3] = _DAT_5c8dce30 / (double)iVar3;
    pdVar2 = pdVar2 + 1;
  } while (iVar4 != 0);
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x184) = 0x3ff00000;
  iVar4 = ftol();
  *(double *)((int)this + 400) = (double)iVar4;
  return 0;
}


