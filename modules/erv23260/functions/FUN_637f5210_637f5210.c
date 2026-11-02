/* Module: erv23260.dll
   Function: FUN_637f5210
   Address: 637f5210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_637f5210(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      if ((*(byte *)(iVar1 + *(int *)(param_1 + 0x20)) & 0x40) != 0) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x30));
  }
  return *(undefined4 *)(param_1 + 0x2c);
}


