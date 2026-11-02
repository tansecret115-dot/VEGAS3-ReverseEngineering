/* Module: vegas30k.dll
   Function: FUN_011a4ac0
   Address: 011a4ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_011a4ac0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *unaff_ESI;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  
  piStack_1c = *(int **)(param_1 + 0x2c);
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  if (piStack_1c != (int *)0x0) {
    piStack_20 = (int *)0x11a4adb;
    (**(code **)(*piStack_1c + 8))();
  }
  piStack_1c = (int *)0x0;
  piStack_24 = &DAT_011d9b20;
  piStack_28 = (int *)0x0;
  *puVar1 = 0;
  piStack_2c = (int *)0x11a4af0;
  piStack_20 = puVar1;
  uVar3 = FUN_011b7b20();
  if (-1 < (int)uVar3) {
    uVar3 = *(uint *)(param_1 + 8);
    piStack_1c = (int *)(uint)((uVar3 & 0x100) != 0);
    if ((uVar3 & 0x200) != 0) {
      piStack_1c = (int *)((uint)piStack_1c | 2);
    }
    if ((uVar3 & 0x400) != 0) {
      piStack_1c = (int *)((uint)piStack_1c | 4);
    }
    if ((uVar3 & 0x800) != 0) {
      piStack_1c = (int *)((uint)piStack_1c | 8);
    }
    piStack_20 = (int *)*puVar1;
    piStack_24 = (int *)0x11a4b26;
    uVar3 = (**(code **)(*piStack_20 + 0xc))();
    if ((int)uVar3 < 0) {
      piStack_24 = (int *)*puVar1;
      piStack_28 = (int *)0x11a4b34;
      (**(code **)(*piStack_24 + 8))();
      *puVar1 = 0;
      return uVar3;
    }
    piStack_24 = (int *)0x0;
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x0;
    uVar3 = _SfList_CreateExZ_32((int *)(param_1 + 0x10),4,0xffffffff,0xffffffff,0x40000000);
    if ((int)uVar3 < 0) {
      piStack_24 = (int *)*puVar1;
      piStack_28 = (int *)0x11a4b6e;
      (**(code **)(*piStack_24 + 8))();
      *puVar1 = 0;
      return uVar3;
    }
    piStack_28 = (int *)*puVar1;
    piStack_24 = (int *)&stack0xfffffff4;
    piStack_2c = (int *)0x11a4b93;
    iVar4 = (**(code **)(*piStack_28 + 0x44))();
    if (-1 < iVar4) {
      piStack_2c = (int *)0x0;
      iVar4 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&stack0xffffffe8);
      while (iVar4 == 0) {
        uVar3 = FUN_011a48d0(piStack_28);
        if ((int)uVar3 < 0) {
          (**(code **)(*piStack_24 + 8))(piStack_24);
          (**(code **)(*piStack_2c + 8))(piStack_2c);
          return uVar3;
        }
        (**(code **)(*piStack_28 + 8))(piStack_28);
        iVar4 = (**(code **)(*piStack_28 + 0xc))(piStack_28,1,&piStack_2c,0);
      }
      (**(code **)(*piStack_24 + 8))(piStack_24);
    }
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    uVar3 = (uint)(*piVar2 == 0);
  }
  return uVar3;
}


