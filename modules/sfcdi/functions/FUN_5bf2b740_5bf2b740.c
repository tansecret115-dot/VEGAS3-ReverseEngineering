/* Module: sfcdi.dll
   Function: FUN_5bf2b740
   Address: 5bf2b740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2b740(uint *param_1,uint param_2)

{
  uint local_c [3];
  
  if (param_1 == (uint *)0x0) {
    return 0x80004003;
  }
  FUN_5bf2b5e0(local_c,param_2);
  FUN_5bf2b690(param_1,local_c);
  return 0;
}


