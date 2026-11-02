/* Module: g2plug.dll
   Function: SfRealG2_GetTargetData
   Address: 5f80a830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfRealG2_GetTargetData(unsigned long,int,int,unsigned char * *,unsigned long *) */

long SfRealG2_GetTargetData(ulong param_1,int param_2,int param_3,uchar **param_4,ulong *param_5)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  int *unaff_ESI;
  LPCVOID unaff_EDI;
  int iVar5;
  int *piVar6;
  int unaff_retaddr;
  int *piVar7;
  int *piVar8;
  uint uStack_170;
  int *local_16c;
  undefined4 uStack_168;
  uint local_164;
  undefined4 local_160;
  uint uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int local_150 [6];
  int iStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  int *piStack_124;
  undefined4 uStack_118;
  undefined1 auStack_10c [260];
  uint uStack_8;
  int iStack_4;
  
                    /* 0xa830  38  ?SfRealG2_GetTargetData@@YGJKHHPAPAEPAK@Z */
  *param_4 = (uchar *)0x0;
  iVar5 = -0x7fffbffb;
  if (param_5 != (ulong *)0x0) {
    *param_5 = 0;
  }
  local_16c = (int *)0x0;
  local_164 = 0;
  local_150[0] = 0;
  if (DAT_5f87749c == (int *)0x0) {
    return -0x7fffbffb;
  }
  piVar8 = (int *)&DAT_5f86a4c0;
  piVar7 = DAT_5f87749c;
  iVar1 = (**(code **)*DAT_5f87749c)(DAT_5f87749c,&DAT_5f86a4c0,&local_160);
  if (iVar1 == 0) {
    local_150[1] = 0;
    iVar5 = 0;
    local_150[2] = 0;
    uStack_154 = 0x10;
    local_150[0] = 100;
    iVar1 = 0;
    uVar4 = uStack_8;
    do {
      if (8 < iVar1) break;
      if (((iVar1 == 0) || ((uVar4 & 1) != 0)) &&
         (iVar2 = (**(code **)(*DAT_5f8774a0 + 0xc))(DAT_5f8774a0,iVar1,&stack0xfffffe84),
         iVar2 == 0)) {
        (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,auStack_10c,0xff);
        piVar6 = local_150;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        local_150[0] = 0x38;
        local_150[1] = iVar1;
        iVar5 = (**(code **)(*piVar7 + 0x14))(piVar7,&local_16c);
        if (iVar5 == 0) {
          uStack_134 = local_160;
          iVar5 = 0;
          if (unaff_retaddr != -1) {
            (**(code **)(*unaff_ESI + 0x24))(unaff_ESI,&uStack_168);
            uStack_12c = 1;
            uStack_128 = uStack_170;
            piStack_124 = local_16c;
            iVar5 = (**(code **)(*piVar8 + 0x2c))(piVar8,&local_160);
            uStack_118 = uStack_158;
          }
          if (iStack_4 != -1) {
            iVar5 = (**(code **)(*unaff_ESI + 0x1c))
                              (unaff_ESI,piStack_124 != (int *)0x0,iStack_4,&uStack_168);
            uStack_130 = 1;
            iStack_138 = iStack_4;
            uStack_12c = uStack_168;
            uStack_128 = local_164;
          }
          if (iVar5 != 0) goto LAB_5f80a9f9;
          iVar5 = FUN_5f80aaa0(&uStack_154,local_150 + 3,(int *)&stack0xfffffe88,&uStack_15c,
                               &uStack_170);
        }
        else {
LAB_5f80a9f9:
          iVar5 = -0x7fffbffb;
        }
        if (unaff_ESI != (int *)0x0) {
          (**(code **)(*unaff_ESI + 8))(unaff_ESI);
          unaff_ESI = (int *)0x0;
        }
      }
      uVar4 = uVar4 >> 1;
      iVar1 = iVar1 + 1;
    } while (-1 < iVar5);
    if (local_16c != (int *)0x0) {
      (**(code **)(*local_16c + 8))(local_16c);
      local_16c = (int *)0x0;
    }
    if (-1 < iVar5) {
      *(LPCVOID *)param_1 = unaff_EDI;
      if (param_2 == 0) {
        return iVar5;
      }
      *(uint *)param_2 = uStack_170;
      return iVar5;
    }
  }
  if (unaff_EDI != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(unaff_EDI);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(unaff_EDI);
    GlobalFree(pvVar3);
  }
  return iVar5;
}


