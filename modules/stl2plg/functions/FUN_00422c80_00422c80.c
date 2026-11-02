/* Module: stl2plg.dll
   Function: FUN_00422c80
   Address: 00422c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422c80(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 4;
  pbVar2 = param_2;
  do {
    bVar1 = pbVar2[(int)&param_1 - (int)param_2];
    if ((bVar1 < 0x20) || (0x7e < bVar1)) {
      bVar1 = 0x2e;
    }
    *pbVar2 = bVar1;
    pbVar2 = pbVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_2[4] = 0;
  return;
}


