/* Module: vegas30k.dll
   Function: FUN_01024440
   Address: 01024440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01024440(int *param_1,int **param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  int *unaff_EDI;
  int *piVar3;
  int *piVar4;
  undefined4 uStack_c4;
  int *piStack_c0;
  int **ppiStack_bc;
  undefined4 uStack_b8;
  int **ppiStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  int *piStack_94;
  int **ppiStack_90;
  int **ppiStack_8c;
  int **ppiStack_88;
  int **ppiStack_84;
  int *piStack_80;
  int **ppiStack_7c;
  int **ppiStack_78;
  int **ppiStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int **ppiStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int local_40 [5];
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int iStack_18;
  
  piStack_54 = local_40;
  piStack_58 = (int *)&DAT_011e6498;
  piStack_5c = param_1;
  piStack_60 = (int *)0x0;
  piStack_64 = (int *)0x0;
  ppiStack_68 = (int **)0x0;
  uStack_6c = 0;
  *(undefined4 *)(param_3 + 0x10) = 0;
  uStack_70 = 0;
  ppiStack_74 = (int **)0x0;
  ppiStack_78 = param_2;
  local_40[0] = 0;
  local_40[4] = 0;
  local_2c = (int *)0x0;
  local_40[2] = 0;
  local_28 = 0;
  local_24 = 0;
  local_40[1] = 0;
  local_40[3] = 0;
  ppiStack_7c = (int **)0x1024490;
  iVar1 = (*(code *)(*param_2)[5])();
  ppiStack_7c = (int **)unaff_EDI;
  if (-1 < iVar1) {
    ppiStack_7c = &piStack_5c;
    piStack_80 = (int *)&DAT_011e68f8;
    ppiStack_84 = ppiStack_68;
    ppiStack_88 = (int **)0x10244ad;
    iVar1 = (*(code *)**ppiStack_68)();
    if (-1 < iVar1) {
      piStack_80 = (int *)&stack0xffffffb8;
      ppiStack_7c = (int **)0x20;
      ppiStack_84 = (int **)piStack_5c;
      ppiStack_88 = (int **)0x10244c4;
      iVar1 = (**(code **)(*piStack_5c + 0xc))();
      ppiStack_88 = ppiStack_68;
      ppiStack_8c = (int **)0x10244d0;
      (*(code *)(*ppiStack_68)[2])();
      if (-1 < iVar1) {
        ppiStack_8c = &piStack_58;
        ppiStack_90 = (int **)param_3;
        piStack_94 = (int *)0x10244df;
        iVar1 = FUN_01023f80();
      }
      ppiStack_8c = (int **)(local_40 + 5);
      ppiStack_90 = ppiStack_78;
      piStack_94 = (int *)0x10244f0;
      (*(code *)(*ppiStack_78)[0xb])();
      if ((local_40[3] & 0x1000000U) != 0) {
        *(undefined4 *)(param_3 + 0x10) = 1;
      }
      piStack_94 = piStack_80;
      piStack_98 = (int *)0x102450b;
      (**(code **)(*piStack_80 + 8))();
      return iVar1;
    }
    ppiStack_7c = (int **)unaff_EDI;
    if (iStack_18 == 0) {
      ppiStack_7c = &piStack_60;
      piStack_80 = &DAT_011e64d8;
      ppiStack_84 = param_2;
      ppiStack_88 = (int **)0x1024531;
      iVar1 = (*(code *)**param_2)();
      ppiStack_7c = (int **)unaff_EDI;
      if (-1 < iVar1) {
        ppiStack_7c = &piStack_58;
        piStack_80 = (int *)&DAT_011e65a8;
        ppiStack_84 = ppiStack_68;
        ppiStack_88 = (int **)0x102454e;
        iVar1 = (*(code *)**ppiStack_68)();
        if (iVar1 < 0) {
          ppiStack_88 = &piStack_60;
          ppiStack_8c = (int **)&DAT_011e64f8;
          ppiStack_90 = ppiStack_74;
          piStack_94 = (int *)0x1024565;
          iVar1 = (*(code *)**ppiStack_74)();
          ppiStack_7c = (int **)unaff_EDI;
          if (-1 < iVar1) {
            *(undefined4 *)(param_3 + 0x10) = 0xb;
            *(undefined4 *)(param_3 + 0x14) = 0;
            *(undefined4 *)(param_3 + 0x18) = 0;
            ppiStack_7c = (int **)unaff_EDI;
          }
        }
        else {
          ppiStack_88 = (int **)(local_40 + 5);
          ppiStack_8c = (int **)piStack_64;
          ppiStack_90 = (int **)0x1024590;
          iVar1 = (**(code **)(*piStack_64 + 0x1c))();
          ppiStack_7c = (int **)unaff_EDI;
          if (-1 < iVar1) {
            ppiStack_7c = (int **)piStack_60;
            piStack_80 = (int *)0x10245a4;
            piVar2 = (int *)FUN_01024390();
            ppiStack_7c = (int **)piStack_60;
            piStack_80 = (int *)0x10245b2;
            unaff_ESI = (int *)FUN_01024390();
            ppiStack_7c = (int **)piStack_60;
            piStack_80 = (int *)0x10245c0;
            piStack_64 = (int *)FUN_01024390();
            piVar3 = unaff_ESI;
            if (piVar2 == (int *)0x0) goto LAB_010246c4;
            ppiStack_7c = (int **)piVar2;
            if ((unaff_ESI != (int *)0x0) && (piStack_64 != (int *)0x0)) {
              ppiStack_7c = (int **)0x0;
              ppiStack_84 = &piStack_64;
              piStack_80 = (int *)0x1;
              ppiStack_8c = (int **)&stack0xffffffb0;
              ppiStack_88 = (int **)0x2;
              ppiStack_90 = ppiStack_68;
              piStack_94 = (int *)0x10245ff;
              iVar1 = (*(code *)(*ppiStack_68)[6])();
              if (iVar1 < 0) {
                piStack_94 = (int *)0x0;
                piStack_98 = (int *)0x0;
                uStack_9c = 0;
                uStack_a0 = 0;
                uStack_a4 = 0;
                piStack_a8 = piStack_80;
                uStack_ac = 0x1024618;
                (**(code **)(*piStack_80 + 0x18))();
                uStack_ac = 0;
                ppiStack_b4 = &piStack_94;
                piStack_b0 = (int *)0x1;
                ppiStack_bc = &piStack_80;
                uStack_b8 = 1;
                piStack_c0 = piStack_98;
                uStack_c4 = 0x102462f;
                iVar1 = (**(code **)(*piStack_98 + 0x18))();
                if (iVar1 < 0) {
                  uStack_c4 = 0;
                  piVar4 = (int *)0x0;
                  (**(code **)(*piStack_b0 + 0x18))(piStack_b0,0,0,0);
                  piVar3 = (int *)0x1;
                  iVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,0,0,&uStack_c4,1,0);
                  if (-1 < iVar1) {
                    *(undefined4 *)(param_3 + 0x10) = 1;
                    *(undefined4 *)(param_3 + 0x14) = 0;
                    *(undefined4 *)(param_3 + 0x18) = 0;
                  }
                  (**(code **)(*piVar3 + 0x18))(piVar3,0,0,0,0,0);
                  ppiStack_7c = (int **)piVar2;
                }
                else {
                  uStack_c4 = 0;
                  *(undefined4 *)(param_3 + 0x10) = 2;
                  *(undefined4 *)(param_3 + 0x14) = 1;
                  *(undefined4 *)(param_3 + 0x18) = 1;
                  (**(code **)(*piStack_b0 + 0x18))(piStack_b0,0,0,0,0);
                  ppiStack_7c = (int **)piVar2;
                }
              }
              else {
                piStack_94 = (int *)0x0;
                *(undefined4 *)(param_3 + 0x14) = 2;
                *(undefined4 *)(param_3 + 0x18) = 2;
                piStack_98 = (int *)0x0;
                uStack_9c = 0;
                *(undefined4 *)(param_3 + 0x10) = 5;
                uStack_a0 = 0;
                uStack_a4 = 0;
                piStack_a8 = piStack_80;
                uStack_ac = 0x10246b6;
                (**(code **)(*piStack_80 + 0x18))();
                ppiStack_7c = (int **)piVar2;
              }
            }
          }
        }
      }
    }
  }
  piVar3 = unaff_ESI;
  if (ppiStack_7c != (int **)0x0) {
    piStack_80 = (int *)0x10246c4;
    (**(code **)((int)*ppiStack_7c + 8))();
    piVar3 = unaff_ESI;
  }
LAB_010246c4:
  ppiStack_7c = (int **)piVar3;
  if (ppiStack_7c != (int **)0x0) {
    piStack_80 = (int *)0x10246d2;
    (**(code **)((int)*ppiStack_7c + 8))();
  }
  if (piStack_64 != (int *)0x0) {
    ppiStack_7c = (int **)piStack_64;
    piStack_80 = (int *)0x10246e0;
    (**(code **)(*piStack_64 + 8))();
  }
  if (piStack_54 != (int *)0x0) {
    ppiStack_7c = (int **)piStack_54;
    piStack_80 = (int *)0x10246ee;
    (**(code **)(*piStack_54 + 8))();
  }
  if (piStack_58 != (int *)0x0) {
    ppiStack_7c = (int **)piStack_58;
    piStack_80 = (int *)0x10246fc;
    (**(code **)(*piStack_58 + 8))();
  }
  if (ppiStack_68 != (int **)0x0) {
    ppiStack_7c = ppiStack_68;
    piStack_80 = (int *)0x102470a;
    (*(code *)(*ppiStack_68)[2])();
  }
  if (piStack_60 != (int *)0x0) {
    ppiStack_7c = (int **)piStack_60;
    piStack_80 = (int *)0x1024718;
    (**(code **)(*piStack_60 + 8))();
  }
  return iVar1;
}


