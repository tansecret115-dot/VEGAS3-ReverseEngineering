/* Module: mpegin.dll
   Function: FUN_100152b7
   Address: 100152b7
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100152b7(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_10014c9c(param_1);
    FUN_10015651(param_1);
    iVar1 = FUN_10015571(param_1[4]);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_1000e22b((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}


