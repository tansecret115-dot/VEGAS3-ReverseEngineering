/* Module: sfmarket2.dll
   Function: FUN_00447700
   Address: 00447700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00447700(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00447150(param_1,0x3d,0x1d5);
  iVar1 = setjmp3((int)param_1 + 0x11,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_0045c0b0((int)param_1,param_2);
  iVar1 = FUN_004472b0(param_1,'\0');
  if (iVar1 != 1) {
    return 0xffffffff;
  }
  FUN_0045bc90(param_1);
  return 0;
}


