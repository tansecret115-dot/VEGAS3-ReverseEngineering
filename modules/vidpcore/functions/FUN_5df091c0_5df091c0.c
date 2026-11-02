/* Module: vidpcore.dll
   Function: FUN_5df091c0
   Address: 5df091c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5df091c0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_EBX;
  int *unaff_ESI;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  bool bVar7;
  int *apiStack_30 [4];
  undefined4 uStack_14;
  int *piStack_10;
  undefined1 auStack_4 [4];
  
  puVar1 = (undefined4 *)(param_1 + 0x4a0);
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x568) = 0;
  *(int **)(param_1 + 0x468) = param_2;
  *puVar1 = 0;
  apiStack_30[2] = param_2;
  apiStack_30[1] = (int *)0x5df0920d;
  apiStack_30[3] = puVar1;
  (**(code **)(*param_2 + 0x1c))();
  apiStack_30[1] = (int *)auStack_4;
  apiStack_30[0] = &DAT_5df34800;
  iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x468))(*(undefined4 **)(param_1 + 0x468));
  if (iVar2 < 0) {
    if ((undefined4 *)(param_1 + 0x550) != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x550) = 0;
      *(undefined4 *)(param_1 + 0x558) = 0;
      *(undefined4 *)(param_1 + 0x560) = 0;
      *(undefined4 *)(param_1 + 0x554) = 0x3ff00000;
      *(undefined4 *)(param_1 + 0x55c) = 0;
      *(undefined4 *)(param_1 + 0x564) = 0;
    }
  }
  else {
    (**(code **)(*piStack_10 + 0xc))(piStack_10,param_1 + 0x550,0x18);
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  FUN_5df090a0((int *)(param_1 + 0x48c),puVar1);
  *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x494) - *(int *)(param_1 + 0x48c);
  *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x498) - *(int *)(param_1 + 0x490);
  (**(code **)(**(int **)(param_1 + 0x468) + 0x18))
            (*(int **)(param_1 + 0x468),apiStack_30 + 3,apiStack_30 + 2);
  iVar2 = 4;
  bVar7 = true;
  piVar4 = unaff_EBX;
  piVar6 = &DAT_5df17970;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *piVar4 == *piVar6;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  if (!bVar7) {
    iVar2 = 4;
    bVar7 = true;
    piVar4 = unaff_EBX;
    piVar6 = &DAT_5df17980;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *piVar4 == *piVar6;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar2 = 4;
      bVar7 = true;
      piVar4 = unaff_EBX;
      piVar6 = &DAT_5df34890;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = *piVar4 == *piVar6;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar7);
      if (!bVar7) {
        return 0;
      }
      iVar2 = 4;
      bVar7 = true;
      *(undefined4 *)(param_1 + 0x54c) = 0x10;
      ppiVar5 = apiStack_30;
      piVar4 = unaff_EBX;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = *ppiVar5 == (int *)*piVar4;
        ppiVar5 = ppiVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar7);
      if (bVar7) {
        uVar3 = FUN_5df08b90(unaff_EBX,uStack_14);
        return uVar3;
      }
      uVar3 = FUN_5df08f90(unaff_EBX,uStack_14);
      return uVar3;
    }
  }
  iVar2 = 4;
  bVar7 = true;
  *(undefined4 *)(param_1 + 0x54c) = 4;
  ppiVar5 = apiStack_30;
  piVar4 = &DAT_5df17970;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *ppiVar5 == (int *)*piVar4;
    ppiVar5 = ppiVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar7);
  if (!bVar7) {
    iVar2 = 4;
    bVar7 = true;
    ppiVar5 = apiStack_30;
    piVar4 = &DAT_5df17980;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *ppiVar5 == (int *)*piVar4;
      ppiVar5 = ppiVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar7);
    if (!bVar7) {
      uVar3 = FUN_5df08f90(unaff_EBX,uStack_14);
      return uVar3;
    }
  }
  uVar3 = FUN_5df08b90(unaff_EBX,uStack_14);
  return uVar3;
}


