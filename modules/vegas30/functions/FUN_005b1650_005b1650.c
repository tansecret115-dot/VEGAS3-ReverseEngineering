/* Module: vegas30.exe
   Function: FUN_005b1650
   Address: 005b1650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b1650(void *param_1,void *param_2)

{
  int iVar1;
  
  if ((param_2 != (void *)0x0) && (param_1 != param_2)) {
    iVar1 = FUN_005b1600(param_1,param_2);
    if (iVar1 == 0) {
      return;
    }
    param_1 = param_2;
    if (param_2 == *(void **)(iVar1 + 0x5c)) {
      *(undefined4 *)(iVar1 + 0x5c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x60) = 0;
    }
  }
  if (*(int *)((int)param_1 + 0x5c) != 0) {
    FUN_005b1650(*(int *)((int)param_1 + 0x5c),0);
  }
  if (*(int *)((int)param_1 + 0x60) != 0) {
    FUN_005b1650(*(int *)((int)param_1 + 0x60),0);
  }
  _SfList_Destroy_4(param_1);
  free(param_1);
  return;
}


