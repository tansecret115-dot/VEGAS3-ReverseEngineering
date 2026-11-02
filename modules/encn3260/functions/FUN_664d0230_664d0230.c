/* Module: encn3260.dll
   Function: FUN_664d0230
   Address: 664d0230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664d0230(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = param_1;
  uVar1 = (uint)param_1 >> 0x18;
  uVar2 = (uint)param_1 >> 0x10;
  param_1 = CONCAT13((char)uVar3,
                     CONCAT12((char)((uint)uVar3 >> 8),CONCAT11((char)uVar2,(char)uVar1)));
  return param_1;
}


