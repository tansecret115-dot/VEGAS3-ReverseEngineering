/* Module: rmto3260.dll
   Function: FUN_662f55e0
   Address: 662f55e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_662f55e0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (DAT_66311d58 == (int *)0x0) {
    FUN_662f53b0((char *)0x0);
    if (DAT_66311d58 == (int *)0x0) {
      return 0;
    }
  }
  uVar1 = FUN_662f5630(param_1);
  uVar2 = (**(code **)(*DAT_66311d58 + 0x34))(DAT_66311d58,uVar1,param_2,param_3);
  return uVar2;
}


