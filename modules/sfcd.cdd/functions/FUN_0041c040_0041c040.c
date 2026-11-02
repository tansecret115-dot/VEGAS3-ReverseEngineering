/* Module: sfcd.cdd
   Function: FUN_0041c040
   Address: 0041c040
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041c040(HSFCD__ *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = -0x7ffb1f3f;
  switch(*(uint *)(*(int *)(param_1 + 0x160) + 0x40) & 0xff) {
  case 1:
    iVar1 = FUN_0041b740(param_1,param_2);
    return iVar1;
  case 2:
    iVar1 = FUN_0041b5c0(param_1,param_2);
    return iVar1;
  case 3:
    break;
  case 4:
    iVar1 = FUN_0041be10(param_1,param_2);
    return iVar1;
  case 5:
    iVar1 = FUN_0041b8c0(param_1,param_2);
    return iVar1;
  case 6:
    iVar1 = FUN_0041bf40(param_1,param_2,0);
    return iVar1;
  case 7:
    iVar1 = FUN_0041bf40(param_1,param_2,1);
    return iVar1;
  case 8:
    iVar1 = FUN_0041b9d0(param_1,param_2);
  default:
    return iVar1;
  }
  if ((*(byte *)(param_2 + 8) & 4) == 0) {
    iVar1 = FUN_0041bbc0(param_1,param_2);
    return iVar1;
  }
  iVar1 = FUN_0041bd10(param_1,param_2);
  return iVar1;
}


