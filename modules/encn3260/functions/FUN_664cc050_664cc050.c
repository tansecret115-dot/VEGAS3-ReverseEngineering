/* Module: encn3260.dll
   Function: FUN_664cc050
   Address: 664cc050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664cc050(void *this,char *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  *(undefined ***)((int)this + 4) = &PTR_LAB_664dfe08;
  *(undefined ***)((int)this + 8) = &PTR_LAB_664dfdf0;
  *(undefined ***)this = &PTR_FUN_664dfdd8;
  *(undefined ***)((int)this + 4) = &PTR_LAB_664dfdc8;
  *(undefined ***)((int)this + 8) = &PTR_LAB_664dfdb0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  pvVar2 = operator_new(0x10);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664ce5d0(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0xc) = puVar3;
  pvVar2 = operator_new(0x14);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664cea40(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0x10) = puVar3;
  pvVar2 = operator_new(0x14);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664cd990(pvVar2,0x2711,this);
  }
  *(undefined4 **)((int)this + 0x14) = puVar3;
  pvVar2 = operator_new(0x14);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664cd990(pvVar2,10000,this);
  }
  *(undefined4 **)((int)this + 0x1c) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664ce240(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0x18) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664cef60(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0x20) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664cef60(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0x24) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664cf380(pvVar2,0x4e22,this);
  }
  *(undefined4 **)((int)this + 0x28) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664cf380(pvVar2,20000,this);
  }
  *(undefined4 **)((int)this + 0x2c) = puVar3;
  pvVar2 = operator_new(0xc);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664cf380(pvVar2,0x4e21,this);
  }
  *(undefined4 **)((int)this + 0x30) = puVar3;
  pvVar2 = operator_new(8);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664cf320(pvVar2,this);
  }
  *(undefined4 **)((int)this + 0x34) = puVar3;
  puVar3 = operator_new(4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_664cfb60(puVar3);
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


