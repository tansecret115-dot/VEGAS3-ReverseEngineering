/* Module: encn3260.dll
   Function: FUN_664c4610
   Address: 664c4610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664c4610(void *this,int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)*param_1;
  *(undefined4 *)((int)this + 8) = 0;
  uVar3 = *(uint *)(*param_1 + -8);
  *(uint *)((int)this + 4) = uVar3;
  puVar1 = operator_new(uVar3);
  uVar3 = *(uint *)((int)this + 4);
  *(undefined4 **)this = puVar1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  return this;
}


