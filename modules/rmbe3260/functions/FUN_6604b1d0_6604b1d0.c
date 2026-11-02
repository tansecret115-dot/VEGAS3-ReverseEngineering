/* Module: rmbe3260.dll
   Function: FUN_6604b1d0
   Address: 6604b1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_6604b1d0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (((uVar1 != 0) && (*(int *)(uVar1 + 0xc) != 0)) &&
     (uVar1 = 0, *(code **)(param_1 + 0x237) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x237))(*(undefined4 *)(param_1 + 0x227));
    return uVar1;
  }
  return uVar1 & 0xffff0000;
}


