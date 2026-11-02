/* Module: sftrkfx1.dll
   Function: FUN_5cba9d20
   Address: 5cba9d20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cba9d20(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_3;
  iVar3 = param_2 + 0x30;
  if (*(uint *)(param_2 + 0x28) < 6) {
    uVar2 = 0;
    if (*(uint *)(param_2 + 0x28) != 0) {
      do {
        FUN_5cba9850(param_1,param_2,iVar3,&param_3);
        if (iVar1 == param_3) {
          return 0xffffffff;
        }
        if (iVar1 < param_3) break;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x20;
      } while (uVar2 < *(uint *)(param_2 + 0x28));
    }
    if ((uVar2 != *(uint *)(param_2 + 0x28)) && (uVar2 != 0)) {
      return uVar2;
    }
  }
  return 0xffffffff;
}


