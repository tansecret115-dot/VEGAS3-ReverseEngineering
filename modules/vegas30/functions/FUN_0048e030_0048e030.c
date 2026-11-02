/* Module: vegas30.exe
   Function: FUN_0048e030
   Address: 0048e030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0048e2f7) */
/* WARNING: Removing unreachable block (ram,0x0048e3ac) */
/* WARNING: Removing unreachable block (ram,0x0048e30e) */

undefined4 FUN_0048e030(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  HANDLE hMem;
  LPVOID pvVar6;
  uint uVar7;
  undefined4 uVar8;
  int unaff_EBX;
  int iVar9;
  int unaff_ESI;
  uint uVar10;
  undefined4 unaff_EDI;
  undefined1 local_40 [24];
  int iStack_28;
  uint uStack_1c;
  undefined4 uStack_c;
  int *piStack_8;
  int iStack_4;
  
  iVar9 = *param_1;
  iVar4 = FUN_005bad30(param_3,0,&param_3);
  if (iVar4 < 0) {
    return 0;
  }
  iVar4 = (**(code **)(*param_3 + 0xc))(param_3,local_40,0x40,0);
  piVar3 = piStack_8;
  if (iVar4 < 0) goto switchD_0048e250_caseD_1;
  iVar4 = piStack_8[1];
  if (uStack_1c != (iVar4 == 0xffff)) {
    if (uStack_1c == 0) {
      uVar5 = _SfGetString_8(DAT_00647204,0x5285);
      SfMsgBox(DAT_00647624,0x10,uVar5);
    }
    else {
      uVar5 = _SfGetString_8(DAT_00647204,0x5284);
      SfMsgBox(DAT_00647624,0x10,uVar5);
    }
    goto switchD_0048e250_caseD_1;
  }
  if ((iVar4 != 0xffff) || (*piStack_8 != 0xffff)) {
    iVar1 = piStack_8[4];
    if (iVar4 == 0xffff) {
      if (((iVar1 != 1) && (iVar1 != 0)) && (iVar1 != 0)) {
        uVar5 = _SfGetString_8(DAT_00647204,0x5287);
        SfMsgBox(DAT_00647624,0x10,uVar5);
        goto switchD_0048e250_caseD_1;
      }
      goto LAB_0048e159;
    }
    if (((iVar1 == 1) || (iVar1 == 0)) || (iVar1 == 0)) goto LAB_0048e159;
    uVar5 = 0x5286;
LAB_0048e1f6:
    uVar5 = _SfGetString_8(DAT_00647204,uVar5);
    SfMsgBox(DAT_00647624,0x10,uVar5);
    goto switchD_0048e250_caseD_1;
  }
LAB_0048e159:
  if (iVar4 != 0xffff) {
    hMem = GetClipboardData(1);
    if ((hMem != (HANDLE)0x0) && (pvVar6 = GlobalLock(hMem), pvVar6 != (LPVOID)0x0)) {
      unaff_EDI = FUN_0048daf0(param_1,piVar3,pvVar6);
      GlobalUnlock(hMem);
    }
    goto switchD_0048e250_caseD_1;
  }
  iVar4 = *(int *)(iVar9 + 0x94) + -1;
  switch(iVar4) {
  case 0:
  case 1:
    if ((unaff_EBX != 0x25) && (unaff_EBX != 0x31)) {
      uVar5 = _SfGetString_8(DAT_00647204,0x5288);
      SfMsgBox(DAT_00647624,0x10,uVar5);
      goto switchD_0048e250_caseD_1;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    if ((unaff_EBX != 10) || (*(int *)(iVar9 + 0x94) != iStack_28)) {
      uVar5 = 0x5289;
      goto LAB_0048e1f6;
    }
  }
  uVar2 = piStack_8[2];
  if (*piStack_8 == 0xffff) {
    piStack_8 = (int *)piStack_8[4];
  }
  else {
    uVar7 = uVar2;
    if (**(uint **)(iVar9 + 0x134) < uVar2) {
      uVar7 = **(uint **)(iVar9 + 0x134);
    }
    piStack_8 = (int *)(uVar7 - uVar2);
  }
  uVar5 = *(undefined4 *)(iVar9 + 0x130);
  switch(iVar4) {
  case 0:
    FUN_004e9f70(uVar5,0x17,0);
    uVar7 = (int)piStack_8 + uVar2;
    iVar9 = unaff_ESI;
    for (uVar10 = uVar2; uVar10 < uVar7; uVar10 = uVar10 + 1) {
      piVar3 = *(int **)(iVar9 + 0x134);
      if (piVar3 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar3;
      }
      if (((int)uVar10 < 0) || (iVar4 + -1 < (int)uVar10)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(piVar3[2] + uVar10 * 4);
      }
      if (iVar4 != 0) {
        FUN_004ea250(uVar5,*(undefined4 *)(iVar4 + 8),1,0);
      }
    }
    break;
  default:
    goto switchD_0048e250_caseD_1;
  case 2:
    uVar8 = 9;
    goto LAB_0048e349;
  case 3:
    uVar8 = 10;
LAB_0048e349:
    FUN_004e9f70(uVar5,uVar8,0);
    FUN_004ead60(uVar5,0,3);
    break;
  case 4:
    FUN_004e9f70(uVar5,0x41,0);
    FUN_004ead60(uVar5,0,5);
    break;
  case 5:
    FUN_004e9f70(uVar5,0x47,0);
    FUN_004ead60(uVar5,0,7);
    break;
  case 6:
    FUN_004e9f70(uVar5,0x24f,0);
    FUN_004ead60(uVar5,0,9);
  }
  iVar4 = FUN_0048d440(iVar9,uVar2,piStack_8);
  if (-1 < iVar4) {
    iVar4 = *(int *)(iVar9 + 0x94);
    if (iVar4 == 1) {
      FUN_004eb2b0(uVar5);
    }
    else if ((2 < iVar4) && (iVar4 < 8)) {
      uVar8 = FUN_0048d640(iVar9);
      FUN_004eb2b0(uVar5);
      FUN_0048de40(iVar9,uVar8);
      unaff_EDI = 6;
      *(uint *)**(undefined4 **)(iVar9 + 0x130) =
           *(uint *)**(undefined4 **)(iVar9 + 0x130) | 0x10000;
      goto LAB_0048e418;
    }
    if (unaff_EBX == 0x25) {
      iVar4 = FUN_0048e490(0x302,&stack0xffffffb0,uStack_c,uVar2,iStack_4);
    }
    else {
      iVar4 = FUN_0048e980(iVar9,&stack0xffffffb0,uVar2,iStack_4);
    }
    if ((-1 < iVar4) && (unaff_EDI = 6, DAT_00647630 != 0)) {
      FUN_00469280(DAT_00647630);
    }
  }
LAB_0048e418:
  iVar9 = *(int *)(iVar9 + 0x94);
  if ((iVar9 == 1) || ((2 < iVar9 && (iVar9 < 7)))) {
    FUN_004ea040(uVar5,0);
  }
switchD_0048e250_caseD_1:
  if (iStack_4 != 0) {
    FUN_005bad50(iStack_4);
  }
  return unaff_EDI;
}


