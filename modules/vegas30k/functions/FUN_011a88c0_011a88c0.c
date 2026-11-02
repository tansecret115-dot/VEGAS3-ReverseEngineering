/* Module: vegas30k.dll
   Function: FUN_011a88c0
   Address: 011a88c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011a88c0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x7f4) == 0) {
    return 0;
  }
  if ((((*(code **)(param_1 + 0x7dc) == (code *)0x0) ||
       (uVar1 = *(uint *)(param_1 + 0x7ec), (uVar1 & 1) == 0)) || ((uVar1 & 2) == 0)) ||
     (((uVar1 & 4) == 0 || ((uVar1 & 0x10) == 0)))) {
    iVar3 = -0x7fff0001;
  }
  else {
    iVar3 = (**(code **)(param_1 + 0x7dc))
                      (param_1,8,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,
                       0x3ff00000,0,0,0,0,0,0);
    if (-1 < iVar3) {
      if (*(int **)(param_1 + 0x7f4) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(param_1 + 0x7f4);
      }
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f4) + 8) + iVar5 * 4);
          uVar1 = piVar2[3];
          if ((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) &&
             (((uVar1 & 4) != 0 && (((uVar1 & 8) != 0 && ((uVar1 & 0x30) != 0)))))) {
            iVar4 = (**(code **)(*piVar2 + 0xac))(piVar2);
            if (iVar4 < 0) break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
      *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) & 0xffffffef;
      iVar3 = (**(code **)(param_1 + 0x7dc))
                        (param_1,9,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,
                         0x3ff00000,0,0,0,0,0,0);
      return iVar3;
    }
  }
  return iVar3;
}


