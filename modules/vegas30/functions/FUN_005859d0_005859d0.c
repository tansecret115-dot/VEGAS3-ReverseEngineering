/* Module: vegas30.exe
   Function: FUN_005859d0
   Address: 005859d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005859d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_24 [32];
  int *local_4;
  
  iVar1 = FUN_005856a0(param_2,local_24);
  if ((-1 < iVar1) && (local_4 != (int *)0x0)) {
    uVar2 = (**(code **)(*local_4 + 8))(param_1);
    return uVar2;
  }
  return 0x80000000;
}


