/* Module: vegas30.exe
   Function: FUN_005e9b10
   Address: 005e9b10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e9b10(undefined4 param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = param_2;
  iVar2 = 0;
  uVar3 = 0;
  if (param_2 != (uint *)0x0) {
    uVar3 = *param_2;
  }
  iVar5 = 0;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      iVar2 = FUN_005e9ac0(param_1,puVar1,uVar4,&param_2);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar5 = iVar5 + (int)param_2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  *param_3 = iVar5;
  return iVar2;
}


