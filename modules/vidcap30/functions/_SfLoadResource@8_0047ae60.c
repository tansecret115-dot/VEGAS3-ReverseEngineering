/* Module: vidcap30.exe
   Function: _SfLoadResource@8
   Address: 0047ae60
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLoadResource_8(undefined4 *param_1,HRSRC param_2)

{
  HGLOBAL pvVar1;
  
                    /* 0x7ae60  528  _SfLoadResource@8 */
  if ((((HMODULE)param_1[0x4e] != (HMODULE)0x0) && (param_1[0x4d] != 0)) &&
     (pvVar1 = LoadResource((HMODULE)param_1[0x4e],param_2), pvVar1 != (HGLOBAL)0x0)) {
    return;
  }
  LoadResource((HMODULE)*param_1,param_2);
  return;
}


