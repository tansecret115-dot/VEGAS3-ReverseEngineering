/* Module: vidcap30.exe
   Function: FUN_00467500
   Address: 00467500
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00467500(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x90);
  iVar2 = (**(code **)(*piVar1 + 0x54))();
  if (-1 < iVar2) {
    iVar2 = (**(code **)(u__avi_005928f0._0_4_ + 0x14))(L".avi",*(undefined4 *)(param_1 + 0x90));
    if (-1 < iVar2) {
      return iVar2;
    }
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return iVar2;
}


