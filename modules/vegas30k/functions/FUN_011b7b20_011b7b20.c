/* Module: vegas30k.dll
   Function: FUN_011b7b20
   Address: 011b7b20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011b7b20(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  iVar4 = 0x10;
  bVar7 = false;
  iVar1 = 0;
  bVar8 = true;
  pbVar5 = param_2;
  pbVar6 = (byte *)&DAT_011dab80;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *pbVar5 < *pbVar6;
    bVar8 = *pbVar5 == *pbVar6;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar1 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
  }
  *param_3 = 0;
  if (iVar1 != 0) {
    iVar1 = 4;
    bVar7 = true;
    pbVar5 = param_2;
    piVar3 = &DAT_011d9b20;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar7 = *(int *)pbVar5 == *piVar3;
      pbVar5 = pbVar5 + 4;
      piVar3 = piVar3 + 1;
    } while (bVar7);
    if (!bVar7) {
      return -0x7fffbffe;
    }
  }
  iVar1 = -0x7ff8fff2;
  hMem = GlobalAlloc(0x40,0x4c);
  pvVar2 = GlobalLock(hMem);
  if (pvVar2 != (LPVOID)0x0) {
    piVar3 = (int *)FUN_011b7650();
    if (piVar3 != (int *)0x0) {
      iVar1 = FUN_011b76c0();
      if (-1 < iVar1) {
        (**(code **)*piVar3)(piVar3,param_2,param_3);
        return 0;
      }
      (**(code **)(*piVar3 + 0x4c))(1);
    }
  }
  return iVar1;
}


