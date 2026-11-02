/* Module: encn3260.dll
   Function: FUN_664a21d0
   Address: 664a21d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_664a21d0(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)((int)param_1 + 0x4c);
  while (pvVar1 = pvVar2, pvVar1 != (void *)0x0) {
    param_1 = pvVar1;
    pvVar2 = *(void **)((int)pvVar1 + 0x4c);
  }
  *(byte *)((int)param_1 + 0xcc) = *(byte *)((int)param_1 + 0xcc) & 0xfe ^ 1;
  FUN_664a2200(param_1);
  _DAT_664e31e8 = 0;
  return;
}


