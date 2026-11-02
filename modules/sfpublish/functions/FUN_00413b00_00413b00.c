/* Module: sfpublish.dll
   Function: FUN_00413b00
   Address: 00413b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00413b00(void *this,uint *param_1,uint *param_2)

{
  DWORD DVar1;
  HWND pHVar2;
  undefined4 *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint local_154 [10];
  uchar local_12c [100];
  uchar local_c8 [100];
  uchar local_64 [100];
  
  if ((*(int *)((int)this + 0x34) == 0) ||
     (DVar1 = GetTickCount(), 299 < DVar1 - *(int *)((int)this + 0x34))) {
    uVar8 = param_2[1];
    if ((-1 < (int)uVar8) && ((0 < (int)uVar8 || (*param_2 != 0)))) {
      lVar9 = __allmul(*param_1,param_1[1],100,0);
      uVar10 = __alldiv((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),*param_2,uVar8);
      pHVar2 = GetDlgItem(*(HWND *)((int)this + 4),0x1f5);
      SendMessageA(pHVar2,0x402,(WPARAM)uVar10,0);
      local_12c[0] = '\0';
      local_c8[0] = '\0';
      FUN_004176b0(*param_1,param_1[1],local_12c);
      FUN_004176b0(*param_2,param_2[1],local_c8);
      puVar7 = local_154;
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_154[0] = 1;
      DVar1 = GetTickCount();
      uVar8 = DVar1 - *(int *)((int)this + 0x30);
      if (uVar8 != 0) {
        lVar9 = __alldiv(*param_1,param_1[1],uVar8,0);
        if (lVar9 != 0) {
          lVar9 = __alldiv(*param_2 - *param_1,
                           (param_2[1] - param_1[1]) - (uint)(*param_2 < *param_1),(uint)lVar9,
                           (uint)((ulonglong)lVar9 >> 0x20));
          if (-1 < lVar9) {
            iVar6 = 1;
            lVar9 = __allmul((uint)lVar9,(int)((ulonglong)lVar9 >> 0x20),10000,0);
            FUN_00428150(local_64,local_154,(uint)lVar9,(int)((ulonglong)lVar9 >> 0x20),iVar6);
            uVar11 = 0x6a;
            puVar3 = (undefined4 *)FUN_004012d0();
            puVar4 = (uchar *)FUN_0041b9f0(puVar3,uVar11);
            pHVar2 = GetDlgItem(*(HWND *)((int)this + 4),0x1f7);
            FUN_0041a720(pHVar2,puVar4);
          }
        }
        uVar11 = 0x69;
        puVar3 = (undefined4 *)FUN_004012d0();
        puVar5 = (uchar *)FUN_0041b9f0(puVar3,uVar11);
        puVar4 = local_12c;
        lVar9 = __allmul(*param_1,param_1[1],1000,0);
        uVar10 = __alldiv((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),uVar8,0);
        FUN_004176b0((uint)uVar10,(int)((ulonglong)uVar10 >> 0x20),puVar4);
        pHVar2 = GetDlgItem(*(HWND *)((int)this + 4),0x1f9);
        FUN_0041a720(pHVar2,puVar5);
      }
      uVar8 = 0x68;
      puVar3 = (undefined4 *)FUN_004012d0();
      puVar4 = (uchar *)FUN_0041b9f0(puVar3,uVar8);
      FUN_0041a720(*(HWND *)((int)this + 4),puVar4);
    }
  }
  return;
}


