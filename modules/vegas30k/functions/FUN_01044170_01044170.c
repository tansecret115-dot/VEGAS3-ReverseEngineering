/* Module: vegas30k.dll
   Function: FUN_01044170
   Address: 01044170
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01044170(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = -0x7fffbffe;
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x2dc) == 0) && (*(int *)(param_1 + 0x2e0) == 0)) {
    iVar2 = FUN_010441e0(param_1);
  }
  if (*(int *)(param_1 + 0x2f0) == 0) {
    return -0x7ffb1fb8;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2dc);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_011d9f00,param_2);
    return iVar2;
  }
  if (-1 < iVar2) {
    iVar2 = -0x7fffbffe;
  }
  return iVar2;
}


