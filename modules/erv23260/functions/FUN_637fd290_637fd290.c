/* Module: erv23260.dll
   Function: FUN_637fd290
   Address: 637fd290
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_637fd290(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_637fd230(param_1);
  return (bool)('\x01' - (*(uint *)(param_1 + 0x14) < uVar1));
}


