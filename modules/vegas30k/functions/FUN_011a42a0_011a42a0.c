/* Module: vegas30k.dll
   Function: FUN_011a42a0
   Address: 011a42a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_011a42a0(int *param_1)

{
  int *piVar1;
  void *_Memory;
  void *_Memory_00;
  int iVar2;
  int iVar3;
  int *_Memory_01;
  int iVar4;
  int **ppiStack_70;
  int *piStack_6c;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piStack_5c;
  int *piStack_58;
  int **ppiVar9;
  int *piStack_3c;
  int *piStack_38;
  
  piStack_38 = (int *)0x11a42b8;
  _Memory_00 = calloc(1,0x128);
  if (_Memory_00 == (void *)0x0) {
    return -0x7ff8fff2;
  }
  *(int **)((int)_Memory_00 + 0x114) = param_1;
  (**(code **)(*param_1 + 4))();
  piStack_38 = *(int **)((int)_Memory_00 + 0x114);
  piStack_3c = (int *)0x11a42ed;
  (**(code **)(*piStack_38 + 0xc))();
  piStack_3c = (int *)&DAT_00000104;
  (**(code **)(**(int **)((int)_Memory_00 + 0x114) + 0x10))();
  piVar1 = *(int **)((int)_Memory_00 + 0x114);
  *(undefined4 *)((int)_Memory_00 + 0x108) = 0;
  *(undefined4 *)((int)_Memory_00 + 0x10c) = 0;
  *(undefined4 *)((int)_Memory_00 + 0x120) = 0;
  *(undefined4 *)((int)_Memory_00 + 0x124) = 0;
  iVar2 = (**(code **)(*piVar1 + 0x5c))();
  if (iVar2 < 0) {
    piStack_58 = *(int **)((int)_Memory_00 + 0x114);
    *(undefined4 *)((int)_Memory_00 + 0x118) = 0;
    piStack_5c = (int *)0x11a4564;
    (**(code **)(*piStack_58 + 0x14))();
    piStack_6c = (int *)0x11a4571;
    FUN_011a4620();
    *(undefined4 *)((int)_Memory_00 + 0x124) = 0;
  }
  else {
    piStack_6c = (int *)((int)_Memory_00 + 0x118);
    piStack_58 = (int *)0x0;
    piStack_5c = (int *)0x40000000;
    ppiStack_70 = (int **)0x11a4366;
    iVar2 = _SfList_CreateExZ_32();
    if (iVar2 < 0) {
      (**(code **)(**(int **)((int)_Memory_00 + 0x114) + 8))();
      piStack_58 = (int *)0x11a437f;
      free(_Memory_00);
      piStack_58 = (int *)0x11a438c;
      (**(code **)(*piStack_3c + 8))();
      return iVar2;
    }
    *(undefined4 *)((int)_Memory_00 + 0x11c) = 0;
    ppiVar9 = &piStack_3c;
    piStack_58 = (int *)0x1;
    piStack_5c = piStack_38;
    iVar3 = (**(code **)(*piStack_38 + 0xc))();
    while (iVar3 == 0) {
      _Memory_01 = calloc(1,0x120);
      if (_Memory_01 == (int *)0x0) {
LAB_011a4536:
        (**(code **)(*piVar1 + 8))();
        (**(code **)(*piVar1 + 8))();
        goto LAB_011a459d;
      }
      piStack_6c = *(int **)((int)_Memory_00 + 0x118);
      ppiStack_70 = (int **)0x11a43eb;
      iVar2 = _SfList_InsertList_16();
      if (iVar2 < 0) {
        free(_Memory_01);
        goto LAB_011a4536;
      }
      piVar6 = piVar1;
      piVar7 = _Memory_01;
      (**(code **)(*piVar1 + 0x28))();
      ppiStack_70 = ppiVar9;
      piStack_6c = _Memory_01 + 1;
      piVar5 = (int *)&DAT_00000104;
      ppiVar9 = ppiStack_70;
      (*(code *)(*ppiStack_70)[0xb])();
      _Memory_01[0x47] = 0;
      _Memory_01[0x46] = 0;
      _Memory_01[0x42] = (int)piVar7;
      piVar8 = piVar7;
      iVar2 = (**(code **)(*piVar7 + 0x68))();
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*piVar8 + 0xc))(piVar8,1,&stack0xffffffac,0);
        while (iVar2 == 0) {
          _Memory_01[0x43] = _Memory_01[0x43] + 1;
          (**(code **)(*piVar6 + 8))(piVar6);
          iVar2 = (*(code *)piStack_58[3])(&piStack_58,1,&stack0xffffff98,0);
        }
        (*(code *)(*ppiStack_70)[2])(ppiStack_70);
        FUN_011a4620(_Memory_01[0x43],_Memory_01 + 0x46);
        _Memory_01[0x47] = 0;
      }
      iVar2 = (**(code **)(*(int *)_Memory_01[0x42] + 100))((int *)_Memory_01[0x42],&piStack_5c);
      if (-1 < iVar2) {
        iVar3 = (**(code **)(*piVar6 + 0xc))(piVar6,1,&piStack_58,0);
        while (iVar3 == 0) {
          _Memory_01[0x44] = _Memory_01[0x44] + 1;
          (**(code **)(*piVar5 + 8))(piVar5);
          iVar3 = (**(code **)(*piVar7 + 0xc))(piVar7,1,&piStack_6c,0);
        }
        (*(code *)piStack_58[2])(&piStack_58);
      }
      iVar3 = (**(code **)(*piStack_6c + 0xc))(piStack_6c,1,&ppiStack_70,0);
    }
    (*(code *)param_1[2])();
  }
  ppiStack_70 = *(int ***)((int)_Memory_00 + 0x10);
  piStack_6c = (int *)0xffffffff;
  iVar2 = _SfList_InsertList_16();
  if (iVar2 < 0) {
LAB_011a459d:
    if (*(int **)((int)_Memory_00 + 0x118) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)((int)_Memory_00 + 0x118);
    }
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        _Memory = *(void **)(*(int *)(*(int *)((int)_Memory_00 + 0x118) + 8) + iVar4 * 4);
        (**(code **)(**(int **)((int)_Memory + 0x108) + 8))();
        free(_Memory);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    if (*(int *)((int)_Memory_00 + 0x118) != 0) {
      _SfList_Destroy_4();
    }
    (**(code **)(**(int **)((int)_Memory_00 + 0x114) + 8))();
    piStack_6c = (int *)0x11a460d;
    free(_Memory_00);
  }
  return iVar2;
}


