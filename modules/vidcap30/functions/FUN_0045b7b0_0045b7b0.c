/* Module: vidcap30.exe
   Function: FUN_0045b7b0
   Address: 0045b7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_0045b7b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  BOOL BVar1;
  LRESULT LVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_005bba70 != (HWND)0x0) {
    BVar1 = IsWindow(DAT_005bba70);
    if (BVar1 != 0) {
      local_c = param_1;
      local_8 = param_3;
      local_4 = param_2;
      LVar2 = SendMessageA(DAT_005bba70,0x4a,DAT_005ba4bc,(LPARAM)&local_c);
      return LVar2;
    }
  }
  DAT_005bba70 = (HWND)0x0;
  return 0;
}


