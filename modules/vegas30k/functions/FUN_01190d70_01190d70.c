/* Module: vegas30k.dll
   Function: FUN_01190d70
   Address: 01190d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_01190d70(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_18 [4];
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xa4);
  if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    _SFSMPTE_NanoToSMPTE_12(0,0,param_1 + 0x74);
  }
  else {
    lVar6 = 0;
    if (param_2 != 0) {
      uVar1 = _SfGetMillisec_0();
      *(undefined4 *)(param_1 + 0x1168) = uVar1;
      *(undefined4 *)(param_1 + 0x1160) = uVar1;
    }
    if (*(int *)(param_1 + 0x58) == 8) {
      puVar3 = (undefined4 *)(param_1 + 0x44);
      puVar4 = (undefined4 *)(param_1 + 0x74);
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar6 = CONCAT44(-(*(int *)(param_1 + 0xc4) + (uint)(*(int *)(param_1 + 0xc0) != 0)),
                       -*(int *)(param_1 + 0xc0));
    }
    else if (*(int *)(param_1 + 0x58) == 4) {
      _SFSMPTE_IncrementByFrame_8(param_1 + 0x74,1);
    }
    else {
      puVar3 = local_18;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_18[0] = *(undefined4 *)(param_1 + 0x44);
      local_8 = 2;
      uVar5 = _SFSMPTE_SMPTEToNanos_4(local_18);
      uVar5 = __alldiv(uVar5,8,0);
      lVar6 = __allmul(*(uint *)(param_1 + 0x58) & 3,0,uVar5);
    }
    iVar2 = _SFSMPTE_SMPTECompare_8(param_1 + 0x74,param_1 + 200);
    if (iVar2 < 0) {
      if (param_2 != 0) {
        *(undefined4 *)(param_1 + 0xa0) = 0;
        *(undefined4 *)(param_1 + 0xa4) = 0;
        return;
      }
    }
    else {
      lVar7 = _SFSMPTE_SMPTEToNanos_4(param_1 + 0x74);
      lVar6 = lVar6 + lVar7;
      if (((int)((ulonglong)lVar6 >> 0x20) < 1) && (lVar6 < 0)) {
        lVar6 = 0;
      }
      if (param_2 != 0) {
        *(longlong *)(param_1 + 0xa0) = lVar6;
        return;
      }
    }
  }
  return;
}


