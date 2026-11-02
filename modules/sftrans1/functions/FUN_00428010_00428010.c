/* Module: sftrans1.dll
   Function: FUN_00428010
   Address: 00428010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00428010(int param_1)

{
  BOOL BVar1;
  
  if (*(HWND *)(param_1 + 0x30) != (HWND)0x0) {
    BVar1 = IsWindow(*(HWND *)(param_1 + 0x30));
    if (BVar1 != 0) {
      DestroyWindow(*(HWND *)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return 0;
}


