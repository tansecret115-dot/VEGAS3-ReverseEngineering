/* Module: vegas30k.dll
   Function: _SfLang_ChangeLangInst@8
   Address: 010c4c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfLang_ChangeLangInst_8(int param_1,int param_2)

{
  int iVar1;
  
                    /* 0xc4c20  1043  _SfLang_ChangeLangInst@8 */
  iVar1 = DAT_0120e5c8;
  if ((DAT_0120e5c8 != 0) && (param_1 != 0)) {
    if (param_2 != 0) {
      *(int *)(param_1 + 0x138) = param_2;
      *(int *)(iVar1 + 0x138) = param_2;
    }
    return 1;
  }
  return 0;
}


