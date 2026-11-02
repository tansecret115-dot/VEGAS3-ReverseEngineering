/* Module: aviplug.dll
   Function: FUN_5f960ce0
   Address: 5f960ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f960ce0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint *puVar3;
  void *this;
  bool bVar4;
  int iVar5;
  HGLOBAL pvVar6;
  LPCVOID pvVar7;
  undefined3 extraout_var;
  LPCVOID pMem;
  int *piVar8;
  SIZE_T dwBytes;
  UINT uFlags;
  SIZE_T local_11c;
  int local_118;
  int local_114;
  SIZE_T local_110;
  int local_10c;
  uint uStack_108;
  int aiStack_104 [4];
  undefined4 uStack_f4;
  uint uStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  LPVOID pvStack_d4;
  SIZE_T SStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  
  local_110 = 0;
  local_10c = *(int *)(*(int *)(param_1 + 0x25c) + 0x14);
  if (local_10c < 1) {
    iVar5 = -0x7fff0001;
  }
  else {
    FUN_5f9612b0(param_1);
    puVar1 = *(undefined4 **)(param_1 + 0x25c);
    iVar5 = FUN_5f93e610(puVar1,(uchar *)(puVar1 + 0x36),puVar1[0x2d],puVar1[0x2e]);
    if (-1 < iVar5) {
      local_118 = 0;
      local_114 = 0;
      pMem = (LPCVOID)0x0;
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x25c) + 4) + 8) + local_118 * 4);
        iVar5 = (**(code **)(*piVar2 + 0x18))(piVar2,0,0,&local_11c);
        pvVar7 = pMem;
        if ((iVar5 < 0) || ((int)local_11c < 1)) {
LAB_5f961092:
          iVar5 = -0x7fff0001;
          pMem = pvVar7;
          goto LAB_5f960feb;
        }
        if ((int)local_110 < (int)local_11c) {
          if (pMem == (LPCVOID)0x0) {
            pvVar6 = GlobalAlloc(0x42,local_11c);
          }
          else {
            pvVar6 = GlobalHandle(pMem);
            GlobalUnlock(pvVar6);
            uFlags = 0;
            dwBytes = local_11c;
            pvVar6 = GlobalHandle(pMem);
            pvVar6 = GlobalReAlloc(pvVar6,dwBytes,uFlags);
          }
          pvVar7 = GlobalLock(pvVar6);
          if (pvVar7 == (LPVOID)0x0) {
            iVar5 = -0x7ffbbf99;
            goto LAB_5f960feb;
          }
          local_110 = local_11c;
        }
        iVar5 = (**(code **)(*piVar2 + 0x18))(piVar2,0,pvVar7,&local_11c);
        if (iVar5 != 0) goto LAB_5f961092;
        (**(code **)(*piVar2 + 0x10))(piVar2,&iStack_cc,0xcc);
        aiStack_104[0] = iStack_cc;
        if (iStack_cc == 0x73646976) {
          if (*(int *)(*(int *)(param_1 + 0x25c) + 0x20) == 0) {
            *(int *)(*(int *)(param_1 + 0x25c) + 0x1c) = iStack_90 - iStack_98;
            *(int *)(*(int *)(param_1 + 0x25c) + 0x20) = iStack_8c - iStack_94;
            *(int *)(*(int *)(param_1 + 0x25c) + 0x28) = iStack_b4;
            *(int *)(*(int *)(param_1 + 0x25c) + 0x24) = iStack_b8;
          }
        }
        else if ((((iStack_cc == 0x73647561) && (*(int *)(*(int *)(param_1 + 0x25c) + 0xc0) != 0))
                 && (iVar5 = *(int *)(*(int *)(param_1 + 0x25c) + 0xc4), iVar5 != 0)) &&
                (0 < *(int *)(local_114 + 0x10 + iVar5))) {
          uStack_a8 = 0;
        }
        piVar8 = aiStack_104;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
        aiStack_104[1] = uStack_c8;
        uStack_f4 = uStack_a0;
        aiStack_104[2] = iStack_b4;
        aiStack_104[3] = iStack_b8;
        uStack_f0 = uStack_9c;
        iStack_ec = MulDiv(uStack_9c,iStack_b4,iStack_b8);
        uStack_e8 = uStack_a8;
        iStack_e0 = iStack_94;
        iStack_e4 = iStack_98;
        iStack_dc = iStack_90;
        SStack_d0 = local_11c;
        iStack_d8 = iStack_8c;
        pvStack_d4 = pvVar7;
        iVar5 = FUN_5f93e9b0((int *)**(undefined4 **)(param_1 + 0x25c),aiStack_104,&uStack_108);
        pMem = pvVar7;
        if (iVar5 < 0) goto LAB_5f960feb;
        FUN_5f961ef0((int)piVar2,uStack_108);
        *(int *)(*(int *)(param_1 + 0x25c) + 8) =
             *(int *)(*(int *)(param_1 + 0x25c) + 8) + iStack_ec;
        if (*(uint *)(*(int *)(param_1 + 0x25c) + 0x18) < uStack_f0) {
          *(int *)(*(int *)(param_1 + 0x25c) + 0x18) = iStack_ec;
        }
        local_118 = local_118 + 1;
        local_114 = local_114 + 0x90;
      } while (local_118 < local_10c);
      if (-1 < iVar5) {
        *(int *)(*(int *)(param_1 + 0x25c) + 0x18) = *(int *)(*(int *)(param_1 + 0x25c) + 0x18) + 8;
        puVar3 = *(uint **)(param_1 + 0x25c);
        this = (void *)puVar3[0x77];
        if ((this == (void *)0x0) || (puVar3[0x2d] == 0)) {
          iVar5 = FUN_5f93f6e0(*puVar3);
        }
        else {
          iVar5 = FUN_5f93fa30(this,(int *)*puVar3,this,puVar3[0x78]);
        }
        if (-1 < iVar5) {
          *(undefined4 *)(*(int *)(param_1 + 0x25c) + 0xbc) = 1;
        }
      }
LAB_5f960feb:
      if (pMem != (LPCVOID)0x0) {
        pvVar6 = GlobalHandle(pMem);
        GlobalUnlock(pvVar6);
        pvVar6 = GlobalHandle(pMem);
        GlobalFree(pvVar6);
      }
      if (-1 < iVar5) {
        return iVar5;
      }
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x25c) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x25c) + 0x1c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x25c) + 0x20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x25c) + 0x28) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x25c) + 0x24) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x25c) + 0x18) = 0;
  FUN_5f93e510((undefined4 *)**(undefined4 **)(param_1 + 0x25c));
  **(undefined4 **)(param_1 + 0x25c) = 0;
  bVar4 = FUN_5f98d640((LPCSTR)(*(int *)(param_1 + 0x25c) + 0xd8));
  if (CONCAT31(extraout_var,bVar4) != 0) {
    DeleteFileA((LPCSTR)(*(int *)(param_1 + 0x25c) + 0xd8));
  }
  return iVar5;
}


