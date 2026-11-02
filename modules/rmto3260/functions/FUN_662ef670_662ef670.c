/* Module: rmto3260.dll
   Function: FUN_662ef670
   Address: 662ef670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662ef670(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_2 == 0) {
    FUN_662eef50(this);
    return this;
  }
  FUN_662ef090(this,param_2);
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


