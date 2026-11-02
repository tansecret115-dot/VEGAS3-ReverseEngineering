/* Module: InstMsi-x86w.exe
   Function: FUN_0100749c
   Address: 0100749c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __fastcall
FUN_0100749c(undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (3 < (int)param_4) {
    if (0xf < (int)param_4) {
      uVar5 = param_4 >> 4;
      do {
        uVar4 = *param_3;
        puVar1 = param_3 + 1;
        puVar2 = param_3 + 2;
        puVar3 = param_3 + 3;
        param_3 = param_3 + 4;
        param_5 = param_5 ^ uVar4 ^ *puVar2 ^ *puVar1 ^ *puVar3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    for (uVar5 = param_4 >> 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      param_5 = param_5 ^ *param_3;
      param_3 = param_3 + 1;
    }
  }
  uVar5 = param_4 & 3;
  if (uVar5 == 3) {
    uVar5 = *param_3;
    param_3 = (uint *)((int)param_3 + 1);
    param_5 = param_5 ^ (uint)(byte)uVar5 << 0x10;
LAB_010074fc:
    uVar5 = *param_3;
    param_3 = (uint *)((int)param_3 + 1);
    param_5 = param_5 ^ (uint)(byte)uVar5 << 8;
  }
  else {
    if (uVar5 == 2) goto LAB_010074fc;
    if (uVar5 != 1) goto LAB_01007513;
  }
  param_5 = param_5 ^ (byte)*param_3;
LAB_01007513:
  return CONCAT44(param_2,param_5);
}


