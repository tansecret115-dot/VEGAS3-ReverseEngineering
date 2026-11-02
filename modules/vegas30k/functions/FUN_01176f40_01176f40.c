/* Module: vegas30k.dll
   Function: FUN_01176f40
   Address: 01176f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01176f40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(code **)(param_1 + 0x158) != (code *)0x0) &&
     (iVar1 = (**(code **)(param_1 + 0x158))
                        (param_1,0x40,0,*(undefined4 *)(param_1 + 0x15c),param_2,0), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


