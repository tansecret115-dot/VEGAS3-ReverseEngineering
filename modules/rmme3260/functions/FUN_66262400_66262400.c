/* Module: rmme3260.dll
   Function: FUN_66262400
   Address: 66262400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x662624cc) */

int __thiscall FUN_66262400(void *this,void *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_8 = 0;
  local_14 = 0;
  local_10 = (undefined4 *)0x0;
  local_c = this;
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_66262520(puVar1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    local_8 = 2;
  }
  else {
    if (param_2 == 0) {
      local_8 = FUN_662625b0(puVar1,param_1);
    }
    else {
      local_1c = *(int *)(param_2 + 4);
      local_18 = param_2;
      if (local_1c != 0) {
        uVar3 = 0;
        if (local_1c == 0) goto LAB_66262473;
        do {
          puVar2 = (undefined4 *)FUN_66250c10(local_1c);
          uVar3 = *puVar2;
LAB_66262473:
          FUN_66250b60(puVar1 + 1,uVar3);
          FUN_66250bf0(&local_1c);
          this = local_c;
        } while (local_1c != 0);
      }
      *puVar1 = param_1;
      FUN_66263520((int)param_1);
    }
    if (local_8 != 0) goto LAB_66262500;
    FUN_66250b60(*(void **)this,puVar1);
    local_14 = puVar1[2];
    local_10 = puVar1 + 1;
    while (local_14 != 0) {
      puVar2 = (undefined4 *)FUN_66250c10(local_14);
      piVar4 = FUN_662529a0(*(void **)((int)this + 8),(byte *)*puVar2);
      *piVar4 = (int)puVar1;
      FUN_66250bf0(&local_14);
    }
  }
  if (local_8 == 0) {
    return 0;
  }
LAB_66262500:
  if (puVar1 != (undefined4 *)0x0) {
    FUN_66262540(puVar1);
    operator_delete(puVar1);
  }
  return local_8;
}


