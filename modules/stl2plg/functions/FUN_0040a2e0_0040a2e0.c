/* Module: stl2plg.dll
   Function: FUN_0040a2e0
   Address: 0040a2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040a2e0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x4c) = param_1;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined ***)this = &PTR_LAB_00465c2c;
  *(undefined2 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  puVar2 = (undefined4 *)((int)this + 0x14);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  return this;
}


