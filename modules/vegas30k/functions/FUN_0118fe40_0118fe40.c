/* Module: vegas30k.dll
   Function: FUN_0118fe40
   Address: 0118fe40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118fe40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_30 [6];
  undefined4 local_18 [6];
  
  iVar1 = -param_2;
  iVar2 = -(param_3 + (uint)(param_2 != 0));
  uVar3 = CONCAT44(iVar2,iVar1);
  if ((iVar2 < 1) && (uVar3 = CONCAT44(iVar2,iVar1), iVar2 < 0)) {
    local_18[0] = *(undefined4 *)(param_1 + 0x10);
    _SFSMPTE_NanoToSMPTE_12(param_2,-(iVar2 + (uint)(iVar1 != 0)),local_18);
    local_30[0] = *(undefined4 *)(param_1 + 0x10);
    _SFSMPTE_NanoToSMPTE_12(0,0,local_30);
    _SFSMPTE_SubtractSMPTE_8(local_30,local_18);
    uVar3 = _SFSMPTE_SMPTEToNanos_4(local_30);
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x10);
  _SFSMPTE_NanoToSMPTE_12(uVar3,(undefined4 *)(param_1 + 200));
  return 0;
}


