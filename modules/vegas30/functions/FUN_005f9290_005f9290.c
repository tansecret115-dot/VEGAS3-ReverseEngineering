/* Module: vegas30.exe
   Function: FUN_005f9290
   Address: 005f9290
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005f9290(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_3e8 [500];
  undefined1 local_1f4 [500];
  
  iVar1 = FUN_005f8a90(param_1,0,local_1f4,500);
  if (-1 < iVar1) {
    iVar1 = FUN_005f8a90(param_1,1,local_3e8,500);
    if (-1 < iVar1) {
      FUN_005f8bc0(local_1f4,local_3e8,param_2);
    }
  }
  return;
}


