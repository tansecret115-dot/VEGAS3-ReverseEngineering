/* Module: sftrans1.dll
   Function: FUN_00552a80
   Address: 00552a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00552a80(int *param_1,HWND param_2)

{
  HWND pHVar1;
  
  (**(code **)(*DAT_00622478 + 0x10))();
  pHVar1 = GetCapture();
  if (param_2 == pHVar1) {
    ReleaseCapture();
  }
  if (param_1[2] != 0) {
    (**(code **)(*param_1 + 0x24))(param_2);
    param_1[2] = 0;
  }
  return;
}


