/* Module: vegas30k.dll
   Function: _SfDibGammaCorrect@28
   Address: 010c3a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 *
_SfDibGammaCorrect_28
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          int param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 local_90 [144];
  
                    /* 0xc3a30  854  _SfDibGammaCorrect@28 */
  if ((param_5 != 0) && (param_6 != 0)) {
    iVar1 = FUN_01050ec0(local_90,param_1,param_2,param_3,param_4,param_1,param_2,param_3,param_4,
                         param_7);
    if (iVar1 != 0) {
      FUN_010c3810(local_90,param_5,param_6);
      FUN_01051260(local_90);
      return (undefined1 *)0x0;
    }
    return (undefined1 *)0x1;
  }
  return &DAT_80070057;
}


