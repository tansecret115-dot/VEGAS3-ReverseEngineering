/* Module: vegas30k.dll
   Function: FUN_01190ed0
   Address: 01190ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01190ed0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((*(uint *)(param_1 + 0xc) & 0x40000) != 0) {
    FUN_01190d70(param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xa4);
  if (((*(uint *)(param_1 + 0xc) & 4) == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    _SFSMPTE_NanoToSMPTE_12(0,0,param_1 + 0x74);
    return;
  }
  if (param_2 != 0) {
    uVar2 = _SfGetMillisec_0();
    *(undefined4 *)(param_1 + 0x1168) = uVar2;
    *(undefined4 *)(param_1 + 0x1160) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (iVar3 == 8) {
    puVar4 = (undefined4 *)(param_1 + 0x44);
    puVar5 = (undefined4 *)(param_1 + 0x74);
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    if (iVar3 != 4) {
      uVar6 = __allmul(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),iVar3,0);
      uVar6 = __allrem(uVar6,4,0);
      uVar1 = *(uint *)(param_1 + 0x90);
      *(uint *)(param_1 + 0x90) = uVar1 + (uint)uVar6;
      *(uint *)(param_1 + 0x94) =
           *(int *)(param_1 + 0x94) + (int)((ulonglong)uVar6 >> 0x20) +
           (uint)CARRY4(uVar1,(uint)uVar6);
      goto LAB_01190fcb;
    }
    _SFSMPTE_IncrementByFrame_8(param_1 + 0x74,1);
  }
  uVar6 = _SFSMPTE_SMPTEToNanos_4(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x90) = uVar6;
LAB_01190fcb:
  iVar3 = *(int *)(param_1 + 0x1184);
  if (iVar3 == 0) {
    lVar7 = 0;
  }
  else {
    ftol();
    lVar7 = ftol();
  }
  *(longlong *)(param_1 + 0xa0) = lVar7;
  if (*(int *)(param_1 + 0xc0) != 0 || *(int *)(param_1 + 0xc4) != 0) {
    if (iVar3 == 0) {
      lVar8 = 0;
    }
    else {
      ftol();
      lVar8 = ftol();
    }
    *(longlong *)(param_1 + 0xa0) = lVar7 - lVar8;
  }
  if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
    SetEvent(*(HANDLE *)(param_1 + 0x24));
  }
  return;
}


