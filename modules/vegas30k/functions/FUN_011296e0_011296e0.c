/* Module: vegas30k.dll
   Function: FUN_011296e0
   Address: 011296e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011296e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_01129400(param_1,0x3d,0x18d);
  iVar1 = setjmp3(param_1 + 0x11,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_0115f5f0(param_1,param_2);
  return 0;
}


