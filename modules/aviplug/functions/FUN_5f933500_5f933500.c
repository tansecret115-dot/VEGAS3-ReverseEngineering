/* Module: aviplug.dll
   Function: FUN_5f933500
   Address: 5f933500
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f933500(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int *unaff_EBP;
  int unaff_ESI;
  int *piVar4;
  int *unaff_EDI;
  int *piVar5;
  int *local_160;
  undefined4 uStack_15c;
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int aiStack_118 [16];
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 *puStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 auStack_8c [9];
  undefined4 auStack_68 [10];
  int aiStack_40 [16];
  
  local_160 = (int *)0x0;
  local_158 = 1;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x244) + param_2 * 0x38);
  piVar4 = *(int **)(*(int *)(param_1 + 0x244) + 0x28 + param_2 * 0x38);
  if (piVar4 == (int *)0x0) {
    if (param_6 != 0) {
      return unaff_ESI;
    }
    iVar3 = (*(code *)puVar1[0xd])(&local_160,param_1);
    if (iVar3 < 0) goto LAB_5f9337cc;
  }
  else {
    local_158 = 0;
    local_160 = piVar4;
  }
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x22c);
  }
  if (param_4 == (int *)0x0) {
    param_4 = (int *)(puVar1[2] * 0x80 + 0x68 + param_3);
  }
  local_154 = 0;
  local_150 = param_5;
  local_14c = *puVar1;
  local_148 = puVar1[1];
  iStack_144 = param_2;
  uStack_140 = puVar1[3];
  uStack_13c = *(undefined4 *)(param_3 + 0x48);
  uStack_138 = *(undefined4 *)(param_3 + 0x4c);
  uStack_134 = *(undefined4 *)(param_3 + 0x50);
  uStack_130 = *(undefined4 *)(param_3 + 0x54);
  uStack_12c = *(undefined4 *)(param_3 + 0x58);
  iStack_128 = param_1 + 0x14;
  uStack_120 = *(undefined4 *)(param_1 + 0x21c);
  uStack_124 = *(undefined4 *)(param_1 + 0x224);
  uStack_11c = puVar1[0xb];
  piVar4 = param_4;
  piVar5 = aiStack_118;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  iStack_d8 = param_4[0x10];
  iStack_d4 = param_4[0x12];
  iStack_d0 = param_4[0x13];
  iStack_cc = param_4[0x14];
  iStack_c8 = param_4[0x15];
  iStack_c4 = param_4[0x16];
  puStack_c0 = (undefined4 *)param_4[0x17];
  piStack_bc = (int *)0x0;
  uStack_b8 = 0;
  iStack_b4 = param_4[0x19];
  iStack_ac = param_4[0x1a];
  iStack_a8 = param_4[0x1b];
  iStack_a4 = param_4[0x1c];
  iStack_a0 = param_4[0x1d];
  iStack_9c = param_4[0x1e];
  iStack_98 = param_4[0x1f];
  uStack_94 = *(undefined4 *)(param_1 + 0x260);
  puVar2 = (uint *)param_4[0x18];
  if (puVar2 != (uint *)0x0) {
    if (puVar1[3] == 0) {
      if (aiStack_118[2] == 0x73766169) {
        FUN_5f94dc20(puVar2[4],puVar2[5],auStack_68,0x28,(uint *)0x0);
        puStack_c0 = auStack_68;
        iStack_c4 = 0x28;
      }
      FUN_5f94dab0(puVar2[4],puVar2[5],aiStack_40,0x40,(uint *)0x0);
      piStack_bc = aiStack_40;
      uStack_b8 = 0x40;
    }
    else {
      FUN_5f94bbe0(*puVar2,puVar2[2],puVar1[3] + -1,auStack_8c,0x22,(uint *)0x0);
      puStack_c0 = auStack_8c;
      iStack_c4 = 0x22;
    }
  }
  iVar3 = (**(code **)(*local_160 + 0x40))(local_160,&local_154);
  if (-1 < iVar3) {
    if (param_6 == 0) {
      uStack_15c = 0;
      (**(code **)*local_160)(local_160,&DAT_5f9d9c80,&uStack_15c);
      iVar3 = (**(code **)(*unaff_EBP + 0x1c))(unaff_EBP,puVar1 + 4);
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      if (iVar3 < 0) goto LAB_5f9337cc;
    }
    puVar1[10] = local_160;
    if (-1 < iVar3) {
      return unaff_ESI;
    }
  }
LAB_5f9337cc:
  if ((local_160 != (int *)0x0) && (local_158 != 0)) {
    (**(code **)(*local_160 + 0x3c))(local_160);
  }
  return unaff_ESI;
}


