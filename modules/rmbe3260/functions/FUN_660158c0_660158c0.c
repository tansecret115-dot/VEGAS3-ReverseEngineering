/* Module: rmbe3260.dll
   Function: FUN_660158c0
   Address: 660158c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_660158c0(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_8;
  
  if ((short)*(uint *)(param_1 + 0x58) != 0) {
    iVar2 = 0;
    local_8 = *(uint *)(param_1 + 0x58) & 0xffff;
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0x54) + iVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_66016890((int)pvVar1);
        operator_delete(pvVar1);
      }
      iVar2 = iVar2 + 4;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  FUN_6605cdc0((void *)(param_1 + 0x54),0,0xffffffff);
  *(undefined4 *)(param_1 + 100) = 0;
  return 0;
}


