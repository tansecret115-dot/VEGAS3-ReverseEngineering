/* Module: mp3plug.dll
   Function: FUN_5f6cf190
   Address: 5f6cf190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f6cf190(void)

{
  size_t *psVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  undefined1 *puStack00000004;
  undefined4 *in_stack_00004040;
  double *in_stack_00004044;
  size_t in_stack_00004048;
  int in_stack_0000404c;
  int in_stack_00004050;
  size_t *in_stack_00004054;
  int *in_stack_00004058;
  
  FUN_5f72a200();
  *in_stack_00004040 = 0;
  if ((in_stack_0000404c < 1) || (in_stack_00004050 < 1)) {
    return 0;
  }
  psVar1 = calloc(0x1c,1);
  if (psVar1 != (size_t *)0x0) {
    pvVar2 = calloc(4,in_stack_00004048);
    psVar1[6] = (size_t)pvVar2;
    psVar1[3] = 0;
    *psVar1 = in_stack_00004048;
    iVar3 = FUN_5f6ceee0(in_stack_0000404c,in_stack_00004050);
    iVar4 = in_stack_00004050 / iVar3;
    iVar3 = in_stack_0000404c / iVar3;
    if (iVar4 == iVar3) {
      if (_DAT_5f75c080 == *(float *)(in_stack_00004044 + 3)) {
        psVar1[4] = 0;
      }
      else {
        psVar1[4] = 1;
      }
    }
    else if (iVar4 * iVar3 < 0x100) {
      psVar1[4] = 1;
    }
    else {
      psVar1[4] = 2;
    }
    if (psVar1[4] == 1) {
      *(undefined1 **)(in_stack_00004044 + 1) = &stack0x00000008;
      FUN_5f6d41c0((int)in_stack_00004044);
      if (*(int *)((int)in_stack_00004044 + 0x24) < 0x801) {
        FUN_5f6d41f0((int)in_stack_00004044);
        FUN_5f6d4370(in_stack_00004044);
        iVar9 = *(int *)((int)in_stack_00004044 + 0x24);
        iVar5 = iVar9 / (iVar4 * iVar3);
        if (iVar5 < 0x3f7) {
          if (iVar9 % (iVar4 * iVar3) != 0) {
            iVar5 = iVar5 + 1;
            iVar6 = iVar5 * iVar3 * iVar4;
            iVar8 = (iVar6 - iVar9 & 0xfffffffeU) + iVar9;
            for (; iVar9 < iVar8; iVar9 = iVar9 + 2) {
              *(undefined8 *)(&stack0x00000008 + iVar9 * 8) = _DAT_5f75c088;
              *(undefined8 *)(&stack0x00000010 + iVar9 * 8) = _DAT_5f75c088;
            }
            for (; iVar9 < iVar6; iVar9 = iVar9 + 1) {
              *(undefined8 *)(&stack0x00000008 + iVar9 * 8) = _DAT_5f75c088;
            }
          }
          puStack00000004 = &stack0x00000008;
          iVar6 = FUN_5f6d4760(psVar1 + 5,iVar4,iVar3,0x400);
          if (iVar6 != 0) {
            if (0 < (int)in_stack_00004048) {
              iVar6 = 0;
              do {
                iVar8 = FUN_5f6cf000((int *)(psVar1[6] + iVar6),iVar4,iVar3,iVar5);
                if (iVar8 == 0) {
                  return 0;
                }
                iVar6 = iVar6 + 4;
              } while (iVar6 < (int)(in_stack_00004048 * 4));
            }
            sVar7 = (0x401 - iVar5) * in_stack_00004048;
            *in_stack_00004054 = sVar7;
            *in_stack_00004058 = sVar7 * iVar4;
            sVar7 = *in_stack_00004054;
            *in_stack_00004054 = iVar3 * sVar7;
            psVar1[1] = iVar3 * sVar7;
            psVar1[3] = (iVar9 + -1) / (iVar3 * 2);
            goto LAB_5f6cf458;
          }
        }
      }
    }
    else if (psVar1[4] == 0) {
LAB_5f6cf458:
      *(undefined4 *)(in_stack_00004044 + 1) = 0;
      *in_stack_00004040 = psVar1;
      return 1;
    }
  }
  return 0;
}


