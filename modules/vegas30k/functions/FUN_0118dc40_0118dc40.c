/* Module: vegas30k.dll
   Function: FUN_0118dc40
   Address: 0118dc40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0118dc40(int param_1,int *param_2)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  double dVar5;
  undefined4 uVar6;
  int *unaff_EDI;
  int *local_8;
  int local_4;
  
  uVar6 = 0;
  local_4 = 0;
  local_8 = (int *)0x0;
  if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
    local_4 = 1;
    FUN_0118e250();
    FUN_0118e130();
  }
  if ((*param_2 == 0) && ((char)param_2[1] != '\0')) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))
              (*(int **)(param_1 + 0x10),&DAT_011d9b20,&local_8);
    if (local_8 != (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x18);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      uVar6 = (**(code **)(*local_8 + 0x40))(local_8,param_2 + 1,param_1 + 0x18);
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x18);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = (int *)*param_2;
    *(int **)(param_1 + 0x18) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
    return uVar6;
  }
  dVar1 = *(double *)(param_2 + 0x44);
  bVar4 = _DAT_011db3d8 <= dVar1;
  *(double *)(param_1 + 0xa0) = dVar1;
  dVar5 = _DAT_011db3d8;
  if ((bVar4) && (dVar5 = dVar1, _DAT_011ea810 < dVar1)) {
    dVar5 = _DAT_011ea810;
  }
  *(double *)(param_1 + 0xa0) = dVar5;
  *(int *)(param_1 + 0x98) = param_2[0x42];
  *(int *)(param_1 + 0xa8) = param_2[0x46];
  *(int *)(param_1 + 0xac) = param_2[0x47];
  *(int *)(param_1 + 0xb0) = param_2[0x48];
  *(int *)(param_1 + 0xb4) = param_2[0x49];
  iVar3 = param_2[0x4a];
  *(undefined4 *)(param_1 + 200) = 10000000;
  *(int *)(param_1 + 0xb8) = iVar3;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (local_4 != 0) {
    FUN_0118e070(0,0);
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
  return uVar6;
}


