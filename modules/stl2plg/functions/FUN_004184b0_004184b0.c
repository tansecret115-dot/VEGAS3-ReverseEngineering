/* Module: stl2plg.dll
   Function: FUN_004184b0
   Address: 004184b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004184b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00417f00(param_1,0x3d,0x1d5);
  iVar1 = setjmp3((int)param_1 + 0x11,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_0044f8f0((int)param_1,param_2);
  iVar1 = FUN_00418060(param_1,'\0');
  if (iVar1 != 1) {
    return 0xffffffff;
  }
  FUN_0044f4d0(param_1);
  return 0;
}


