/* Module: vegas30k.dll
   Function: FUN_0118d110
   Address: 0118d110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0118d110(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  piVar1 = param_1;
  iVar2 = -0x7fffbffb;
  if ((code *)param_1[0x56] != (code *)0x0) {
    iVar4 = param_1[0x57];
    puVar5 = &stack0x00000008;
    puVar3 = &param_1;
    iVar2 = (*(code *)param_1[0x56])(param_1,0x2500,puVar3,iVar4,puVar5,0);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1,puVar3,iVar4,puVar5);
    }
  }
  return iVar2;
}


