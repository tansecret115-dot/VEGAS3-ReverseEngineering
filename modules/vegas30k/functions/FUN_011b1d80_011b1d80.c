/* Module: vegas30k.dll
   Function: FUN_011b1d80
   Address: 011b1d80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011b1d80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_ESI;
  undefined4 *puVar5;
  undefined1 local_240 [4];
  undefined4 auStack_23c [66];
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))
                    (*(int **)(param_1 + 0x14),&DAT_011d9bf0,local_240);
  if (iVar2 < 0) {
    return iVar2;
  }
  puVar5 = auStack_23c;
  for (iVar4 = 0x8c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  auStack_23c[0] = 0x230;
  uVar3 = *(uint *)(param_1 + 0xb58) & 0xf0000;
  if (uVar3 < 0x30001) {
    if (uVar3 == 0x30000) {
      iVar2 = (**(code **)(*unaff_ESI + 0x28))
                        (unaff_ESI,*(undefined4 *)(param_1 + 0xb68),*(undefined4 *)(param_1 + 0xb6c)
                         ,*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74),
                         local_240,auStack_23c);
      if (iVar2 == 1) {
        uVar1 = *(undefined4 *)(param_1 + 0xb68);
        puVar5 = auStack_23c;
        for (iVar2 = 0x8c; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        uStack_130 = *(undefined4 *)(param_1 + 0xb6c);
        uStack_12c = *(undefined4 *)(param_1 + 0xb70);
        uStack_128 = *(undefined4 *)(param_1 + 0xb74);
        auStack_23c[0] = 0x230;
        uStack_134 = uVar1;
        iVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,auStack_23c);
      }
    }
    else {
      if (uVar3 != 0x10000) {
        if ((uVar3 == 0x20000) &&
           (iVar2 = (**(code **)(*unaff_ESI + 0x2c))
                              (unaff_ESI,param_1 + 0xb68,local_240,auStack_23c), iVar2 == 0)) {
          iVar2 = FUN_011b1240(auStack_23c,&stack0xfffffdb8,1,0xffffffff);
        }
        goto LAB_011b1f47;
      }
      iVar2 = (**(code **)(*unaff_ESI + 0x2c))(unaff_ESI,param_1 + 0xb68,local_240,auStack_23c);
    }
    if (iVar2 == 0) {
      iVar2 = FUN_011b1240(auStack_23c,&stack0xfffffdb8,1,0xffffffff);
    }
  }
  else if (uVar3 == 0x50000) {
    iVar2 = FUN_011b1490(&stack0xfffffdb8,1,*(undefined4 *)(param_1 + 0xb68),0xffffffff);
  }
  else if (uVar3 == 0x60000) {
    iVar2 = FUN_011b17d0(&stack0xfffffdb8,1,unaff_ESI,*(undefined4 *)(param_1 + 0xb68),0xffffffff);
  }
LAB_011b1f47:
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return iVar2;
}


