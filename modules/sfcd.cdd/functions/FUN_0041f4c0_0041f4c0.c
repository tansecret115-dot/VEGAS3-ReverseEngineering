/* Module: sfcd.cdd
   Function: FUN_0041f4c0
   Address: 0041f4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041f4c0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = FUN_0041f470(param_1);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = (int *)FUN_0041f490(param_1,uVar3);
      if (param_2 == *piVar2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0xffffffff;
}


