/* Module: vidcap30.exe
   Function: FUN_00580dd0
   Address: 00580dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00580dd0(int param_1,int ***param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *unaff_EBX;
  int *unaff_EBP;
  int *unaff_ESI;
  int ***pppiVar4;
  bool bVar5;
  int ***pppiStack_88;
  int **ppiStack_84;
  int **ppiStack_80;
  uint **ppuStack_7c;
  uint **ppuStack_78;
  int **ppiStack_74;
  int **ppiStack_70;
  int **ppiStack_6c;
  undefined4 *puStack_68;
  uint **ppuStack_64;
  uint *puStack_60;
  int *piStack_5c;
  int **ppiStack_58;
  int *piStack_54;
  uint uStack_50;
  uint uStack_4c;
  int **ppiStack_48;
  int *piStack_44;
  undefined1 *puStack_40;
  int *piStack_2c;
  int *piStack_28;
  undefined1 auStack_24 [4];
  undefined1 local_20 [4];
  undefined4 *puStack_1c;
  int local_18 [4];
  int *apiStack_8 [2];
  
  piStack_44 = local_18;
  puStack_40 = local_20;
  ppiStack_48 = (int **)param_2;
  uStack_4c = 0x580ded;
  iVar1 = (*(code *)(*param_2)[5])();
  bVar5 = iVar1 == 0;
  uStack_4c = (uint)(*(int *)(param_1 + 0x54) != 0);
  uStack_50 = -(uint)bVar5 & (uint)&piStack_2c;
  piStack_5c = *(int **)(*(int *)(param_1 + 0x90) + 0x98);
  piStack_54 = (int *)(-(uint)bVar5 & (uint)auStack_24);
  ppiStack_58 = apiStack_8;
  puStack_60 = (uint *)0x580e30;
  iVar1 = (**(code **)(*piStack_5c + 0x1c))();
  if (iVar1 < 0) {
    return (undefined4 *)0x0;
  }
  puStack_60 = &uStack_4c;
  ppuStack_64 = (uint **)&DAT_005a1c68;
  puStack_68 = puStack_1c;
  ppiStack_6c = (int **)0x580e53;
  iVar1 = (**(code **)*puStack_1c)();
  if (iVar1 < 0) {
    if (bVar5) {
      ppiStack_6c = (int **)&uStack_4c;
      ppiStack_70 = &piStack_44;
      ppiStack_74 = (int **)piStack_28;
      ppuStack_78 = (uint **)0x580eb2;
      (**(code **)(*piStack_28 + 0x18))();
    }
    ppiStack_6c = (int **)param_2;
    ppiStack_70 = (int **)0x580eb8;
    iVar1 = (*(code *)(*param_2)[7])();
    if (iVar1 == 0) {
      ppiStack_70 = (int **)0x1;
      ppiStack_74 = (int **)piStack_2c;
      ppuStack_78 = (uint **)0x580ec8;
      (**(code **)(*piStack_2c + 0x20))();
    }
    ppiStack_70 = (int **)param_2;
    ppiStack_74 = (int **)0x580ece;
    iVar1 = (*(code *)(*param_2)[0xf])();
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x54) != 0)) {
      ppiStack_74 = (int **)0x1;
      ppuStack_7c = (uint **)0x580ee5;
      (**(code **)(*unaff_EBX + 0x40))();
    }
    ppiStack_74 = (int **)param_2;
    ppuStack_78 = (uint **)0x580eeb;
    iVar1 = (*(code *)(*param_2)[9])();
    if (iVar1 == 0) {
      ppuStack_78 = (uint **)0x1;
      ppiStack_80 = (int **)0x580efb;
      (**(code **)(*unaff_EBP + 0x28))();
    }
    ppuStack_78 = &puStack_60;
    ppuStack_7c = (uint **)param_2;
    ppiStack_80 = (int **)0x580f06;
    iVar1 = (*(code *)(*param_2)[0xd])();
    if (iVar1 == 0) {
      ppuStack_7c = ppuStack_64;
      ppiStack_84 = (int **)0x580f19;
      (**(code **)(*unaff_ESI + 0x38))();
      ppuStack_7c = ppuStack_64;
      ppiStack_80 = (int **)0x580f23;
      FUN_0057b1c0();
    }
  }
  else {
    ppiStack_6c = (int **)(*(int *)(param_1 + 0x8c) + 0xa8);
    ppiStack_70 = (int **)0x28;
    ppiStack_74 = ppiStack_58;
    ppuStack_78 = (uint **)0x580e70;
    iVar1 = (*(code *)(*ppiStack_58)[0x14])();
    ppuStack_78 = ppuStack_64;
    ppuStack_7c = (uint **)0x580e7c;
    (*(code *)(*ppuStack_64)[2])();
    if (iVar1 < 0) {
      ppiStack_80 = (int **)0x580e8e;
      (**(code **)(*unaff_ESI + 8))();
      return (undefined4 *)0x0;
    }
  }
  ppuStack_7c = (uint **)&uStack_4c;
  ppiStack_80 = &piStack_44;
  *(undefined4 *)(param_1 + 0x54) = 0;
  ppiStack_84 = (int **)param_2;
  pppiStack_88 = (int ***)0x580f3a;
  iVar1 = (*(code *)(*param_2)[0x11])();
  if (iVar1 == 0) {
    pppiStack_88 = &ppiStack_58;
    (**(code **)(*piStack_44 + 0x48))(piStack_44,&uStack_50);
  }
  pppiStack_88 = param_2;
  uVar2 = (*(code *)(*param_2)[0xb])();
  pppiVar4 = (int ***)ppiStack_48;
  (*(code *)(*ppiStack_48)[0xc])(ppiStack_48,uVar2);
  (*(code *)(*param_2)[4])();
  (**(code **)(*piStack_54 + 0x10))(piStack_54);
  (*(code *)(*param_2)[3])(param_2,&ppiStack_84);
  (**(code **)(*puStack_60 + 0xc))(puStack_60,&pppiStack_88);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pppiVar4 = *param_2;
    param_2 = param_2 + 1;
    pppiVar4 = pppiVar4 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)pppiVar4 = *(undefined1 *)param_2;
    param_2 = (int ***)((int)param_2 + 1);
    pppiVar4 = (int ***)((int)pppiVar4 + 1);
  }
  return puStack_68;
}


