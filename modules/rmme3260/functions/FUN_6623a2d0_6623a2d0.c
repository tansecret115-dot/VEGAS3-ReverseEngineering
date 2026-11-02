/* Module: rmme3260.dll
   Function: FUN_6623a2d0
   Address: 6623a2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6623a38b) */

void __thiscall FUN_6623a2d0(void *this,HRGN param_1,int param_2)

{
  int *piVar1;
  HRGN pHVar2;
  undefined4 *puVar3;
  int iVar4;
  RECT local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  int *local_c;
  int *local_8;
  
  piVar1 = (int *)((int)this + 4);
  local_8 = (int *)0x0;
  local_10 = this;
  (**(code **)(*(int *)((int)this + 4) + 0x34))(piVar1,&local_30);
  (**(code **)(*piVar1 + 0x2c))(piVar1,&local_20);
  OffsetRgn(param_1,local_20,local_1c);
  pHVar2 = CreateRectRgn(local_20,local_1c,local_30 + local_20,local_2c + local_1c);
  CombineRgn(param_1,param_1,pHVar2,1);
  DeleteObject(pHVar2);
  (*(code *)**(undefined4 **)(param_2 + 4))((undefined4 *)(param_2 + 4),&DAT_6626ad78,&local_8);
  (**(code **)(*local_8 + 0x1c))(local_8,&local_18);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  local_28 = *(int *)((int)local_10 + 0x3c);
  local_24 = (int)local_10 + 0x38;
  while (local_28 != 0) {
    puVar3 = (undefined4 *)FUN_66250c10(local_28);
    piVar1 = (int *)*puVar3;
    (**(code **)*piVar1)(piVar1,&DAT_6626ad78,&local_c);
    (**(code **)(*local_c + 0x1c))(local_c,&local_14);
    iVar4 = (**(code **)(*local_c + 0x14))(local_c);
    if ((iVar4 != 0) && (local_18 < local_14)) {
      (**(code **)(*piVar1 + 0x2c))(piVar1,&local_38);
      (**(code **)(*piVar1 + 0x34))(piVar1,&local_40);
      local_50.left = local_20 + local_38;
      local_50.top = local_1c + local_34;
      local_50.right = local_40 + local_50.left;
      local_50.bottom = local_3c + local_50.top;
      pHVar2 = CreateRectRgnIndirect(&local_50);
      CombineRgn(param_1,param_1,pHVar2,4);
      DeleteObject(pHVar2);
    }
    (**(code **)(*local_c + 8))(local_c);
    FUN_66250bf0(&local_28);
  }
  if (*(void **)((int)local_10 + 0x4c) != (void *)0x0) {
    FUN_6623a2d0(*(void **)((int)local_10 + 0x4c),param_1,(int)local_10);
  }
  return;
}


