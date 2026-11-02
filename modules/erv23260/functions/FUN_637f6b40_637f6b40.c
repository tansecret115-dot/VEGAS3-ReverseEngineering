/* Module: erv23260.dll
   Function: FUN_637f6b40
   Address: 637f6b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f6b40(void *this,undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  
  switch(param_1) {
  case 0:
    puVar5 = &DAT_63829358;
    pbVar4 = &DAT_63829378;
    break;
  case 1:
    puVar5 = &DAT_63829318;
    pbVar4 = &DAT_63829338;
    break;
  case 2:
    puVar5 = &DAT_638292d8;
    pbVar4 = &DAT_638292f8;
    break;
  case 3:
    puVar5 = &DAT_63829298;
    pbVar4 = &DAT_638292b8;
    break;
  default:
    return 10;
  }
  iVar6 = (int)puVar5 - (int)pbVar4;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 4;
    *(uint *)((int)&DAT_6382f1e0 + iVar2) = (uint)pbVar4[iVar6];
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    *(uint *)((int)&DAT_6382f260 + iVar2) = (uint)bVar1;
    iVar2 = iVar3;
  } while (iVar3 < 0x80);
  *(undefined4 *)((int)this + 0x1b00) = param_1;
  return 0;
}


