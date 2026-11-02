/* Module: stl2plg.dll
   Function: FUN_00402710
   Address: 00402710
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00402710(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((undefined4 *)((int)this + 0x10) != param_1) {
    puVar2 = (undefined4 *)((int)this + 0x10);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}


