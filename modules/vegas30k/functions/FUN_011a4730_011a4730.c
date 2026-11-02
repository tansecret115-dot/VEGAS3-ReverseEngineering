/* Module: vegas30k.dll
   Function: FUN_011a4730
   Address: 011a4730
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011a4730(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  
  piStack_1c = *(int **)(param_1 + 0x28);
  puVar1 = (undefined4 *)(param_1 + 0x28);
  if (piStack_1c != (int *)0x0) {
    piStack_20 = (int *)0x11a474b;
    (**(code **)(*piStack_1c + 8))();
  }
  *puVar1 = 0;
  piStack_20 = (int *)0x11a4757;
  piStack_1c = puVar1;
  iVar4 = FUN_011b74f0();
  if (-1 < iVar4) {
    uVar2 = *(uint *)(param_1 + 8);
    piStack_1c = (int *)(uint)((uVar2 & 1) != 0);
    if ((uVar2 & 2) != 0) {
      piStack_1c = (int *)((uint)piStack_1c | 2);
    }
    if ((uVar2 & 4) != 0) {
      piStack_1c = (int *)((uint)piStack_1c | 0x20);
    }
    if ((uVar2 & 0x10) != 0) {
      piStack_1c = (int *)((uint)piStack_1c | 0x40);
    }
    if ((uVar2 & 8) != 0) {
      piStack_1c = (int *)((uint)piStack_1c | 4);
    }
    if ((uVar2 & 0x20) != 0) {
      piStack_1c = (int *)((uint)piStack_1c | 8);
    }
    if ((uVar2 & 0x40) != 0) {
      piStack_1c = (int *)((uint)piStack_1c | 0x10);
    }
    if ((uVar2 & 0x80) != 0) {
      piStack_1c = (int *)((uint)piStack_1c | 0x80);
    }
    piStack_20 = (int *)*puVar1;
    piStack_24 = (int *)0x11a47d0;
    iVar4 = (**(code **)(*piStack_20 + 0xc))();
    if (iVar4 < 0) {
      piStack_24 = (int *)*puVar1;
      piStack_28 = (int *)0x11a47de;
      (**(code **)(*piStack_24 + 8))();
      *puVar1 = 0;
      return iVar4;
    }
    piStack_24 = (int *)0x0;
    piStack_28 = (int *)0x0;
    piStack_2c = (int *)0x0;
    iVar4 = _SfList_CreateExZ_32((int *)(param_1 + 0xc),4,0xffffffff,0xffffffff,0x40000000);
    if (iVar4 < 0) {
      piStack_24 = (int *)*puVar1;
      piStack_28 = (int *)0x11a4818;
      (**(code **)(*piStack_24 + 8))();
      *puVar1 = 0;
      return iVar4;
    }
    piStack_28 = (int *)*puVar1;
    piStack_24 = (int *)&stack0xfffffff4;
    piStack_2c = (int *)0x11a483d;
    iVar4 = (**(code **)(*piStack_28 + 0x4c))();
    if (-1 < iVar4) {
      piStack_2c = (int *)0x0;
      iVar5 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,1,&stack0xffffffe8);
      while (iVar5 == 0) {
        iVar4 = FUN_011a42a0(piStack_28);
        if (iVar4 < 0) {
          (**(code **)(*piStack_24 + 8))(piStack_24);
          (**(code **)(*piStack_2c + 8))(piStack_2c);
          return iVar4;
        }
        (**(code **)(*piStack_28 + 8))(piStack_28);
        iVar5 = (**(code **)(*piStack_28 + 0xc))(piStack_28,1,&piStack_2c,0);
      }
      (**(code **)(*piStack_24 + 8))(piStack_24);
    }
    piVar3 = *(int **)(param_1 + 0xc);
    if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
      return -0x7fffbffb;
    }
  }
  return iVar4;
}


