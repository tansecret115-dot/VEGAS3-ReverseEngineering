/* Module: rmbe3260.dll
   Function: FUN_660262e0
   Address: 660262e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_660262e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_410 [1024];
  int local_10 [3];
  
  iVar3 = 0;
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + iVar2 * 4);
      if (iVar1 != 0) {
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x10))(iVar1 + 0x14,local_410,0x400);
        if (-1 < iVar3) {
          FUN_6605b7e0(local_10,local_410);
          FUN_6604f6a0(*(void **)(param_1 + 0x18),0,local_10,iVar2);
          FUN_6605b770(local_10);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 9);
    return iVar3;
  }
  return -0x7ffbfff9;
}


