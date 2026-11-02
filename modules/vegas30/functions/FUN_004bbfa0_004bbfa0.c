/* Module: vegas30.exe
   Function: FUN_004bbfa0
   Address: 004bbfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004bbfa0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,
                int param_7,int param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  HGLOBAL pvVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 local_40;
  
  if (DAT_00647630 != param_1) {
    return 0;
  }
  piVar12 = *(int **)(param_2 + 0x3c);
  uVar5 = *(uint *)(param_2 + 0x20) >> 0x10 & 0xf;
  if (piVar12 == (int *)0x0) {
    piVar12 = *(int **)(param_1 + 0xc38);
  }
  if (piVar12 == (int *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *piVar12;
  }
  param_2 = 0;
  if (uVar5 == 10) {
    local_40 = 5;
    iVar6 = 0x3f - (uint)(param_7 != 0);
  }
  else if (uVar5 == 0xb) {
    local_40 = 7;
    iVar6 = 0x45 - (uint)(param_7 != 0);
  }
  else if (uVar5 == 0xc) {
    local_40 = 9;
    iVar6 = 0x24d - (uint)(param_7 != 0);
  }
  else {
    local_40 = 3;
    iVar6 = (-(uint)(param_7 != 0) & 0xfffffffe) + 5;
  }
  if (param_8 == 0) {
    FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),iVar6,0);
  }
joined_r0x004bc070:
  while( true ) {
    iVar11 = iVar11 + -1;
    if (iVar11 < 0) {
      if (param_8 == 0) {
        if (param_2 != 0) {
          FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
        }
        FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
      }
      return param_2;
    }
    puVar1 = *(uint **)(piVar12[2] + iVar11 * 4);
    if ((puVar1[8] & 1) != 0) break;
    if (param_7 == 0) {
      if (((int)param_4 <= (int)puVar1[1]) &&
         (((int)param_4 < (int)puVar1[1] || (param_3 < *puVar1)))) {
        if (param_2 == 0) {
          FUN_004ead60(*(undefined4 *)(param_1 + 0xbc8),0,local_40);
        }
        uVar9 = puVar1[1];
        uVar2 = *puVar1;
        param_2 = 1;
        iVar6 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
        if (((int)uVar9 < iVar6) || (((int)uVar9 <= iVar6 && (uVar2 < param_3 + param_5)))) {
          if ((LPCVOID)puVar1[9] != (LPCVOID)0x0) {
            pvVar7 = GlobalHandle((LPCVOID)puVar1[9]);
            GlobalUnlock(pvVar7);
            pvVar7 = GlobalHandle((LPCVOID)puVar1[9]);
            GlobalFree(pvVar7);
          }
          if ((LPCVOID)puVar1[10] != (LPCVOID)0x0) {
            pvVar7 = GlobalHandle((LPCVOID)puVar1[10]);
            GlobalUnlock(pvVar7);
            pvVar7 = GlobalHandle((LPCVOID)puVar1[10]);
            GlobalFree(pvVar7);
          }
          _SfList_DeleteList_16(piVar12,iVar11,1,1);
        }
        else {
          *puVar1 = uVar2 - param_5;
          puVar1[1] = (uVar9 - param_6) - (uint)(uVar2 < param_5);
        }
      }
    }
    else if (((int)param_4 <= (int)puVar1[1]) &&
            (((int)param_4 < (int)puVar1[1] || (param_3 < *puVar1)))) {
      if (param_2 == 0) {
        FUN_004ead60(*(undefined4 *)(param_1 + 0xbc8),0,local_40);
      }
LAB_004bc235:
      param_2 = 1;
      uVar9 = *puVar1;
      *puVar1 = uVar9 + param_5;
      puVar1[1] = puVar1[1] + param_6 + (uint)CARRY4(uVar9,param_5);
    }
  }
  uVar9 = *puVar1;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  if (param_7 != 0) {
    if (uVar5 == 0xc) {
      iVar6 = uVar4 + uVar2 + (uint)CARRY4(uVar3,uVar9);
      if (((int)param_4 <= iVar6) && (((int)param_4 < iVar6 || (param_3 < uVar3 + uVar9)))) {
        if (param_2 == 0) {
          FUN_004ead60(*(undefined4 *)(param_1 + 0xbc8),0,local_40);
        }
        param_2 = 1;
        if (((int)param_4 <= (int)uVar2) && (((int)param_4 < (int)uVar2 || (param_3 <= uVar9))))
        goto LAB_004bc235;
        uVar9 = puVar1[2];
        puVar1[2] = uVar9 + param_5;
        puVar1[3] = puVar1[3] + param_6 + (uint)CARRY4(uVar9,param_5);
      }
    }
    else {
      uVar8 = uVar4 + uVar2 + (uint)CARRY4(uVar3,uVar9);
      if ((((int)param_4 <= (int)uVar8) &&
          (((int)param_4 < (int)uVar8 || (param_3 <= uVar3 + uVar9)))) &&
         ((uVar3 + uVar9 != param_3 || ((uVar8 != param_4 || (uVar3 == 0 && uVar4 == 0)))))) {
        if (param_2 == 0) {
          FUN_004ead60(*(undefined4 *)(param_1 + 0xbc8),0,local_40);
        }
        param_2 = 1;
        if (((int)uVar2 < (int)param_4) || (((int)uVar2 <= (int)param_4 && (uVar9 <= param_3)))) {
          uVar9 = puVar1[2];
          puVar1[2] = uVar9 + param_5;
          puVar1[3] = puVar1[3] + param_6 + (uint)CARRY4(uVar9,param_5);
        }
        else {
          uVar9 = *puVar1;
          *puVar1 = uVar9 + param_5;
          uVar9 = puVar1[1] + param_6 + (uint)CARRY4(uVar9,param_5);
LAB_004bc5d6:
          param_2 = 1;
          puVar1[1] = uVar9;
        }
      }
    }
    goto joined_r0x004bc070;
  }
  if (((int)uVar2 < (int)param_4) || (((int)uVar2 <= (int)param_4 && (uVar9 < param_3)))) {
LAB_004bc347:
    uVar8 = uVar3 + uVar9;
    iVar6 = uVar4 + uVar2 + (uint)CARRY4(uVar3,uVar9);
    if (((int)param_4 <= iVar6) && (((int)param_4 < iVar6 || (param_3 <= uVar8)))) {
      iVar10 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
      if ((iVar6 < iVar10) || ((iVar6 <= iVar10 && (uVar8 < param_3 + param_5)))) goto LAB_004bc3cb;
    }
    if (((int)param_4 < (int)uVar2) ||
       (((((int)param_4 <= (int)uVar2 && (param_3 < uVar9)) || (iVar6 < (int)param_4)) ||
        ((iVar6 <= (int)param_4 && (uVar8 <= param_3)))))) {
      iVar6 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
      if ((iVar6 <= (int)uVar2) && ((iVar6 < (int)uVar2 || (param_3 + param_5 <= uVar9)))) {
        if (param_2 == 0) {
          FUN_004ead60(*(undefined4 *)(param_1 + 0xbc8),0,local_40);
        }
        uVar9 = *puVar1;
        *puVar1 = uVar9 - param_5;
        uVar9 = (puVar1[1] - param_6) - (uint)(uVar9 < param_5);
        goto LAB_004bc5d6;
      }
      goto joined_r0x004bc070;
    }
  }
  else {
    iVar6 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
    if ((iVar6 <= (int)uVar2) && ((iVar6 < (int)uVar2 || (param_3 + param_5 <= uVar9))))
    goto LAB_004bc347;
  }
LAB_004bc3cb:
  if (param_2 == 0) {
    FUN_004ead60(*(undefined4 *)(param_1 + 0xbc8),0,local_40);
  }
  param_2 = 1;
  if (((int)param_4 <= (int)uVar2) && (((int)param_4 < (int)uVar2 || (param_3 <= uVar9)))) {
    iVar6 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
    if (((int)uVar2 <= iVar6) && (((int)uVar2 < iVar6 || (uVar9 < param_3 + param_5)))) {
      iVar10 = uVar4 + uVar2 + (uint)CARRY4(uVar3,uVar9);
      if (((iVar10 < (int)param_4) ||
          (((iVar10 <= (int)param_4 && (uVar3 + uVar9 < param_3)) || (iVar6 < iVar10)))) ||
         ((iVar6 <= iVar10 && (param_3 + param_5 <= uVar3 + uVar9)))) {
        *puVar1 = param_3;
        puVar1[1] = param_4;
        uVar8 = (uVar3 - param_3) - param_5;
        puVar1[2] = uVar8 + uVar9;
        puVar1[3] = ((((uVar4 - param_4) - (uint)(uVar3 < param_3)) - param_6) -
                    (uint)(uVar3 - param_3 < param_5)) + uVar2 + (uint)CARRY4(uVar8,uVar9);
      }
      else {
        if ((LPCVOID)puVar1[9] != (LPCVOID)0x0) {
          pvVar7 = GlobalHandle((LPCVOID)puVar1[9]);
          GlobalUnlock(pvVar7);
          pvVar7 = GlobalHandle((LPCVOID)puVar1[9]);
          GlobalFree(pvVar7);
        }
        if ((LPCVOID)puVar1[10] != (LPCVOID)0x0) {
          pvVar7 = GlobalHandle((LPCVOID)puVar1[10]);
          GlobalUnlock(pvVar7);
          pvVar7 = GlobalHandle((LPCVOID)puVar1[10]);
          GlobalFree(pvVar7);
        }
        _SfList_DeleteList_16(piVar12,iVar11,1,1);
      }
      goto joined_r0x004bc070;
    }
  }
  iVar6 = uVar4 + uVar2 + (uint)CARRY4(uVar3,uVar9);
  if (((int)param_4 <= iVar6) && (((int)param_4 < iVar6 || (param_3 <= uVar3 + uVar9)))) {
    iVar10 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
    if ((iVar6 <= iVar10) && ((iVar6 < iVar10 || (uVar3 + uVar9 < param_3 + param_5)))) {
      puVar1[2] = param_3 - uVar9;
      puVar1[3] = (param_4 - uVar2) - (uint)(param_3 < uVar9);
      goto joined_r0x004bc070;
    }
  }
  puVar1[2] = uVar3 - param_5;
  puVar1[3] = (uVar4 - param_6) - (uint)(uVar3 < param_5);
  goto joined_r0x004bc070;
}


