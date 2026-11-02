/* Module: rmto3260.dll
   Function: FUN_662d8660
   Address: 662d8660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662d8660(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_662ed6f0(puVar1);
  }
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == 0) {
    local_8 = -0x7ff8fff2;
  }
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_662ed6f0(puVar1);
  }
  *(int *)(param_1 + 0xaa) = iVar2;
  if (iVar2 == 0) {
    local_8 = -0x7ff8fff2;
  }
  if ((-1 < local_8) && (*(int *)(param_1 + 0xae) != 0)) {
    pvVar3 = operator_new((uint)*(ushort *)(param_1 + 0x48));
    *(void **)(param_1 + 0x10) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    if (-1 < local_8) {
      pvVar3 = operator_new((uint)*(ushort *)(param_1 + 0x48));
      *(void **)(param_1 + 0x14) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        local_8 = -0x7ff8fff2;
      }
      if (-1 < local_8) {
        pvVar3 = operator_new((uint)*(ushort *)(param_1 + 0x48));
        *(void **)(param_1 + 0x18) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          local_8 = -0x7ff8fff2;
        }
        if (-1 < local_8) {
          piVar4 = (int *)FUN_662fda50((byte *)(param_1 + 0x25),&local_8,
                                       (undefined2 *)(param_1 + 0x70));
          *(int **)(param_1 + 0xc) = piVar4;
          if (-1 < local_8) {
            local_c = CONCAT22((short)((uint)local_8 >> 0x10),*(ushort *)(param_1 + 0x42) >> 3);
            (**(code **)(*piVar4 + 4))(&local_c,param_1 + 0x46,param_1 + 0x6a,0);
          }
        }
      }
    }
  }
  return;
}


