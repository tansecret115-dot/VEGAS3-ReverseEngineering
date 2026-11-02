/* Module: vegas30k.dll
   Function: _SfVector2DNormal@4
   Address: 010fdf30
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVector2DNormal_4(undefined8 *param_1)

{
  undefined4 uVar1;
  
                    /* 0xfdf30  1243  _SfVector2DNormal@4 */
  uVar1 = *(undefined4 *)(param_1 + 1);
  param_1[1] = *param_1;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 0xc);
  return;
}


