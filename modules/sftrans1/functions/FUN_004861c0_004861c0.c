/* Module: sftrans1.dll
   Function: FUN_004861c0
   Address: 004861c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004861c0(int param_1,int *param_2)

{
  tagRECT local_10;
  
  if ((param_2 != (int *)0x0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
    local_10.top = 0;
    local_10.right = 0;
    local_10.left = 0;
    local_10.bottom = 0;
    GetClientRect(*(HWND *)(param_1 + 4),&local_10);
    if ((local_10.left <= *param_2) &&
       (((param_2[2] <= local_10.right && (local_10.top <= param_2[1])) &&
        (param_2[3] <= local_10.bottom)))) {
      *(int *)(param_1 + 0x14) = *param_2;
      *(int *)(param_1 + 0x18) = param_2[1];
      *(int *)(param_1 + 0x1c) = param_2[2];
      *(int *)(param_1 + 0x20) = param_2[3];
      return 1;
    }
  }
  return 0;
}


