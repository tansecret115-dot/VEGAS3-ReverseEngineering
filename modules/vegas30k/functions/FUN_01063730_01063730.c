/* Module: vegas30k.dll
   Function: FUN_01063730
   Address: 01063730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_01063730(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    if (*(int **)(param_1 + 0x34) != (int *)0x0) {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x14))();
      uVar1 = _SfAudio_GetSampleType_4(uVar1);
      *param_2 = uVar1;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x274);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    if (*(int *)(param_1 + 0x26c) == 8) {
      *param_4 = 0x31;
    }
    else if (*(int *)(param_1 + 0x26c) == 0x10) {
      *param_4 = 0x11;
    }
  }
  if ((param_5 != (undefined4 *)0x0) && (*param_5 = 0, *(int *)(param_1 + 0x250) != 0)) {
    *param_5 = *(undefined4 *)(param_1 + 0x244);
  }
  if ((param_6 != (undefined4 *)0x0) && (*param_6 = 0, *(int *)(param_1 + 0x250) != 0)) {
    *param_6 = 0x31;
  }
  return 0;
}


