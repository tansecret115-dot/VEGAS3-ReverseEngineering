/* Module: sfcdi.dll
   Function: FUN_5bf2bbe0
   Address: 5bf2bbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf2bbe0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = FUN_5bf2bb90(param_1);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = (int *)FUN_5bf2bbb0(param_1,uVar3);
      if (param_2 == *piVar2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0xffffffff;
}


