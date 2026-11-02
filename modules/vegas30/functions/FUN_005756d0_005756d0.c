/* Module: vegas30.exe
   Function: FUN_005756d0
   Address: 005756d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005756d0(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  FreeLibrary(DAT_00659e40);
  DAT_00659e40 = (HMODULE)0x0;
  _SfMetric_Close_4(DAT_00659e44);
  DAT_00659e44 = 0;
  return;
}


