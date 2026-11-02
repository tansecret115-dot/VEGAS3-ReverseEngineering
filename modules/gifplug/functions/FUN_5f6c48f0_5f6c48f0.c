/* Module: gifplug.dll
   Function: FUN_5f6c48f0
   Address: 5f6c48f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f6c48f0(void *param_1)

{
  uint uVar1;
  undefined1 local_100 [256];
  
  do {
    uVar1 = FUN_5f6c48a0(param_1,local_100);
    if ((int)uVar1 < 0) {
      return 0x80004005;
    }
  } while (uVar1 != 0);
  return 0;
}


