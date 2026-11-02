/* Module: rmme3260.dll
   Function: FUN_66239d00
   Address: 66239d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66239d00(int param_1,char *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  if (*(int *)(param_1 + 0x30) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x30) + 0x1c);
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
    return uVar2;
  }
  if (*(void **)(param_1 + 0x66) != (void *)0x0) {
    FUN_66245780(*(void **)(param_1 + 0x66),param_2);
    uVar2 = 0;
  }
  if (*(void **)(param_1 + 0x62) != (void *)0x0) {
    FUN_66245780(*(void **)(param_1 + 0x62),param_2);
    uVar2 = 0;
  }
  return uVar2;
}


