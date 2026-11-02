/* Module: sfcdi.dll
   Function: FUN_5bf1f890
   Address: 5bf1f890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5bf1f890(int param_1)

{
  SfCDBurn_CancelWriteNG(*(HSFBURN__ **)(param_1 + 0x3d18));
  return 0;
}


