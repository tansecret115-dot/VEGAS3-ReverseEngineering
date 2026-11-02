/* Module: vegas30.exe
   Function: FUN_00445d30
   Address: 00445d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00445d30(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *unaff_EBX;
  int *unaff_ESI;
  int *piVar7;
  
  puVar2 = param_1;
  iVar3 = param_1[1];
  if (iVar3 == 0) {
    return 0;
  }
  switch(*param_1) {
  case 1:
    piVar7 = *(int **)(iVar3 + 0x140);
    if (piVar7 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar7;
    }
    if (param_2 < 0) {
      param_2 = param_1[2];
      if (param_2 < 0) {
        param_2 = 0;
      }
      else if (iVar6 + -1 < param_2) {
        param_2 = iVar6 + -1;
      }
      *(int *)(iVar3 + 0x1fc) = param_2;
    }
    goto LAB_00445f2f;
  case 2:
    piVar7 = *(int **)(iVar3 + 0x78);
    if (piVar7 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar7;
    }
    if (param_2 < 0) {
      param_2 = param_1[2];
      if (param_2 < 0) {
        param_2 = 0;
        *(undefined4 *)(iVar3 + 0x138) = 0;
      }
      else {
        if (iVar6 + -1 < param_2) {
          param_2 = iVar6 + -1;
        }
        *(int *)(iVar3 + 0x138) = param_2;
      }
    }
LAB_00445f2f:
    if ((iVar6 != 0) && (-1 < param_2)) {
      return *(undefined4 *)(piVar7[2] + param_2 * 4);
    }
    break;
  case 3:
    piVar7 = *(int **)(iVar3 + 0x7c);
    if ((piVar7 != (int *)0x0) && (*piVar7 != 0)) {
      if (param_2 < 0) {
        param_2 = param_1[2];
        if (param_2 < 0) {
          return *(undefined4 *)piVar7[2];
        }
        iVar3 = *piVar7 + -1;
        if (iVar3 < param_2) {
          param_2 = iVar3;
        }
      }
      return *(undefined4 *)(piVar7[2] + param_2 * 4);
    }
    break;
  case 4:
    uVar4 = FUN_005ba4b0(iVar3,0);
    piVar7 = (int *)FUN_005ba950(iVar3,uVar4,0);
    if (piVar7 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar7;
    }
    if (param_2 < 0) {
      iVar5 = param_1[2];
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (iVar6 + -1 < iVar5) {
        iVar5 = iVar6 + -1;
      }
      FUN_005ba990(iVar3,iVar5,uVar4,0);
      param_2 = FUN_005ba980(iVar3,uVar4,0);
    }
    if ((iVar6 != 0) && (-1 < param_2)) {
      return *(undefined4 *)(piVar7[2] + param_2 * 4);
    }
    break;
  case 5:
    piVar7 = (int *)(iVar3 + 0xf4);
    if (*(int *)(iVar3 + 0xf4) == 0) {
      if ((*(int *)(iVar3 + 0x50) == 0) || (*(int *)(*(int *)(iVar3 + 0x50) + 0x18) == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_005f13f0(*(undefined4 *)(iVar3 + 4));
      }
      if (iVar3 == 0) {
        return 0;
      }
      if (*piVar7 == 0) {
        FUN_005f6990(piVar7);
      }
    }
    puVar1 = (undefined4 *)*piVar7;
    if (puVar1 != (undefined4 *)0x0) {
      piVar7 = &DAT_00610db0;
      iVar3 = (**(code **)*puVar1)(puVar1,&DAT_00610db0,&param_1);
      if ((-1 < iVar3) && (unaff_EBX != (int *)0x0)) {
        iVar3 = (**(code **)(*unaff_EBX + 0x20))(unaff_EBX,&stack0xfffffff0);
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar7;
        }
        if ((int)unaff_ESI < 0) {
          unaff_ESI = (int *)puVar2[2];
          if ((int)unaff_ESI < 0) {
            unaff_ESI = (int *)0x0;
          }
          else if (iVar3 + -1 < (int)unaff_ESI) {
            unaff_ESI = (int *)(iVar3 + -1);
          }
        }
        if ((iVar3 != 0) && (-1 < (int)unaff_ESI)) {
          return *(undefined4 *)(piVar7[2] + (int)unaff_ESI * 4);
        }
      }
    }
    break;
  case 6:
    piVar7 = *(int **)(iVar3 + 0x138);
    if (piVar7 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar7;
    }
    if (param_2 < 0) {
      param_2 = param_1[2];
      if (param_2 < 0) {
        param_2 = 0;
      }
      else if (iVar6 + -1 < param_2) {
        param_2 = iVar6 + -1;
      }
      *(int *)(iVar3 + 0x13c) = param_2;
    }
    if ((iVar6 != 0) && (-1 < param_2)) {
      return *(undefined4 *)(piVar7[2] + param_2 * 4);
    }
    break;
  case 7:
    piVar7 = *(int **)(iVar3 + 0x200);
    if ((piVar7 != (int *)0x0) && (*piVar7 != 0)) {
      return *(undefined4 *)piVar7[2];
    }
    break;
  case 8:
    piVar7 = *(int **)(iVar3 + 0x204);
    if ((piVar7 != (int *)0x0) && (*piVar7 != 0)) {
      return *(undefined4 *)piVar7[2];
    }
  }
  return 0;
}


