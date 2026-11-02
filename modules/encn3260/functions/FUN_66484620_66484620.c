/* Module: encn3260.dll
   Function: FUN_66484620
   Address: 66484620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66484620(int param_1,char *param_2,undefined2 param_3)

{
  *(undefined4 *)(param_1 + 0x12a) = 1;
  FUN_664bb5e0((void *)(param_1 + 0xa8),param_2);
  *(undefined2 *)(param_1 + 0xb4) = param_3;
  return 0;
}


