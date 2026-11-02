/* Module: sdpp3260.dll
   Function: FUN_10007020
   Address: 10007020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_10007020(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  puVar1 = operator_new(param_2);
  uVar3 = *(uint *)((int)this + 4);
  *(undefined4 **)this = puVar1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return this;
}


