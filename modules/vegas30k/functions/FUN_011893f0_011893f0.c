/* Module: vegas30k.dll
   Function: FUN_011893f0
   Address: 011893f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall FUN_011893f0(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  LPCRITICAL_SECTION unaff_EBP;
  undefined4 *puVar8;
  int unaff_ESI;
  int iVar9;
  uint unaff_retaddr;
  undefined1 local_104 [252];
  undefined4 *puStack_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  (**(code **)(*(int *)*param_3 + 0xc))((int *)*param_3,local_104,0x104);
  iVar2 = param_3[0x15];
  uVar6 = param_3[0x14];
  if ((iVar2 <= param_2) && ((iVar2 < param_2 || (uVar6 < unaff_retaddr)))) {
    uVar3 = unaff_retaddr - uVar6;
    uVar5 = param_3[0x12];
    iVar1 = (param_2 - iVar2) - (uint)(unaff_retaddr < uVar6);
    iVar9 = param_3[0x13];
    if ((iVar9 <= iVar1) && ((iVar9 < iVar1 || (uVar5 < uVar3)))) {
      iVar1 = iVar9;
      uVar3 = uVar5;
    }
    param_3[0x12] = uVar5 - uVar3;
    param_3[0x13] = (iVar9 - iVar1) - (uint)(uVar5 < uVar3);
    uVar5 = param_3[0xe];
    iVar9 = param_3[0xf] + iVar1 + (uint)CARRY4(uVar5,uVar3);
    if ((iVar9 < (int)param_3[0xb]) ||
       ((iVar9 <= (int)param_3[0xb] && (uVar5 + uVar3 < (uint)param_3[10])))) {
      param_3[0xe] = uVar5 + uVar3;
      param_3[0xf] = iVar9;
    }
    else {
      uVar7 = uVar5 - param_3[10];
      param_3[0xe] = uVar7 + uVar3;
      param_3[0xf] = ((param_3[0xf] - param_3[0xb]) - (uint)(uVar5 < (uint)param_3[10])) + iVar1 +
                     (uint)CARRY4(uVar7,uVar3);
    }
    param_3[0x14] = uVar6 + uVar3;
    param_3[0x15] = iVar2 + iVar1 + (uint)CARRY4(uVar6,uVar3);
    if (((param_3[0x12] == 0 && param_3[0x13] == 0) || (unaff_retaddr != param_3[0x14])) ||
       (param_1 = unaff_ESI, param_2 != param_3[0x15])) {
      LeaveCriticalSection(unaff_EBP);
      return 0;
    }
  }
  iVar2 = param_3[0x13];
  puVar8 = param_3;
  if ((iVar2 <= param_4) && ((iVar2 < param_4 || ((undefined4 *)param_3[0x12] <= param_3)))) {
    puVar8 = (undefined4 *)param_3[0x12];
    param_4 = iVar2;
  }
  puVar4 = (undefined4 *)(param_3[10] - param_3[0xe]);
  iVar2 = (param_3[0xb] - param_3[0xf]) - (uint)((uint)param_3[10] < (uint)param_3[0xe]);
  if ((iVar2 <= param_4) && ((iVar2 < param_4 || (puVar4 <= puVar8)))) {
    puVar8 = puVar4;
    param_4 = iVar2;
  }
  if (*(int *)(param_1 + 400) == 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x504) * (int)puVar8;
    puVar4 = (undefined4 *)(param_3[0xe] * (uint)*(ushort *)(param_1 + 0x504) + param_3[0xc]);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puStack_8 = *puVar4;
      puVar4 = puVar4 + 1;
      puStack_8 = puStack_8 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puStack_8 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puStack_8 = (undefined4 *)((int)puStack_8 + 1);
    }
  }
  else {
    _SfAudio_FillSilence_12(param_1 + 0x4f8,puStack_8,puVar8);
  }
  uVar6 = param_3[0xe];
  iVar2 = param_3[0xf] + param_4 + (uint)CARRY4(uVar6,(uint)puVar8);
  uVar5 = param_3[10];
  if ((iVar2 < (int)param_3[0xb]) || ((iVar2 <= (int)param_3[0xb] && (uVar6 + (int)puVar8 < uVar5)))
     ) {
    param_3[0xe] = uVar6 + (int)puVar8;
    param_3[0xf] = iVar2;
  }
  else {
    param_3[0xe] = (uVar6 - uVar5) + (int)puVar8;
    param_3[0xf] = ((param_3[0xf] - param_3[0xb]) - (uint)(uVar6 < uVar5)) + param_4 +
                   (uint)CARRY4(uVar6 - uVar5,(uint)puVar8);
  }
  puVar4 = (undefined4 *)param_3[0x12];
  uVar6 = param_3[0x14];
  param_3[0x12] = (int)puVar4 - (int)puVar8;
  param_3[0x14] = uVar6 + (int)puVar8;
  param_3[0x13] = (param_3[0x13] - param_4) - (uint)(puVar4 < puVar8);
  param_3[0x15] = param_3[0x15] + param_4 + (uint)CARRY4(uVar6,(uint)puVar8);
  SetEvent(*(HANDLE *)(unaff_ESI + 0x660));
  LeaveCriticalSection(unaff_EBP);
  return CONCAT44(param_4,puVar8);
}


