/* Module: vegas30k.dll
   Function: FUN_01128b40
   Address: 01128b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01128b40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_01128590(param_1,0x3d,0x1d5);
  iVar1 = setjmp3(param_1 + 0x11,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_0115ec70(param_1,param_2);
  iVar1 = FUN_011286f0(param_1,0);
  if (iVar1 != 1) {
    return 0xffffffff;
  }
  FUN_0115e850(param_1);
  return 0;
}


