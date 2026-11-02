/* Module: sfcd.cdd
   Function: FUN_0040cb00
   Address: 0040cb00
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0040cb00(HSFCD__ *param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_0040ca70(param_1,0x22,param_2,0x20);
  if (lVar1 == 0) {
    FUN_0041f9a0((undefined1 *)(param_2 + 3),1);
    FUN_0041f9a0((undefined1 *)(param_2 + 5),2);
  }
  return lVar1;
}


