/* Module: vidcap30.exe
   Function: FUN_0057b500
   Address: 0057b500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0057b500(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = 4;
  bVar3 = true;
  piVar2 = &DAT_005a5aa8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_2 == *piVar2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    FUN_0057b5b0(param_1,param_3);
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}


