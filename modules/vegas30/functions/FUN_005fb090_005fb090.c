/* Module: vegas30.exe
   Function: FUN_005fb090
   Address: 005fb090
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005fb090(int param_1)

{
  long lVar1;
  
  lVar1 = Transport_SetOffset(*(__int64 *)(param_1 + 0x470));
  FUN_00439930();
  return lVar1;
}


