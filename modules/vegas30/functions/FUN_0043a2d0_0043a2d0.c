/* Module: vegas30.exe
   Function: FUN_0043a2d0
   Address: 0043a2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043a2d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = 0;
  if (param_1 == 0x65) {
    puVar3 = &DAT_00611890;
    for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    return 0x18;
  }
  if (param_1 == 0x66) {
    puVar3 = &DAT_00611950;
    for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    return 0xb;
  }
  if (param_1 == 0x67) {
    puVar3 = &DAT_006119a8;
    for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    return 0xe;
  }
  if (param_1 == 0x68) {
    uVar1 = 8;
    puVar3 = &DAT_00611a18;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
  }
  return uVar1;
}


