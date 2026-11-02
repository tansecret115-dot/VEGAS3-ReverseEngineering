/* Module: aviplug.dll
   Function: FUN_5f941c90
   Address: 5f941c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f941c90(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = param_1;
  iVar3 = param_1[0x19d];
  if ((-1 < iVar3) && (iVar3 = FUN_5f941c30((int)param_1,&param_1), iVar2 = param_3, -1 < iVar3)) {
    InterlockedIncrement((LONG *)(param_3 + 0x1c));
    param_1[2] = 2;
    param_1[4] = param_2;
    param_1[5] = iVar2;
    FUN_5f98fe00(puVar1 + 8,param_1);
    return iVar3;
  }
  return iVar3;
}


