/* Module: vegas30.exe
   Function: FUN_004281d0
   Address: 004281d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004281d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x94);
  iVar3 = 2;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_00425c30(DAT_006471fc,"Vegas.Class.VideoPreview.Output");
  FUN_00425450(DAT_006471fc,"Vegas.Class.VideoPreview.Transport");
  return 0;
}


