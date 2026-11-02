/* Module: extmondrv.dll
   Function: SfVideoDriver_CreateInstance
   Address: 004010b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 SfVideoDriver_CreateInstance(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
                    /* 0x10b0  3  SfVideoDriver_CreateInstance */
  if ((-1 < (int)param_3) && (param_3 < 3)) {
    uVar1 = (*(code *)(&PTR_LAB_0044d560)[param_3 * 5])(param_1,param_2);
    return uVar1;
  }
  return 0x80070057;
}


