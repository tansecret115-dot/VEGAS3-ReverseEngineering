/* Module: vidcap30.exe
   Function: FUN_00420c70
   Address: 00420c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420c70(int *param_1,int param_2,uint param_3,int *param_4,int param_5,HMENU param_6)

{
  UINT UVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  LPCSTR pCVar7;
  uint uVar8;
  UINT *pUVar9;
  UINT local_2c;
  UINT local_28 [2];
  uint local_20;
  UINT local_1c;
  LPCSTR local_8;
  UINT local_4;
  
  if (*param_1 == 8) {
    iVar2 = FUN_00434f90(*(undefined4 *)(DAT_005ba4c0 + 0x6c));
    iVar3 = FUN_00434fc0(*(undefined4 *)(DAT_005ba4c0 + 0x6c));
    if (param_2 != 0) {
      if ((uint *)param_1[0x100] == (uint *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)param_1[0x100];
      }
      uVar5 = 0;
      if (uVar6 != 0) {
        do {
          if ((1 < (int)uVar6) && (uVar5 == 0)) {
            uVar5 = 1;
          }
          pCVar7 = (LPCSTR)(*(int *)(param_1[0x100] + 4) * uVar5 + *(int *)(param_1[0x100] + 8));
          pUVar9 = local_28;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pUVar9 = 0;
            pUVar9 = pUVar9 + 1;
          }
          local_2c = 0x2c;
          local_28[0] = 0x13;
          local_28[1] = 0x200;
          if ((iVar2 == 0) && (iVar3 == 0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = 3;
          }
          iVar4 = lstrcmpA(pCVar7,(LPCSTR)(param_1 + 10));
          local_20 = (-(uint)(iVar4 != 0) & 0xfffffff8) + 8 | uVar8;
          UVar1 = uVar5 + param_3;
          local_1c = UVar1;
          local_8 = pCVar7;
          local_4 = lstrlenA(pCVar7);
          InsertMenuItemA(param_6,UVar1,0,(LPCMENUITEMINFOA)&local_2c);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
    }
    uVar6 = 0;
    if (param_4 != (int *)0x0) {
      if ((int *)param_1[0x100] == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)param_1[0x100];
      }
      param_3 = (uint)(iVar4 < 2);
      param_4 = param_1 + 0x102;
      if (param_2 != 0) {
        AppendMenuA(param_6,0x800,0,(LPCSTR)0x0);
      }
      param_2 = 0;
      FUN_004260d0(param_1,&param_2);
      if ((uint *)param_1[0x143] == (uint *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)param_1[0x143];
      }
      if (uVar5 != 0) {
        do {
          if ((1 < (int)uVar5) && (uVar6 == 0)) {
            uVar6 = 1;
          }
          pCVar7 = (LPCSTR)(*(int *)(param_1[0x143] + 4) * uVar6 + *(int *)(param_1[0x143] + 8));
          pUVar9 = local_28;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pUVar9 = 0;
            pUVar9 = pUVar9 + 1;
          }
          local_2c = 0x2c;
          local_28[0] = 0x13;
          local_28[1] = 0x200;
          iVar4 = lstrcmpA(pCVar7,(LPCSTR)param_4);
          if ((((param_3 == 0) && (param_2 == 0)) && (iVar2 == 0)) && (iVar3 == 0)) {
            local_20 = 0;
          }
          else {
            local_20 = 3;
          }
          local_20 = (-(uint)(iVar4 != 0) & 0xfffffff8) + 8 | local_20;
          UVar1 = uVar6 + param_5;
          local_1c = UVar1;
          local_8 = pCVar7;
          local_4 = lstrlenA(pCVar7);
          InsertMenuItemA(param_6,UVar1,0,(LPCMENUITEMINFOA)&local_2c);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
    }
  }
  return;
}


