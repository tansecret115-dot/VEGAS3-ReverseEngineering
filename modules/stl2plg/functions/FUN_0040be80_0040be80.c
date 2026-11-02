/* Module: stl2plg.dll
   Function: FUN_0040be80
   Address: 0040be80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040be80(void *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_LAB_00465c88;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 2;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)((int)this + 0xc) = DVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  puVar3 = (undefined4 *)((int)this + 0x30);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  return this;
}


