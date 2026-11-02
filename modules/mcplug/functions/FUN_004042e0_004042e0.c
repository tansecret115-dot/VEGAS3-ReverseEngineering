/* Module: mcplug.dll
   Function: FUN_004042e0
   Address: 004042e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004042e0(undefined4 param_1,undefined8 *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 1;
  if (((param_4 == 2) && (param_2 != (undefined8 *)0x0)) && (7 < param_3)) {
    uVar2 = ftol();
    *param_2 = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}


