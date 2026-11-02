/* Module: wavplug.dll
   Function: FUN_5f3b6ef0
   Address: 5f3b6ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f3b6ef0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5f3daeec == 0)) {
    uVar1 = FUN_5f3b71b0();
    if (uVar1 != 0) {
      DAT_5f3daee0 = uVar1 / 1000;
      DAT_5f3daee4 = DAT_5f3daee0 / 1000;
      DAT_5f3daedc = uVar1 / DAT_5f3daee4;
      if (DAT_5f3daedc == 1000000) {
        DAT_5f3daedc = 0;
      }
      _DAT_5f3daee8 = 1000;
      PTR_FUN_5f3daef8 = &LAB_5f3b6fd0;
      PTR_LAB_5f3daefc = FUN_5f3b7000;
      PTR_FUN_5f3daf00 = FUN_5f3b7070;
      PTR_FUN_5f3daf04 = FUN_5f3b70c0;
      PTR_FUN_5f3daf08 = FUN_5f3b70f0;
      s_Pl__SMTP_feedback_sonicfoundry_c_5f3daf0c._0_4_ = FUN_5f3b7160;
      DAT_5f3daeec = 1;
      _DAT_5f3daed8 = uVar1;
    }
    (*(code *)PTR_FUN_5f3daf04)(&DAT_5f3daef0);
    if (4 < param_1) {
      FUN_5f3b71d0();
    }
  }
  return;
}


