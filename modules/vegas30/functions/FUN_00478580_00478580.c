/* Module: vegas30.exe
   Function: FUN_00478580
   Address: 00478580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00478580(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_4 + 0x54) != 0) &&
     (pcVar1 = *(code **)(*(int *)(param_4 + 0x54) + 0x3c), pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)(param_1,param_2,param_3,param_5);
  }
  return uVar2;
}


