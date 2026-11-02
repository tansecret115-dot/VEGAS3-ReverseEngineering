/* Module: vegas30k.dll
   Function: FUN_011b1240
   Address: 011b1240
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011b1240(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_EDI;
  int iVar4;
  uint *puVar5;
  int *unaff_retaddr;
  undefined4 uVar6;
  int iStack_168;
  int *piStack_164;
  undefined4 local_150;
  int local_14c;
  undefined1 auStack_148 [12];
  undefined1 auStack_13c [4];
  int iStack_138;
  uint auStack_134 [9];
  int iStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_10;
  int *piStack_4;
  
  iVar4 = 1;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = -1;
    for (uVar2 = *(uint *)(param_1 + 0x9c8); uVar2 != 0; uVar2 = uVar2 >> 1) {
      iVar3 = iVar3 + 1;
    }
  }
  else {
    iVar3 = 0;
  }
  piVar1 = *(int **)(param_2 + 0x220);
  if (piVar1 == (int *)0x0) {
    return -0x7fff0001;
  }
  if (param_5 == -1) {
    local_14c = 0;
    do {
      piStack_164 = (int *)0x0;
      iStack_168 = 0;
      iStack_138 = (**(code **)(**(int **)(param_2 + 0x220) + 0x10))
                             (*(int **)(param_2 + 0x220),local_14c,&param_5);
      if (iStack_138 == 0) {
        puVar5 = auStack_134;
        for (iVar4 = 0x4d; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        piStack_164 = (int *)0xffffffff;
        iStack_168 = -1;
        auStack_134[2] = auStack_134[2] | 0x10;
        auStack_134[0] = 0x134;
        auStack_134[1] = 0x40;
        iStack_110 = param_5;
        uStack_10c = 0x7f;
        if (*(int *)(param_1 + 0x10) == 0) {
          uVar6 = 0x1f;
        }
        else {
          uVar6 = 0x21;
        }
        iStack_108 = iStack_138;
        iVar4 = (**(code **)(param_1 + 0x15c))
                          (*(undefined4 *)(param_1 + 0x24),uVar6,*(undefined4 *)(param_1 + 0x160),
                           iVar3,auStack_134,0x134,0x10000,0xffffffff,0xffffffff);
        if (iVar4 == 0) {
          piStack_164 = &local_150;
          iStack_168 = param_5;
          iVar4 = (**(code **)(**(int **)(param_2 + 0x220) + 0xc))(*(int **)(param_2 + 0x220));
          if (-1 < iVar4) {
            piStack_164 = param_4;
            iStack_168 = param_3;
            iVar4 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))
                              (*(int **)(param_1 + 0x1c),local_150,auStack_13c);
            if (-1 < iVar4) {
              iVar4 = _SfList_InsertList_16
                                (*(undefined4 *)(param_1 + 0xc6c),0xffffffff,&stack0xfffffea4,1);
            }
            (**(code **)(*piStack_164 + 8))(piStack_164);
          }
        }
      }
      local_14c = local_14c + 1;
    } while (iStack_138 == 0);
    return iVar4;
  }
  piStack_164 = &local_150;
  iStack_168 = param_5;
  iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1);
  if (-1 < iVar4) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))
                      (*(int **)(param_1 + 0x1c),unaff_EDI,auStack_148,piStack_4);
    if (-1 < iVar4) {
      piStack_164 = (int *)*piStack_4;
      iStack_168 = iStack_10;
      iVar4 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xc6c),0xffffffff,&iStack_168,1);
    }
    (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
  }
  return iVar4;
}


