/* Module: cook3260.dll
   Function: FUN_633a3260
   Address: 633a3260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_633a3260(void *this,float *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  float *pfVar8;
  float *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  float local_8;
  
  iVar1 = *(int *)((int)this + 0x10) + 0x1f;
  puVar6 = *(undefined4 **)((int)this + 0x4798);
  for (uVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5 & 0x3fffffff; uVar2 != 0;
      uVar2 = uVar2 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x479c) = *(undefined4 *)((int)this + 0x4798);
  *(undefined4 *)((int)this + 0x47a0) = 0;
  local_8 = 0.0;
  if (0 < *(int *)((int)this + 8)) {
    local_10 = (void *)((int)this + 0x4820);
    local_1c = (float *)((int)this + 0xa820);
    piVar5 = (int *)((int)this + 0xa884);
    local_18 = 0;
    local_14 = 0;
    do {
      memmove(local_10,(void *)((int)this + (local_14 + *(int *)((int)this + 4)) * 4 + 0x4820),
              *(int *)((int)this + 4) * 8);
      FUN_633a4f10(this,(int)param_1,
                   (float *)((int)this + (*(int *)((int)this + 4) + local_18) * 8 + 0x4820),
                   *(int *)((int)this + 4),(int)local_8);
      FUN_633a4f70(this,(float *)((int)this + (local_18 + *(int *)((int)this + 4)) * 8 + 0x4820),
                   *(int *)((int)this + 4),(int)local_8);
      piVar4 = piVar5;
      piVar7 = piVar5 + -0x11;
      for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar7 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar7 = piVar7 + 1;
      }
      FUN_633a52b0((int)local_10,local_1c,*(int *)((int)this + 4),local_8,piVar5);
      local_1c = local_1c + 4;
      local_14 = local_14 + 0xc00;
      local_8 = (float)((int)local_8 + 1);
      local_18 = local_18 + 0x600;
      piVar5 = piVar5 + 0x22;
      local_10 = (void *)((int)local_10 + 0x3000);
    } while ((int)local_8 < *(int *)((int)this + 8));
  }
  if (*(int *)((int)this + 8) == 2) {
    FUN_633a57e0((int *)((int)this + 0xa884),(int *)((int)this + 0xa90c));
  }
  local_8 = 0.0;
  if (0 < *(int *)((int)this + 8)) {
    param_1 = (float *)((int)this + 0x12afc);
    pfVar8 = (float *)((int)this + 0x4820);
    piVar5 = (int *)((int)this + 0xa840);
    do {
      FUN_633a5550(this,pfVar8,piVar5,piVar5 + 0x11,*(uint *)((int)this + 4),
                   (float *)((int)this + 0x10afc));
      FUN_633a6200((float *)((int)this + 0x10afc),param_1);
      local_8 = (float)((int)local_8 + 1);
      piVar5 = piVar5 + 0x22;
      pfVar8 = pfVar8 + 0xc00;
      param_1 = param_1 + 0x400;
    } while ((int)local_8 < *(int *)((int)this + 8));
  }
  iVar3 = FUN_633a5610(this,(int *)((int)this + 0xa884));
  piVar5 = (int *)(iVar1 - iVar3);
  if (*(int *)((int)this + 8) == 2) {
    FUN_633a4430((int)this + 0x12afc,(undefined4 *)((int)this + 0x13afc),(int)piVar5);
  }
  else {
    FUN_633a4090(this,(float *)((int)this + 0x12afc),piVar5);
  }
  FUN_633a3a20(*(uint **)((int)this + 0x4798),*(int *)((int)this + 0x10),param_2);
  return 0;
}


