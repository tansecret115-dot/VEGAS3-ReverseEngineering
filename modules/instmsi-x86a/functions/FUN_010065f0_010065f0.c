/* Module: InstMsi-x86a.exe
   Function: FUN_010065f0
   Address: 010065f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_010065f0(undefined4 *param_1)

{
  int iVar1;
  ushort local_2;
  
  param_1[0xc] = param_1[0xc] + (uint)*(ushort *)(param_1[0x12] + 6);
  if (*(short *)(param_1 + 0x2c) == 0) {
    iVar1 = FUN_010066d0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + -1;
  iVar1 = FUN_01006b10(param_1,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(short *)(param_1[0x12] + 6) == 0) {
    iVar1 = FUN_010066d0(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_01006b10(param_1,(uint)*(ushort *)(param_1[0x12] + 4));
      if (iVar1 != 0) {
        *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + -1;
        goto LAB_01006674;
      }
    }
    return 0;
  }
LAB_01006674:
  local_2 = *(ushort *)(param_1[0x12] + 6);
  iVar1 = FUN_010072f0(param_1,&local_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(ushort *)(param_1[0x12] + 6) != local_2) {
    FUN_01007480((undefined4 *)*param_1,7,0);
    return 0;
  }
  return 1;
}


