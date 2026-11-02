/* Module: vegas30.exe
   Function: FUN_004aa110
   Address: 004aa110
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004aa110(int param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_3 + 1;
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < (int)uVar1) {
    uVar4 = param_1 + 0x70 + uVar3 * 0x68;
    do {
      uVar2 = -(uint)(uVar3 < uVar1) & uVar4;
      if (*(int *)(uVar2 + 0x10) == param_2) {
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar3;
          return uVar2;
        }
        return uVar2;
      }
      if (param_2 <= *(int *)(uVar2 + 0x10)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 0x68;
    } while ((int)uVar3 < (int)uVar1);
  }
  return 0;
}


