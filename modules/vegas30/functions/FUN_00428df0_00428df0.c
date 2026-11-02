/* Module: vegas30.exe
   Function: FUN_00428df0
   Address: 00428df0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00428df0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *unaff_EDI;
  int iVar7;
  
  puVar3 = param_1;
  if (DAT_0064762c == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(DAT_0064762c + 0x80);
  }
  iVar5 = 1;
  if (((iVar7 != 0) && (*(int **)(iVar7 + 0x9c) != (int *)0x0)) &&
     (iVar5 = (**(code **)(**(int **)(iVar7 + 0x9c) + 0x34))(param_1), puVar4 = param_1, -1 < iVar5)
     ) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar1 = param_1 + 0xe;
      iVar5 = *(int *)(param_1[0xc] + 4);
      piVar2 = *(int **)(param_1[0xc] + 8);
      FUN_00428c90(1,&stack0xfffffff4,puVar1);
      iVar6 = (**(code **)*puVar3)(puVar3,&DAT_0060ef78,&param_1);
      if (-1 < iVar6) {
        (**(code **)(*piVar2 + 0x50))(piVar2,_DAT_006106d0 / (double)iVar5);
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      (**(code **)(**(int **)(iVar7 + 0x9c) + 0x54))(puVar4[0xc],puVar1);
      (**(code **)(**(int **)(iVar7 + 0x9c) + 0x58))(puVar4[0x12],puVar4[0x13]);
      return iVar6;
    }
    FUN_00428c90(0,0,0);
  }
  return iVar5;
}


