/* Module: pncrt.dll
   Function: FUN_78030170
   Address: 78030170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78030170(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_2 + param_1;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}


