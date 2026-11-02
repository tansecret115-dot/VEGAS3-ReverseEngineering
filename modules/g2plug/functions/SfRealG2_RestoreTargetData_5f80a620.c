/* Module: g2plug.dll
   Function: SfRealG2_RestoreTargetData
   Address: 5f80a620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfRealG2_RestoreTargetData(unsigned char *,long) */

long SfRealG2_RestoreTargetData(uchar *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_EBX;
  uint *puVar5;
  long unaff_EBP;
  int *unaff_ESI;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  int iStack_154;
  int *local_150;
  int local_14c;
  int iStack_148;
  uint uStack_144;
  uchar *local_140;
  undefined4 uStack_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_10c [264];
  int iStack_4;
  
                    /* 0xa620  40  ?SfRealG2_RestoreTargetData@@YGJPAEJ@Z */
  local_150 = (int *)0x80004005;
  if (DAT_5f87749c == (undefined4 *)0x0) {
    return -0x7fffbffb;
  }
  local_140 = param_1;
  if (*(int *)(param_1 + 4) != 100) {
    return -0x7ff8ffa9;
  }
  if (*(int *)param_1 != 0x10) {
    return -0x7ff8ffa9;
  }
  piVar8 = (int *)&DAT_5f86a4c0;
  iVar1 = (**(code **)*DAT_5f87749c)(DAT_5f87749c,&DAT_5f86a4c0,&local_14c);
  if (iVar1 == 0) {
    iStack_148 = *(int *)param_1;
    puVar5 = (uint *)(param_1 + iStack_148);
    if (iStack_4 < iStack_148) {
LAB_5f80a6ad:
      if (unaff_EBX != (int *)0x0) {
        (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      }
      return -0x7ff8ffa9;
    }
    unaff_EBP = 0;
    iStack_154 = 0;
    do {
      if (*(int *)(local_14c + 8) <= iStack_154) break;
      uVar4 = *puVar5;
      if (iStack_4 < (int)(uVar4 + iStack_148)) goto LAB_5f80a6ad;
      puVar6 = puVar5;
      puVar7 = &uStack_144;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar5 = (uint *)((int)puVar5 + uVar4);
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar7 = (char)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        puVar7 = (uint *)((int)puVar7 + 1);
      }
      iVar1 = (**(code **)(*DAT_5f8774a0 + 0xc))(DAT_5f8774a0,local_140,&local_150);
      if (iVar1 == 0) {
        iVar1 = (**(code **)*local_150)(local_150,&DAT_5f86a440,&stack0xfffffea0);
        if (iVar1 == 0) {
          (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,auStack_10c,0xff);
          iVar2 = (**(code **)(*piVar8 + 0x18))(piVar8,local_140);
          iVar1 = iStack_124;
          if (iVar2 == 0) {
            iVar2 = 0;
            if (iStack_124 != 0) {
              (**(code **)(*unaff_ESI + 0x28))(unaff_ESI,uStack_120,uStack_11c);
              iVar2 = (**(code **)(*piVar8 + 0x30))(piVar8,iStack_124);
            }
            if (iStack_130 != 0) {
              iVar2 = (**(code **)(*unaff_ESI + 0x20))
                                (unaff_ESI,iVar1 != 0,uStack_138,uStack_12c,uStack_128);
            }
            if (iVar2 != 0) goto LAB_5f80a7ce;
          }
          else {
LAB_5f80a7ce:
            unaff_EBP = -0x7fffbffb;
          }
          if (unaff_ESI != (int *)0x0) {
            (**(code **)(*unaff_ESI + 8))(unaff_ESI);
            unaff_ESI = (int *)0x0;
          }
        }
        if (local_150 != (int *)0x0) {
          (**(code **)(*local_150 + 8))(local_150);
          local_150 = (int *)0x0;
        }
      }
      iStack_154 = iStack_154 + 1;
    } while (-1 < unaff_EBP);
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
  }
  return unaff_EBP;
}


