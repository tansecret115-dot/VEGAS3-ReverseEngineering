/* Module: vegas30.exe
   Function: FUN_004dc360
   Address: 004dc360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dc360(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  undefined4 *pMem;
  int iVar5;
  int *unaff_ESI;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int local_218;
  int *local_214;
  int local_210;
  int local_208 [130];
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  local_210 = *(int *)(param_1 + 0xd50);
  if (local_210 == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0xa0) & 2) == 0) {
    return;
  }
  if ((*(byte *)(local_210 + 0x134) & 0x20) != 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = _SfGetString_8(DAT_00647204,0x6d70);
    SfMsgBox(DAT_00647624,0x30,uVar1);
    return;
  }
  iVar2 = FUN_004dbce0(param_1);
  if (iVar2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = _SfGetString_8(DAT_00647204,0x6d6f);
    SfMsgBox(DAT_00647624,0x30,uVar1);
    return;
  }
  if ((*(byte *)(param_1 + 0xd9c) & 1) != 0) {
    if (*(int *)(param_1 + 0xd70) == 0) {
      return;
    }
    iVar2 = FUN_005f13f0(2);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(iVar2 + 0x5c) != 0) {
      uVar1 = _SfGetString_8(DAT_00647204,0x6d66);
      SfMsgBox(DAT_00647624,0x30,uVar1);
      return;
    }
  }
  Transport_Suspend();
  iVar2 = Transport_IsPreviewPlaying();
  if (iVar2 != 0) {
    FUN_005fd4c0(1);
  }
  FUN_00543290();
  FUN_005f0120(0);
  local_214 = (int *)0x0;
  iVar2 = FUN_005f2fb0(&local_214,local_208,0x104);
  if (-1 < iVar2) {
    piVar10 = (int *)0x0;
    piVar8 = local_208;
    piVar9 = (int *)0x0;
    piVar7 = &local_218;
    local_218 = 0;
    iVar2 = (**(code **)(*local_214 + 0x34))(local_214);
    if (-1 < iVar2) {
      iVar2 = -0x7ff8fff2;
      pvVar3 = GlobalAlloc(0x40,0x2c);
      pvVar4 = GlobalLock(pvVar3);
      if ((pvVar4 != (LPVOID)0x0) &&
         (pMem = (undefined4 *)FUN_004b11e0(), pMem != (undefined4 *)0x0)) {
        iVar2 = FUN_004b1980(*(undefined4 *)(param_1 + 0xc38),0,0,0,0,0,0,0,0,0);
        if (iVar2 < 0) {
          FUN_004b1210();
          pvVar3 = GlobalHandle(pMem);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pMem);
          GlobalFree(pvVar3);
        }
        else {
          piVar6 = (int *)&stack0xfffffde0;
          (**(code **)*pMem)(pMem,&DAT_0060f098);
          iVar2 = (**(code **)(*piVar7 + 0x40))(piVar7,piVar10);
          if (-1 < iVar2) {
            iVar2 = FUN_005f13f0(2);
            if ((iVar2 == 0) || (*(int *)(iVar2 + 0x2c) == 0)) {
              iVar2 = (**(code **)(*piVar6 + 0x48))(piVar6,0);
            }
            else {
              iVar5 = FUN_005f1350();
              iVar2 = (**(code **)(*piVar6 + 0x48))
                                (piVar6,*(undefined4 *)(*(int *)(iVar2 + 0x2c) + 4));
              if (iVar5 != 0) {
                FUN_005f13a0();
                (**(code **)(*piVar8 + 8))(piVar8);
                goto LAB_004dc5f7;
              }
            }
          }
          (**(code **)(*piVar8 + 8))(piVar8);
        }
      }
LAB_004dc5f7:
      (**(code **)(*piVar10 + 0x10))(piVar10);
      (**(code **)(*piVar9 + 8))(piVar9);
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    local_214 = (int *)0x0;
    if (-1 < iVar2) {
      *(uint *)(param_2 + 0xa0) = *(uint *)(param_2 + 0xa0) & 0xfffffffd;
      goto LAB_004dc63e;
    }
  }
  _SfErrorHandler_MsgBox_24(0,0x30,0x17,iVar2,0,0);
LAB_004dc63e:
  FUN_005effc0(0);
  FUN_005432d0();
  Transport_Resume(0);
  return;
}


