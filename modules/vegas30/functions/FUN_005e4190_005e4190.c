/* Module: vegas30.exe
   Function: FUN_005e4190
   Address: 005e4190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e4190(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  piVar1 = (int *)FUN_005e3f40();
  if (piVar1 == (int *)0x0) {
    return 0x8007000e;
  }
  local_4 = 0x30;
  uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1,param_2,param_3,&local_4);
  (**(code **)(*piVar1 + 8))(piVar1);
  return uVar2;
}


