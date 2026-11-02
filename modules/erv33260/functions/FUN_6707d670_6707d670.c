/* Module: erv33260.dll
   Function: FUN_6707d670
   Address: 6707d670
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_6707d670(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_6707d620(param_1);
  return (bool)('\x01' - (*(uint *)(param_1 + 0x14) < uVar1));
}


