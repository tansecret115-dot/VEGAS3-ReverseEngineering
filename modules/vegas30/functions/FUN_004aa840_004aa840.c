/* Module: vegas30.exe
   Function: FUN_004aa840
   Address: 004aa840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004aa840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_004aa400(param_1,param_4);
  if ((0 < iVar1) && (iVar3 = 0, 0 < iVar1)) {
    do {
      uVar2 = FUN_004aa2f0(param_1,param_4,iVar3,0);
      FUN_004aa640(uVar2,param_2,param_3,param_5,param_6,param_7);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}


