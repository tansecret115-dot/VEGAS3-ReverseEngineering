/* Module: vegas30.exe
   Function: FUN_005facc0
   Address: 005facc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005facc0(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined **ppuStack_78;
  int *piStack_74;
  int *piStack_70;
  IEnumDriverModel ***pppIStack_6c;
  IEnumDriverModel **ppIStack_68;
  int *piStack_64;
  IEnumDriverModel **ppIStack_60;
  int *piStack_5c;
  undefined *puStack_58;
  int **ppiStack_54;
  IEnumDriverModel **ppIStack_50;
  IEnumDriverModel **ppIStack_4c;
  int *piStack_40;
  int *piStack_3c;
  IEnumDriverModel *pIStack_38;
  IEnumDriverModel **ppIStack_34;
  int *piStack_30;
  int *piStack_2c;
  int local_1c;
  int *local_18;
  undefined4 local_14 [3];
  IEnumDriverModel *local_8 [2];
  
  uVar3 = 1;
  local_18 = (int *)0x0;
  local_14[0] = 0;
  piStack_2c = (int *)0x5facde;
  Mixer_EnumDriverModels(local_8);
  if (local_8[0] == (IEnumDriverModel *)0x0) {
    return 1;
  }
  piStack_30 = &local_1c;
  piStack_2c = (int *)0x0;
  ppIStack_34 = (IEnumDriverModel **)0x1;
  pIStack_38 = local_8[0];
  piStack_3c = (int *)0x5facf8;
  iVar1 = (**(code **)(*(int *)local_8[0] + 0xc))();
  if (iVar1 == 0) {
    while( true ) {
      piStack_3c = local_14;
      piStack_40 = piStack_2c;
      (**(code **)(*piStack_2c + 0x14))();
      if (local_1c == DAT_0064a58c) break;
LAB_005fad53:
      (**(code **)(*ppIStack_34 + 8))();
      ppIStack_4c = &pIStack_38;
      ppIStack_50 = (IEnumDriverModel **)0x1;
      puStack_58 = (undefined *)0x5fad6b;
      iVar1 = (**(code **)(*unaff_ESI + 0xc))();
      if (iVar1 != 0) {
        piStack_3c = local_18;
        piStack_40 = (int *)0x5fad79;
        (**(code **)(*local_18 + 8))();
        return 1;
      }
    }
    ppIStack_4c = ppIStack_34;
    ppIStack_50 = (IEnumDriverModel **)0x5fad37;
    (**(code **)(*ppIStack_34 + 0x10))();
    if (DAT_0064a590 != '\0') {
      ppIStack_4c = (IEnumDriverModel **)0x5fad4b;
      iVar1 = lstrcmpA(&DAT_0064a590,&DAT_0065e414);
      if (iVar1 != 0) goto LAB_005fad53;
    }
    ppIStack_4c = (IEnumDriverModel **)0x1;
    ppIStack_50 = ppIStack_34;
    ppiStack_54 = (int **)0x5fad9a;
    piStack_5c = DAT_0064868c;
    (**(code **)(*ppIStack_34 + 0x1c))();
    ppiStack_54 = &piStack_40;
    piStack_40 = (int *)0x0;
    piStack_3c = (int *)0x0;
    puStack_58 = &DAT_0060ea28;
    ppIStack_60 = (IEnumDriverModel **)0x5fadb6;
    (**(code **)(*piStack_5c + 0xc))();
    if (ppIStack_4c != (IEnumDriverModel **)0x0) {
      ppIStack_60 = ppIStack_4c;
      piStack_64 = (int *)0x5fadc4;
      (**(code **)(*ppIStack_4c + 0x20))();
    }
    ppIStack_60 = (IEnumDriverModel **)&stack0xffffffb8;
    piStack_64 = (int *)&DAT_0060ea38;
    ppIStack_68 = ppIStack_50;
    pppIStack_6c = (IEnumDriverModel ***)0x5fadd8;
    (**(code **)(*ppIStack_50 + 0xc))();
    if (ppiStack_54 != (int **)0x0) {
      pppIStack_6c = (IEnumDriverModel ***)ppiStack_54;
      piStack_70 = (int *)0x5fade6;
      (*(code *)(*ppiStack_54)[5])();
    }
    pppIStack_6c = &ppIStack_4c;
    piStack_70 = piStack_5c;
    piStack_74 = (int *)0x5fadf5;
    (**(code **)(*piStack_5c + 0x50))();
    if (ppiStack_54 != (int **)0x0) {
      ppuStack_78 = &puStack_58;
      piStack_74 = (int *)0x0;
      DAT_0064a924 = (int *)0x0;
      iVar1 = (*(code *)(*ppiStack_54)[3])(ppiStack_54,1);
      while (iVar1 == 0) {
        (**(code **)(*ppIStack_68 + 0x1c))(ppIStack_68,&DAT_0065e2a8,0x104);
        iVar1 = lstrcmpA(&DAT_0064a928,&DAT_0065e2a8);
        if (iVar1 == 0) {
          (**(code **)(*piStack_74 + 8))(piStack_74);
          goto LAB_005fae70;
        }
        DAT_0064a924 = (int *)((int)DAT_0064a924 + 1);
        (**(code **)(*piStack_74 + 8))(piStack_74);
        iVar1 = (**(code **)(*piStack_74 + 0xc))(piStack_74,1,&ppuStack_78,0);
      }
      DAT_0064a924 = (int *)0x0;
LAB_005fae70:
      (**(code **)(*piStack_64 + 8))(piStack_64);
    }
    piStack_74 = (int *)0x104;
    ppuStack_78 = (undefined **)&DAT_0064a928;
    piVar5 = DAT_0064a924;
    (**(code **)(*piStack_64 + 0x2c))(piStack_64,DAT_0064a924,0);
    piVar6 = DAT_0064a924;
    _DAT_0065e3ac = DAT_0064a924;
    if ((int *)0x1 < DAT_0064868c) {
      puVar4 = &DAT_0065e3b0;
      piVar2 = DAT_0064868c;
      while (piVar2 = (int *)((int)piVar2 + -1), piVar2 != (int *)0x0) {
        *puVar4 = 0x80000000;
        puVar4 = puVar4 + 1;
      }
    }
    (**(code **)(*ppuStack_78 + 0x28))(ppuStack_78,piVar6);
    piVar7 = (int *)&DAT_0065e3ac;
    piVar2 = (int *)0x1;
    piVar6 = DAT_0064868c;
    uVar3 = (**(code **)(*piVar5 + 0x20))();
    (**(code **)(*piVar6 + 0x10))(piVar6,&DAT_0064a590,0x104);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x24))(piVar2);
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    piVar6 = (int *)0x0;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x18))(piVar7);
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  piStack_3c = local_18;
  piStack_40 = (int *)0x5faf40;
  (**(code **)(*local_18 + 8))();
  return uVar3;
}


