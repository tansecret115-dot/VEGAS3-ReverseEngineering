/* Module: vfplugs.dll
   Function: FUN_00421de0
   Address: 00421de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00421de0(int param_1,int param_2,int param_3)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  
  BVar1 = IsWindowEnabled(*(HWND *)(param_1 + 0x38));
  if (BVar1 != 0) {
    pt.y = param_3;
    pt.x = param_2;
    BVar1 = PtInRect((RECT *)(param_1 + 0x98),pt);
    if (BVar1 != 0) {
      if (*(int *)(param_1 + 0x20) == 0) {
        pt_00.y = param_3;
        pt_00.x = param_2;
        BVar1 = PtInRect((RECT *)(param_1 + 0xac),pt_00);
        if (BVar1 != 0) {
          return 5;
        }
      }
      if (*(int *)(param_1 + 0x1c) == 0) {
        if (*(int *)(param_1 + 0xb4) <= param_2) {
          return 1;
        }
        if (param_2 <= *(int *)(param_1 + 0xac)) {
          return 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0xb8) <= param_3) {
          return 1;
        }
        if (param_3 <= *(int *)(param_1 + 0xb0)) {
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}


