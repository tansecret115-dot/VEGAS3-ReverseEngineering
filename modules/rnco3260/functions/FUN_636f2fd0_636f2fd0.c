/* Module: rnco3260.dll
   Function: FUN_636f2fd0
   Address: 636f2fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_636f2fd0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 8);
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}


