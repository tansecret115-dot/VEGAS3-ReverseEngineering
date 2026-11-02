/* Module: oggplug.dll
   Function: FUN_00441280
   Address: 00441280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00441280(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x1c) + param_2) {
    iVar1 = *(int *)(param_1 + 0x18) + 0x20 + param_2;
    *(int *)(param_1 + 0x18) = iVar1;
    pvVar2 = realloc(*(void **)(param_1 + 0x10),iVar1 * 4);
    *(void **)(param_1 + 0x10) = pvVar2;
    pvVar2 = realloc(*(void **)(param_1 + 0x14),*(int *)(param_1 + 0x18) << 3);
    *(void **)(param_1 + 0x14) = pvVar2;
  }
  return;
}


