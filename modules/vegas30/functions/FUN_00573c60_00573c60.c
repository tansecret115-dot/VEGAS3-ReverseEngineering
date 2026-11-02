/* Module: vegas30.exe
   Function: FUN_00573c60
   Address: 00573c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00573c60(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            LPCVOID param_6)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  HGLOBAL pvVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined4 local_c;
  
  iVar4 = param_2;
  if (param_6 == (LPCVOID)0x1) {
    local_c = 0x53;
  }
  else if (param_6 == (LPCVOID)0x2) {
    local_c = 0x4c;
  }
  else if (param_6 == (LPCVOID)0x3) {
    local_c = 0x52;
  }
  iVar7 = 0;
  iVar8 = 0;
  if (*(int *)(param_2 + 8) == 4) {
    iVar8 = *(int *)(param_2 + 0x224) + 0x91;
  }
  else if (*(int *)(param_2 + 8) == 2) {
    iVar8 = *(int *)(param_2 + 0x224) + 0x138;
  }
  param_6 = (LPCVOID)0x0;
  bVar1 = false;
  param_2 = 0;
  bVar10 = false;
  if (iVar8 != 0) {
    FUN_005b8630(*(undefined4 *)(param_1 + 0x290));
    FUN_005b4e20(iVar8,&param_6,&param_2);
    if (param_2 == 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x290);
    }
    else {
      if (param_6 == (LPCVOID)0x0) goto LAB_00573d20;
      uVar9 = *(undefined4 *)(param_1 + 0x290);
    }
    FUN_004e9f70(uVar9,iVar8,0);
    bVar1 = true;
  }
LAB_00573d20:
  if (((*(byte *)(iVar4 + 0x1c) & 1) == 0) || (*(int *)(iVar4 + 8) == 1)) {
    if (*(int *)(iVar4 + 0x340) == 0) {
      uVar6 = *(uint *)(iVar4 + 0xc) >> 5 & 1;
      uVar9 = FUN_00569920(uVar6);
      FUN_00570bd0(iVar4,uVar9,uVar6);
    }
    if (bVar1) {
      if (*(int *)(iVar4 + 8) == 4) {
        uVar9 = 1;
      }
      else {
        uVar9 = 4;
        if (*(int *)(iVar4 + 8) != 2) {
          uVar9 = param_5;
        }
      }
      if (param_2 == 0) {
        FUN_004ea590(*(undefined4 *)(param_1 + 0x290),uVar9,*(undefined4 *)(iVar4 + 0x224),0x17);
      }
      else if (param_6 != (LPCVOID)0x0) {
        FUN_004ea590(*(undefined4 *)(param_1 + 0x290),uVar9,*(undefined4 *)(iVar4 + 0x224),0x17);
        iVar7 = FUN_005b3f60(param_2,param_6,*(undefined4 *)(iVar4 + 0x224),uVar9);
        bVar10 = iVar7 == 0;
      }
    }
    uVar2 = param_5;
    uVar9 = param_3;
    _FaderInst_Message_16(*(undefined4 *)(iVar4 + 0x340),param_3,local_c,param_5);
    _FaderInst_Message_16(*(undefined4 *)(iVar4 + 0x340),uVar9,param_4,uVar2);
  }
  else {
    iVar4 = **(int **)(param_1 + 0x2b0);
    uVar9 = param_5;
    if (0 < iVar4) {
      do {
        iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar7 * 4);
        if (((iVar8 != 0) && ((*(byte *)(iVar8 + 0x1c) & 1) != 0)) && (*(int *)(iVar8 + 8) != 1)) {
          if (*(int *)(iVar8 + 0x340) == 0) {
            FUN_00570bd0(iVar8,iVar7,*(uint *)(iVar8 + 0xc) >> 5 & 1);
          }
          if (bVar1) {
            if (*(int *)(iVar8 + 8) == 4) {
              uVar9 = 1;
            }
            else if (*(int *)(iVar8 + 8) == 2) {
              uVar9 = 4;
            }
            if (param_2 == 0) {
              FUN_004ea590(*(undefined4 *)(param_1 + 0x290),uVar9,*(undefined4 *)(iVar8 + 0x224),
                           0x17);
            }
            else if ((param_6 != (LPCVOID)0x0) &&
                    (FUN_004ea590(*(undefined4 *)(param_1 + 0x290),uVar9,
                                  *(undefined4 *)(iVar8 + 0x224),0x17), !bVar10)) {
              iVar3 = FUN_005b3f60(param_2,param_6,*(undefined4 *)(iVar8 + 0x224),uVar9);
              bVar10 = iVar3 == 0;
            }
          }
          _FaderInst_Message_16(*(undefined4 *)(iVar8 + 0x340),param_3,local_c,param_5);
          _FaderInst_Message_16(*(undefined4 *)(iVar8 + 0x340),param_3,param_4,param_5);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar4);
    }
  }
  if (!bVar1) {
    return;
  }
  if (param_2 == 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x290);
  }
  else {
    if ((param_6 == (LPCVOID)0x0) ||
       ((!bVar10 && (iVar4 = FUN_005b3fa0(param_2,param_6), iVar4 == 0)))) goto LAB_00573f6f;
    uVar9 = *(undefined4 *)(param_1 + 0x290);
  }
  FUN_004eb2b0(uVar9);
LAB_00573f6f:
  FUN_004ea040(*(undefined4 *)(param_1 + 0x290),0);
  if (param_6 != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(param_6);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(param_6);
    GlobalFree(pvVar5);
  }
  return;
}


