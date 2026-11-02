/* Module: Setup.exe
   Function: _SfLang_UpdateKernelLCID@12
   Address: 004053f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfLang_UpdateKernelLCID_12(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  
                    /* 0x53f0  218  _SfLang_UpdateKernelLCID@12 */
  iVar1 = DAT_00448e00;
  if ((DAT_00448e00 == 0) || (param_1 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = 0x409;
  }
  *(int *)(param_1 + 0x13c) = param_2;
  *(int *)(iVar1 + 0x13c) = param_2;
  bVar2 = _SfLang_IsLCIDEnglish_4((ushort)*(undefined4 *)(param_1 + 0x13c));
  if (CONCAT31(extraout_var,bVar2) != 0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(iVar1 + 0x134) = 0;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(iVar1 + 0x134) = 1;
  return 1;
}


