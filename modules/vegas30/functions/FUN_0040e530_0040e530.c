/* Module: vegas30.exe
   Function: FUN_0040e530
   Address: 0040e530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040e530(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00562590(&DAT_0064b538,param_2,param_3);
  if (iVar1 != 0) {
    DAT_0064767c = DAT_0064767c | 0x8000;
  }
  return 1;
}


