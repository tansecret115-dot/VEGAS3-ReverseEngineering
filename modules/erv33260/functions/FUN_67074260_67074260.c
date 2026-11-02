/* Module: erv33260.dll
   Function: FUN_67074260
   Address: 67074260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67074260(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  *param_2 = 0;
  iVar2 = FUN_67072930((void *)((int)this + -0x70),&param_1);
  if (iVar2 == 0) {
    *puVar1 = *(undefined4 *)((int)this + 0x8c);
  }
  return;
}


