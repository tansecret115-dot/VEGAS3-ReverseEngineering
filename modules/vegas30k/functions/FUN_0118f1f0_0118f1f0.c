/* Module: vegas30k.dll
   Function: FUN_0118f1f0
   Address: 0118f1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0118f1f0(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    syncoutUpdatePosition
              (*(undefined4 *)(param_1 + 0x28),param_2 + *(uint *)(param_1 + 0x70),
               param_3 + *(int *)(param_1 + 0x74) + (uint)CARRY4(param_2,*(uint *)(param_1 + 0x70)),
               600000000,0);
    FUN_0118f430(param_2,param_3);
    if ((*(int *)(param_1 + 0x7c) != 0) && (*(int *)(param_1 + 0x88) == 0)) {
      syncoutSendFFrameMsg(*(undefined4 *)(param_1 + 0x28));
    }
    syncoutStartSmpte(*(undefined4 *)(param_1 + 0x28),param_2 + *(uint *)(param_1 + 0x70),
                      param_3 + *(int *)(param_1 + 0x74) +
                      (uint)CARRY4(param_2,*(uint *)(param_1 + 0x70)),*(int *)(param_1 + 0x6c) != 5)
    ;
    *(undefined4 *)(param_1 + 0x14) = 1;
    if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0x1c) != 0)) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x84);
      SetEvent(*(HANDLE *)(param_1 + 0x54));
    }
    uVar1 = 0;
  }
  return uVar1;
}


