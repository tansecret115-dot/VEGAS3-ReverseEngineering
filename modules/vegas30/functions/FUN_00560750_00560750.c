/* Module: vegas30.exe
   Function: FUN_00560750
   Address: 00560750
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00560750(undefined4 param_1,int param_2,int param_3,int *param_4,uchar *param_5,int param_6,
                undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  int *piVar6;
  undefined4 unaff_EBX;
  int iVar7;
  int *unaff_EBP;
  int *local_1c;
  int local_18;
  undefined2 local_14;
  short local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  local_18 = *(int *)(param_2 + 0x50);
  iVar7 = -0x7fffbffb;
  if (local_18 == 0) {
    return -0x7fffbffb;
  }
  iVar1 = *(int *)(local_18 + 0x18);
  if (iVar1 == 0) {
    return -0x7fffbffb;
  }
  iVar3 = FUN_005f13f0(2);
  if (iVar3 == 0) {
    return -0x7fffbffb;
  }
  if ((DAT_0064a694 == 0) || (param_3 != 0)) {
    local_c = *(int *)(param_6 + 4);
    local_12 = 2;
    uStack_10 = (undefined2)local_c;
    uStack_e = (undefined2)((uint)local_c >> 0x10);
    uVar2 = (DAT_006484dc >> 3) << 1;
  }
  else {
    local_12 = *(short *)(param_6 + 2);
    local_c = *(int *)(param_6 + 4);
    uStack_10 = (undefined2)local_c;
    uStack_e = (undefined2)((uint)local_c >> 0x10);
    uVar2 = (DAT_006484dc >> 3) * local_12;
  }
  local_14 = DAT_006484d8;
  local_8 = CONCAT22(DAT_006484dc,uVar2);
  local_4 = 0;
  local_c = (uint)uVar2 * local_c;
  local_1c = (int *)0x0;
  if (param_3 != 0) {
    iVar7 = _SfAudio_CreateTrackGraph_4(&local_1c);
    if (-1 < iVar7) {
      (**(code **)(*local_1c + 0x10))(local_1c,param_3);
      (**(code **)(*unaff_EBP + 0x14))(unaff_EBP,&local_1c,DAT_00647e68,DAT_00647e6c,0,0);
    }
  }
  iVar3 = FUN_004e6c90(0x4e0);
  if (iVar3 != 0) {
    *(undefined1 **)(iVar3 + 0x20) = &LAB_00560440;
    *(undefined4 *)(iVar3 + 0x2c) = 0xc3;
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xffffffdf | 0x12;
    pcVar4 = FUN_00560a00;
    if (local_1c == (int *)0x0) {
      pcVar4 = (code *)&LAB_00560a70;
    }
    *(code **)(iVar3 + 0x28) = pcVar4;
    *(undefined1 **)(iVar3 + 0x24) = &LAB_00561630;
    *(uint *)(iVar3 + 0x4c8) = (uint)(local_1c != (int *)0x0);
    *(uint *)(iVar3 + 0x40) = CONCAT22(local_12,local_14);
    *(uint *)(iVar3 + 0x44) = CONCAT22(uStack_e,uStack_10);
    *(int *)(iVar3 + 0x48) = local_c;
    *(undefined4 *)(iVar3 + 0x4c) = local_8;
    *(undefined2 *)(iVar3 + 0x50) = local_4;
    *(undefined4 *)(iVar3 + 0x30) = DAT_00647624;
    *(undefined4 *)(iVar3 + 0x34) = param_1;
    _mbscpy((uchar *)(iVar3 + 0x156),(uchar *)(iVar1 + 0x170));
    _mbscpy((uchar *)(iVar3 + 0x52),param_5);
    _mbscpy((uchar *)(iVar3 + 0x39e),param_5);
    _mbscpy((uchar *)(iVar3 + 0x25a),"???");
    *(undefined4 *)(iVar3 + 0x4a8) = param_8;
    *(int *)(iVar3 + 0x4ac) = param_2;
    *(undefined4 *)(iVar3 + 0x4b0) = 0;
    *(int *)(iVar3 + 0x4b4) = local_18;
    *(int **)(iVar3 + 0x4d4) = param_4;
    (**(code **)(*param_4 + 4))(param_4);
    *(undefined4 *)(iVar3 + 0x4cc) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = unaff_EBX;
    hMem = GlobalAlloc(0x40,0x70);
    pvVar5 = GlobalLock(hMem);
    if (pvVar5 == (LPVOID)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_0055fb10(iVar3);
    }
    FUN_0055fb90(*(undefined4 *)(*(int *)(iVar3 + 0x4b4) + 8),
                 *(undefined4 *)(*(int *)(iVar3 + 0x4b4) + 0xc),
                 *(undefined4 *)(*(int *)(iVar3 + 0x4ac) + 0x20),
                 *(undefined4 *)(*(int *)(iVar3 + 0x4ac) + 0x24),&local_18,param_5);
    (**(code **)(*piVar6 + 4))(piVar6);
    *(int **)(iVar3 + 0x4d8) = piVar6;
    iVar7 = FUN_004e7190(iVar3);
  }
  return iVar7;
}


