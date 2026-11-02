/* Module: aviplug.dll
   Function: FUN_5f953e50
   Address: 5f953e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5f953e50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_5f955e40(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_FUN_5f9d8cc8;
  puVar2 = (undefined4 *)((int)this + 0x18);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x34);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this;
}


