/* Module: encn3260.dll
   Function: FUN_664a4560
   Address: 664a4560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664a45cb) */

void __fastcall FUN_664a4560(int param_1)

{
  int *piVar1;
  HRGN pHVar2;
  undefined4 *puVar3;
  int iVar4;
  RECT local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (*(HGDIOBJ *)(param_1 + 0xe9) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xe9));
  }
  piVar1 = (int *)(param_1 + 4);
  (**(code **)(*(int *)(param_1 + 4) + 0x34))(piVar1,&local_20);
  (**(code **)(*piVar1 + 0x2c))(piVar1,&local_18);
  pHVar2 = CreateRectRgn(local_18,local_14,local_20 + local_18,local_14 + local_1c);
  local_c = param_1 + 0x38;
  *(HRGN *)(param_1 + 0xe9) = pHVar2;
  local_10 = *(int *)(param_1 + 0x3c);
  while (local_10 != 0) {
    puVar3 = (undefined4 *)FUN_664bab80(local_10);
    piVar1 = (int *)*puVar3;
    local_8 = (int *)0x0;
    (**(code **)*piVar1)(piVar1,&DAT_664dce30,&local_8);
    iVar4 = (**(code **)(*local_8 + 0x14))(local_8);
    if (iVar4 != 0) {
      (**(code **)(*piVar1 + 0x2c))(piVar1,&local_28);
      (**(code **)(*piVar1 + 0x34))(piVar1,&local_30);
      local_40.left = local_28 + local_18;
      local_40.top = local_24 + local_14;
      local_40.right = local_28 + local_30 + local_18;
      local_40.bottom = local_24 + local_2c + local_14;
      pHVar2 = CreateRectRgnIndirect(&local_40);
      CombineRgn(*(HRGN *)(param_1 + 0xe9),*(HRGN *)(param_1 + 0xe9),pHVar2,4);
      DeleteObject(pHVar2);
    }
    (**(code **)(*local_8 + 8))(local_8);
    FUN_664bab40(&local_10);
  }
  if (*(void **)(param_1 + 0x4c) != (void *)0x0) {
    FUN_664a46a0(*(void **)(param_1 + 0x4c),*(HRGN *)(param_1 + 0xe9),param_1);
  }
  return;
}


