/* Module: vegas30k.dll
   Function: _SfLoadIcon@8
   Address: 010c46b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLoadIcon_8(undefined4 *param_1,LPCSTR param_2)

{
                    /* 0xc46b0  1091  _SfLoadIcon@8 */
  if (param_1 != (undefined4 *)0x0) {
    LoadIconA((HINSTANCE)*param_1,param_2);
    return;
  }
  LoadIconA((HINSTANCE)0x0,param_2);
  return;
}


