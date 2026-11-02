/* Module: rmto3260.dll
   Function: FUN_66301d80
   Address: 66301d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66301d80(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if (this == (void *)0x0) {
    assert(&DAT_66311ad0,s_cralist_cpp_66311ad8,0x344);
  }
  if (param_1 < 0) {
    assert(s_nIndex_>__0_66311b2c,s_cralist_cpp_66311ad8,0x345);
  }
  if (*(int *)((int)this + 0xc) <= param_1) {
    return (undefined4 *)0x0;
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (puVar1 == (undefined4 *)0x0) {
      assert(s_pNode_66311af4,s_cralist_cpp_66311ad8,0x351);
    }
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}


