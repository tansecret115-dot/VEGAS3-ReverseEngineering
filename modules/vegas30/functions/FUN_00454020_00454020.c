/* Module: vegas30.exe
   Function: FUN_00454020
   Address: 00454020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454020(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0xb78) != 0) || (*(int *)(param_1 + 0xb7c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xc2c);
    iVar3 = 0;
    if (0 < (int)uVar1) {
      piVar2 = (int *)(param_1 + 0xbe0);
      do {
        if ((((piVar2[-2] == *(int *)(param_1 + 0xb70)) && (piVar2[-1] == *(int *)(param_1 + 0xb74))
             ) && (*piVar2 == *(int *)(param_1 + 0xb78))) &&
           (piVar2[1] == *(int *)(param_1 + 0xb7c))) {
          return;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 4;
      } while (iVar3 < (int)uVar1);
    }
    if (uVar1 < 5) {
      *(uint *)(param_1 + 0xc2c) = uVar1 + 1;
    }
    iVar3 = *(int *)(param_1 + 0xc34);
    if (param_2 != 0) {
      *(int *)(param_1 + 0xc28) = iVar3;
    }
    iVar4 = (iVar3 + 0xbe) * 0x10;
    *(uint *)(param_1 + 0xc34) = (iVar3 + 1U) % 5;
    *(undefined4 *)(iVar3 * 0x10 + 0xbd8 + param_1) = *(undefined4 *)(param_1 + 0xb70);
    *(undefined4 *)(iVar3 * 0x10 + 0xbdc + param_1) = *(undefined4 *)(param_1 + 0xb74);
    *(undefined4 *)(iVar4 + param_1) = *(undefined4 *)(param_1 + 0xb78);
    *(undefined4 *)(iVar4 + 4 + param_1) = *(undefined4 *)(param_1 + 0xb7c);
  }
  return;
}


