/* Module: pngu3266.dll
   Function: FUN_60622c30
   Address: 60622c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_60622c30(UINT *param_1)

{
  MSG local_20;
  
  local_20.message = *param_1;
  local_20.wParam = param_1[1];
  local_20.lParam = param_1[2];
  local_20.hwnd = (HWND)param_1[3];
  DispatchMessageA(&local_20);
  return 0;
}


