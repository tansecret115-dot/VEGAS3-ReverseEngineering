/* Module: sfpaplug.dll
   Function: FUN_00435270
   Address: 00435270
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_00435270(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)0x80004002;
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x2a0) == 0) && (*(int *)(param_1 + 0x2a4) == 0)) {
    piVar2 = FUN_00435a90(this,param_1);
  }
  if (*(int *)(param_1 + 0x2b4) == 0) {
    return (int *)0x8004e048;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2a0);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)(**(code **)*puVar1)(puVar1,&DAT_0044db10,param_2);
    return piVar2;
  }
  if (-1 < (int)piVar2) {
    piVar2 = (int *)0x80004002;
  }
  return piVar2;
}


