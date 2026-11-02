/* Module: 14_43260.dll
   Function: FUN_10002b10
   Address: 10002b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10002b10(void *this,undefined1 *param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  short *psVar11;
  undefined4 *puVar12;
  short *psVar13;
  undefined4 *puVar14;
  undefined4 in_stack_ffffffb4;
  undefined4 in_stack_ffffffb8;
  int *in_stack_ffffffbc;
  undefined4 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  undefined4 in_stack_ffffffcc;
  int *in_stack_ffffffd0;
  int in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined4 uVar15;
  int iVar16;
  undefined1 *puVar17;
  int local_8;
  
  FUN_10002360(param_1,*(undefined4 **)((int)this + 0x270));
  piVar3 = *(int **)((int)this + 0x270);
  *(int **)((int)this + 0x26c) = piVar3;
  sVar2 = *(short *)(*(int *)((int)this + 0x2e8) + *piVar3 * 4);
  *(int **)((int)this + 0x26c) = piVar3 + 1;
  piVar3 = *(int **)((int)this + 0x2b8);
  *(int *)((int)this + 0x2b4) = (int)sVar2;
  if (piVar3 < piVar3 + 10) {
    piVar9 = (int *)((int)this + 0x2ec);
    piVar5 = piVar3;
    do {
      iVar8 = *piVar9;
      piVar6 = piVar5 + 1;
      piVar9 = piVar9 + 1;
      *piVar5 = (int)*(short *)(iVar8 + **(int **)((int)this + 0x26c) * 4);
      *(int *)((int)this + 0x26c) = *(int *)((int)this + 0x26c) + 4;
      piVar5 = piVar6;
    } while (piVar6 < piVar3 + 10);
  }
  uVar15 = 0x10002ba6;
  FUN_100022b0(*(int *)((int)this + 0x2b8),*(int **)((int)this + 700));
  iVar7 = FUN_100020e0(*(int *)((int)this + 0x2b4) * *(int *)((int)this + 0x2c8));
  iVar8 = *(int *)((int)this + 0x260);
  param_1 = (undefined1 *)0x0;
  if (0 < iVar8) {
    local_8 = 0;
    do {
      if (param_1 == (undefined1 *)(iVar8 + -1)) {
        iVar8 = *(int *)((int)this + 0x2b4);
        iVar16 = 3;
        puVar12 = (undefined4 *)((int)this + 0x2b4);
        puVar14 = (undefined4 *)&stack0xffffffcc;
        for (iVar10 = 5; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        FUN_10001fb0(this,in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8,
                     uVar15,iVar16,iVar8);
      }
      else {
        puVar17 = param_1;
        if (local_8 == iVar8 + -2) {
          iVar8 = iVar7 >> 0xc;
          if (*(int *)((int)this + 0x2c8) < *(int *)((int)this + 0x2b4)) {
LAB_10002ca3:
            puVar12 = (undefined4 *)((int)this + 0x2c8);
            puVar14 = (undefined4 *)&stack0xffffffcc;
            for (iVar10 = 5; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            }
            puVar12 = (undefined4 *)((int)this + 0x2b4);
          }
          else {
            puVar12 = (undefined4 *)((int)this + 0x2b4);
            puVar14 = (undefined4 *)&stack0xffffffcc;
            for (iVar10 = 5; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar14 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            }
            puVar12 = (undefined4 *)((int)this + 0x2c8);
          }
        }
        else {
          if (iVar8 + -2 <= local_8) {
            iVar8 = *(int *)((int)this + 0x2b4);
            goto LAB_10002ca3;
          }
          iVar8 = *(int *)((int)this + 0x2c8);
          puVar12 = (undefined4 *)((int)this + 0x2b4);
          puVar14 = (undefined4 *)&stack0xffffffcc;
          for (iVar10 = 5; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 1;
          }
          puVar12 = (undefined4 *)((int)this + 0x2c8);
        }
        iVar16 = 3;
        puVar14 = (undefined4 *)&stack0xffffffb4;
        for (iVar10 = 5; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        FUN_10001e80(this,in_stack_ffffffb4,in_stack_ffffffb8,in_stack_ffffffbc,in_stack_ffffffc0,
                     in_stack_ffffffc4,iVar16,in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4,
                     in_stack_ffffffd8,uVar15,(int)puVar17,iVar8);
      }
      local_8 = local_8 + 2;
      param_1 = param_1 + 1;
      iVar8 = *(int *)((int)this + 0x260);
    } while ((int)param_1 < iVar8);
  }
  psVar13 = (short *)(param_2 + -2);
  param_1 = (undefined1 *)0x0;
  if (0 < *(int *)((int)this + 0x260)) {
    param_2 = 0;
    do {
      uVar15 = *(undefined4 *)(*(int *)((int)this + 0x274) + (int)param_1 * 8);
      *(int *)((int)this + 0x280) = param_2 + *(int *)((int)this + 0x27c);
      *(undefined4 *)((int)this + 0x278) = uVar15;
      FUN_100023f0(this,*(int *)((int)this + 0x25c));
      psVar11 = *(short **)((int)this + 0x336);
      *(undefined4 *)((int)this + 0x25c) = 0;
      psVar1 = psVar11 + *(int *)((int)this + 0x264);
      while (psVar11 < psVar1) {
        iVar8 = *psVar11 * 4;
        psVar13 = psVar13 + 1;
        psVar11 = psVar11 + 1;
        *psVar13 = (short)iVar8;
        if (iVar8 != (short)iVar8) {
          if (0x7fff < iVar8) {
            *psVar13 = 0x7fff;
          }
          if (iVar8 < -0x8000) {
            *psVar13 = -0x8000;
          }
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 0x3c;
    } while ((int)param_1 < *(int *)((int)this + 0x260));
  }
  uVar15 = *(undefined4 *)((int)this + 0x2b8);
  *(undefined4 *)((int)this + 0x2b8) = *(undefined4 *)((int)this + 0x2cc);
  *(undefined4 *)((int)this + 0x2c8) = *(undefined4 *)((int)this + 0x2b4);
  uVar4 = *(undefined4 *)((int)this + 700);
  *(undefined4 *)((int)this + 700) = *(undefined4 *)((int)this + 0x2d0);
  *(undefined4 *)((int)this + 0x2cc) = uVar15;
  uVar15 = *(undefined4 *)((int)this + 0x2c0);
  *(undefined4 *)((int)this + 0x2d0) = uVar4;
  *(undefined4 *)((int)this + 0x2c0) = *(undefined4 *)((int)this + 0x2d4);
  uVar4 = *(undefined4 *)((int)this + 0x2d8);
  *(undefined4 *)((int)this + 0x2d4) = uVar15;
  *(undefined4 *)((int)this + 0x2d8) = *(undefined4 *)((int)this + 0x2c4);
  *(undefined4 *)((int)this + 0x2c4) = uVar4;
  return;
}


