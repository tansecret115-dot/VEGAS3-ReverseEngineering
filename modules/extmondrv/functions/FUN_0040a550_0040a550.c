/* Module: extmondrv.dll
   Function: FUN_0040a550
   Address: 0040a550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040a550(void *this,uint param_1)

{
  undefined4 *puVar1;
  
  FUN_004015f0(this,param_1);
  puVar1 = (undefined4 *)((int)this + 0x10);
  *puVar1 = &PTR_LAB_0044e334;
  *(undefined ***)this = &PTR_FUN_0044e908;
  *(undefined ***)((int)this + 8) = &PTR_LAB_0044e8fc;
  *puVar1 = &PTR_LAB_0044e8b0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  FUN_0040ab80((int)puVar1);
  InterlockedIncrement((LONG *)&DAT_0045b00c);
  return this;
}


