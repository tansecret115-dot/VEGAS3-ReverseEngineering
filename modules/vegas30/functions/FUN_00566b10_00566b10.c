/* Module: vegas30.exe
   Function: FUN_00566b10
   Address: 00566b10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00566b10(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  
  iVar2 = param_1[1] + -1;
  param_1[1] = iVar2;
  if (iVar2 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      piVar1 = (int *)param_1[6];
      *param_1 = &PTR_LAB_0061b574;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      pvVar3 = GlobalHandle(param_1);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(param_1);
      GlobalFree(pvVar3);
    }
    iVar2 = 0;
  }
  return iVar2;
}


