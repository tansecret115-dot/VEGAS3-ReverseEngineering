/* Module: aviplug.dll
   Function: FUN_5f961a70
   Address: 5f961a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f961a70(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xd8) = param_2;
  *(undefined4 *)((int)this + 0xdc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined ***)this = &PTR_LAB_5f9d94ac;
  puVar2 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return this;
}


