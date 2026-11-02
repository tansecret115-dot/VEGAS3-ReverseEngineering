/* Module: sfpaplug.dll
   Function: FUN_00405ec0
   Address: 00405ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00405ec0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined ***)this = &PTR_LAB_0044e774;
  *(undefined2 *)((int)this + 8) = 0;
  puVar2 = (undefined4 *)((int)this + 0x220);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x214) = 0xffffffff;
  return this;
}


