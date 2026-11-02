/* Module: erv33260.dll
   Function: FUN_670742e0
   Address: 670742e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_670742e0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  *param_2 = 0;
  iVar2 = FUN_67072930((void *)((int)this + -0x70),&param_1);
  if (iVar2 == 0) {
    *puVar1 = *(undefined4 *)((int)this + 0x90);
  }
  return;
}


