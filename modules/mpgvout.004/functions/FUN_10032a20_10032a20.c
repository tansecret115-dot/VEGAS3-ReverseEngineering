/* Module: mpgvout.004
   Function: FUN_10032a20
   Address: 10032a20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x10032afb) */

undefined8 __cdecl FUN_10032a20(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      iVar4 = (int)(CONCAT44(param_2,param_1) / (ulonglong)param_3);
      uVar7 = 0;
    }
    else {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      uVar7 = param_2 / param_3;
      iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                   (ulonglong)param_3);
    }
    goto LAB_10032b03;
  }
  if (param_2 < param_4) {
LAB_10032a85:
    iVar4 = 0;
  }
  else {
    uVar7 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar7 == 0; uVar7 = uVar7 - 1) {
      }
    }
    if ((uVar7 ^ 0x1f) == 0) {
      if ((param_2 <= param_4) && (param_1 < param_3)) goto LAB_10032a85;
      iVar4 = 1;
    }
    else {
      bVar5 = (byte)(uVar7 ^ 0x1f);
      bVar6 = 0x20 - bVar5;
      uVar1 = (ulonglong)(param_4 << (bVar5 & 0x1f) | param_3 >> (bVar6 & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bVar6 & 0x1f),
                       param_2 << (bVar5 & 0x1f) | param_1 >> (bVar6 & 0x1f));
      uVar3 = uVar2 / uVar1;
      iVar4 = (int)uVar3;
      if (CONCAT44((int)(uVar2 % uVar1),param_1 << (bVar5 & 0x1f)) <
          (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (bVar5 & 0x1f))) {
        iVar4 = iVar4 + -1;
      }
    }
  }
  uVar7 = 0;
LAB_10032b03:
  return CONCAT44(uVar7,iVar4);
}


