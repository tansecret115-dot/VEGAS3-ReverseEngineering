/* Module: vegas30.exe
   Function: FUN_005d0590
   Address: 005d0590
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d0590(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(param_1 + 0x244);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,0);
      (**(code **)(**(int **)(param_1 + 0x244) + 8))(*(int **)(param_1 + 0x244));
      *(undefined4 *)(param_1 + 0x244) = 0;
    }
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x244);
  if (piVar1 == (int *)0x0) {
    iVar2 = _SfAudio_CreateTrackGraph_4((undefined4 *)(param_1 + 0x244));
    if (-1 < iVar2) {
      if (DAT_0064ab78 != 0) {
        _fpreset();
      }
      piVar1 = *(int **)(param_1 + 0x244);
      (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
    }
    return iVar2;
  }
  iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
  return iVar2;
}


