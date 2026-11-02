/* Module: dsetup.dll
   Function: DirectXDeviceDriverSetupW
   Address: 004023d5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
DirectXDeviceDriverSetupW
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_108 [260];
  
                    /* 0x23d5  2  DirectXDeviceDriverSetupW */
  DAT_0040aa64 = param_1;
  _DAT_0040aa6c = param_4;
  (*DAT_0040aa88)(0x1391,local_108,0x104);
  (*DAT_0040aa7c)(10,0x10,local_108,0,0);
  if (DAT_0040aa70 != (HWND)0x0) {
    DestroyWindow(DAT_0040aa70);
    DAT_0040aa70 = (HWND)0x0;
  }
  return 0xfffffff7;
}


