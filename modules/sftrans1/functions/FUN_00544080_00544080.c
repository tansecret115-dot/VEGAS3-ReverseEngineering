/* Module: sftrans1.dll
   Function: FUN_00544080
   Address: 00544080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00544080(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (param_2 == 0x3b) {
    if (*(int *)(param_1 + 0x98) <= *(int *)(param_1 + 0x9c)) {
      iVar1 = *(int *)(param_1 + 0x98) + 4;
      *(int *)(param_1 + 0x98) = iVar1;
      pvVar2 = realloc(*(void **)(param_1 + 0x94),iVar1 * 4);
      *(void **)(param_1 + 0x94) = pvVar2;
    }
    *(uint *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x9c) * 4) =
         (uint)*(uint3 *)(param_1 + 0x6c);
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  }
  return 0;
}


