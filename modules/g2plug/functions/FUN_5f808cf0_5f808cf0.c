/* Module: g2plug.dll
   Function: FUN_5f808cf0
   Address: 5f808cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f808cf0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 extraout_var;
  uint uVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iStack_15c;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  CHAR aCStack_124 [4];
  int local_120;
  undefined4 local_118;
  uint local_114 [69];
  
  iVar5 = 0;
  if ((*(int *)(param_1 + 0x144) == 0) || (iVar6 = *(int *)(param_1 + 0x437), iVar6 < 1)) {
    return 0;
  }
  local_128 = *(undefined4 *)(param_4 + 4);
  aCStack_124[0] = '\0';
  aCStack_124[1] = '\0';
  aCStack_124[2] = '\0';
  aCStack_124[3] = '\0';
  local_120 = iVar6;
  uVar2 = ftol();
  local_130 = 0;
  bVar1 = false;
  local_134 = uVar2;
  local_128 = uVar2;
  if (0 < iVar6) {
    do {
      iVar3 = FUN_5f806f90((LPCSTR)(*(int *)(param_1 + 0x433) + 4 + iVar5),&local_118);
      if (iVar3 != 0) {
        iStack_15c = 0x5f808db8;
        FUN_5f8095f0((int *)(*(int *)(param_1 + 0x433) + iVar5),uVar2,(int *)&local_12c,local_114);
        if (local_12c < local_134) {
          local_134 = local_12c;
        }
        if (local_130 < local_114[0]) {
          local_130 = local_114[0];
        }
        bVar1 = true;
      }
      iVar5 = iVar5 + 0x328;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    uVar2 = local_128;
    if (bVar1) {
      uVar2 = local_130;
      (**(code **)(*param_5 + 0xc))();
      uVar4 = (uint)*(ushort *)(param_1 + 0x3ff);
      iStack_15c = CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x3fb));
      piVar10 = param_5;
      (**(code **)(*param_5 + 0x10))(param_5,0,0);
      iVar5 = (**(code **)(*param_5 + 0x18))(param_5);
      if (iVar5 != 0) {
        iVar6 = 0;
        do {
          iVar3 = FUN_5f806f90((LPCSTR)(*(int *)(param_1 + 0x433) + 4 + iVar6),
                               (undefined4 *)&stack0xfffffec4);
          if (iVar3 != 0) {
            FUN_5f8095f0((int *)(*(int *)(param_1 + 0x433) + iVar6),uVar2,(int *)&stack0xfffffea8,
                         (uint *)&stack0xfffffeac);
            FUN_5f808ff0(param_1,*(int *)(param_1 + 0x433) + iVar6,&local_134);
            FUN_5f8093b0(*(int *)(param_1 + 0x433) + iVar6,aCStack_124,0xff);
            iVar8 = iVar5;
            (**(code **)(*param_5 + 0x20))(param_5);
            uVar7 = 1;
            iVar3 = iVar5;
            (**(code **)(*param_5 + 0x24))(param_5,iVar5,1);
            (**(code **)(*param_5 + 0x28))(param_5,iVar5,4,&stack0xfffffea8);
            (**(code **)(*param_5 + 0x40))(param_5,iVar5,iVar3,uVar7);
            if ((char)uVar4 != '\0') {
              (**(code **)(*param_5 + 0x3c))(param_5,iVar5,&stack0xfffffea8);
            }
            if (iVar8 == 1) {
              (**(code **)(*param_5 + 0x30))(param_5,iVar5,*(int *)(param_1 + 0x433) + 0x24 + iVar6)
              ;
            }
            else if (iVar8 == 2) {
              iVar3 = FUN_5f809460((char *)(*(int *)(param_1 + 0x433) + 0x24 + iVar6));
              (**(code **)(*param_5 + 0x38))(param_5,iVar5,iVar3);
            }
            else if (iVar8 == 3) {
              (**(code **)(*param_5 + 0x34))(param_5,iVar5,*(int *)(param_1 + 0x433) + 0x24 + iVar6)
              ;
            }
            (**(code **)(*param_5 + 0x44))(param_5,iVar5);
          }
          iVar6 = iVar6 + 0x328;
          unaff_EDI = unaff_EDI + -1;
        } while (unaff_EDI != 0);
      }
      piVar9 = &iStack_15c;
      iStack_15c = 0;
      uVar2 = (**(code **)*param_5)(param_5,&DAT_5f86a5f0);
      if ((-1 < (int)uVar2) &&
         (uVar2 = (**(code **)(**(int **)(param_1 + 0x6d4) + 0x18))
                            (*(int **)(param_1 + 0x6d4),piVar10), piVar9 != (int *)0x0)) {
        (**(code **)(*piVar9 + 8))(piVar9);
        return uVar2;
      }
    }
  }
  return uVar2;
}


