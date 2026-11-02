/* Module: sfs4rw.dll
   Function: FUN_0043f010
   Address: 0043f010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043f010(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0043ea60(param_1,0x3d,0x1d5);
  iVar1 = setjmp3((int)param_1 + 0x11,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_00453840((int)param_1,param_2);
  iVar1 = FUN_0043ebc0(param_1,'\0');
  if (iVar1 != 1) {
    return 0xffffffff;
  }
  FUN_00453420(param_1);
  return 0;
}


