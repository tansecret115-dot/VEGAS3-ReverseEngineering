/* Module: vegas30.exe
   Function: FUN_004aa0b0
   Address: 004aa0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004aa0b0(int param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((-1 < param_3) && (param_3 < (int)uVar1)) {
    iVar3 = 0;
    uVar2 = 0;
    if (0 < (int)uVar1) {
      param_1 = param_1 + 0x70;
      bVar4 = uVar1 != 0;
      do {
        if ((bVar4) && (param_1 != 0)) {
          if (*(int *)(param_1 + 0x10) == param_2) {
            if (iVar3 == param_3) {
              if (param_4 != (uint *)0x0) {
                *param_4 = uVar2;
                return param_1;
              }
              return param_1;
            }
            iVar3 = iVar3 + 1;
          }
          if (param_2 < *(int *)(param_1 + 0x10)) {
            return 0;
          }
        }
        uVar2 = uVar2 + 1;
        param_1 = param_1 + 0x68;
        bVar4 = uVar2 < uVar1;
      } while ((int)uVar2 < (int)uVar1);
    }
  }
  return 0;
}


