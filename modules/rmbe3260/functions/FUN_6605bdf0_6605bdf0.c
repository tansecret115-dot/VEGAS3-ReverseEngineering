/* Module: rmbe3260.dll
   Function: FUN_6605bdf0
   Address: 6605bdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6605bdf0(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_2 == 0) {
    FUN_6605b5d0(this);
    return this;
  }
  FUN_6605b710(this,param_2);
  puVar2 = *(undefined4 **)this;
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return this;
}


