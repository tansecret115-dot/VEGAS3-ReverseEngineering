/* Module: aviplug.dll
   Function: FUN_5f96f270
   Address: 5f96f270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96f270(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 uVar2;
  
  do {
    iVar1 = (*param_1 + param_1[0x10] + param_1[0x20] + param_1[0x30]) -
            (param_1[8] + param_1[0x18] + param_1[0x28] + param_1[0x38]);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    uVar2 = 0;
    if (iVar1 < 0xdad) {
      FUN_5f96f2da(4);
      iVar1 = extraout_EDX;
    }
    else {
      uVar2 = 0xffffffff;
      FUN_5f96f412(4);
      iVar1 = extraout_EDX_00;
    }
    *param_2 = uVar2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 0x38;
  } while (iVar1 != 1);
  FUN_5f96f518();
  return;
}


