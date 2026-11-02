/* Module: sftrans1.dll
   Function: FUN_005278f0
   Address: 005278f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005278f0(int param_1,HWND param_2)

{
  BOOL BVar1;
  
  if (param_2 != (HWND)0x0) {
    BVar1 = IsWindow(param_2);
    if (BVar1 != 0) {
      *(HWND *)(param_1 + 0x10) = param_2;
      SetWindowLongA(param_2,0,param_1);
      FUN_005286e0();
      FUN_004bd020(DAT_0057b880,"DropColor_ClrPicker");
      return 0;
    }
  }
  return 0xffffffff;
}


