/* Module: vegas30k.dll
   Function: _SfAudio_IsEqualFormat@8
   Address: 010b78a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfAudio_IsEqualFormat_8(undefined2 *param_1,undefined2 *param_2)

{
                    /* 0xb78a0  753  _SfAudio_IsEqualFormat@8 */
  if (param_1[1] != param_2[1]) {
    return false;
  }
  if (*(int *)(param_1 + 2) != *(int *)(param_2 + 2)) {
    return false;
  }
  return CONCAT22(param_1[7],*param_1) == CONCAT22(param_2[7],*param_2);
}


