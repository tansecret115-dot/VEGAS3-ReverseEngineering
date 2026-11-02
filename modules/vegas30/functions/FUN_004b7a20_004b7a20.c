/* Module: vegas30.exe
   Function: FUN_004b7a20
   Address: 004b7a20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004b7a20(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1 - 1 & param_1;
  while (uVar1 = uVar2, uVar1 != 0) {
    param_1 = uVar1;
    uVar2 = uVar1 - 1 & uVar1;
  }
  iVar3 = param_1 * 2;
  *param_2 = 4;
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  return iVar3;
}


