/* Module: sfpagepeel.dll
   Function: FUN_00427900
   Address: 00427900
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427900(undefined4 *param_1,LPCSTR param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    LoadCursorA((HINSTANCE)*param_1,param_2);
    return;
  }
  if (((uint)param_2 >> 0x10 == 0) && (0x7eff < (ushort)param_2)) {
    LoadCursorA((HINSTANCE)0x0,param_2);
    return;
  }
  LoadCursorA(DAT_0047d9e8,param_2);
  return;
}


