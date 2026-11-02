/* Module: vidcap30.exe
   Function: _SfLang_UpdateKernelLCID@12
   Address: 0047b210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfLang_UpdateKernelLCID_12(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
                    /* 0x7b210  488  _SfLang_UpdateKernelLCID@12 */
  iVar1 = DAT_005c16d8;
  if ((DAT_005c16d8 == 0) || (param_1 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = 0x409;
  }
  *(int *)(param_1 + 0x13c) = param_2;
  *(int *)(iVar1 + 0x13c) = param_2;
  iVar2 = _SfLang_IsLCIDEnglish_4(*(undefined4 *)(param_1 + 0x13c));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(iVar1 + 0x134) = 0;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(iVar1 + 0x134) = 1;
  return 1;
}


