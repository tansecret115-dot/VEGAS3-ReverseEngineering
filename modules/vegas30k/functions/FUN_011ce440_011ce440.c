/* Module: vegas30k.dll
   Function: FUN_011ce440
   Address: 011ce440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_011ce440(int *param_1)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *piVar5;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  double local_20;
  undefined4 local_14 [4];
  
  if (param_1[0xad] != 0) {
    return;
  }
  iVar4 = param_1[0x18];
  if ((param_1[0x8f] < 1) && ((param_1[0x8f] < 0 || ((uint)param_1[0x8e] < *(uint *)(iVar4 + 4)))))
  {
    local_14[0] = 2;
    FUN_011cb5b0(param_1[0xbd],local_14,0xc,&local_28);
    param_1[0x8e] = local_28;
    param_1[0x8f] = local_24;
    return;
  }
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  if ((param_1[0xa9] == 0) && (param_1[0xaa] == 0)) {
    if (param_1[0xab] == 0) goto LAB_011ce58d;
    local_28 = 0;
    local_24 = 0;
    local_20 = (double)(ulonglong)*(uint *)(iVar4 + 4);
    local_20 = (double)(longlong)local_20;
    (**(code **)(*param_1 + 0x50))(param_1,&local_28,param_1[0xa0] + 8);
    dVar2 = (double)CONCAT44(unaff_EBX,unaff_ESI) / (double)CONCAT44(local_28,uStack_2c);
  }
  else {
    local_28 = 0;
    local_24 = 0;
    local_20 = (double)(ulonglong)*(uint *)(iVar4 + 4);
    iVar4 = param_1[0xa0] + 8;
    local_20 = (double)(longlong)local_20;
    piVar5 = &local_28;
    (**(code **)(*param_1 + 0x50))(param_1);
    piVar1 = (int *)param_1[0xa9];
    if ((piVar1 == (int *)0x0) ||
       (iVar3 = (**(code **)(*piVar1 + 0x50))(piVar1,&uStack_2c,&local_20), iVar3 != 0))
    goto LAB_011ce58d;
    dVar2 = (double)CONCAT44(iVar4,piVar5) / (double)CONCAT44(unaff_ESI,unaff_EDI);
  }
  *(double *)(param_1 + 0xa2) = _DAT_011db3e8 - dVar2;
LAB_011ce58d:
  piVar5 = (int *)param_1[0xa0];
  *piVar5 = param_1[0xa2];
  piVar5[1] = param_1[0xa3];
  return;
}


