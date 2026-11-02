/* Module: rmbe3260.dll
   Function: FUN_6605d470
   Address: 6605d470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6605d470(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  *(undefined4 **)((int)this + 0xc) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *param_1 = *puVar1;
    *param_2 = *(undefined4 *)(*(int *)((int)this + 0xc) + 4);
    return 0;
  }
  return 0x80004005;
}


