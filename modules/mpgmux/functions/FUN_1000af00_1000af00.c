/* Module: mpgmux.dll
   Function: FUN_1000af00
   Address: 1000af00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000af00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x2630) = 0;
  *(undefined4 *)(param_1 + 0x2634) = 0;
  *(undefined4 *)(param_1 + 0x2dc4) = 0;
  *(undefined4 *)(param_1 + 0x2dc0) = 0xf0;
  *(undefined4 *)(param_1 + 0x2dbc) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x263c);
  for (iVar1 = 0x1e0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x2628) = 0;
  *(undefined4 *)(param_1 + 0x2638) = 0x300000;
  iVar1 = (**(code **)(param_1 + 0x2620))(0x300000);
  *(int *)(param_1 + 0x262c) = iVar1;
  if (iVar1 == 0) {
    FUN_100050f0(param_1,(byte *)s_Unable_to_allocate_memory_for_SV_10017a4c);
    return 0x10;
  }
  *(int *)(*(int *)(param_1 + 0x11f8) + 0x24) = param_1;
  *(undefined4 *)(param_1 + 0x2628) = *(undefined4 *)(*(int *)(param_1 + 0x11f8) + 0xc);
  *(code **)(*(int *)(param_1 + 0x11f8) + 0xc) = FUN_1000afa0;
  return 0;
}


