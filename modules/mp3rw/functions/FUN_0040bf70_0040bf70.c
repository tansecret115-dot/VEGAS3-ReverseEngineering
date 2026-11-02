/* Module: mp3rw.dll
   Function: FUN_0040bf70
   Address: 0040bf70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040bf70(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  pvVar1 = DAT_004a8128;
  if (DAT_004a8128 == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x240) = 3;
    return 0;
  }
  iVar2 = FUN_00412f90(DAT_004a8128,&local_4,&local_8,2);
  iVar3 = FUN_004151b0(pvVar1);
  if (((iVar2 < 0) || (iVar2 == 0x4e131)) && (iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x240) = 2;
    return iVar3;
  }
  if (iVar2 == 0x4e132) {
    *(undefined4 *)(param_1 + 0x240) = 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x240) = 3;
  return 0;
}


