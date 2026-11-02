/* Module: stl2plg.dll
   Function: FUN_0044ce10
   Address: 0044ce10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044ce10(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)param_1 + 0x1a5);
  *(undefined4 *)(*param_1 + 0x14) = 0x75;
  *(int *)(*param_1 + 0x18) = iVar4;
  *(int *)(*param_1 + 0x1c) = param_2;
  (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  do {
    if (iVar4 < 0xc0) {
LAB_0044ce45:
      iVar3 = 2;
    }
    else if ((((iVar4 < 0xd0) || (0xd7 < iVar4)) || (iVar4 == (param_2 + 1U & 7) + 0xd0)) ||
            (iVar4 == (param_2 + 2U & 7) + 0xd0)) {
      iVar3 = 3;
    }
    else {
      if ((iVar4 == (param_2 - 1U & 7) + 0xd0) || (iVar4 == (param_2 - 2U & 7) + 0xd0))
      goto LAB_0044ce45;
      iVar3 = 1;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x60;
    *(int *)(*param_1 + 0x18) = iVar4;
    *(int *)(*param_1 + 0x1c) = iVar3;
    uVar1 = (**(code **)(*param_1 + 4))(param_1,4);
    if (iVar3 == 1) {
      *(undefined4 *)((int)param_1 + 0x1a5) = 0;
      goto LAB_0044cef8;
    }
    if (iVar3 == 2) {
      uVar2 = FUN_0044cf10(param_1);
      if ((char)uVar2 == '\0') {
        return uVar2 & 0xffffff00;
      }
      iVar4 = *(int *)((int)param_1 + 0x1a5);
    }
    else if (iVar3 == 3) {
LAB_0044cef8:
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  } while( true );
}


