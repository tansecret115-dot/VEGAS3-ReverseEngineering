/* Module: rmbe3260.dll
   Function: FUN_66012bb0
   Address: 66012bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66012bb0(int param_1,char *param_2,char *param_3,undefined4 param_4,char *param_5,char *param_6)

{
  FUN_6605b970((void *)(param_1 + 0x1c),param_2);
  FUN_6605b970((void *)(param_1 + 0x28),param_3);
  *(undefined4 *)(param_1 + 0x34) = param_4;
  FUN_6605b970((void *)(param_1 + 0x38),param_5);
  FUN_6605b970((void *)(param_1 + 0x44),param_6);
  return 0;
}


