/* Module: vegas30k.dll
   Function: FUN_011a8c90
   Address: 011a8c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011a8c90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x7fc);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if ((((*(int *)(param_1 + 0x7dc) != 0) &&
       (uVar2 = *(uint *)(param_1 + 0x7ec), (uVar2 & 0x400) != 0)) && ((uVar2 & 0x800) != 0)) &&
     ((uVar2 & 0x1000) != 0)) {
    uVar2 = piVar1[3];
    if (((((uVar2 & 1) != 0) && ((uVar2 & 2) != 0)) && (((uVar2 & 4) != 0 && ((uVar2 & 8) != 0))))
       && (((uVar2 & 0x10) == 0 || ((uVar2 & 0x20) != 0)))) {
      (**(code **)(*piVar1 + 0xb0))(piVar1,param_2,param_3);
    }
    *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) | 0x2000;
    uVar3 = (**(code **)(param_1 + 0x7dc))
                      (param_1,0x18,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,
                       0x3ff00000,0,0,0,0,0,0);
    return uVar3;
  }
  return 0x8000ffff;
}


