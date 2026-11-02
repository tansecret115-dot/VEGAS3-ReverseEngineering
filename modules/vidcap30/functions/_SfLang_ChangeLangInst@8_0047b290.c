/* Module: vidcap30.exe
   Function: _SfLang_ChangeLangInst@8
   Address: 0047b290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfLang_ChangeLangInst_8(int param_1,int param_2)

{
  int iVar1;
  
                    /* 0x7b290  477  _SfLang_ChangeLangInst@8 */
  iVar1 = DAT_005c16d8;
  if ((DAT_005c16d8 != 0) && (param_1 != 0)) {
    if (param_2 != 0) {
      *(int *)(param_1 + 0x138) = param_2;
      *(int *)(iVar1 + 0x138) = param_2;
    }
    return 1;
  }
  return 0;
}


