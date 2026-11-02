/* Module: encn3260.dll
   Function: FUN_664d24d0
   Address: 664d24d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_664d24d0(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar3 = FUN_664bacb0(*(void **)(param_1 + 8),param_3);
  piVar1 = *(int **)(param_1 + 0x10);
  iVar2 = *piVar1;
  piVar4 = param_4;
  puVar3 = (undefined4 *)FUN_664bab80((int)puVar3);
  (**(code **)(iVar2 + 0x14))(piVar1,*puVar3,piVar4);
  return (-(uint)(*param_4 != 0) & 0x7fffbffb) + 0x80004005;
}


