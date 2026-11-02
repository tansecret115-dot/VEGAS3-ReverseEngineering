/* Module: vegas30.exe
   Function: FUN_0059e4f0
   Address: 0059e4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0059e4f0(float *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_0047c7d0(param_2 + 0x638,param_3);
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_0047e950(iVar1,param_4,param_5,0xffffffff,0xffffffff);
    *param_1 = (float)fVar2;
    return 1;
  }
  return 0;
}


