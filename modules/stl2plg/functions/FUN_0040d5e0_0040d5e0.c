/* Module: stl2plg.dll
   Function: FUN_0040d5e0
   Address: 0040d5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d5e0(undefined4 *param_1,LPCSTR param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    LoadCursorA((HINSTANCE)*param_1,param_2);
    return;
  }
  if (((uint)param_2 >> 0x10 == 0) && (0x7eff < (ushort)param_2)) {
    LoadCursorA((HINSTANCE)0x0,param_2);
    return;
  }
  LoadCursorA(DAT_00473618,param_2);
  return;
}


