/* Module: rmbe3260.dll
   Function: FUN_660266b0
   Address: 660266b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660266b0(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (param_2 < 9) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x10) + param_2 * 4);
    (**(code **)*puVar1)(puVar1,&DAT_66065c58,param_3);
    return 0;
  }
  *param_3 = 0;
  return 0x80070057;
}


