/* Module: vegas30.exe
   Function: FUN_004decb0
   Address: 004decb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004decb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x110);
      iVar1 = *(int *)(param_2 + 0x114);
      *(int *)(param_1 + 0x38) = -iVar3;
      *(uint *)(param_1 + 0x3c) = -(iVar1 + (uint)(iVar3 != 0));
    }
    uVar2 = DAT_0064b11c;
    *(undefined4 *)(param_1 + 0x28) = DAT_0064b118;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    if ((DAT_0064a534 != 0) && (0 < *(int *)(param_1 + 0xd94))) {
      piVar5 = (int *)(param_1 + 0xd88);
      do {
        if ((((*(int *)(*piVar5 + 4) == 3) && (*(int *)(param_1 + 0xd50) != 0)) &&
            (iVar3 = FUN_005f13f0(3), iVar3 != 0)) && (*(double *)(iVar3 + 0x48) != _DAT_00610fd8))
        {
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar3 + 0x48);
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar3 + 0x4c);
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < *(int *)(param_1 + 0xd94));
    }
  }
  return;
}


