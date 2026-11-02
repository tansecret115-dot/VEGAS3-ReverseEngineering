/* Module: rmto3260.dll
   Function: FUN_662f6580
   Address: 662f6580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662f6580(int param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0x80004005;
  }
  uVar1 = FUN_662f8470(param_2,param_3);
  return uVar1;
}


