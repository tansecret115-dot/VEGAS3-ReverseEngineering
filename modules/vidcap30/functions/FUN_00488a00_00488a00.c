/* Module: vidcap30.exe
   Function: FUN_00488a00
   Address: 00488a00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00488a00(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = -0x7fffbffe;
  *param_2 = 0;
  if ((*(int *)(param_1 + 0x264) == 0) && (*(int *)(param_1 + 0x268) == 0)) {
    iVar2 = FUN_00489570(param_1);
  }
  if (*(int *)(param_1 + 0x278) == 0) {
    return -0x7ffb1fb8;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x264);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_00585f70,param_2);
    return iVar2;
  }
  if (-1 < iVar2) {
    iVar2 = -0x7fffbffe;
  }
  return iVar2;
}


