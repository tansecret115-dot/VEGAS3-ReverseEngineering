/* Module: vegas30.exe
   Function: FUN_005fb3c0
   Address: 005fb3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005fb3c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 unaff_retaddr;
  
  lVar1 = Transport_Stop(0x80000000,CONCAT44(unaff_retaddr,param_3));
  if (lVar1 == 0x4e001) {
    Transport_StopPreview(0x80000000,0);
  }
  return;
}


