/* Module: rmbe3260.dll
   Function: FUN_6603c050
   Address: 6603c050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6603c050(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfff9;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x28))();
  }
  return uVar1;
}


