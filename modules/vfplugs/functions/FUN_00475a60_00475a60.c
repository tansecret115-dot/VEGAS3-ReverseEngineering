/* Module: vfplugs.dll
   Function: FUN_00475a60
   Address: 00475a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00475a60(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EBX;
  int *unaff_ESI;
  int *piVar3;
  int **ppiVar4;
  int *piVar5;
  bool bVar6;
  int *apiStack_30 [4];
  undefined4 *puStack_14;
  int *piStack_10;
  undefined1 auStack_4 [4];
  
  piVar3 = (int *)((int)this + 0x4a0);
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x548) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x568) = 0;
  *(int **)((int)this + 0x468) = param_1;
  *piVar3 = 0;
  apiStack_30[2] = param_1;
  apiStack_30[1] = (int *)0x475aad;
  apiStack_30[3] = piVar3;
  (**(code **)(*param_1 + 0x1c))();
  apiStack_30[1] = (int *)auStack_4;
  apiStack_30[0] = &DAT_00490c38;
  iVar1 = (**(code **)**(undefined4 **)((int)this + 0x468))(*(undefined4 **)((int)this + 0x468));
  if (iVar1 < 0) {
    if ((undefined4 *)((int)this + 0x550) != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0x550) = 0;
      *(undefined4 *)((int)this + 0x558) = 0;
      *(undefined4 *)((int)this + 0x560) = 0;
      *(undefined4 *)((int)this + 0x554) = 0x3ff00000;
      *(undefined4 *)((int)this + 0x55c) = 0;
      *(undefined4 *)((int)this + 0x564) = 0;
    }
  }
  else {
    (**(code **)(*piStack_10 + 0xc))(piStack_10,(int)this + 0x550,0x18);
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  FUN_00475940((int *)((int)this + 0x48c),piVar3);
  *(int *)((int)this + 0x4e8) = *(int *)((int)this + 0x494) - *(int *)((int)this + 0x48c);
  *(int *)((int)this + 0x4ec) = *(int *)((int)this + 0x498) - *(int *)((int)this + 0x490);
  (**(code **)(**(int **)((int)this + 0x468) + 0x18))
            (*(int **)((int)this + 0x468),apiStack_30 + 3,apiStack_30 + 2);
  iVar1 = 4;
  bVar6 = true;
  piVar3 = unaff_EBX;
  piVar5 = &DAT_00486970;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *piVar3 == *piVar5;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar1 = 4;
    bVar6 = true;
    piVar3 = unaff_EBX;
    piVar5 = &DAT_00486980;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *piVar3 == *piVar5;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      iVar1 = 4;
      bVar6 = true;
      piVar3 = unaff_EBX;
      piVar5 = &DAT_00490cc8;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *piVar3 == *piVar5;
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if (!bVar6) {
        return 0;
      }
      iVar1 = 4;
      bVar6 = true;
      *(undefined4 *)((int)this + 0x54c) = 0x10;
      ppiVar4 = apiStack_30;
      piVar3 = unaff_EBX;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *ppiVar4 == (int *)*piVar3;
        ppiVar4 = ppiVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (bVar6);
      if (bVar6) {
        uVar2 = FUN_00475430(this,unaff_EBX,puStack_14);
        return uVar2;
      }
      uVar2 = FUN_00475830(this,unaff_EBX);
      return uVar2;
    }
  }
  iVar1 = 4;
  bVar6 = true;
  *(undefined4 *)((int)this + 0x54c) = 4;
  ppiVar4 = apiStack_30;
  piVar3 = &DAT_00486970;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar6 = *ppiVar4 == (int *)*piVar3;
    ppiVar4 = ppiVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar1 = 4;
    bVar6 = true;
    ppiVar4 = apiStack_30;
    piVar3 = &DAT_00486980;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *ppiVar4 == (int *)*piVar3;
      ppiVar4 = ppiVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar6);
    if (!bVar6) {
      uVar2 = FUN_00475830(this,unaff_EBX);
      return uVar2;
    }
  }
  uVar2 = FUN_00475430(this,unaff_EBX,puStack_14);
  return uVar2;
}


