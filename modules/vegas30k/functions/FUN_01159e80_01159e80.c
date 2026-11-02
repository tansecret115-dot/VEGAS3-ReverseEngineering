/* Module: vegas30k.dll
   Function: FUN_01159e80
   Address: 01159e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01159e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4;
  
  if (1 < param_4) {
    FUN_01155fb0(param_1,"Unrecognized unit type for oFFs chunk");
  }
  FUN_01158c50(local_c,param_2);
  FUN_01158c50(local_8,param_3);
  local_4 = (undefined1)param_4;
  FUN_01158cd0(param_1,&DAT_01206ffc,local_c,9);
  return;
}


