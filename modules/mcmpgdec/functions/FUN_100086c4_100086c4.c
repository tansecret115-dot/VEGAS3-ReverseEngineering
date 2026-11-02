/* Module: mcmpgdec.dll
   Function: FUN_100086c4
   Address: 100086c4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100086c4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = FUN_10003a04((int *)(param_1 + 0x66c),1);
  *(uint *)(param_1 + 0x55c) = uVar4;
  if (uVar4 != 0) {
    iVar5 = 0;
    do {
      uVar4 = FUN_10003a04((int *)(param_1 + 0x66c),8);
      iVar3 = (&DAT_10027000)[iVar5];
      iVar5 = iVar5 + 1;
      *(uint *)(iVar3 * 4 + 0x15c + param_1) = uVar4;
      *(uint *)(iVar3 * 4 + 0x35c + param_1) = uVar4;
    } while (iVar5 < 0x40);
  }
  piVar1 = (int *)(param_1 + 0x66c);
  uVar4 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x560) = uVar4;
  if (uVar4 != 0) {
    iVar5 = 0;
    do {
      uVar4 = FUN_10003a04(piVar1,8);
      iVar3 = (&DAT_10027000)[iVar5];
      iVar5 = iVar5 + 1;
      *(uint *)(iVar3 * 4 + 0x25c + param_1) = uVar4;
      *(uint *)(iVar3 * 4 + 0x45c + param_1) = uVar4;
    } while (iVar5 < 0x40);
  }
  uVar4 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x564) = uVar4;
  if (uVar4 != 0) {
    iVar5 = 0;
    do {
      uVar4 = FUN_10003a04(piVar1,8);
      piVar2 = &DAT_10027000 + iVar5;
      iVar5 = iVar5 + 1;
      *(uint *)(*piVar2 * 4 + 0x35c + param_1) = uVar4;
    } while (iVar5 < 0x40);
  }
  uVar4 = FUN_10003a04(piVar1,1);
  *(uint *)(param_1 + 0x568) = uVar4;
  if (uVar4 != 0) {
    iVar5 = 0;
    do {
      uVar4 = FUN_10003a04(piVar1,8);
      piVar2 = &DAT_10027000 + iVar5;
      iVar5 = iVar5 + 1;
      *(uint *)(*piVar2 * 4 + 0x45c + param_1) = uVar4;
    } while (iVar5 < 0x40);
  }
  return;
}


