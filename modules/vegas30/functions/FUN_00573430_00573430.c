/* Module: vegas30.exe
   Function: FUN_00573430
   Address: 00573430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00573430(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0x74) != 0)) &&
     (*(int *)(*(int *)(DAT_0064762c + 0x74) + 0x80) != 0)) {
    uVar1 = FUN_0056a510(param_1);
  }
  return uVar1;
}


