/* Module: vegas30.exe
   Function: FUN_005b8da0
   Address: 005b8da0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b8da0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_EDI;
  int local_7c;
  int local_78;
  uint local_70;
  undefined4 auStack_68 [26];
  
  local_7c = 1;
  FUN_005b83b0(param_1,1);
  piVar1 = (int *)param_1[0x77];
  iVar6 = 0;
  if (piVar1 == (int *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = *piVar1;
  }
  iVar7 = 0;
  local_70 = 0;
  if (0 < local_78) {
    do {
      iVar2 = *(int *)(piVar1[2] + iVar6 * 4);
      if (((*(uint *)(iVar2 + 0x10) & 0x200000) != 0) || (param_2 != 0)) {
        if (*(int *)(iVar2 + 4) == 2) {
          auStack_68[*(int *)(iVar2 + 0x44)] = 1;
        }
        local_7c = FUN_005cbf70(iVar2,0);
        if (local_7c < 0) break;
        if (param_3 != 0) {
          FUN_005410b0(param_1,iVar2,0);
        }
      }
      iVar3 = *(int *)(iVar2 + 0x34);
      if ((iVar7 <= iVar3) && ((iVar7 < iVar3 || (local_70 <= *(uint *)(iVar2 + 0x30))))) {
        iVar7 = iVar3;
        local_70 = *(uint *)(iVar2 + 0x30);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_78);
  }
  iVar6 = param_1[0x76];
  if (iVar6 != 0) {
    if (((*(uint *)(iVar6 + 0x10) & 0x200000) == 0) && (param_2 == 0)) goto LAB_005b8ebe;
    FUN_005cbf70(iVar6,0);
    uVar4 = *(uint *)(param_1[0x76] + 0x30);
    iVar6 = *(int *)(param_1[0x76] + 0x34);
    if ((iVar7 <= iVar6) && ((iVar7 < iVar6 || (local_70 <= uVar4)))) {
      iVar7 = iVar6;
      local_70 = uVar4;
    }
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_00540f30(param_1);
  }
LAB_005b8ebe:
  FUN_005b84d0(param_1,1);
  iVar6 = Transport_IsRecording();
  if (iVar6 == 0) {
    uVar4 = Mixer_NumBusTypePorts(1);
    uVar8 = 0;
    while( true ) {
      uVar5 = uVar4;
      if (0x19 < uVar4) {
        uVar5 = 0x1a;
      }
      if (uVar5 <= uVar8) break;
      Mixer_FlushBus(uVar8,-1,CONCAT44(unaff_EDI,0xffffffff));
      uVar8 = uVar8 + 1;
    }
    if ((param_1[0x74] == local_70) && (param_1[0x75] == iVar7)) {
      return local_7c;
    }
    uVar4 = DAT_00647e40 + local_70;
    iVar6 = DAT_00647e44 + iVar7 + (uint)CARRY4(DAT_00647e40,local_70);
    if ((iVar6 < DAT_00647e3c) || ((iVar6 <= DAT_00647e3c && (uVar4 <= DAT_00647e38)))) {
      iVar6 = DAT_00647e3c;
      uVar4 = DAT_00647e38;
    }
    if ((iVar6 <= DAT_0064b4d4) && ((iVar6 < DAT_0064b4d4 || (uVar4 <= DAT_0064b4d0)))) {
      iVar6 = DAT_0064b4d4;
      uVar4 = DAT_0064b4d0;
    }
    Transport_SetLength(CONCAT44(iVar6,uVar4));
    param_1[0x74] = local_70;
  }
  else {
    if ((param_1[0x74] == local_70) && (param_1[0x75] == iVar7)) {
      return local_7c;
    }
    param_1[0x74] = local_70;
  }
  param_1[0x75] = iVar7;
  *(uint *)*param_1 = *(uint *)*param_1 | 2;
  return local_7c;
}


