/* Module: sfcdi.dll
   Function: FUN_5bf01bb0
   Address: 5bf01bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf01bb0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (((param_1 != 0) && (param_2 == 0)) &&
     (iVar1 = SfScsi_TAOWriteFaild
                        ((uint)*(byte *)(param_1 + 0x170),(_SENSE_DATA *)(param_1 + 0x17c)),
     iVar1 != 0)) {
    return 0x8004e0cf;
  }
  return param_3;
}


