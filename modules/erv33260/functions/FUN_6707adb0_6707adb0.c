/* Module: erv33260.dll
   Function: FUN_6707adb0
   Address: 6707adb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707adb0(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_6707d640((int)this);
  FUN_6707dcc0(*(void **)((int)this + 0x48),*(int *)((int)this + 0x3c) + 1,iVar1);
  uVar2 = FUN_6707d620((int)this);
  puVar4 = *(undefined4 **)((int)this + 8);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


