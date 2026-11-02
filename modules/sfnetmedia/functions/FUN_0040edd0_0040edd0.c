/* Module: sfnetmedia.dll
   Function: FUN_0040edd0
   Address: 0040edd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040edd0(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  *(undefined ***)this = &PTR_LAB_00435f88;
  *(undefined ***)((int)this + 4) = &PTR_LAB_00435f78;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0xc) = param_1;
  DVar1 = GetTickCount();
  *(DWORD *)(*(int *)((int)this + 0xc) + 0xdb0) = DVar1;
  return this;
}


