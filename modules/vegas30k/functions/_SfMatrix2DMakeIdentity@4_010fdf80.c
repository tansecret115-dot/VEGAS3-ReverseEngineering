/* Module: vegas30k.dll
   Function: _SfMatrix2DMakeIdentity@4
   Address: 010fdf80
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfMatrix2DMakeIdentity_4(undefined4 *param_1)

{
                    /* 0xfdf80  1106  _SfMatrix2DMakeIdentity@4 */
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[1] = 0x3ff00000;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0x3ff00000;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0x3ff00000;
  return;
}


