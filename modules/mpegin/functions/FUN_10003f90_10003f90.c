/* Module: mpegin.dll
   Function: FUN_10003f90
   Address: 10003f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10003f90(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_10005ce0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0xfff00000,0xfff00000);
  uVar1 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x200,' ');
  iVar2 = *(int *)(param_1 + 0x12e54);
  if (*(int *)(iVar2 + 0x240) == 0) {
    while (*(int *)(iVar2 + 0x244) == 0) {
      iVar2 = FUN_10003e90(param_1,uVar1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x12e54);
      if (*(int *)(iVar2 + 0x240) != 0) {
        return 1;
      }
      if (*(int *)(iVar2 + 0x244) != 0) {
        return 1;
      }
      FUN_10005910((int *)(iVar2 + 0x200),8);
      FUN_10005ce0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0xfff00000,0xfff00000);
      uVar1 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x200,' ');
      iVar2 = *(int *)(param_1 + 0x12e54);
      if (*(int *)(iVar2 + 0x240) != 0) {
        return 1;
      }
    }
  }
  return 1;
}


