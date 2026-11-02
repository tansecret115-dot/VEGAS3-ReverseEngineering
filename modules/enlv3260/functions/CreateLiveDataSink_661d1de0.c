/* Module: enlv3260.dll
   Function: CreateLiveDataSink
   Address: 661d1de0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 CreateLiveDataSink(undefined4 param_1)

{
  undefined4 *puVar1;
  
                    /* 0x1de0  1  CreateLiveDataSink */
  puVar1 = operator_new(0x6e);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_661d1e30(puVar1);
    (**(code **)*puVar1)(puVar1,&DAT_661d5750,param_1);
    return 0;
  }
  (*(code *)*puRam00000000)(0,&DAT_661d5750,param_1);
  return 0;
}


