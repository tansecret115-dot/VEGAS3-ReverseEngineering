/* Module: encn3260.dll
   Function: FUN_664bb980
   Address: 664bb980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664bb980(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_2 == 0) {
    FUN_664bb240(this);
    return this;
  }
  FUN_664bb380(this,param_2);
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


