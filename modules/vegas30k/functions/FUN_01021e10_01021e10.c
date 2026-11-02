/* Module: vegas30k.dll
   Function: FUN_01021e10
   Address: 01021e10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01021e10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  if (param_3 < 0) {
    iVar5 = -1;
    param_3 = -param_3;
  }
  else {
    iVar5 = 1;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_2 + 0xc);
  iVar6 = *(int *)(iVar4 + 4) - *(int *)(iVar1 + 4);
  switch(param_3) {
  case 1:
    return iVar6 * iVar5;
  case 2:
    if (*(short *)(param_1 + 0x12) == 0) {
      param_1 = param_1 + 0x14;
    }
    else {
      param_1 = *(ushort *)(param_1 + 0x10) + 0x14 + param_1;
    }
    if (*(short *)(param_2 + 0x12) == 0) {
      param_2 = param_2 + 0x14;
    }
    else {
      param_2 = *(ushort *)(param_2 + 0x10) + 0x14 + param_2;
    }
    FUN_01021ac0(local_104,param_1,1);
    FUN_01021ac0(local_208,param_2,1);
    iVar4 = lstrcmpA(local_104,local_208);
    iVar5 = iVar4 * iVar5;
    break;
  case 3:
    iVar2 = *(int *)(iVar4 + 0xc);
    iVar3 = *(int *)(iVar1 + 0xc);
    if ((*(uint *)(iVar4 + 8) == *(uint *)(iVar1 + 8)) && (iVar2 == iVar3)) {
      return iVar6;
    }
    if ((iVar2 < iVar3) || ((iVar2 <= iVar3 && (*(uint *)(iVar4 + 8) <= *(uint *)(iVar1 + 8))))) {
LAB_01021f0a:
      iVar5 = -iVar5;
    }
    break;
  case 4:
    iVar2 = *(int *)(iVar4 + 0x14);
    iVar3 = *(int *)(iVar1 + 0x14);
    if ((*(uint *)(iVar4 + 0x10) == *(uint *)(iVar1 + 0x10)) && (iVar2 == iVar3)) {
      return iVar6;
    }
    if ((iVar2 < iVar3) ||
       ((iVar2 <= iVar3 && (*(uint *)(iVar4 + 0x10) <= *(uint *)(iVar1 + 0x10)))))
    goto LAB_01021f0a;
    break;
  default:
    goto LAB_01021f14;
  }
  if (iVar5 != 0) {
    return iVar5;
  }
LAB_01021f14:
  return iVar6;
}


