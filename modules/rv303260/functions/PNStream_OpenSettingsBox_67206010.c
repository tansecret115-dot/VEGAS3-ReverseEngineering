/* Module: rv303260.dll
   Function: PNStream_OpenSettingsBox
   Address: 67206010
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_OpenSettingsBox(int *param_1,undefined4 param_2)

{
                    /* 0x6010  16  PNStream_OpenSettingsBox */
  (**(code **)(*param_1 + 0x34))(param_2);
  return;
}


