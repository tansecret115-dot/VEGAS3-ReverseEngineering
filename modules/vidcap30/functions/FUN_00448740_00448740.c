/* Module: vidcap30.exe
   Function: FUN_00448740
   Address: 00448740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00448740(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_4;
  
  uVar2 = 0;
  local_4 = 0;
  if (param_2 == 0) {
    iVar1 = FUN_004487a0(param_1,&local_4);
  }
  else {
    iVar1 = FUN_004487f0(param_1,&local_4);
  }
  if (0 < iVar1) {
    uVar2 = *(undefined4 *)(**(int **)(local_4 + 8) + 0x20c);
  }
  if (local_4 != 0) {
    FUN_00417990(local_4);
  }
  return uVar2;
}


