/* Module: vegas30k.dll
   Function: FUN_0118f430
   Address: 0118f430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118f430(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x6c);
      _SFSMPTE_NanoToSMPTE_12
                (*(uint *)(param_1 + 0x70) + param_2,
                 *(int *)(param_1 + 0x74) + param_3 +
                 (uint)CARRY4(*(uint *)(param_1 + 0x70),param_2),(undefined4 *)(param_1 + 0x30));
      syncoutSetParam(*(undefined4 *)(param_1 + 0x28),4,*(undefined4 *)(param_1 + 0x34));
      syncoutSetParam(*(undefined4 *)(param_1 + 0x28),5,*(undefined4 *)(param_1 + 0x38));
      syncoutSetParam(*(undefined4 *)(param_1 + 0x28),6,*(undefined4 *)(param_1 + 0x3c));
      syncoutSetParam(*(undefined4 *)(param_1 + 0x28),7,*(undefined4 *)(param_1 + 0x40));
      syncoutSetParam(*(undefined4 *)(param_1 + 0x28),8,0);
      if ((*(int *)(param_1 + 0x7c) != 0) && (*(int *)(param_1 + 0x88) != 0)) {
        syncoutSendFFrameMsg(*(undefined4 *)(param_1 + 0x28));
        return 0;
      }
    }
    else {
      syncoutUpdatePosition
                (*(undefined4 *)(param_1 + 0x28),*(uint *)(param_1 + 0x70) + param_2,
                 *(int *)(param_1 + 0x74) + param_3 +
                 (uint)CARRY4(*(uint *)(param_1 + 0x70),param_2),600000000,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}


