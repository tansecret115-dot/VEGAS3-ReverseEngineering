/* Module: vidcap30.exe
   Function: FUN_0052d480
   Address: 0052d480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052d480(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0052d1a0(param_1,0x3d,0x18d);
  iVar1 = setjmp3(param_1 + 0x11,0);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_005543c0(param_1,param_2);
  return 0;
}


