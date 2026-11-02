/* Module: encn3260.dll
   Function: FUN_66496ae0
   Address: 66496ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66496ae0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = param_4;
  uVar5 = param_3;
  piVar2 = param_2;
  if (param_2 != (int *)0x0) {
    puVar1 = (undefined4 *)*param_2;
    param_2 = (int *)0x0;
    iVar4 = (*(code *)*puVar1)(piVar2,&DAT_664dc770,&param_2);
    if (iVar4 == 0) {
      if ((param_2 != (int *)0x0) && (iVar4 = (**(code **)(*param_2 + 0xc))(param_2), iVar4 != 0)) {
        uVar5 = (**(code **)(**(int **)(param_1 + 0x10) + 8))(uVar5,uVar3,piVar2);
        (**(code **)(*param_2 + 8))(param_2);
        return uVar5;
      }
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  uVar5 = (**(code **)(**(int **)(param_1 + 8) + 8))(uVar5,uVar3,piVar2);
  return uVar5;
}


