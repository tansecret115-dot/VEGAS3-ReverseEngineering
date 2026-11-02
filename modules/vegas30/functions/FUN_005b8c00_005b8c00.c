/* Module: vegas30.exe
   Function: FUN_005b8c00
   Address: 005b8c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005b8c00(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_005b9fc0(param_1,param_2,0);
  uVar2 = DAT_006477ec;
  if (*(double *)(iVar3 + 0xa8) <= _DAT_00610fd8) {
    *(undefined4 *)(iVar3 + 0xa8) = DAT_006477e8;
    *(undefined4 *)(iVar3 + 0xac) = uVar2;
  }
  dVar1 = *(double *)(iVar3 + 0xa8);
  FUN_005ba030(param_1,iVar3,0,1);
  return (float10)dVar1;
}


