/* Module: vegas30.exe
   Function: FUN_004e2440
   Address: 004e2440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e2440(int param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0xd94) != 0)) && (DAT_00647630 != 0)) {
    FUN_00458260(DAT_00647630,&local_8,&local_10);
    FUN_004e23e0(param_1,local_8,local_4,local_10,local_c,param_2);
  }
  return;
}


