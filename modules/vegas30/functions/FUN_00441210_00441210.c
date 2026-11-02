/* Module: vegas30.exe
   Function: FUN_00441210
   Address: 00441210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00441210(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_2 != 0) || (param_3 != 0)) {
    uVar4 = 0;
    uVar1 = *param_1;
    if (uVar1 != 0) {
      do {
        puVar2 = *(uint **)(param_1[2] + uVar4 * 4);
        uVar3 = *puVar2;
        *puVar2 = uVar3 + param_2;
        uVar4 = uVar4 + 1;
        puVar2[1] = puVar2[1] + param_3 + (uint)CARRY4(uVar3,param_2);
      } while (uVar4 < uVar1);
    }
  }
  return;
}


