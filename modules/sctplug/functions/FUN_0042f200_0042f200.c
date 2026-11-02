/* Module: sctplug.dll
   Function: FUN_0042f200
   Address: 0042f200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042f200(int *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  uint local_4;
  
  switch(*param_1) {
  case 1:
  case 5:
    uVar5 = 0x1e;
    local_8 = 0x1a5e0;
    local_4 = 0x708;
    uVar6 = 0x278d00;
    break;
  default:
    uVar5 = 0x1e;
    param_2 = param_2 % 0x2782df;
    local_8 = 0x1a5e0;
    local_4 = 0x708;
    iVar2 = 0;
    while( true ) {
      iVar3 = (param_2 / 0x1a5e0) * 0x6c;
      uVar6 = (param_2 % 0x1a5e0) / 0x708;
      if (uVar6 != 0) {
        iVar3 = iVar3 + ((uVar6 / 10) * 0x7fffffff + uVar6) * 2;
      }
      if (iVar3 == iVar2) break;
      param_2 = param_2 + (iVar3 - iVar2);
      iVar2 = iVar3;
    }
    uVar6 = 0x2782df;
    break;
  case 3:
    uVar5 = 0x19;
    local_8 = 90000;
    local_4 = 0x5dc;
    uVar6 = 0x20f580;
    break;
  case 4:
    uVar5 = 0x18;
    local_8 = 0x15180;
    local_4 = 0x5a0;
    uVar6 = 0x1fa400;
  }
  iVar2 = (int)(((ulonglong)param_2 % (ulonglong)uVar6) / (ulonglong)local_8);
  uVar4 = (int)((ulonglong)param_2 % (ulonglong)uVar6) - iVar2 * local_8;
  uVar1 = (ulonglong)uVar4 / (ulonglong)local_4;
  iVar3 = (int)uVar1;
  uVar4 = uVar4 - iVar3 * local_4;
  uVar6 = uVar4 / uVar5;
  uVar4 = uVar4 - uVar6 * uVar5;
  if ((((*param_1 == 2) && (uVar4 < 2)) && (uVar6 == 0)) && ((int)(uVar1 % 10) != 0)) {
    uVar4 = 2;
  }
  param_1[2] = iVar3;
  param_1[3] = uVar6;
  param_1[1] = iVar2;
  param_1[4] = uVar4;
  return;
}


