/* Module: mpegin.dll
   Function: FUN_1000b0f0
   Address: 1000b0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000b0f0(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  byte bVar3;
  int *piVar4;
  uint3 extraout_var;
  uint uVar5;
  int iVar6;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar7;
  uint uVar8;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  longlong lVar9;
  
  piVar1 = param_1;
  if (param_1[0x10] != 0) {
    return;
  }
LAB_1000b103:
  piVar4 = (int *)FUN_1000b6c0(piVar1);
  param_1 = piVar4;
  if (((uint)piVar4 & 0xffffff00) != 0x100) {
    while (piVar4 = param_1, piVar1[0x10] == 0) {
      if ((piVar1[0x13] < piVar1[9]) ||
         ((piVar1[0x13] <= piVar1[9] && ((uint)piVar1[0x12] <= (uint)piVar1[8])))) break;
      uVar2 = FUN_10005780(piVar1);
      piVar4 = (int *)(CONCAT31(extraout_var,uVar2) | (int)param_1 << 8);
      uVar5 = (uint)param_1 & 0xffffff;
      param_1 = piVar4;
      if ((extraout_var | uVar5) == 1) break;
    }
  }
  do {
    param_1 = piVar4;
    if ((piVar1[0x13] <= piVar1[9]) &&
       ((piVar1[0x13] < piVar1[9] || ((uint)piVar1[0x12] <= (uint)piVar1[8])))) {
      piVar1[0x11] = 1;
    }
    if (piVar1[0x10] != 0) {
      return;
    }
    if (piVar1[0x11] != 0) {
      return;
    }
    switch(param_1) {
    case (int *)0x1ba:
      piVar4 = (int *)FUN_1000b6c0(piVar1);
      if (piVar1[0xb] == 1) {
        if (((uint)piVar4 & 0xf1000100) != 0x21000100) break;
      }
      else if (((uint)piVar4 & 0xc4000400) != 0x44000400) break;
      piVar1[0x26] = piVar1[8] - 8;
      piVar1[0x27] = piVar1[9] - (uint)((uint)piVar1[8] < 8);
      FUN_1000b6c0(piVar1);
      goto switchD_1000b1a3_caseD_1bb;
    default:
      goto switchD_1000b1a3_caseD_1bb;
    case (int *)0x1f3:
    case (int *)0x1f4:
    case (int *)0x1f5:
    case (int *)0x1f6:
    case (int *)0x1f7:
    case (int *)0x1f9:
    case (int *)0x1fa:
    case (int *)0x1fb:
    case (int *)0x1fc:
    case (int *)0x1fd:
    case (int *)0x1fe:
      if (piVar1[0xb] != 2) goto switchD_1000b1a3_caseD_1bb;
    case (int *)0x1bd:
    case (int *)0x1c0:
    case (int *)0x1c1:
    case (int *)0x1c2:
    case (int *)0x1c3:
    case (int *)0x1c4:
    case (int *)0x1c5:
    case (int *)0x1c6:
    case (int *)0x1c7:
    case (int *)0x1c8:
    case (int *)0x1c9:
    case (int *)0x1ca:
    case (int *)0x1cb:
    case (int *)0x1cc:
    case (int *)0x1cd:
    case (int *)0x1ce:
    case (int *)0x1cf:
    case (int *)0x1d0:
    case (int *)0x1d1:
    case (int *)0x1d2:
    case (int *)0x1d3:
    case (int *)0x1d4:
    case (int *)0x1d5:
    case (int *)0x1d6:
    case (int *)0x1d7:
    case (int *)0x1d8:
    case (int *)0x1d9:
    case (int *)0x1da:
    case (int *)0x1db:
    case (int *)0x1dc:
    case (int *)0x1dd:
    case (int *)0x1de:
    case (int *)0x1df:
    case (int *)0x1e0:
    case (int *)0x1e1:
    case (int *)0x1e2:
    case (int *)0x1e3:
    case (int *)0x1e4:
    case (int *)0x1e5:
    case (int *)0x1e6:
    case (int *)0x1e7:
    case (int *)0x1e8:
    case (int *)0x1e9:
    case (int *)0x1ea:
    case (int *)0x1eb:
    case (int *)0x1ec:
    case (int *)0x1ed:
    case (int *)0x1ee:
    case (int *)0x1ef:
      uVar5 = FUN_100058b0(piVar1);
      iVar6 = piVar1[9] + (uint)CARRY4(uVar5,piVar1[8]);
      if ((piVar1[0x13] < iVar6) ||
         ((piVar1[0x13] <= iVar6 && ((uint)piVar1[0x12] < uVar5 + piVar1[8])))) {
        piVar1[0x11] = 1;
        return;
      }
      if (uVar5 != 0) {
        uVar5 = uVar5 - 1;
      }
      bVar3 = FUN_10005780(piVar1);
      uVar7 = CONCAT31(extraout_var_00,bVar3);
      iVar6 = 1;
      piVar4 = (int *)(((int)param_1 << 0x10 | uVar5) << 8 | uVar7);
      if (piVar1[0xb] == 1) {
        for (; (uVar7 == 0xff && (iVar6 < 0x10)); iVar6 = iVar6 + 1) {
          uVar2 = FUN_10005780(piVar1);
          uVar7 = CONCAT31(extraout_var_01,uVar2);
          piVar4 = (int *)((int)piVar4 << 8 | uVar7);
          uVar5 = uVar5 - 1;
        }
        if ((((((byte)uVar7 & 0xc0) == 0x40) || ((uVar7 & 0xf0) == 0x20)) ||
            ((uVar7 & 0xf0) == 0x30)) || (uVar7 == 0xf)) goto LAB_1000b2cc;
      }
      else if ((bVar3 & 0xf0) == 0x80) goto LAB_1000b2cc;
    }
  } while( true );
LAB_1000b2cc:
  iVar6 = piVar1[1];
  if (param_1 == (int *)piVar1[0xc]) {
    piVar1[3] = iVar6 + uVar5;
    if (piVar1[0xb] != 2) {
      if (uVar7 == 0xff) {
        uVar2 = FUN_10005780(piVar1);
        uVar7 = CONCAT31(extraout_var_04,uVar2);
        while (uVar7 == 0xff) {
          uVar2 = FUN_10005780(piVar1);
          uVar7 = CONCAT31(extraout_var_05,uVar2);
        }
      }
      if (0x3f < uVar7) {
        if (0x7f < uVar7) {
          piVar1[0x10] = 1;
          return;
        }
        FUN_10005780(piVar1);
        uVar2 = FUN_10005780(piVar1);
        uVar7 = CONCAT31(extraout_var_06,uVar2);
      }
      if (uVar7 < 0x30) {
        if (uVar7 < 0x20) {
          if (uVar7 != 0xf) {
            piVar1[0x10] = 1;
            return;
          }
        }
        else {
          if ((uVar7 & 8) == 0) {
            piVar1[0x14] = 0;
            piVar1[0x15] = 0;
          }
          else {
            piVar1[0x14] = 0;
            piVar1[0x15] = 300;
          }
          uVar5 = FUN_100058b0(piVar1);
          uVar8 = FUN_100058b0(piVar1);
          lVar9 = __allmul((uVar5 & 0xfffe | (uVar7 & 0xfffffffe) << 0xf) << 0xe | (int)uVar8 >> 1,0
                           ,300,0);
          uVar5 = piVar1[0x14];
          piVar1[0x14] = uVar5 + (uint)lVar9;
          piVar1[0x15] = piVar1[0x15] + (int)((ulonglong)lVar9 >> 0x20) +
                         (uint)CARRY4(uVar5,(uint)lVar9);
        }
      }
      else {
        if (0x3f < uVar7) {
          piVar1[0x10] = 1;
          return;
        }
        if ((uVar7 & 8) == 0) {
          piVar1[0x14] = 0;
          piVar1[0x15] = 0;
        }
        else {
          piVar1[0x14] = 0;
          piVar1[0x15] = 300;
        }
        uVar5 = FUN_100058b0(piVar1);
        uVar8 = FUN_100058b0(piVar1);
        lVar9 = __allmul((uVar5 & 0xfffe | (uVar7 & 0xfffffffe) << 0xf) << 0xe | (int)uVar8 >> 1,0,
                         300,0);
        uVar5 = piVar1[0x14];
        piVar1[0x14] = uVar5 + (uint)lVar9;
        piVar1[0x15] = piVar1[0x15] + (int)((ulonglong)lVar9 >> 0x20) +
                       (uint)CARRY4(uVar5,(uint)lVar9);
        uVar5 = *(int *)*piVar1 + 0x1fffff;
        if (uVar5 < piVar1[1] + 5U) {
          piVar1[1] = uVar5;
          uVar7 = piVar1[8];
          uVar5 = (*(int *)*piVar1 - uVar5) + 0x1fffff;
          piVar1[8] = uVar7 + uVar5;
          iVar6 = piVar1[9] + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar7,uVar5);
        }
        else {
          uVar5 = piVar1[8];
          piVar1[1] = piVar1[1] + 5U;
          piVar1[8] = uVar5 + 5;
          iVar6 = piVar1[9] + (uint)(0xfffffffa < uVar5);
        }
LAB_1000b3f1:
        piVar1[9] = iVar6;
      }
      if (piVar1[0xd] != 0) {
        uVar2 = FUN_10005780(piVar1);
        if (piVar1[0xd] == CONCAT31(extraout_var_03,uVar2)) {
          *(undefined1 *)(piVar1 + 0x30) = uVar2;
          switch(CONCAT31(extraout_var_03,uVar2)) {
          case 0x80:
          case 0x81:
          case 0x82:
          case 0x83:
          case 0x84:
          case 0x85:
          case 0x86:
          case 0x87:
          case 0x88:
          case 0x89:
          case 0x8a:
          case 0x8b:
          case 0x8c:
          case 0x8d:
          case 0x8e:
          case 0x8f:
          case 0x90:
          case 0x91:
          case 0x92:
          case 0x93:
          case 0x94:
          case 0x95:
          case 0x96:
          case 0x97:
            uVar5 = 1;
            do {
              uVar2 = FUN_10005780(piVar1);
              *(undefined1 *)((int)piVar1 + uVar5 + 0xc0) = uVar2;
              uVar5 = uVar5 + 1;
            } while (uVar5 < 4);
            return;
          case 0xa0:
          case 0xa1:
          case 0xa2:
          case 0xa3:
          case 0xa4:
          case 0xa5:
          case 0xa6:
          case 0xa7:
            uVar5 = 1;
            piVar1[0x35] = 1;
            do {
              uVar2 = FUN_10005780(piVar1);
              *(undefined1 *)((int)piVar1 + uVar5 + 0xc0) = uVar2;
              uVar5 = uVar5 + 1;
            } while (uVar5 < 7);
            piVar1[0x32] = *(byte *)((int)piVar1 + 0xc1) - 1;
            piVar1[0x33] = (uint)CONCAT11(*(undefined1 *)((int)piVar1 + 0xc2),
                                          *(undefined1 *)((int)piVar1 + 0xc3));
          }
        }
      }
      return;
    }
    bVar3 = FUN_10005780(piVar1);
    uVar2 = FUN_10005780(piVar1);
    uVar5 = CONCAT31(extraout_var_02,uVar2);
    if ((bVar3 & 0x80) != 0) {
      bVar3 = FUN_10005780(piVar1);
      if ((bVar3 & 8) == 0) {
        piVar1[0x14] = 0;
        piVar1[0x15] = 0;
      }
      else {
        piVar1[0x14] = 0;
        piVar1[0x15] = 300;
      }
      uVar7 = FUN_100058b0(piVar1);
      uVar8 = FUN_100058b0(piVar1);
      lVar9 = __allmul((uVar7 & 0xfffe | (bVar3 & 0xfffffffe) << 0xf) << 0xe | (int)uVar8 >> 1,0,300
                       ,0);
      uVar7 = piVar1[0x14];
      piVar1[0x14] = uVar7 + (uint)lVar9;
      uVar5 = uVar5 - 5;
      piVar1[0x15] = piVar1[0x15] + (int)((ulonglong)lVar9 >> 0x20) +
                     (uint)CARRY4(uVar7,(uint)lVar9);
    }
    iVar6 = piVar1[1];
    if (*(int *)*piVar1 + 0x1fffffU < iVar6 + uVar5) {
      uVar5 = (*(int *)*piVar1 - iVar6) + 0x1fffff;
    }
    piVar1[1] = iVar6 + uVar5;
    uVar7 = piVar1[8];
    piVar1[8] = uVar7 + uVar5;
    iVar6 = piVar1[9] + (uint)CARRY4(uVar7,uVar5);
    goto LAB_1000b3f1;
  }
  if (*(int *)*piVar1 + 0x1fffffU < iVar6 + uVar5) {
    uVar5 = (*(int *)*piVar1 - iVar6) + 0x1fffff;
  }
  piVar1[1] = iVar6 + uVar5;
  uVar7 = piVar1[8];
  piVar1[8] = uVar7 + uVar5;
  piVar1[9] = piVar1[9] + (uint)CARRY4(uVar7,uVar5);
switchD_1000b1a3_caseD_1bb:
  if (piVar1[0x10] != 0) {
    return;
  }
  goto LAB_1000b103;
}


