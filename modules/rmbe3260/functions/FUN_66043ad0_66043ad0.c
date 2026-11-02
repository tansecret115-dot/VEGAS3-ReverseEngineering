/* Module: rmbe3260.dll
   Function: FUN_66043ad0
   Address: 66043ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_66043ad0(int param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0x80004005;
  }
  uVar1 = FUN_66045cd0(param_2,param_3);
  return uVar1;
}


