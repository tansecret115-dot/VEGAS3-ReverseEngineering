/* Module: vegas30.exe
   Function: FUN_00566570
   Address: 00566570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00566570(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_108;
  undefined1 local_104 [260];
  
  local_108 = 0;
  _SfGetPathNameFromFilePath_12(param_2,local_104,0x104);
  uVar1 = FUN_00566340(param_1,local_104,&local_108);
  FUN_00565a60(local_108,param_2);
  return uVar1;
}


