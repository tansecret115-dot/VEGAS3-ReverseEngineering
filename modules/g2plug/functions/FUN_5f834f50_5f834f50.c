/* Module: g2plug.dll
   Function: FUN_5f834f50
   Address: 5f834f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_5f834f50(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)0x80004002;
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x318) == 0) && (*(int *)(param_1 + 0x31c) == 0)) {
    piVar2 = FUN_5f835480(this,param_1);
  }
  if (*(int *)(param_1 + 0x32c) == 0) {
    return (int *)0x8004e048;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x318);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)(**(code **)*puVar1)(puVar1,&DAT_5f869dd0,param_2);
    return piVar2;
  }
  if (-1 < (int)piVar2) {
    piVar2 = (int *)0x80004002;
  }
  return piVar2;
}


