/* Module: vfplugs.dll
   Function: FUN_0046f4d0
   Address: 0046f4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0046f4d0(void *this,HWND param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HWND)0x0) {
    BVar1 = IsWindow(param_1);
    if (BVar1 != 0) {
      *(HWND *)((int)this + 0x10) = param_1;
      SetWindowLongA(param_1,0,(LONG)this);
      FUN_004702c0((int)this);
      FUN_00420eb0(DAT_00494a70,"DropColor_ClrPicker");
      return 0;
    }
  }
  return 0xffffffff;
}


