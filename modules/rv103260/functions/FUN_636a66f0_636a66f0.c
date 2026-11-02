/* Module: rv103260.dll
   Function: FUN_636a66f0
   Address: 636a66f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_636a66f0(void *this,byte *param_1,uint *param_2)

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
    pbVar2 = (byte *)FUN_636a6920((LPCSTR)pbVar2);
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
LAB_636a6764:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_636a6769;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_636a6764;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_636a6769:
    if (iVar3 == 0) {
      return piVar6;
    }
    piVar6 = (int *)*piVar6;
    if (piVar6 == (int *)0x0) {
      return (int *)0x0;
    }
  } while( true );
}


