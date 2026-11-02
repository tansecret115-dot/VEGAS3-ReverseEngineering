/* Module: vidcap30.exe
   Function: FUN_0042c410
   Address: 0042c410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042c410(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piStack_120;
  undefined4 uStack_11c;
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_103;
  
  iVar2 = 0;
  if (*param_1 == 8) {
    if (param_2 == param_1[0x1f1]) {
      if (param_1[0x1f0] != 0) {
        uStack_11c = (int *)0x0;
        piStack_120 = (int *)0x0;
        iVar2 = FUN_00428e50(param_1);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      uStack_11c = param_1 + 10;
      piStack_120 = param_1 + 0xd8;
      FUN_0042c1c0();
      if (param_1[0x1f0] != 0) {
        uStack_11c = (int *)0x1;
        piStack_120 = (int *)0x1;
        iVar2 = FUN_00428e50(param_1);
        return iVar2;
      }
    }
    else if (param_2 == param_1[0x1f2]) {
      uStack_11c = (int *)0x0;
      piStack_120 = (int *)0x0;
      iVar2 = FUN_00428e50(param_1);
      if (-1 < iVar2) {
        local_104 = 0;
        puVar3 = &local_103;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        *(undefined2 *)puVar3 = 0;
        uStack_11c = param_1 + 10;
        *(undefined1 *)((int)puVar3 + 2) = 0;
        piStack_120 = (int *)0x58ab48;
        SfPrintF(&local_104);
        piStack_120 = param_1 + 0xec;
LAB_0042c4e0:
        uStack_11c = (int *)&local_104;
        FUN_0042c1c0();
        uStack_11c = (int *)0x1;
        piStack_120 = (int *)0x1;
        iVar2 = FUN_00428e50(param_1);
        return iVar2;
      }
    }
    else if (param_2 == param_1[0x1f6]) {
      uStack_11c = &local_108;
      piStack_120 = (int *)&DAT_005a1968;
      local_108 = 0;
      iVar2 = (**(code **)(*(int *)param_1[0xed] + 0x18))
                        ((int *)param_1[0xed],&DAT_005a2438,&DAT_005a35a8,param_1[0xd8]);
      if ((iVar2 < 0) &&
         (iVar2 = (**(code **)(*(int *)param_1[0xed] + 0x18))
                            ((int *)param_1[0xed],&DAT_005a2438,&DAT_005a35f8,param_1[0xd8],
                             &DAT_005a1968,&piStack_120), iVar2 < 0)) {
        return iVar2;
      }
      uStack_11c = (int *)((uint)uStack_11c & 0xffffff00);
      puVar3 = (undefined4 *)((int)&uStack_11c + 1);
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *(undefined2 *)puVar3 = 0;
      *(undefined1 *)((int)puVar3 + 2) = 0;
      SfPrintF(&uStack_11c,"%s TV Tuner",param_1 + 10);
      FUN_0042c1c0(&piStack_120,&uStack_11c);
      if (piStack_120 != (int *)0x0) {
        (**(code **)(*piStack_120 + 8))(piStack_120);
        return iVar2;
      }
    }
    else if (param_2 == param_1[0x1f9]) {
      uStack_11c = &local_108;
      piStack_120 = (int *)&DAT_005a1948;
      local_108 = 0;
      iVar2 = (**(code **)(*(int *)param_1[0xed] + 0x18))
                        ((int *)param_1[0xed],&DAT_005a2438,&DAT_005a35a8,param_1[0xd8]);
      if ((iVar2 < 0) &&
         (iVar2 = (**(code **)(*(int *)param_1[0xed] + 0x18))
                            ((int *)param_1[0xed],&DAT_005a2438,&DAT_005a35f8,param_1[0xd8],
                             &DAT_005a1948,&piStack_120), iVar2 < 0)) {
        return iVar2;
      }
      uStack_11c = (int *)((uint)uStack_11c & 0xffffff00);
      puVar3 = (undefined4 *)((int)&uStack_11c + 1);
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *(undefined2 *)puVar3 = 0;
      *(undefined1 *)((int)puVar3 + 2) = 0;
      SfPrintF(&uStack_11c,"%s TV Audio",param_1 + 10);
      FUN_0042c1c0(&piStack_120,&uStack_11c);
      if (piStack_120 != (int *)0x0) {
        (**(code **)(*piStack_120 + 8))(piStack_120);
        return iVar2;
      }
    }
    else if ((param_2 < (uint)param_1[0x1f7]) || ((uint)param_1[0x1f8] < param_2)) {
      if (param_2 == param_1[0x1fb]) {
        uStack_11c = param_1 + 0x102;
        piStack_120 = param_1 + 0x101;
        FUN_0042c1c0();
        return 0;
      }
      if (param_2 == param_1[0x1fc]) {
        uStack_11c = (int *)0x0;
        piStack_120 = (int *)0x0;
        iVar2 = FUN_00428e50(param_1);
        if (-1 < iVar2) {
          local_104 = 0;
          puVar3 = &local_103;
          for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
          }
          uStack_11c = param_1 + 0x102;
          *(undefined2 *)puVar3 = 0;
          piStack_120 = (int *)0x58ab48;
          *(undefined1 *)((int)puVar3 + 2) = 0;
          SfPrintF(&local_104);
          piStack_120 = param_1 + 0x144;
          goto LAB_0042c4e0;
        }
      }
      else if (param_2 == param_1[0x1fa]) {
        uStack_11c = param_1;
        piStack_120 = (int *)0x42c75d;
        FUN_0042c2c0();
      }
    }
    else if ((param_1[0x210] != 0) && (param_1[0x211] != 0)) {
      uStack_11c = (int *)(param_2 - param_1[0x1f7]);
      piStack_120 = (int *)0x42c6c2;
      iVar2 = FUN_0042e060();
      return iVar2;
    }
  }
  return iVar2;
}


