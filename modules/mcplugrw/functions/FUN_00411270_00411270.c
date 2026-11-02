/* Module: mcplugrw.dll
   Function: FUN_00411270
   Address: 00411270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00411270(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x200] == 1) && (iVar1 = *param_1, iVar1 != 0)) && (*(int *)(iVar1 + 4) != 0)) {
    iVar1 = FUN_00419460(iVar1);
    if (-1 < iVar1) {
      return 1;
    }
  }
  return 0;
}


