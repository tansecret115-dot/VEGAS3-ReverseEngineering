/* Module: sftrkfx1.dll
   Function: FUN_5cbde980
   Address: 5cbde980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5cbde980(ushort *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  
  if (param_4 != 0) {
    pcVar1 = (code *)FUN_5cbde8d0(param_1);
    if (pcVar1 == (code *)0x0) {
      return 0x80004001;
    }
    (*pcVar1)(param_1[1],param_2,param_3,param_4,param_5);
  }
  return 0;
}


