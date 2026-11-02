/* Module: sfs4rw.dll
   Function: FUN_00406ae0
   Address: 00406ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406ae0(HWND param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x244) != 0) {
    return 6;
  }
  if (*(int *)(param_2 + 0x22c) == 0) {
    uVar1 = FUN_0041de30(DAT_004a811c,(LPCSTR)0x1f61,param_1,FUN_00406bd0,param_2);
    return uVar1;
  }
  if (*(int *)(param_2 + 0x240) == 1) {
    uVar1 = FUN_0041de30(DAT_004a811c,(LPCSTR)0x1f62,param_1,FUN_00406bd0,param_2);
    return uVar1;
  }
  if (0 < *(int *)(param_2 + 0x1dc)) {
    *(undefined4 *)(param_2 + 0x20c) = 0;
    uVar1 = FUN_0041de30(DAT_004a811c,(LPCSTR)0x1f63,param_1,FUN_00406bd0,param_2);
    return uVar1;
  }
  if (*(int *)(param_2 + 0x1dc) == -1) {
    uVar1 = FUN_0041de30(DAT_004a811c,(LPCSTR)0x1f65,param_1,FUN_00406bd0,param_2);
    return uVar1;
  }
  *(undefined4 *)(param_2 + 0x20c) = 1;
  uVar1 = FUN_0041de30(DAT_004a811c,(LPCSTR)0x1f64,param_1,FUN_00406bd0,param_2);
  return uVar1;
}


