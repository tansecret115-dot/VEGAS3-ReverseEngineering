/* Module: cook3260.dll
   Function: FUN_633a7160
   Address: 633a7160
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_633a7160(void *this,byte *param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  uVar4 = 0;
  bVar1 = *param_1;
  pbVar2 = param_1;
  while (bVar1 != 0) {
    uVar4 = uVar4 * 0x21 + (int)(char)bVar1;
    pbVar2 = (byte *)FUN_633a7520((LPCSTR)pbVar2);
    bVar1 = *pbVar2;
  }
  uVar4 = uVar4 % *(uint *)((int)this + 4);
  *param_2 = uVar4;
  if ((*(int *)this == 0) || (piVar6 = *(int **)(*(int *)this + uVar4 * 4), piVar6 == (int *)0x0)) {
    return (int *)0x0;
  }
  do {
    pbVar2 = (byte *)piVar6[2];
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_633a71d4:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_633a71d9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_633a71d4;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_633a71d9:
    if (iVar3 == 0) {
      return piVar6;
    }
    piVar6 = (int *)*piVar6;
    if (piVar6 == (int *)0x0) {
      return (int *)0x0;
    }
  } while( true );
}


