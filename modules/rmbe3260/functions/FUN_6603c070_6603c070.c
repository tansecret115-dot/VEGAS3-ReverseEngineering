/* Module: rmbe3260.dll
   Function: FUN_6603c070
   Address: 6603c070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6603c070(void *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xfff1;
  if (param_1 != (void *)0x0) {
    uVar1 = 0xfff9;
    if (param_2 != (int *)0x0) {
      uVar1 = FUN_6603d630(param_1,param_2);
    }
  }
  return uVar1;
}


