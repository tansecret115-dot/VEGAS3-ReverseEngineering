/* Module: vegas30.exe
   Function: FUN_005d0830
   Address: 005d0830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d0830(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *local_4;
  
  local_4 = (int *)0x0;
  iVar1 = FUN_005d0620(param_1,param_2,&local_4);
  if (-1 < iVar1) {
    piVar2 = local_4;
    (**(code **)(*local_4 + 0x4c))(local_4,param_3);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return;
}


