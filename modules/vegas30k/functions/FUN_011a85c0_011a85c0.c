/* Module: vegas30k.dll
   Function: FUN_011a85c0
   Address: 011a85c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011a85c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(int **)(param_1 + 0x7f4) == (int *)0x0) {
    return 0;
  }
  if ((((*(int *)(param_1 + 0x7dc) == 0) || (uVar1 = *(uint *)(param_1 + 0x7ec), (uVar1 & 1) == 0))
      || ((uVar1 & 2) == 0)) || ((uVar1 & 4) == 0)) {
    return 1;
  }
  iVar2 = **(int **)(param_1 + 0x7f4);
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x7f4) + 8) + iVar6 * 4);
      uVar1 = piVar3[3];
      if ((((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) && (((uVar1 & 4) != 0 && ((uVar1 & 8) != 0))))
      {
        iVar4 = (**(code **)(*piVar3 + 0xa4))(piVar3);
        if (iVar4 < 0) break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) & 0xfffffffb;
  uVar5 = (**(code **)(param_1 + 0x7dc))
                    (param_1,5,*(undefined4 *)(param_1 + 0x7e0),0,0xffffffff,0xffffffff,0,0x3ff00000
                     ,0,0,0,0,0,0);
  return uVar5;
}


