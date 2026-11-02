/* Module: rmme3260.dll
   Function: FUN_66250d40
   Address: 66250d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66250d40(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 0x10) <= param_1) {
    return (undefined4 *)0x0;
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  for (; param_1 != 0; param_1 = param_1 + -1) {
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}


