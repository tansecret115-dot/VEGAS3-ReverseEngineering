/* Module: erv33260.dll
   Function: FUN_670736d0
   Address: 670736d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_670736d0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_67072930((void *)((int)this + -100),&param_1);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)((int)this + 0x20);
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


