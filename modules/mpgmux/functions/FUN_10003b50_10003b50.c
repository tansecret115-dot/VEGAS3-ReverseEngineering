/* Module: mpgmux.dll
   Function: FUN_10003b50
   Address: 10003b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10003b50(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x2dc4) = 0;
  *(undefined4 *)(param_1 + 0x2628) = 0;
  *(undefined4 *)(param_1 + 0x2638) = 0x200000;
  iVar1 = (**(code **)(param_1 + 0x2620))(0x200000);
  *(int *)(param_1 + 0x262c) = iVar1;
  if (iVar1 == 0) {
    FUN_100050f0(param_1,(byte *)s_Unable_to_allocate_memory_for_DV_10017288);
    return 0x10;
  }
  *(int *)(*(int *)(param_1 + 0x11f8) + 0x24) = param_1;
  *(undefined4 *)(param_1 + 0x2628) = *(undefined4 *)(*(int *)(param_1 + 0x11f8) + 0xc);
  *(undefined1 **)(*(int *)(param_1 + 0x11f8) + 0xc) = &LAB_10003bd0;
  return 0;
}


