/* Module: rmto3260.dll
   Function: FUN_662f54f0
   Address: 662f54f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662f54f0(int param_1,undefined4 param_2)

{
  if ((DAT_66311d58 == (int *)0x0) && (FUN_662f53b0((char *)0x0), DAT_66311d58 == (int *)0x0)) {
    return;
  }
  (**(code **)(*DAT_66311d58 + 0xc))(DAT_66311d58,param_1,param_2);
  if (DAT_66311d54 == 0) {
    DAT_66311d54 = param_1;
  }
  return;
}


