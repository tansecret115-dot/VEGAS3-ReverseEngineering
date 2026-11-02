/* Module: vegas30k.dll
   Function: FUN_011a8d80
   Address: 011a8d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_011a8d80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x7fc);
  uVar3 = 1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = piVar1[3];
  if ((((uVar2 & 1) != 0) && ((uVar2 & 2) != 0)) && ((uVar2 & 4) == 0)) {
    uVar3 = (**(code **)(*piVar1 + 0xb8))(piVar1,param_2,param_3,param_4);
  }
  return uVar3;
}


