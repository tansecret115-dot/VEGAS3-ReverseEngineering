/* Module: rmme3260.dll
   Function: FUN_6625ff60
   Address: 6625ff60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6625ff60(void *this,char *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626d3d0;
  *(undefined ***)((int)this + 8) = &PTR_LAB_6626d3b8;
  *(undefined ***)this = &PTR_FUN_6626d3a0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626d390;
  *(undefined ***)((int)this + 8) = &PTR_LAB_6626d378;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  pvVar2 = operator_new(0x10);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_66262670(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0xc) = puVar3;
  pvVar2 = operator_new(0x14);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_66262ae0(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0x10) = puVar3;
  pvVar2 = operator_new(0x14);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_662618b0(pvVar2,0x2711,this);
  }
  *(undefined4 **)((int)this + 0x14) = puVar3;
  pvVar2 = operator_new(0x14);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_662618b0(pvVar2,10000,this);
  }
  *(undefined4 **)((int)this + 0x1c) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_662622e0(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0x18) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_66262010(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0x20) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_66262010(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0x24) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_662633a0(pvVar2,0x4e22,this);
  }
  *(undefined4 **)((int)this + 0x28) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_662633a0(pvVar2,20000,this);
  }
  *(undefined4 **)((int)this + 0x2c) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_662633a0(pvVar2,0x4e21,this);
  }
  *(undefined4 **)((int)this + 0x30) = puVar3;
  pvVar2 = operator_new(8);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_662632c0(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0x34) = puVar3;
  puVar3 = operator_new(4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_66263b00(puVar3);
  }
  *(undefined4 **)((int)this + 0x38) = puVar3;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  if (param_1 == (char *)0x0) {
    *(undefined4 *)((int)this + 0x54) = 0;
    return this;
  }
  uVar5 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = operator_new(~uVar5);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar7 + -uVar5;
  pcVar8 = pcVar4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(char **)((int)this + 0x54) = pcVar4;
  return this;
}


