/* Module: vegas30.exe
   Function: FUN_005a0d50
   Address: 005a0d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005a0d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 != 0) && (*(code **)(param_4 + 0x450) != (code *)0x0)) {
    (**(code **)(param_4 + 0x450))
              (param_4,*(undefined4 *)(param_4 + 0x454),*(undefined4 *)(param_4 + 0x458));
  }
  FUN_005ba0c0(DAT_0064b138,param_1,0,1);
  return 0;
}


