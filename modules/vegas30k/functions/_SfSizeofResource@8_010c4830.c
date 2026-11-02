/* Module: vegas30k.dll
   Function: _SfSizeofResource@8
   Address: 010c4830
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfSizeofResource_8(undefined4 *param_1,HRSRC param_2)

{
                    /* 0xc4830  1203  _SfSizeofResource@8 */
  if (((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) {
    SizeofResource((HMODULE)param_1[0x4e],param_2);
    return;
  }
  SizeofResource((HMODULE)*param_1,param_2);
  return;
}


