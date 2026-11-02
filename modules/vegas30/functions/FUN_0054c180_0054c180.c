/* Module: vegas30.exe
   Function: FUN_0054c180
   Address: 0054c180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054c180(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  bool bVar4;
  short *psVar5;
  LPARAM lParam;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar8 = 0;
  iVar6 = *(int *)(param_1 + 0x550);
  if (iVar6 != 0) {
    iVar3 = *(int *)(param_1 + 0x54c);
    psVar5 = (short *)(iVar3 + 2);
    do {
      if (0 < *psVar5) {
        uVar8 = uVar8 + 1;
      }
      psVar5 = psVar5 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (1 < uVar8) {
      iVar6 = param_2 * 0x10;
      bVar4 = false;
      if (*(uint *)(param_1 + 0x56c) == (uint)*(ushort *)(iVar6 + 8 + iVar3)) {
        if (param_2 == 0) {
          uVar2 = *(undefined2 *)(iVar3 + 0x18);
        }
        else {
          uVar2 = *(undefined2 *)(iVar3 + 8);
        }
        FUN_0054c340(param_1,uVar2,1);
        _SfList_Sort_12(*(undefined4 *)(param_1 + 0xb4),param_1,FUN_0054c120);
        bVar4 = true;
      }
      FUN_0054c3c0(param_1,param_2);
      if (param_2 < *(int *)(param_1 + 0x550) - 1U) {
        do {
          puVar1 = (undefined4 *)(iVar6 + 0x10 + *(int *)(param_1 + 0x54c));
          puVar7 = (undefined4 *)(*(int *)(param_1 + 0x54c) + iVar6);
          param_2 = param_2 + 1;
          iVar6 = iVar6 + 0x10;
          *puVar7 = *puVar1;
          puVar7[1] = puVar1[1];
          puVar7[2] = puVar1[2];
          puVar7[3] = puVar1[3];
        } while (param_2 < *(int *)(param_1 + 0x550) - 1U);
      }
      local_c = 0;
      *(int *)(param_1 + 0x550) = *(int *)(param_1 + 0x550) + -1;
      DAT_00644e20 = DAT_00644e20 + -1;
      local_8 = *(undefined4 *)(param_1 + 0x54c);
      local_14 = *(undefined4 *)(param_1 + 0x550);
      local_4 = *(undefined4 *)(param_1 + 0x548);
      local_10 = local_14;
      SendMessageA(*(HWND *)(param_1 + 0x98),0x40b,0,(LPARAM)&local_14);
      if (bVar4) {
        lParam = FUN_0054c2f0(param_1,*(undefined4 *)(param_1 + 0x56c));
        SendMessageA(*(HWND *)(param_1 + 0x98),0x43b,*(WPARAM *)(param_1 + 0x570),lParam);
      }
      SendMessageA(*(HWND *)(param_1 + 0x98),0x422,0xffffffff,0x1ffff);
    }
  }
  return;
}


