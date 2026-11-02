/* Module: rmbe3260.dll
   Function: FUN_66058c90
   Address: 66058c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66058c90(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (this == (void *)0x0) {
    assert(&DAT_6606f450,s_cralist_cpp_6606f458,0x31c);
  }
  if (param_2 == (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)((int)this + 4);
  }
  else {
    puVar1 = (undefined4 *)*param_2;
  }
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}


