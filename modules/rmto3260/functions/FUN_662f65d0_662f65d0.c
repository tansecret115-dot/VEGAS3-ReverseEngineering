/* Module: rmto3260.dll
   Function: FUN_662f65d0
   Address: 662f65d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662f65d0(int param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0x80004005;
  }
  uVar1 = FUN_662f8510(param_2,param_3,param_4);
  return uVar1;
}


