/* Module: vidcap30.exe
   Function: FUN_0043a6c0
   Address: 0043a6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0043a711) */

undefined4 FUN_0043a6c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  uVar2 = DAT_005bb838;
  lVar1 = CONCAT44(param_3,param_2);
  uVar4 = 0;
  lVar5 = FUN_0042ea00(DAT_005bb838);
  if (lVar5 != lVar1) {
    uVar3 = FUN_0042f0a0(uVar2);
    switch(uVar3) {
    case 0:
    case 2:
    case 3:
      _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x610,1,0);
      uVar4 = FUN_00427780(param_1 + 0xa48,param_2,param_3);
      break;
    case 1:
      lVar5 = FUN_0042ea80(uVar2);
      if (lVar5 <= lVar1) {
        lVar1 = lVar5;
      }
      uVar4 = FUN_00424ef0(param_1 + 0xd8,lVar1);
      _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x610,1,(int)lVar1);
    }
    FUN_0042e9c0(uVar2,lVar1);
    FUN_0043adc0(param_1);
  }
  return uVar4;
}


