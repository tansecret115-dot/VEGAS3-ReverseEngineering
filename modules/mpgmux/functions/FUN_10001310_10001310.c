/* Module: mpgmux.dll
   Function: FUN_10001310
   Address: 10001310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_10001310(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)(**(code **)(param_1 + 0x2620))(0x18);
    *(undefined4 **)(param_2 + 4) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = param_3;
      *(undefined4 *)(*(int *)(param_2 + 4) + 0x10) = 0;
      iVar1 = *(int *)(param_2 + 4);
      *(undefined4 *)(iVar1 + 8) = param_4;
      *(undefined4 *)(iVar1 + 0xc) = param_5;
      return 0;
    }
    FUN_100050f0(param_1,(byte *)s_Unable_to_allocate_memory_for_qu_10016030);
    return 0x10;
  }
  for (iVar2 = *(int *)(iVar1 + 0x10); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
    iVar1 = iVar2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1 + 0x2620))(0x18);
  *(undefined4 **)(iVar1 + 0x10) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_3;
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x10) = 0;
    iVar1 = *(int *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 8) = param_4;
    *(undefined4 *)(iVar1 + 0xc) = param_5;
    return 0;
  }
  FUN_100050f0(param_1,(byte *)s_Unable_to_allocate_memory_for_qu_10016030);
  return 0x10;
}


