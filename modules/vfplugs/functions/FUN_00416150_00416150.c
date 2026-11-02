/* Module: vfplugs.dll
   Function: FUN_00416150
   Address: 00416150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00416150(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 + 8);
  puVar3 = (undefined4 *)((int)this + 8);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


