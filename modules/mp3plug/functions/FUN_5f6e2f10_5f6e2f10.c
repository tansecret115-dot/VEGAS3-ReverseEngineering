/* Module: mp3plug.dll
   Function: FUN_5f6e2f10
   Address: 5f6e2f10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_5f6e2f10(undefined4 *param_1,int param_2)

{
  bool bVar1;
  void *pvVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  void *local_1c;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    return true;
  }
  local_1c = calloc(1,0xb45c);
  if (local_1c == (void *)0x0) {
    bVar7 = true;
  }
  else {
    pvVar2 = FUN_5f6faa70();
    bVar7 = pvVar2 == (void *)0x0;
    *(void **)((int)local_1c + 0xce8) = pvVar2;
    *(void **)((int)local_1c + 0x244) = pvVar2;
    iVar4 = 0;
    iVar3 = *(int *)(param_2 + 8);
    if (0 < iVar3) {
      puVar6 = (undefined4 *)((int)local_1c + 0x1554);
      puVar5 = (undefined4 *)((int)local_1c + 0x154c);
      do {
        if (bVar7) {
LAB_5f6e2fc3:
          bVar7 = true;
        }
        else {
          bVar1 = FUN_5f6fb150(puVar5);
          if (CONCAT31(extraout_var,bVar1) != 0) {
            iVar3 = *(int *)(param_2 + 8);
            goto LAB_5f6e2fc3;
          }
          iVar3 = FUN_5f6fb570(puVar6);
          if (iVar3 != 0) {
            iVar3 = *(int *)(param_2 + 8);
            goto LAB_5f6e2fc3;
          }
          iVar3 = *(int *)(param_2 + 8);
        }
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 0x9c1;
        puVar5 = puVar5 + 0x9c1;
      } while (iVar4 < iVar3);
    }
    if (!bVar7) goto LAB_5f6e3046;
  }
  if (local_1c != (void *)0x0) {
    pvVar2 = local_1c;
    do {
      FUN_5f6fb180(*(void **)((int)pvVar2 + 0x154c));
      FUN_5f6fb5d0(*(undefined4 **)((int)pvVar2 + 0x1554));
      pvVar2 = (void *)((int)pvVar2 + 0x2704);
    } while ((int)pvVar2 < (int)local_1c + 0x4e08);
    FUN_5f6fa6f0(*(void **)((int)local_1c + 0x244));
    free(local_1c);
  }
  local_1c = (void *)0x0;
LAB_5f6e3046:
  *param_1 = local_1c;
  return bVar7;
}


