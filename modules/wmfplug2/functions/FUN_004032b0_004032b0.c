/* Module: wmfplug2.dll
   Function: FUN_004032b0
   Address: 004032b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_004032b0(int *param_1)

{
  uint uVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  undefined8 uVar8;
  int unaff_retaddr;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piStack_474;
  int *piVar12;
  int iStack_460;
  uint uStack_458;
  int iStack_454;
  int iStack_450;
  undefined1 auStack_44c [8];
  int aiStack_444 [5];
  int iStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  uint uStack_41c;
  undefined4 uStack_418;
  int iStack_3cc;
  int iStack_c;
  
  piStack_474 = param_1;
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if (-1 < (int)uVar1) {
    hMem = GlobalAlloc(0x42,unaff_retaddr * 0x38);
    pvVar2 = GlobalLock(hMem);
    param_1[0x92] = (int)pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      return 0x8007000e;
    }
    piVar10 = (int *)param_1[0x90];
    piVar11 = &iStack_450;
    iStack_454 = 0;
    iStack_454 = (**(code **)*piVar10)(piVar10,&DAT_0047b5e0);
    if (iStack_454 < 0) {
      return 0x80004005;
    }
    piVar12 = (int *)0x0;
    if (0 < unaff_retaddr) {
      iVar5 = 0;
      do {
        aiStack_444[0] = 0;
        uStack_458 = 0;
        aiStack_444[1] = 0;
        aiStack_444[2] = 0;
        aiStack_444[3] = 0;
        piVar6 = (int *)&stack0xfffffb9c;
        iVar3 = (**(code **)(iRam00000000 + 0x24))(0,piVar12);
        if (-1 < iVar3) {
          (**(code **)(*piVar12 + 0x10))(piVar12,&stack0xfffffb9c);
          (**(code **)(*piVar11 + 0xc))(piVar11,&uStack_458);
          (**(code **)(*piVar10 + 8))(piVar10);
        }
        piVar9 = (int *)&stack0xfffffb88;
        uVar1 = (**(code **)(*(int *)param_1[0x90] + 0x3c))((int *)param_1[0x90],piVar12);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(*piVar6 + 0x10))(piVar6,&uStack_428,&stack0xfffffb98);
        if ((int)uVar1 < 0) {
          (**(code **)(*piVar9 + 8))(piVar9);
          return uVar1;
        }
        (**(code **)(*piVar9 + 8))(piVar9);
        piStack_474 = (int *)0x0;
        iStack_454 = (**(code **)(*(int *)param_1[0x91] + 0x14))
                               ((int *)param_1[0x91],&piStack_474,L"Duration",aiStack_444 + 2,
                                auStack_44c,&stack0xfffffb90);
        iVar3 = param_1[0x92];
        *(undefined4 *)(iVar3 + 0x18 + iVar5) = uStack_424;
        iVar4 = 4;
        *(undefined4 *)(iVar3 + 0x1c + iVar5) = uStack_420;
        bVar7 = true;
        piVar12 = &DAT_0047b640;
        piVar6 = aiStack_444;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = *piVar12 == *piVar6;
          piVar12 = piVar12 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar7);
        if (bVar7) {
          *(undefined4 *)(param_1[0x92] + 8 + iVar5) = 0x400;
          *(undefined4 *)(param_1[0x92] + iVar5) = 2;
          aiStack_444[4] = *(int *)(iStack_3cc + 0x28);
          iStack_430 = *(int *)(iStack_3cc + 0x2c);
          if ((aiStack_444[4] == 0) && (iStack_430 == 0)) {
            iVar3 = param_1[0x92];
            *(undefined4 *)(iVar3 + 0x28 + iVar5) = 0;
            *(undefined4 *)(iVar3 + 0x2c + iVar5) = 0x403e0000;
          }
          else {
            *(double *)(param_1[0x92] + 0x28 + iVar5) =
                 _DAT_0047ba78 / (double)*(longlong *)(iStack_3cc + 0x28);
          }
          iVar3 = param_1[0x92];
          uVar8 = ftol();
          *(undefined8 *)(iVar3 + iVar5 + 0x20) = uVar8;
          *(undefined4 *)(param_1[0x92] + 4 + iVar5) = 8;
        }
        else {
          iVar3 = 4;
          bVar7 = true;
          piVar12 = &DAT_0047b630;
          piVar6 = aiStack_444;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar7 = *piVar12 == *piVar6;
            piVar12 = piVar12 + 1;
            piVar6 = piVar6 + 1;
          } while (bVar7);
          if (bVar7) {
            uStack_418 = 0;
            *(int *)(param_1[0x92] + 8 + iVar5) = iStack_460;
            *(undefined4 *)(param_1[0x92] + iVar5) = 1;
            uStack_41c = *(uint *)(iStack_3cc + 4);
            *(double *)(param_1[0x92] + 0x28 + iVar5) = (double)uStack_41c;
            iVar3 = param_1[0x92];
            uStack_42c = ftol();
            uStack_428 = 0;
            uVar8 = ftol();
            *(undefined8 *)(iVar3 + iVar5 + 0x20) = uVar8;
            iStack_460 = iStack_460 + 1;
            *(undefined4 *)(param_1[0x92] + 4 + iVar5) = 8;
          }
        }
        *(uint *)(param_1[0x92] + 0xc + iVar5) = uStack_458 & 0xffff;
        piVar12 = (int *)0x9;
        iVar5 = iVar5 + 0x38;
      } while (9 < iStack_c);
    }
    (**(code **)(iRam00000000 + 8))(0);
    uVar1 = uStack_458;
  }
  return uVar1;
}


