/* Module: rmbe3260.dll
   Function: FUN_66043b20
   Address: 66043b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_66043b20(int param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0x80004005;
  }
  uVar1 = FUN_66045d70(param_2,param_3,param_4);
  return uVar1;
}


