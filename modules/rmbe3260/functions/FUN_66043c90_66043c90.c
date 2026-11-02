/* Module: rmbe3260.dll
   Function: FUN_66043c90
   Address: 66043c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_66043c90(void *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (void *)0x0) {
    return 0x80004005;
  }
  uVar1 = FUN_66045ba0(param_1,param_2);
  return uVar1;
}


