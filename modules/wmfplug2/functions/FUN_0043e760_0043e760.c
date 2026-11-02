/* Module: wmfplug2.dll
   Function: FUN_0043e760
   Address: 0043e760
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_0043e760(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = (int *)0x80004002;
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x2dc) == 0) && (*(int *)(param_1 + 0x2e0) == 0)) {
    piVar2 = FUN_0043e7d0(this,param_1);
  }
  if (*(int *)(param_1 + 0x2f0) == 0) {
    return (int *)0x8004e048;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2dc);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)(**(code **)*puVar1)(puVar1,&DAT_0047ab70,param_2);
    return piVar2;
  }
  if (-1 < (int)piVar2) {
    piVar2 = (int *)0x80004002;
  }
  return piVar2;
}


