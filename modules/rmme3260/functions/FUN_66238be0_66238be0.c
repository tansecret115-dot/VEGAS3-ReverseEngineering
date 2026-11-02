/* Module: rmme3260.dll
   Function: FUN_66238be0
   Address: 66238be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66238be0(void *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  HDC hdc;
  int iVar7;
  int iVar8;
  size_t local_20 [2];
  void *local_18;
  uint *local_14;
  int local_10;
  int *local_c;
  void *local_8;
  
  iVar8 = 0;
  local_c = (int *)0x0;
  local_18 = (void *)0x0;
  local_8 = param_1;
  FUN_66238a00((int)param_1);
  puVar3 = *(undefined4 **)((int)param_1 + 0x10d);
  if ((puVar3 != (undefined4 *)0x0) &&
     (iVar6 = (**(code **)*puVar3)(puVar3,&DAT_6626af88,&local_c), iVar6 == 0)) {
    local_20[0] = 0;
    local_20[1] = 10;
    local_18 = malloc(0x438);
    (**(code **)(*local_c + 0x20))(local_c,0,0,local_20,FUN_66238d70);
    qsort(local_18,local_20[0],0x6c,FUN_66238dd0);
    local_10 = 0;
    if (local_20[0] != 1 && -1 < (int)(local_20[0] - 1)) {
      do {
        local_14 = (uint *)((int)local_18 + iVar8 + 0x54);
        puVar1 = (uint *)((int)local_18 + iVar8 + 8);
        puVar2 = (uint *)((int)local_18 + iVar8 + 0xc);
        iVar6 = FUN_662394f0(local_8,*(undefined4 *)((int)local_18 + iVar8 + 0xc),*puVar1,*local_14)
        ;
        if ((((iVar6 == 0) && (uVar4 = *puVar2, 0x13f < uVar4)) && (uVar5 = *puVar1, 199 < uVar5))
           && (7 < *local_14)) {
          FUN_66239220(local_8,uVar4,uVar5,*local_14,0,0,0);
        }
        local_10 = local_10 + 1;
        iVar8 = iVar8 + 0x6c;
      } while (local_10 < (int)(local_20[0] - 1));
    }
  }
  hdc = GetDC((HWND)0x0);
  local_14 = (uint *)GetDeviceCaps(hdc,8);
  local_10 = GetDeviceCaps(hdc,10);
  iVar8 = GetDeviceCaps(hdc,0xe);
  iVar6 = GetDeviceCaps(hdc,0xc);
  puVar1 = local_14;
  iVar7 = FUN_662394f0(local_8,local_14,local_10,iVar8 * iVar6);
  if (iVar7 == 0) {
    FUN_66239220(local_8,puVar1,local_10,iVar8 * iVar6,0,0,0);
  }
  ReleaseDC((HWND)0x0,hdc);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_18 != (void *)0x0) {
    operator_delete(local_18);
    local_18 = (void *)0x0;
  }
  FUN_66238ba0((int)local_8);
  return;
}


