/* Module: rmme3260.dll
   Function: FUN_66253810
   Address: 66253810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66253810(int param_1,char *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_3 == (int *)0x0) {
    return 0x80004005;
  }
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 8);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      uVar4 = (**(code **)(*(int *)(param_1 + -4) + 0xc))((int *)(param_1 + -4),param_2,param_3);
      return uVar4;
    }
    iVar3 = _stricmp(param_2,(char *)*puVar1);
    if (iVar3 == 0) break;
    puVar1 = (undefined4 *)puVar1[2];
  }
  piVar2 = (int *)puVar1[1];
  puVar1[1] = param_3;
  (**(code **)(*param_3 + 4))(param_3);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 0;
}


