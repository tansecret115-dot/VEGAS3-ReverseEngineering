/* Module: sfmarket2.dll
   Function: FUN_004079e0
   Address: 004079e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004079e0(uint param_1,ushort *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  
  while( true ) {
    if (param_2 == (ushort *)0x0) {
      return 0;
    }
    uVar1 = param_2[1];
    if (*param_2 == param_1) break;
    param_2 = (ushort *)((int)(param_2 + 4) + *(int *)(param_2 + 2));
  }
  iVar2 = *(int *)(param_2 + 4);
  puVar4 = param_2 + 6;
  iVar5 = *(int *)(param_2 + 2) + -4;
  if (iVar2 != 0) {
    uVar3 = Ordinal_4(puVar4,iVar2);
    puVar4 = puVar4 + iVar2;
    iVar5 = iVar5 + iVar2 * -2;
    Ordinal_6(uVar3);
  }
  if ((uVar1 != 0x37a) && (uVar1 != 0x37b)) {
    if (uVar1 == 0x376) {
      *param_3 = (int)puVar4;
    }
    return iVar5;
  }
  iVar2 = *(int *)puVar4;
  *param_3 = iVar2 + (int)puVar4;
  return iVar5 - iVar2;
}


