/* Module: encn3260.dll
   Function: FUN_664ce360
   Address: 664ce360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664ce42c) */

int __thiscall FUN_664ce360(void *this,void *param_1,int param_2)

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
    puVar1 = FUN_664ce480(puVar1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    local_8 = 2;
  }
  else {
    if (param_2 == 0) {
      local_8 = FUN_664ce510(puVar1,param_1);
    }
    else {
      local_1c = *(int *)(param_2 + 4);
      local_18 = param_2;
      if (local_1c != 0) {
        uVar3 = 0;
        if (local_1c == 0) goto LAB_664ce3d3;
        do {
          puVar2 = (undefined4 *)FUN_664bab80(local_1c);
          uVar3 = *puVar2;
LAB_664ce3d3:
          FUN_664baab0(puVar1 + 1,uVar3);
          FUN_664bab40(&local_1c);
          this = local_c;
        } while (local_1c != 0);
      }
      *puVar1 = param_1;
      FUN_664cf580((int)param_1);
    }
    if (local_8 != 0) goto LAB_664ce460;
    FUN_664baab0(*(void **)this,puVar1);
    local_14 = puVar1[2];
    local_10 = puVar1 + 1;
    while (local_14 != 0) {
      puVar2 = (undefined4 *)FUN_664bab80(local_14);
      piVar4 = FUN_664bde70(*(void **)((int)this + 8),(byte *)*puVar2);
      *piVar4 = (int)puVar1;
      FUN_664bab40(&local_14);
    }
  }
  if (local_8 == 0) {
    return 0;
  }
LAB_664ce460:
  if (puVar1 != (undefined4 *)0x0) {
    FUN_664ce4a0(puVar1);
    operator_delete(puVar1);
  }
  return local_8;
}


