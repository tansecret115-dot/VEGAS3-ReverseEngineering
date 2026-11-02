/* Module: mp3rw.dll
   Function: FUN_00401ab0
   Address: 00401ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401ab0(void *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)param_1 + 8) == 0) {
    return 0x80004005;
  }
  if ((*(int **)((int)param_1 + 0x144) != (int *)0x0) && (**(int **)((int)param_1 + 0x144) != 0)) {
    if (*(char *)((int)param_1 + 0x3e) == '\0') {
      return 0x80004005;
    }
    FUN_004026a0(param_1);
    if (param_3[0xf] != 0) {
      FUN_0041ede0(DAT_004a811c,param_3[0xf]);
    }
    uVar1 = FUN_00402cb0(param_1,param_2,param_3);
    return uVar1;
  }
  return 0x80004005;
}


