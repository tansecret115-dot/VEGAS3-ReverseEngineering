/* Module: rmto3260.dll
   Function: FUN_662eda80
   Address: 662eda80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662eda80(void *this,int param_1)

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


