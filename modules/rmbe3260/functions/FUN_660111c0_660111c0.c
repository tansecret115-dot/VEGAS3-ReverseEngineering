/* Module: rmbe3260.dll
   Function: FUN_660111c0
   Address: 660111c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660111c0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  
  piVar2 = param_1;
  uVar4 = 0;
  iVar5 = 0;
  if ((param_1[0x13] == 0) || (param_1[0x14] == 0)) {
    return -0x7ffbfff9;
  }
  piVar1 = (int *)param_1[0x1f];
  if (piVar1 != (int *)0x0) {
    param_1 = (int *)0x0;
    iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,s_totalduration_6606cc90,&param_1);
    if (-1 < iVar3) {
      piVar2[0x22] = (int)param_1;
    }
  }
  piVar2[0x2a] = 0;
  if (piVar2[0x29] == 0) {
    iVar5 = FUN_660130d0(piVar2 + 0x29);
  }
  if (-1 < iVar5) {
    iVar5 = (**(code **)(*piVar2 + 0x58))(piVar2);
    if (-1 < iVar5) {
      iVar5 = (**(code **)(*piVar2 + 0x7c))(piVar2);
      if ((-1 < iVar5) && (param_1 = (int *)piVar2[0x16], (short)param_1 != 0)) {
        do {
          iVar5 = (**(code **)(*piVar2 + 0x78))
                            (piVar2,*(undefined4 *)(piVar2[0x15] + (uint)uVar4 * 4));
          if (iVar5 < 0) goto LAB_66011270;
          uVar4 = uVar4 + 1;
        } while (uVar4 < (ushort)param_1);
      }
    }
  }
  if (iVar5 < 0) {
LAB_66011270:
    (**(code **)(*piVar2 + 0x3c))(piVar2);
  }
  return iVar5;
}


