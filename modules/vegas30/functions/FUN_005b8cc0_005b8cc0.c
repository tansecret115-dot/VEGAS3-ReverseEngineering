/* Module: vegas30.exe
   Function: FUN_005b8cc0
   Address: 005b8cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b8cc0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc34) + 8) + param_2 * 4);
  if (param_3 == 0) {
    puVar2 = (undefined4 *)(iVar1 + 0xcc);
  }
  else {
    if (param_3 != 5) {
      return;
    }
    puVar2 = (undefined4 *)(iVar1 + 0xdc);
  }
  *param_4 = *puVar2;
  param_4[1] = puVar2[1];
  param_4[2] = puVar2[2];
  param_4[3] = puVar2[3];
  return;
}


