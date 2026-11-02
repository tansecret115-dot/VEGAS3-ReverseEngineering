/* Module: vegas30k.dll
   Function: FUN_011a8bb0
   Address: 011a8bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011a8bb0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x7fc) == 0) {
    return 0;
  }
  if ((((*(code **)(param_1 + 0x7dc) == (code *)0x0) ||
       (uVar1 = *(uint *)(param_1 + 0x7ec), (uVar1 & 0x400) == 0)) || ((uVar1 & 0x800) == 0)) ||
     (((uVar1 & 0x1000) == 0 || ((uVar1 & 0x4000) == 0)))) {
    iVar3 = -0x7fff0001;
  }
  else {
    iVar3 = (**(code **)(param_1 + 0x7dc))
                      (param_1,0x16,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,
                       0x3ff00000,0,0,0,0,0,0);
    if (-1 < iVar3) {
      piVar2 = *(int **)(param_1 + 0x7fc);
      uVar1 = piVar2[3];
      if ((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) &&
         (((uVar1 & 4) != 0 && (((uVar1 & 8) != 0 && ((uVar1 & 0x30) != 0)))))) {
        (**(code **)(*piVar2 + 0xac))(piVar2);
      }
      *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) & 0xffffbfff;
      iVar3 = (**(code **)(param_1 + 0x7dc))
                        (param_1,0x17,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,
                         0x3ff00000,0,0,0,0,0,0);
      return iVar3;
    }
  }
  return iVar3;
}


