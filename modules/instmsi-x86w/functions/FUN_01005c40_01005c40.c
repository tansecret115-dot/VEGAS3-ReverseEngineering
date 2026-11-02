/* Module: InstMsi-x86w.exe
   Function: FUN_01005c40
   Address: 01005c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01005c40(undefined4 *param_1)

{
  FUN_01006e10(0xf,param_1);
  if (param_1[0x13] != 0) {
    (*(code *)param_1[1])(param_1[0x13]);
  }
  if (param_1[0x11] != 0) {
    (*(code *)param_1[1])(param_1[0x11]);
  }
  if (param_1[0x12] != 0) {
    (*(code *)param_1[1])(param_1[0x12]);
  }
  if (param_1[0x22] != -1) {
    (*(code *)param_1[6])(param_1[0x22]);
  }
  if (param_1[0x21] != -1) {
    (*(code *)param_1[6])(param_1[0x21]);
  }
  (*(code *)param_1[1])(param_1);
  return 1;
}


