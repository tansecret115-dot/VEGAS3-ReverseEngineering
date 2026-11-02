/* Module: rmme3260.dll
   Function: FUN_66257370
   Address: 66257370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66257370(void *this,char *param_1,uint param_2,ushort param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  void *pvVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  
  puVar3 = operator_new(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[5] = 0;
  }
  *(undefined4 **)((int)this + 0x1c) = puVar3;
  *(undefined4 **)((int)this + 0x20) = puVar3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  puVar3 = operator_new(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[5] = 0;
  }
  *(undefined4 **)((int)this + 0x34) = puVar3;
  *(undefined4 **)((int)this + 0x38) = puVar3;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x44) = 1;
  *(undefined ***)this = &PTR_FUN_6626ce78;
  *(undefined4 *)((int)this + 0x52) = 0;
  piVar4 = operator_new(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = (int)&PTR_FUN_6626ceb0;
    piVar4[2] = 0;
    iVar5 = _open(param_1,param_2,param_3);
    piVar4[1] = iVar5;
    piVar4[3] = param_2;
    if (iVar5 < 0) {
      piVar6 = _errno();
      piVar4[2] = *piVar6;
    }
  }
  *(int **)((int)this + 4) = piVar4;
  *(ushort *)((int)this + 0x4c) = param_3;
  *(uint *)((int)this + 8) = param_2 & 0x8003;
  uVar7 = (**(code **)(*piVar4 + 0x14))();
  *(undefined4 *)((int)this + 0x40) = uVar7;
  *(undefined4 *)((int)this + 0x4e) = 0x1000;
  if ((*(int *)((int)this + 8) == 0x8000) || (*(int *)((int)this + 8) == 0x8002)) {
    pvVar8 = operator_new(0x1000);
    iVar5 = *(int *)((int)this + 0x4e);
    iVar2 = *(int *)((int)this + 0x20);
    *(void **)((int)this + 0x14) = pvVar8;
    *(void **)((int)this + 0x18) = pvVar8;
    *(void **)(iVar2 + 0xc) = pvVar8;
    *(int *)(iVar2 + 0x10) = iVar5 + (int)pvVar8;
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  if ((*(int *)((int)this + 8) == 0x8001) || (*(int *)((int)this + 8) == 0x8002)) {
    pvVar8 = operator_new(*(uint *)((int)this + 0x4e));
    iVar5 = *(int *)((int)this + 0x4e);
    iVar2 = *(int *)((int)this + 0x38);
    *(void **)((int)this + 0x2c) = pvVar8;
    *(void **)((int)this + 0x30) = pvVar8;
    *(void **)(iVar2 + 0xc) = pvVar8;
    *(int *)(iVar2 + 0x10) = iVar5 + (int)pvVar8;
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  uVar10 = 0xffffffff;
  pcVar9 = param_1;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  pcVar9 = operator_new(~uVar10);
  uVar10 = 0xffffffff;
  *(char **)((int)this + 0x48) = pcVar9;
  do {
    pcVar12 = param_1;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar12 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar12;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pcVar12 = pcVar12 + -uVar10;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar9 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar9 = pcVar9 + 1;
  }
  return this;
}


