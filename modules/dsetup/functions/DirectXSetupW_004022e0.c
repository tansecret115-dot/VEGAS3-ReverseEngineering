/* Module: dsetup.dll
   Function: DirectXSetupW
   Address: 004022e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 DirectXSetupW(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_108 [260];
  
                    /* 0x22e0  8  DirectXSetupW */
  DAT_0040aa64 = param_1;
  _DAT_0040aa6c = param_3;
  (*DAT_0040aa88)(0x1391,local_108,0x104);
  (*DAT_0040aa7c)(10,0x10,local_108,0,0);
  if (DAT_0040aa70 != (HWND)0x0) {
    DestroyWindow(DAT_0040aa70);
    DAT_0040aa70 = (HWND)0x0;
  }
  return 0xfffffff7;
}


