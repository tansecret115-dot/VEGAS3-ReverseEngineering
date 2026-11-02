/* Module: rv103260.dll
   Function: FUN_636a4170
   Address: 636a4170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_636a4170(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = *(uint *)((int)this + 0x80);
  puVar3 = (uint *)((int)this + 0x80);
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)param_1 = (char)*puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    param_1 = (uint *)((int)param_1 + 1);
  }
  return 0;
}


