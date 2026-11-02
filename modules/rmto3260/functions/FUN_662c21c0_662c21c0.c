/* Module: rmto3260.dll
   Function: FUN_662c21c0
   Address: 662c21c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c21c0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = operator_new(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_662eeb70(puVar1);
  }
  *param_2 = uVar2;
  return (-(uint)(param_2 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


