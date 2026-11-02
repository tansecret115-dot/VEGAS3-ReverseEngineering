/* Module: rmto3260.dll
   Function: FUN_662fad60
   Address: 662fad60
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_662fad60(void *this,short *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0x20))(&param_2,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return (void *)0x0;
  }
  pvVar2 = operator_new((param_2 & 0xffff) + *(int *)((int)this + 0x14));
  (**(code **)(**(int **)((int)this + 4) + 0x34))();
  iVar3 = (**(code **)(**(int **)((int)this + 4) + 0x28))(pvVar2,*(undefined4 *)((int)this + 0x14));
  if (iVar3 != *(int *)((int)this + 0x14)) {
    operator_delete(pvVar2);
    return (void *)0x0;
  }
  puVar5 = (undefined4 *)((int)pvVar2 + *(int *)((int)this + 0x14));
  for (uVar4 = (param_2 & 0xffff) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *param_1 = (short)param_2 + *(short *)((int)this + 0x14);
  return pvVar2;
}


