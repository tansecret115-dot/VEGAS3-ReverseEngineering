/* Module: vegas30.exe
   Function: FUN_005cef60
   Address: 005cef60
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005cef60(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_005b83b0(param_1,1);
  iVar1 = FUN_0047c810(param_2 + 0x98,param_3);
  FUN_005b84d0(param_1,1);
  return iVar1 == 0;
}


