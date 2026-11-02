/* Module: sfpaplug.dll
   Function: FUN_00435ae0
   Address: 00435ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00435ae0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    if (*(int *)(param_1 + 0x24c) != 0) {
      uVar1 = FUN_00416300(DAT_0045c380);
      *(undefined4 *)(param_1 + 0x228) = uVar1;
      FUN_00435b20(param_1);
    }
    *(undefined4 *)(param_1 + 0x22c) = 1;
  }
  return;
}


