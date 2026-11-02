/* Module: sfxpfx2.dll
   Function: FUN_5c899030
   Address: 5c899030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c899030(void *this,undefined4 *param_1)

{
  double dVar1;
  double *pdVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_20;
  int local_1c;
  
  puVar6 = (undefined4 *)((int)this + 0x1ac);
  puVar7 = &DAT_5c8dcca0;
  puVar8 = (undefined4 *)((int)this + 0x88);
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_20 = (undefined4 *)0x3;
  puVar7 = &DAT_5c8dccf0;
  puVar8 = (undefined4 *)((int)this + 0xd8);
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = &DAT_5c8dcd40;
  puVar8 = (undefined4 *)((int)this + 0x128);
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  do {
    if ((undefined4 *)*puVar6 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)*puVar6;
      for (iVar4 = 13000; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    puVar6 = puVar6 + 1;
    local_20 = (undefined4 *)((int)local_20 + -1);
  } while (local_20 != (undefined4 *)0x0);
  uVar3 = *param_1;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x80) = uVar3;
  *(undefined4 *)((int)this + 0x6c) = 0x3ff00000;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0x3ff00000;
  if (param_1[1] == 0) {
    *(undefined4 *)((int)this + 0x198) = 0;
    *(undefined4 *)((int)this + 0x19c) = 0x3ff00000;
  }
  else {
    *(double *)((int)this + 0x198) = _DAT_5c8dc900 / (double)(int)param_1[1];
  }
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0x3ff00000;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  iVar4 = ftol();
  *(double *)((int)this + 0x1a0) = (double)iVar4;
  iVar4 = ftol();
  iVar5 = 10;
  *(double *)((int)this + 400) = (double)iVar4;
  pdVar2 = (double *)((int)this + 0x128);
  do {
    iVar5 = iVar5 + -1;
    pdVar2[-10] = *(double *)((int)this + 0x208) * pdVar2[-10];
    *pdVar2 = *(double *)((int)this + 0x208) * *pdVar2;
    pdVar2 = pdVar2 + 1;
  } while (iVar5 != 0);
  uVar3 = ftol();
  local_20 = (undefined4 *)((int)this + 0x1b8);
  *(undefined4 *)((int)this + 0x1a8) = uVar3;
  local_1c = 3;
  iVar4 = (int)this + 0x88;
  do {
    *local_20 = 0;
    *(undefined4 *)(iVar4 + 0x140) = 0;
    *(undefined4 *)(iVar4 + 0x144) = 0;
    iVar5 = ftol();
    *(double *)(iVar4 + 0x168) = (double)iVar5;
    iVar5 = ftol();
    local_20 = local_20 + 1;
    *(double *)(iVar4 + 0x198) = (double)iVar5;
    local_1c = local_1c + -1;
    *(double *)(iVar4 + 0x1b0) = _DAT_5c8dce30 / (double)iVar5;
    iVar4 = iVar4 + 8;
  } while (local_1c != 0);
  dVar1 = *(double *)((int)this + 0x208) * _DAT_5c8dce28;
  *(double *)((int)this + 0x208) = dVar1;
  dVar1 = dVar1 * _DAT_5c8dce28;
  *(double *)((int)this + 0x210) = dVar1;
  *(double *)((int)this + 0x218) = dVar1 * _DAT_5c8dce28;
  return 0;
}


