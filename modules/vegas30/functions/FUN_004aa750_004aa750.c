/* Module: vegas30.exe
   Function: FUN_004aa750
   Address: 004aa750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004aa750(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = param_2;
  lVar1 = CONCAT44(param_4,param_3);
  if (DAT_0064a518 == 0) {
    local_8 = 0;
    local_4 = 0;
  }
  else {
    local_8 = DAT_00649988;
    local_4 = DAT_0064998c;
  }
  param_2 = FUN_004aa030(param_2,0);
  param_3 = FUN_004aa1a0(uVar2);
  if (0 < param_3) {
    do {
      iVar3 = FUN_004aa200(uVar2,param_2);
      if (0 < iVar3) {
        if (((int)((ulonglong)lVar1 >> 0x20) < 1) && (lVar1 < 0)) {
          lVar1 = 0;
        }
        iVar5 = 0;
        if (0 < iVar3) {
          do {
            pbVar4 = (byte *)FUN_004aa0b0(uVar2,param_2,iVar5,0);
            if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x40) == 0)) {
              FUN_004aa4b0(param_1,pbVar4,lVar1);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar3);
        }
        lVar6 = FUN_004aa280(uVar2,param_2);
        lVar1 = (lVar6 - CONCAT44(local_4,local_8)) + lVar1;
      }
      param_2 = FUN_004aa030(uVar2,&param_2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


