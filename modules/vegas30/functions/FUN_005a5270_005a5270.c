/* Module: vegas30.exe
   Function: FUN_005a5270
   Address: 005a5270
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a5270(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = _SfGetPixelBitsPerChannel_8(param_3,&param_3);
  return (((uint)(iVar1 * param_1) >> 3) + 3 & 0xfffffffc) * param_2;
}


