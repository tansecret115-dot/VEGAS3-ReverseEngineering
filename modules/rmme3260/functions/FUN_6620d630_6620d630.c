/* Module: rmme3260.dll
   Function: FUN_6620d630
   Address: 6620d630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6620d630(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  char *_Str1;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 local_4c;
  undefined1 local_46;
  undefined1 uStack_45;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  uint local_28;
  undefined1 uStack_24;
  uint local_23;
  undefined1 uStack_1f;
  uint local_1e;
  undefined4 *local_1a;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar1 = param_1;
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = this;
  (**(code **)(*param_1 + 0x20))(param_1,s_OpaqueData_6626f12c,&local_10);
  (**(code **)(*piVar1 + 0x10))(piVar1,s_StreamNumber_6626f1c8,&param_1);
  (**(code **)(*piVar1 + 0x10))(piVar1,s_MaxBitRate_6626f1bc,local_44);
  (**(code **)(*piVar1 + 0x10))(piVar1,s_AvgBitRate_6626f1b0,local_40);
  (**(code **)(*piVar1 + 0x10))(piVar1,s_MaxPacketSize_6626f1a0,local_3c);
  (**(code **)(*piVar1 + 0x10))(piVar1,s_AvgPacketSize_6626f190,local_38);
  (**(code **)(*piVar1 + 0x10))(piVar1,s_StartTime_6626f184,local_34);
  (**(code **)(*piVar1 + 0x10))(piVar1,s_Preroll_6626f17c,local_30);
  (**(code **)(*piVar1 + 0x10))(piVar1,s_Duration_6626f170,local_2c);
  (**(code **)(*piVar1 + 0x30))(piVar1,s_StreamName_6626f154,&local_c);
  (**(code **)(*piVar1 + 0x30))(piVar1,s_MimeType_6626f148,&local_8);
  _Str1 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
  iVar4 = _stricmp(_Str1,s_video_x_pn_realvideo_6626f114);
  if (iVar4 == 0) {
    *(undefined4 *)(*(int *)((int)this + 0x14) + (int)param_1 * 4) = 1;
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 0x14) + (int)param_1 * 4) = 0;
  }
  pvVar5 = operator_new(10);
  if (pvVar5 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_6620e110(piVar1);
  }
  FUN_6624ff10((void *)((int)this + 0xac),(int)param_1,puVar6);
  piVar1 = param_1;
  if (local_c == (int *)0x0) {
    local_28 = local_28 & 0xffffff00;
  }
  else {
    cVar3 = (**(code **)(*local_c + 0x18))(local_c);
    local_28 = CONCAT31(local_28._1_3_,cVar3 + -1);
  }
  if (local_c == (int *)0x0) {
    local_28 = local_28 & 0xff;
    uStack_24 = 0;
  }
  else {
    uVar7 = (**(code **)(*local_c + 0x1c))(local_c);
    local_28._1_3_ = (undefined3)uVar7;
    uStack_24 = (undefined1)((uint)uVar7 >> 0x18);
  }
  if (local_8 == (int *)0x0) {
    local_23 = local_23 & 0xffffff00;
  }
  else {
    cVar3 = (**(code **)(*local_8 + 0x18))(local_8);
    local_23 = CONCAT31(local_23._1_3_,cVar3 + -1);
  }
  if (local_8 == (int *)0x0) {
    local_23 = local_23 & 0xff;
    uStack_1f = 0;
  }
  else {
    uVar7 = (**(code **)(*local_8 + 0x1c))(local_8);
    local_23._1_3_ = (undefined3)uVar7;
    uStack_1f = (undefined1)((uint)uVar7 >> 0x18);
  }
  if (local_10 == (int *)0x0) {
    local_1e = 0;
  }
  else {
    local_1e = (**(code **)(*local_10 + 0x18))(local_10);
  }
  if (local_10 == (int *)0x0) {
    local_1a = (undefined4 *)0x0;
  }
  else {
    local_1a = (undefined4 *)(**(code **)(*local_10 + 0x1c))(local_10);
  }
  uVar11 = local_1e + (local_28 & 0xff) + 0x2e + (local_23 & 0xff);
  puVar8 = operator_new(uVar11);
  piVar2 = local_14;
  *puVar8 = 0x4d;
  puVar8[1] = 0x44;
  puVar8[2] = 0x50;
  puVar8[3] = 0x52;
  puVar8[4] = (char)(uVar11 >> 0x18);
  puVar8[5] = (char)(uVar11 >> 0x10);
  puVar8[6] = (char)(uVar11 >> 8);
  local_4c = (undefined1)uVar11;
  puVar8[7] = local_4c;
  puVar8[8] = 0;
  puVar8[9] = 0;
  uStack_45 = (undefined1)((uint)piVar1 >> 8);
  puVar8[10] = uStack_45;
  local_46 = SUB41(piVar1,0);
  puVar8[0xb] = local_46;
  puVar8[0xc] = local_44[3];
  puVar8[0xd] = local_44[2];
  puVar8[0xe] = local_44[1];
  puVar8[0xf] = local_44[0];
  puVar8[0x10] = local_40[3];
  puVar8[0x11] = local_40[2];
  puVar8[0x12] = local_40[1];
  puVar8[0x13] = local_40[0];
  puVar8[0x14] = local_3c[3];
  puVar8[0x15] = local_3c[2];
  puVar8[0x16] = local_3c[1];
  puVar8[0x17] = local_3c[0];
  puVar8[0x18] = local_38[3];
  puVar8[0x19] = local_38[2];
  puVar8[0x1a] = local_38[1];
  puVar8[0x1b] = local_38[0];
  puVar8[0x1c] = local_34[3];
  puVar8[0x1d] = local_34[2];
  puVar8[0x1e] = local_34[1];
  puVar8[0x1f] = local_34[0];
  puVar8[0x20] = local_30[3];
  puVar8[0x21] = local_30[2];
  puVar8[0x22] = local_30[1];
  puVar8[0x23] = local_30[0];
  puVar8[0x24] = local_2c[3];
  puVar8[0x25] = local_2c[2];
  puVar8[0x26] = local_2c[1];
  puVar8[0x27] = local_2c[0];
  puVar8[0x28] = (undefined1)local_28;
  puVar6 = (undefined4 *)CONCAT13(uStack_24,local_28._1_3_);
  puVar12 = (undefined4 *)(puVar8 + 0x29);
  for (uVar11 = (local_28 & 0xff) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = local_28 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)puVar12 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  puVar9 = (undefined1 *)((int)(puVar8 + 0x29) + (local_28 & 0xff));
  *puVar9 = (undefined1)local_23;
  puVar10 = (undefined4 *)(puVar9 + 1);
  puVar6 = (undefined4 *)CONCAT13(uStack_1f,local_23._1_3_);
  puVar12 = puVar10;
  for (uVar11 = (local_23 & 0xff) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = local_23 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)puVar12 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  puVar9 = (undefined1 *)((int)puVar10 + (local_23 & 0xff));
  *puVar9 = (char)(local_1e >> 0x18);
  puVar9[1] = (char)(local_1e >> 0x10);
  puVar9[2] = (char)(local_1e >> 8);
  puVar9[3] = (undefined1)local_1e;
  puVar6 = local_1a;
  puVar12 = (undefined4 *)(puVar9 + 4);
  for (uVar11 = local_1e >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  for (uVar11 = local_1e & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)puVar12 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  (**(code **)(*local_14 + 0x1c))
            ((undefined1 *)((int)(puVar9 + 4) + (local_1e - (int)puVar8)),puVar8);
  FUN_6624ff10(piVar2 + 0x26,piVar2[0x27],puVar8);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return 0;
}


