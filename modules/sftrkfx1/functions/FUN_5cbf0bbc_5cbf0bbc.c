/* Module: sftrkfx1.dll
   Function: FUN_5cbf0bbc
   Address: 5cbf0bbc
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbf0bbc(int param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  
  bVar1 = FUN_5cbf1220(param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    uVar2 = 0x80040203;
  }
  else if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) < param_2) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *(uint *)(param_1 + 4) = param_2 + *(int *)(param_1 + 4);
  }
  return uVar2;
}


