/* Module: encn3260.dll
   Function: FUN_664c0190
   Address: 664c0190
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664c0190(void *this,uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = param_1 + 0x20 >> 5;
  if (*(int *)((int)this + 4) < (int)uVar5) {
    puVar2 = operator_new(uVar5 * 4);
    puVar6 = puVar2;
    for (uVar3 = uVar5; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_664c02a0(this,(int)puVar2);
    operator_delete(*(void **)this);
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 4) = uVar5;
  }
  puVar1 = (uint *)(*(int *)this + (param_1 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  return;
}


