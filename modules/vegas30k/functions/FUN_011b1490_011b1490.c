/* Module: vegas30k.dll
   Function: FUN_011b1490
   Address: 011b1490
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_011b1490(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  int unaff_EDI;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uStack_4d8;
  int **ppiStack_4d4;
  int *piStack_4d0;
  int *piStack_4cc;
  int *piStack_4c8;
  undefined1 *puStack_4c4;
  int *piStack_4c0;
  int *piStack_4bc;
  int *piStack_4b8;
  int **ppiStack_4b4;
  int *piStack_4b0;
  int *piStack_4ac;
  int *piStack_4a8;
  int *piStack_4a4;
  int *piStack_4a0;
  int *piStack_49c;
  int *piStack_484;
  int local_480 [10];
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 auStack_378 [15];
  int aiStack_33c [177];
  undefined4 uStack_78;
  int iStack_64;
  undefined4 *puStack_50;
  int *piStack_44;
  int *piStack_38;
  int *piStack_1c;
  int *piStack_18;
  undefined4 *puStack_14;
  
  iVar3 = 1;
  if (*(int *)(param_1 + 0x10) == 0) {
    local_480[0] = -1;
    for (uVar1 = *(uint *)(param_1 + 0x9c8); uVar1 != 0; uVar1 = uVar1 >> 1) {
      local_480[0] = local_480[0] + 1;
    }
  }
  else {
    local_480[0] = 0;
  }
  if (param_5 == (int *)0xffffffff) {
    piStack_49c = local_480 + 1;
    piStack_4a0 = param_4;
    piStack_4a4 = (int *)0x11b14ee;
    (**(code **)(*param_4 + 0x38))();
    if (piStack_484 != (int *)0x0) {
      piStack_4a4 = (int *)0x0;
      piVar4 = aiStack_33c;
      for (iVar2 = 0xcd; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      piStack_4a8 = aiStack_33c;
      aiStack_33c[0] = 0x334;
      piStack_4ac = (int *)0x1;
      ppiStack_4b4 = (int **)0x11b1527;
      iVar2 = (**(code **)(*piStack_484 + 0xc))();
      while (iVar2 == 0) {
        piVar4 = local_480;
        for (iVar3 = 0x4d; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar4 = 0;
          piVar4 = piVar4 + 1;
        }
        ppiStack_4b4 = (int **)0xffffffff;
        piStack_4b8 = (int *)0xffffffff;
        piStack_4bc = (int *)0xffffffff;
        local_480[2] = local_480[2] | 0x10;
        piStack_4c0 = (int *)0xffffffff;
        puStack_4c4 = (undefined1 *)0x10000;
        local_480[0] = 0x134;
        local_480[1] = 0x40;
        uStack_458 = 0x7f;
        uStack_454 = 0;
        piStack_4c8 = (int *)0x134;
        if (*(int *)(param_1 + 0x10) == 0) {
          ppiStack_4d4 = *(int ***)(param_1 + 0x160);
          uVar6 = *(undefined4 *)(param_1 + 0x24);
          uStack_4d8 = 0x1f;
        }
        else {
          ppiStack_4d4 = *(int ***)(param_1 + 0x160);
          uVar6 = *(undefined4 *)(param_1 + 0x24);
          uStack_4d8 = 0x21;
        }
        piStack_4cc = local_480;
        piStack_4d0 = (int *)unaff_EDI;
        iVar3 = (**(code **)(param_1 + 0x15c))(uVar6);
        if (iVar3 == 0) {
          piStack_4cc = (int *)0x0;
          if ((puStack_50 != (undefined4 *)0x0) &&
             ((**(code **)*puStack_50)(puStack_50,&DAT_011ef4f0,&piStack_4cc),
             piStack_4cc != (int *)0x0)) {
            piStack_4c8 = (int *)0x0;
            (**(code **)(*piStack_4cc + 0xc))(piStack_4cc,&piStack_4c8);
            if (piStack_4d0 != (int *)iStack_64) {
              (**(code **)((int)*ppiStack_4d4 + 0x10))(ppiStack_4d4,iStack_64);
            }
            piVar4 = piStack_44;
            iVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))
                              (*(int **)(param_1 + 0x1c),ppiStack_4d4,&piStack_4b8,puStack_14);
            if (-1 < iVar3) {
              ppiStack_4d4 = (int **)*puStack_14;
              piStack_4d0 = (int *)puStack_14[1];
              uStack_4d8 = uStack_78;
              iVar3 = _SfList_InsertList_16
                                (*(undefined4 *)(param_1 + 0xc6c),0xffffffff,&uStack_4d8,1);
            }
            (**(code **)(*piVar4 + 8))(piVar4);
          }
          puVar5 = auStack_378;
          for (iVar2 = 0xcd; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          auStack_378[0] = 0x334;
        }
        iVar2 = (**(code **)(*piStack_4c0 + 0xc))(piStack_4c0,1,auStack_378,0);
      }
      piStack_4b8 = (int *)0x11b16c7;
      (**(code **)(*unaff_ESI + 8))();
    }
  }
  else {
    piVar4 = aiStack_33c + 2;
    for (iVar2 = 0xcd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    piStack_49c = aiStack_33c + 2;
    piStack_4a0 = param_5;
    piStack_4a4 = param_4;
    aiStack_33c[2] = 0x334;
    piStack_4a8 = (int *)0x11b1707;
    (**(code **)(*param_4 + 0x30))();
    if (piStack_18 != (int *)0x0) {
      piStack_4a8 = (int *)&stack0xfffffb6c;
      piStack_4ac = (int *)&DAT_011ef4f0;
      piStack_4b0 = piStack_18;
      ppiStack_4b4 = (int **)0x11b1727;
      (**(code **)*piStack_18)();
      if (piStack_4a0 != (int *)0x0) {
        ppiStack_4b4 = &piStack_49c;
        piStack_49c = (int *)0x0;
        piStack_4b8 = piStack_4a0;
        piStack_4bc = (int *)0x11b173e;
        (**(code **)(*piStack_4a0 + 0xc))();
        if (piStack_4a4 != piStack_38) {
          piStack_4bc = piStack_38;
          piStack_4c0 = piStack_4a8;
          puStack_4c4 = (undefined1 *)0x11b1758;
          (**(code **)(*piStack_4a8 + 0x10))();
        }
        piStack_4cc = *(int **)(param_1 + 0x1c);
        piStack_4bc = piStack_18;
        puStack_4c4 = &stack0xfffffb74;
        piStack_4c0 = piStack_1c;
        piStack_4c8 = piStack_4a8;
        piStack_4d0 = (int *)0x11b177b;
        iVar3 = (**(code **)(*piStack_4cc + 0x18))();
        if (-1 < iVar3) {
          piStack_4a8 = (int *)*piStack_1c;
          piStack_4a4 = (int *)piStack_1c[1];
          ppiStack_4d4 = &piStack_4ac;
          piStack_4d0 = (int *)0x1;
          uStack_4d8 = 0xffffffff;
          piStack_4ac = param_5;
          iVar3 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xc6c));
        }
        piStack_4d0 = piStack_4bc;
        ppiStack_4d4 = (int **)0x11b17b3;
        (**(code **)(*piStack_4bc + 8))();
        return iVar3;
      }
    }
  }
  return iVar3;
}


