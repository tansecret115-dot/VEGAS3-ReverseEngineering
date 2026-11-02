/* Module: vfplugs.dll
   Function: FUN_00412930
   Address: 00412930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00412930(void *this,undefined4 param_1,short param_2,int param_3)

{
  if ((param_2 == 0x4be) && (*(int *)(param_3 + 8) == -0x227)) {
    FUN_004112f0((int)this);
    UpdateWindow(*(HWND *)((int)this + 0x30));
  }
  return 0;
}


