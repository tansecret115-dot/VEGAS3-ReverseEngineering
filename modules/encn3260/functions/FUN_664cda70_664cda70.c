/* Module: encn3260.dll
   Function: FUN_664cda70
   Address: 664cda70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664cdbd0) */
/* WARNING: Removing unreachable block (ram,0x664cdaeb) */
/* WARNING: Removing unreachable block (ram,0x664cdc0f) */

int __thiscall FUN_664cda70(void *this,void *param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int *this_00;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  byte *local_20 [3];
  int local_14;
  int *local_10;
  void *local_c;
  int local_8;
  
  local_8 = 0;
  local_14 = 0;
  local_10 = (int *)0x0;
  local_c = this;
  puVar1 = operator_new(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_664cdda0(puVar1);
  }
  if (this_00 == (int *)0x0) {
    iVar4 = 2;
  }
  else {
    if (((param_2 == 0) || (this = local_c, param_3 == 0)) || (param_4 == (int *)0x0)) {
      local_8 = FUN_664cdec0(this_00,param_1);
    }
    else {
      local_14 = *(int *)(param_2 + 4);
      local_10 = (int *)param_2;
      while (local_14 != 0) {
        puVar1 = (undefined4 *)FUN_664bab80(local_14);
        FUN_664baab0(this_00,*puVar1);
        FUN_664bab40(&local_14);
      }
      local_14 = *(int *)(param_3 + 4);
      local_10 = (int *)param_3;
      if (local_14 != 0) {
        uVar2 = 0;
        if (local_14 == 0) goto LAB_664cdb34;
        do {
          puVar1 = (undefined4 *)FUN_664bab80(local_14);
          uVar2 = *puVar1;
LAB_664cdb34:
          FUN_664baab0(this_00 + 5,uVar2);
          FUN_664bab40(&local_14);
        } while (local_14 != 0);
      }
      local_10 = param_4;
      local_14 = param_4[1];
      if (local_14 != 0) {
        uVar2 = 0;
        if (local_14 == 0) goto LAB_664cdb71;
        do {
          puVar1 = (undefined4 *)FUN_664bab80(local_14);
          uVar2 = *puVar1;
LAB_664cdb71:
          FUN_664baab0(this_00 + 10,uVar2);
          FUN_664bab40(&local_14);
        } while (local_14 != 0);
      }
      this_00[0xf] = (int)param_1;
      FUN_664cf580((int)param_1);
      this = local_c;
    }
    iVar4 = local_8;
    if (local_8 == 0) {
      FUN_664baab0(*(void **)((int)this + 0xc),this_00);
      local_14 = this_00[1];
      local_10 = this_00;
      while (local_14 != 0) {
        puVar1 = (undefined4 *)FUN_664bab80(local_14);
        piVar3 = FUN_664bde70(*(void **)((int)this + 4),(byte *)*puVar1);
        *piVar3 = (int)this_00;
        FUN_664bab40(&local_14);
      }
      local_14 = this_00[6];
      local_10 = this_00 + 5;
      iVar4 = local_8;
      while (local_8 = iVar4, local_14 != 0) {
        puVar1 = (undefined4 *)FUN_664bab80(local_14);
        FUN_664bb450(local_20,(char *)*puVar1);
        FUN_664bbc30((int *)local_20);
        piVar3 = FUN_664bde70(*(void **)((int)this + 8),local_20[0]);
        *piVar3 = (int)this_00;
        FUN_664bb3e0((int *)local_20);
        FUN_664bab40(&local_14);
        iVar4 = local_8;
      }
    }
  }
  if ((iVar4 != 0) && (this_00 != (int *)0x0)) {
    FUN_664cddd0(this_00);
    operator_delete(this_00);
  }
  return iVar4;
}


