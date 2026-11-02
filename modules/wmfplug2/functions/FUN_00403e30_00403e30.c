/* Module: wmfplug2.dll
   Function: FUN_00403e30
   Address: 00403e30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00404281) */
/* WARNING: Removing unreachable block (ram,0x00404289) */
/* WARNING: Removing unreachable block (ram,0x0040419a) */
/* WARNING: Removing unreachable block (ram,0x004041bf) */
/* WARNING: Removing unreachable block (ram,0x004041f2) */
/* WARNING: Removing unreachable block (ram,0x0040420d) */
/* WARNING: Removing unreachable block (ram,0x00404229) */
/* WARNING: Removing unreachable block (ram,0x00404233) */
/* WARNING: Removing unreachable block (ram,0x00404250) */
/* WARNING: Removing unreachable block (ram,0x00404262) */
/* WARNING: Removing unreachable block (ram,0x0040426d) */
/* WARNING: Removing unreachable block (ram,0x0040426f) */
/* WARNING: Removing unreachable block (ram,0x0040428b) */
/* WARNING: Removing unreachable block (ram,0x00404298) */
/* WARNING: Removing unreachable block (ram,0x004042a9) */
/* WARNING: Removing unreachable block (ram,0x0040429e) */
/* WARNING: Removing unreachable block (ram,0x004042ae) */
/* WARNING: Removing unreachable block (ram,0x004042b9) */
/* WARNING: Removing unreachable block (ram,0x004042bb) */
/* WARNING: Removing unreachable block (ram,0x004042c0) */
/* WARNING: Removing unreachable block (ram,0x004042c2) */
/* WARNING: Removing unreachable block (ram,0x004042cc) */
/* WARNING: Removing unreachable block (ram,0x004042e7) */
/* WARNING: Removing unreachable block (ram,0x004042f9) */
/* WARNING: Removing unreachable block (ram,0x00404308) */
/* WARNING: Removing unreachable block (ram,0x00404319) */
/* WARNING: Removing unreachable block (ram,0x0040430e) */
/* WARNING: Removing unreachable block (ram,0x0040431e) */
/* WARNING: Removing unreachable block (ram,0x00404329) */
/* WARNING: Removing unreachable block (ram,0x0040432b) */
/* WARNING: Removing unreachable block (ram,0x00404330) */
/* WARNING: Removing unreachable block (ram,0x00404332) */

int FUN_00403e30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  HANDLE pvVar2;
  HGLOBAL pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 unaff_EDI;
  int *piVar8;
  bool bVar9;
  undefined8 uVar10;
  int *piStack_858;
  int *piStack_854;
  int *piStack_850;
  int *piStack_84c;
  undefined4 uVar11;
  int *piVar12;
  int *apiStack_828 [2];
  int iStack_820;
  undefined1 auStack_81c [12];
  int aiStack_810 [17];
  undefined4 *puStack_7cc;
  
  if (*(int *)(param_1 + 8) == 0) {
    piStack_84c = (int *)0x403e54;
    pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + 8) = pvVar2;
    if (pvVar2 == (HANDLE)0x0) {
      return -0x7fffbffb;
    }
  }
  if (*(LPCVOID *)(param_1 + 0x1b8) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1b8));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1b8));
    GlobalFree(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(LPCVOID *)(param_1 + 0x1c0) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c0));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c0));
    GlobalFree(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(LPCVOID *)(param_1 + 0x1bc) != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1bc));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1bc));
    GlobalFree(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = param_3;
  piVar1 = (int *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_6;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = param_5;
  if (*piVar1 == 0) {
    piStack_84c = (int *)0x403f3a;
    iVar4 = WMCreateSyncReader();
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  iVar4 = (**(code **)(*(int *)*piVar1 + 0xc))();
  if (iVar4 < 0) {
    iVar5 = -0x7ffb1ff9;
    if (iVar4 == -0x3ff2ffd5) {
      iVar5 = -0x7ffb1fcc;
    }
    return iVar5;
  }
  piStack_84c = (int *)*piVar1;
  piVar7 = &iStack_820;
  aiStack_810[1] = 0x800;
  piStack_850 = (int *)0x403f8d;
  (**(code **)(*piStack_84c + 0x38))();
  piVar12 = (int *)0x0;
  if (apiStack_828[0] != (int *)0x0) {
    do {
      piStack_858 = (int *)*piVar1;
      piStack_850 = (int *)&stack0xfffff7c4;
      piStack_854 = piVar12;
      iVar4 = (**(code **)(*piStack_858 + 0x3c))();
      if (iVar4 < 0) goto LAB_00404174;
      iVar4 = (**(code **)(*piVar7 + 0x10))(piVar7,auStack_81c);
      if (iVar4 < 0) {
        (**(code **)(*piStack_854 + 8))(piStack_854);
        (**(code **)(*(int *)*piVar1 + 0x10))((int *)*piVar1);
        return iVar4;
      }
      (**(code **)(*piStack_854 + 8))();
      iVar4 = 4;
      bVar9 = true;
      piVar6 = aiStack_810;
      piVar8 = &DAT_0047b630;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar9 = *piVar6 == *piVar8;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      } while (bVar9);
      if (bVar9) {
        if (&stack0x00000000 != (undefined1 *)0x810) {
          iVar4 = 4;
          bVar9 = true;
          piVar7 = aiStack_810;
          piVar12 = &DAT_0047b630;
          goto code_r0x00404053;
        }
        break;
      }
      piVar12 = (int *)((int)piVar12 + 1);
    } while (piVar12 < apiStack_828[0]);
  }
  goto LAB_00404003;
  while( true ) {
    iVar4 = iVar4 + -1;
    bVar9 = *piVar7 == *piVar12;
    piVar7 = piVar7 + 1;
    piVar12 = piVar12 + 1;
    if (!bVar9) break;
code_r0x00404053:
    if (iVar4 == 0) break;
  }
  if (bVar9) {
    piVar7 = (int *)(param_1 + 0x19c);
    *(undefined4 *)(param_1 + 0x50) = *puStack_7cc;
    piStack_854 = (int *)&DAT_0047b600;
    *(undefined4 *)(param_1 + 0x54) = puStack_7cc[1];
    *(undefined4 *)(param_1 + 0x58) = puStack_7cc[2];
    *(undefined4 *)(param_1 + 0x5c) = puStack_7cc[3];
    *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(puStack_7cc + 4);
    piStack_858 = (int *)*piVar1;
    piStack_850 = piVar7;
    iVar4 = (**(code **)*piStack_858)();
    if (iVar4 < 0) {
      (**(code **)(*(int *)*piVar1 + 0x10))();
      return iVar4;
    }
    uVar11 = 8;
    (**(code **)(*(int *)*piVar7 + 0x14))
              ((int *)*piVar7,&stack0xfffff7c8,L"Duration",&stack0xfffff7d0,apiStack_828);
    piStack_858 = *(int **)(param_1 + 0x54);
    piStack_854 = (int *)0x0;
    *(undefined4 *)(param_1 + 0x28) = uVar11;
    *(undefined4 *)(param_1 + 0x2c) = unaff_EDI;
    uVar10 = ftol();
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    piStack_858 = (int *)0x4;
    (**(code **)(*(int *)*piVar7 + 0x14))
              ((int *)*piVar7,&piStack_850,L"Bitrate",&stack0xfffff7b8,param_1 + 0x68,&piStack_858);
    FUN_00404380((undefined4 *)*piVar7);
    iVar4 = (**(code **)(*(int *)*piVar1 + 0x38))((int *)*piVar1,&stack0xfffff7a4);
    if (-1 < iVar4) {
      *(undefined4 *)(param_1 + 0x194) = 0;
      (**(code **)(*(int *)*piVar1 + 0x10))();
      return -0x7fffbffb;
    }
LAB_00404174:
    (**(code **)(*(int *)*piVar1 + 0x10))();
    return iVar4;
  }
LAB_00404003:
  piStack_850 = (int *)*piVar1;
  piStack_854 = (int *)0x40400d;
  (**(code **)(*piStack_850 + 0x10))();
  return -0x7fff0001;
}


