/* Module: vegas30.exe
   Function: FUN_005754a0
   Address: 005754a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005754a0(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  FreeLibrary(DAT_00659e3c);
  DAT_00659e3c = (HMODULE)0x0;
  _SfMetric_Close_4(DAT_00659e48);
  DAT_00659e48 = 0;
  return;
}


