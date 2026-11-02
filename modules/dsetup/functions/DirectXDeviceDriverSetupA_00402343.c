/* Module: dsetup.dll
   Function: DirectXDeviceDriverSetupA
   Address: 00402343
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int DirectXDeviceDriverSetupA(int param_1,undefined4 param_2,LPCSTR param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_108 [260];
  
                    /* 0x2343  1  DirectXDeviceDriverSetupA */
  uVar1 = param_4;
  DAT_0040aa64 = param_1;
  _DAT_0040aa6c = param_4;
  param_1 = FUN_0040219a();
  if (-1 < param_1) {
    iVar2 = FUN_00401c7b(param_3,&param_1);
    if (iVar2 != 0) {
      (*DAT_0040aa88)(0x139c,local_108,0x104);
      (*DAT_0040aa7c)(0xd,0,local_108,0,0);
      param_1 = (*DAT_0040aa58)(param_2,param_3,uVar1);
    }
  }
  if (DAT_0040aa70 != (HWND)0x0) {
    DestroyWindow(DAT_0040aa70);
    DAT_0040aa70 = (HWND)0x0;
  }
  return param_1;
}


