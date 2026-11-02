/* Module: basc3260.dll
   Function: FUN_627f3ff0
   Address: 627f3ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_627f3ff0(void *this,byte *param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  bool bVar8;
  
  uVar5 = 0;
  bVar1 = *param_1;
  pbVar2 = param_1;
  if (*(int *)((int)this + 0x18) == 0) {
    while (bVar1 != 0) {
      if (((char)bVar1 < 'A') || ('Z' < (char)bVar1)) {
        uVar4 = (uint)(char)bVar1;
      }
      else {
        uVar4 = (int)(char)bVar1 | 0x20;
      }
      uVar5 = uVar4 + uVar5 * 0x21;
      pbVar2 = (byte *)FUN_627f4a30((LPCSTR)pbVar2);
      bVar1 = *pbVar2;
    }
  }
  else {
    while (bVar1 != 0) {
      uVar5 = uVar5 * 0x21 + (int)(char)bVar1;
      pbVar2 = (byte *)FUN_627f4a30((LPCSTR)pbVar2);
      bVar1 = *pbVar2;
    }
  }
  uVar5 = uVar5 % *(uint *)((int)this + 4);
  *param_2 = uVar5;
  if ((*(int *)this == 0) || (piVar7 = *(int **)(*(int *)this + uVar5 * 4), piVar7 == (int *)0x0)) {
    return (int *)0x0;
  }
  do {
    if (*(int *)((int)this + 0x18) == 0) {
      iVar3 = _stricmp((char *)piVar7[2],(char *)param_1);
    }
    else {
      pbVar2 = (byte *)piVar7[2];
      pbVar6 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_627f40b1:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto joined_r0x627f40cb;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_627f40b1;
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
    }
joined_r0x627f40cb:
    if (iVar3 == 0) {
      return piVar7;
    }
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)0x0) {
      return (int *)0x0;
    }
  } while( true );
}


