/* Module: mcmpgdec.dll
   Function: FUN_1000dc78
   Address: 1000dc78
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000dc78(int *param_1,int *param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0x10;
  iVar1 = *param_2;
  puVar2 = (undefined4 *)(param_3 + *param_1 + param_4 * iVar1);
  do {
    *puVar2 = *param_5;
    puVar2[1] = param_5[1];
    puVar2[2] = param_5[2];
    puVar2[3] = param_5[3];
    param_5 = param_5 + 4;
    puVar2 = (undefined4 *)((int)puVar2 + iVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 8;
  iVar1 = param_2[1];
  puVar2 = (undefined4 *)((param_3 >> 1) + param_1[1] + (param_4 >> 1) * iVar1);
  do {
    *puVar2 = *param_5;
    puVar2[1] = param_5[1];
    param_5 = param_5 + 2;
    puVar2 = (undefined4 *)((int)puVar2 + iVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 8;
  iVar1 = param_2[2];
  puVar2 = (undefined4 *)((param_4 >> 1) * iVar1 + (param_3 >> 1) + param_1[2]);
  do {
    *puVar2 = *param_5;
    puVar2[1] = param_5[1];
    param_5 = param_5 + 2;
    puVar2 = (undefined4 *)((int)puVar2 + iVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


