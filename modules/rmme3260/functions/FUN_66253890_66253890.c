/* Module: rmme3260.dll
   Function: FUN_66253890
   Address: 66253890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66253890(int param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)**(int **)(param_1 + 8);
  if (puVar3 == (undefined4 *)0x0) {
    return 0x80004005;
  }
  do {
    iVar2 = _stricmp(param_2,(char *)*puVar3);
    if (iVar2 == 0) {
      piVar1 = (int *)puVar3[1];
      *param_3 = piVar1;
      (**(code **)(*piVar1 + 4))(piVar1);
      return 0;
    }
    puVar3 = (undefined4 *)puVar3[2];
  } while (puVar3 != (undefined4 *)0x0);
  return 0x80004005;
}


