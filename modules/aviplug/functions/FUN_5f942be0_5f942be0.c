/* Module: aviplug.dll
   Function: FUN_5f942be0
   Address: 5f942be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f942be0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_1[0x19d];
  if ((-1 < iVar2) && (iVar2 = FUN_5f941c30((int)param_1,&param_1), -1 < iVar2)) {
    param_1[2] = 5;
    param_1[4] = param_2;
    param_1[5] = param_3;
    FUN_5f98fe00(puVar1 + 8,param_1);
  }
  return iVar2;
}


