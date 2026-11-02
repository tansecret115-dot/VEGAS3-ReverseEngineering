/* Module: vegas30.exe
   Function: FUN_0043b290
   Address: 0043b290
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043b290(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  EMIXERTYPE EVar4;
  long lVar5;
  HWND pHVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x80) != 0)) {
    local_4 = DAT_0064b138;
    FUN_004e9230(*(int *)(param_1 + 0x80),DAT_0064b138);
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9fc5,(*(int *)(DAT_0064762c + 0x110) != 0) + '\x04'
                );
    uVar1 = DAT_00648690;
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa1ea,(byte)DAT_00648690 & 1 | 4);
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa1eb,(uVar1 & 2 | 8) >> 1);
    uVar3 = Mixer_NumBusTypePorts(1);
    param_1 = uVar3;
    EVar4 = Mixer_GetMixerType((ISFMixer *)0x0);
    if ((EVar4 != 1) || (uVar3 == 1)) {
      param_1 = 0;
    }
    iVar11 = 0;
    do {
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),iVar11 + 0xa24f,
                   (1 << ((char)iVar11 + 3U & 0x1f) & uVar1) != 0 |
                   ((int)param_1 <= iVar11) - 1U & 4);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
    lVar5 = Mixer_NumBusTypePorts(4);
    uVar1 = DAT_00648698;
    iVar11 = 0;
    do {
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),iVar11 + 0xa203,
                   (1 << ((byte)iVar11 & 0x1f) & uVar1) != 0 | (lVar5 <= iVar11) - 1U & 4);
      uVar3 = DAT_00648690;
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa280,
                 (DAT_00648690 & 0x20000000 | 0x9fffffff) >> 0x1d);
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa281,uVar3 >> 0x1e & 1 | 4);
    uVar1 = DAT_0064869c;
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa287,DAT_0064869c & 1 | 4);
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa286,(uVar1 & 2 | 8) >> 1);
    pHVar6 = GetFocus();
    uVar8 = DAT_00647630;
    if (pHVar6 == *(HWND *)(*(int *)(DAT_0064762c + 0xa8) + 8)) {
      iVar11 = FUN_00469160(DAT_00647630);
      bVar10 = -(iVar11 != 0) & 4;
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d0b,bVar10);
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d0c,bVar10);
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d0f,bVar10);
      iVar11 = FUN_004690d0(uVar8);
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d0d,-(iVar11 != 0) & 4);
      iVar11 = FUN_004691f0(uVar8);
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d0e,-(iVar11 != 0) & 4);
      iVar11 = 0;
      param_1 = 0;
      local_8 = 0;
      iVar7 = FUN_004a58b0(uVar8,&param_1,&local_8);
      uVar8 = 0;
      if ((iVar7 != 0) && (uVar8 = 4, (param_1 & 8) != 0)) {
        uVar8 = 5;
      }
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d1c,uVar8);
      uVar8 = 0;
      piVar9 = (int *)FUN_005b87b0(local_4);
      if (piVar9 != (int *)0x0) {
        iVar11 = *piVar9;
      }
      iVar7 = 0;
      if (iVar11 < 1) {
LAB_0043b578:
        uVar12 = 0xa0a4;
      }
      else {
        piVar9 = (int *)piVar9[2];
        do {
          if (((*(byte *)(*piVar9 + 0x10) & 0x10) != 0) && (*(int *)(*piVar9 + 4) == 3)) {
            uVar8 = 4;
            goto LAB_0043b578;
          }
          iVar7 = iVar7 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar7 < iVar11);
        uVar8 = 0;
        uVar12 = 0xa0a4;
      }
    }
    else {
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d0b,0);
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d0c,0);
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d0d,0);
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d0e,0);
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d0f,0);
      uVar8 = 0;
      uVar12 = 0x9d1c;
    }
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),uVar12,uVar8);
    iVar11 = FUN_004590e0(DAT_00647630);
    iVar7 = 0;
    do {
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),iVar7 + 0x9d23,(iVar7 == iVar11) + '\x04');
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa7b2,(DAT_00649420 != 0) + '\x04');
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xc4f4,(DAT_00649ce4 != 0) + '\x04');
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d21,(DAT_0064778c != 0) + '\x04');
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d22,(DAT_00649e0c != 0) + '\x04');
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d1f,(DAT_00647788 != 0) + '\x04');
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d20,(DAT_00647784 != 0) + '\x04');
    iVar11 = FUN_004584d0(DAT_00647630);
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9d7a,(iVar11 != 0) + '\x04');
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0x9e37,(DAT_006476b8 != 0) + '\x04');
    FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xc617,(DAT_006476c0 != 0) + '\x04');
    FUN_005fcae0(*(undefined4 *)(iVar2 + 0x80),0x9e5d,0x9e5f,0x9e5c);
    if (DAT_00648838 == 0) {
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa76f,4);
      FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa76e,4);
    }
    else {
      if (DAT_00648838 == 2) {
        FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa76f,5);
        FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa76e,4);
        return;
      }
      if (DAT_00648838 == 3) {
        FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa76f,4);
        FUN_0043b250(*(undefined4 *)(iVar2 + 0x80),0xa76e,5);
        return;
      }
    }
  }
  return;
}


