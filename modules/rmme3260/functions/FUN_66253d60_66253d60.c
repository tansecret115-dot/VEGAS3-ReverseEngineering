/* Module: rmme3260.dll
   Function: FUN_66253d60
   Address: 66253d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66253d60(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0x80004005;
  }
  do {
    iVar2 = _stricmp((char *)**(undefined4 **)(param_1 + 8),*(char **)(param_1 + 0x10));
    if (iVar2 == 0) {
      piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
      *param_2 = piVar1;
      (**(code **)(*piVar1 + 4))(piVar1);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
      return 0;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
    *(int *)(param_1 + 8) = iVar2;
  } while (iVar2 != 0);
  return 0x80004005;
}


