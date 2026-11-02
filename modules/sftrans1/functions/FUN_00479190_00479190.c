/* Module: sftrans1.dll
   Function: FUN_00479190
   Address: 00479190
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00479190(int *param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,0x1c8,0);
  if (*(char **)(param_2 + 0x1cc) == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
    pcVar5 = *(char **)(param_2 + 0x1cc);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4;
  }
  puVar1 = (uint *)(param_2 + 0x1c8);
  *puVar1 = uVar4;
  if (((-1 < iVar3) && (iVar3 = (**(code **)(*param_1 + 0x10))(param_1,puVar1,4,0), -1 < iVar3)) &&
     (*puVar1 != 0)) {
    iVar3 = (**(code **)(*param_1 + 0x10))(param_1,*(undefined4 *)(param_2 + 0x1cc),*puVar1,0);
    return iVar3;
  }
  return iVar3;
}


