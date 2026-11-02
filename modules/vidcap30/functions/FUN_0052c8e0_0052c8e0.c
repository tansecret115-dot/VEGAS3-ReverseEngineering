/* Module: vidcap30.exe
   Function: FUN_0052c8e0
   Address: 0052c8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052c8e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0052c330(param_1,0x3d,0x1d5);
  iVar1 = setjmp3(param_1 + 0x11,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_00553a40(param_1,param_2);
  iVar1 = FUN_0052c490(param_1,0);
  if (iVar1 != 1) {
    return 0xffffffff;
  }
  FUN_00553620(param_1);
  return 0;
}


