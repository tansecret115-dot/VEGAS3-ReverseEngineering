/* Module: vegas30k.dll
   Function: FUN_0113c4a0
   Address: 0113c4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113c4a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  int *unaff_EDI;
  
  iVar2 = param_1;
  piVar1 = *(int **)(param_1 + 300);
  if (piVar1 != (int *)0x0) {
    param_1 = 0;
    (**(code **)(*piVar1 + 0x18))(piVar1,&param_1);
    if (unaff_ESI != 0) {
      (**(code **)(**(int **)(iVar2 + 300) + 0x14))(*(int **)(iVar2 + 300));
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    (**(code **)(**(int **)(iVar2 + 300) + 8))(*(int **)(iVar2 + 300));
    *(undefined4 *)(iVar2 + 300) = 0;
    piVar1 = *(int **)(iVar2 + 0x138);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(iVar2 + 0x138) = 0;
    piVar1 = *(int **)(iVar2 + 0x15c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(iVar2 + 0x15c) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
    return 0;
  }
  return 1;
}


