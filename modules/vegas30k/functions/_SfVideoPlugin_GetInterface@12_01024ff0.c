/* Module: vegas30k.dll
   Function: _SfVideoPlugin_GetInterface@12
   Address: 01024ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfVideoPlugin_GetInterface_12(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
                    /* 0x24ff0  1273  _SfVideoPlugin_GetInterface@12 */
  *param_2 = 0;
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) && (param_3 != (undefined4 *)0x0)) {
    puVar1 = (undefined1 *)(**(code **)*param_3)(param_3,param_1,param_2);
    return puVar1;
  }
  return &DAT_80070057;
}


