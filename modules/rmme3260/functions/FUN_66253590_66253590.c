/* Module: rmme3260.dll
   Function: FUN_66253590
   Address: 66253590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66253590(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(int **)(param_1 + 0xc);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    iVar1 = _stricmp(param_2,(char *)*puVar2);
    if (iVar1 == 0) {
      return 1;
    }
    puVar2 = (undefined4 *)puVar2[2];
  } while (puVar2 != (undefined4 *)0x0);
  return 0;
}


