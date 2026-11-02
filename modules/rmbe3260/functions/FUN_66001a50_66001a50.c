/* Module: rmbe3260.dll
   Function: FUN_66001a50
   Address: 66001a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66001a50(int param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int *local_10;
  int *local_c;
  int *local_8;
  
  iVar2 = FUN_660018e0(param_1);
  uVar5 = 0;
  if ((-1 < iVar2) && (iVar2 = FUN_660130d0(&local_10), -1 < iVar2)) {
    pvVar3 = operator_new(0x140);
    *(void **)(param_1 + 0x406) = pvVar3;
    local_8 = (int *)0x0;
    if (*(int *)(param_1 + 0x402) != 0) {
      uVar4 = 0;
      while (iVar2 = (**(code **)(*local_10 + 0x14))
                               (local_10,*(undefined4 *)(param_1 + 0x182 + uVar4 * 8),
                                *(undefined4 *)(param_1 + 0x186 + uVar4 * 8),&local_8), -1 < iVar2)
      {
        iVar2 = (**(code **)*local_8)(local_8,&DAT_66064ee8,&local_c);
        if (iVar2 < 0) {
          (**(code **)(*local_8 + 8))(local_8);
          break;
        }
        *(int **)(*(int *)(param_1 + 0x406) + *(int *)(param_1 + 0x40a) * 4) = local_c;
        piVar1 = *(int **)(*(int *)(param_1 + 0x406) + *(int *)(param_1 + 0x40a) * 4);
        (**(code **)(*piVar1 + 4))(piVar1);
        *(int *)(param_1 + 0x40a) = *(int *)(param_1 + 0x40a) + 1;
        (**(code **)(*local_c + 8))(local_c);
        (**(code **)(*local_8 + 8))(local_8);
        uVar5 = uVar5 + 1;
        uVar4 = uVar5 & 0xffff;
        if (*(uint *)(param_1 + 0x402) <= uVar4) {
          (**(code **)(*local_10 + 8))(local_10);
          return iVar2;
        }
      }
    }
    (**(code **)(*local_10 + 8))(local_10);
  }
  return iVar2;
}


