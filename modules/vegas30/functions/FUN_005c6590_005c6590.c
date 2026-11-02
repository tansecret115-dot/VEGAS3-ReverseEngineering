/* Module: vegas30.exe
   Function: FUN_005c6590
   Address: 005c6590
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c6590(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x584) != '\0') {
    iVar1 = FUN_005cf560(*(undefined4 *)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x68c),
                         *(undefined4 *)(param_1 + 0x690),*(undefined4 *)(param_1 + 0x694),param_2,
                         param_3,param_4,param_5);
    if ((iVar1 != 2) && (iVar1 != 3)) {
      FUN_005c6660(param_1);
    }
  }
  return;
}


