/* Module: vegas30.exe
   Function: FUN_00585d10
   Address: 00585d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00585d10(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 local_24 [4];
  undefined2 local_20;
  undefined1 local_18;
  undefined2 local_16;
  
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  iVar1 = FUN_005856a0(param_1,local_24);
  if (-1 < iVar1) {
    *(undefined1 *)param_2 = local_18;
    *(undefined2 *)((int)param_2 + 2) = local_16;
    *(undefined2 *)(param_2 + 1) = local_20;
  }
  return;
}


