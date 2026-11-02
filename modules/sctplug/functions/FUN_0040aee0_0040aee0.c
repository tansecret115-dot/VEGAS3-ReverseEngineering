/* Module: sctplug.dll
   Function: FUN_0040aee0
   Address: 0040aee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040aee0(int *param_1,LPCSTR param_2,undefined4 *param_3,int param_4)

{
  LPVOID lpBuffer;
  LPVOID pMem;
  SIZE_T dwBytes;
  BOOL BVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  int iVar4;
  ushort *pMem_00;
  ushort *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  int *local_ac;
  HANDLE pvStack_a8;
  LPVOID local_a4;
  ushort *puStack_a0;
  uint uStack_9c;
  LPVOID pvStack_98;
  SIZE_T local_94;
  uint local_90;
  int local_8c;
  LPCVOID local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  int local_74;
  uint uStack_70;
  code *local_6c;
  undefined4 uStack_68;
  SIZE_T SStack_64;
  DWORD DStack_60;
  undefined1 auStack_5c [8];
  undefined4 local_54 [21];
  
  puVar6 = local_54;
  for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  pMem_00 = (ushort *)0x0;
  local_ac = (int *)0x0;
  local_94 = 0;
  local_a4 = *(LPVOID *)(*(int *)(param_4 + 0x424) + 0x3e);
  local_78 = 0;
  local_74 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = (LPCVOID)0x0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_6c = (code *)0x0;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))(param_1,0,100,0);
  }
  pvStack_a8 = CreateFileA(param_2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x8000000,(HANDLE)0x0);
  if ((pvStack_a8 == (HANDLE)0xffffffff) || (param_4 == 0)) {
    iVar4 = -0x7ffb1ffa;
    pMem = local_a4;
  }
  else {
    (**(code **)*param_3)(param_3,&DAT_00431b10,&local_ac);
    if (local_ac == (int *)0x0) {
      iVar4 = -0x7fff0001;
      pMem = local_a4;
      goto LAB_0040b35a;
    }
    puVar5 = *(ushort **)(param_4 + 0x424);
    if (*(ushort **)(puVar5 + 0xb) != (ushort *)0x0) {
      puVar5 = *(ushort **)(puVar5 + 0xb);
    }
    puStack_a0 = puVar5;
    iVar4 = (**(code **)(*local_ac + 0x30))(local_ac,0,0,&local_94,0,0,0);
    if (iVar4 < 0) {
      return -0x7fff0001;
    }
    pvVar3 = GlobalAlloc(0x42,local_94);
    pMem_00 = GlobalLock(pvVar3);
    if ((pMem_00 == (ushort *)0x0) ||
       (iVar4 = (**(code **)(*local_ac + 0x30))(local_ac,pMem_00,local_94,&local_94,0,0,0),
       pMem = local_a4, -1 < iVar4)) {
      (**(code **)(*local_ac + 0x2c))(local_ac,auStack_5c);
      iVar4 = FUN_0040b3c0(pvStack_a8,local_a4,(short *)puVar5,0,0,(LPCVOID)0x0,0);
      pMem = local_a4;
      if (-1 < iVar4) {
        SStack_64 = (uint)pMem_00[6] << 0xd;
        pvVar3 = GlobalAlloc(0x42,SStack_64);
        pMem = GlobalLock(pvVar3);
        if (pMem == (LPVOID)0x0) {
          iVar4 = -0x7ff8fff2;
        }
        else {
          pvStack_98 = (LPVOID)0x0;
          if ((pMem_00[7] != puVar5[7]) || (*pMem_00 != *puVar5)) {
            uStack_9c = (uint)puVar5[6];
            dwBytes = ftol();
            pvVar3 = GlobalAlloc(0x42,dwBytes);
            pvStack_98 = GlobalLock(pvVar3);
            local_6c = (code *)FUN_004282f0(puVar5,pMem_00);
            if (local_6c == (code *)0x0) {
              iVar4 = -0x7fffbfff;
              goto LAB_0040b34c;
            }
          }
          do {
            do {
              iVar4 = (**(code **)(*local_ac + 0x3c))
                                (local_ac,local_78,local_74,pMem,SStack_64 / pMem_00[6],&uStack_9c);
              lpBuffer = pvStack_98;
              uVar2 = uStack_9c;
              if (iVar4 != 0) {
                if (iVar4 == 1) {
                  iVar4 = 0;
                }
                else if (iVar4 < 0) goto LAB_0040b34c;
LAB_0040b269:
                pvVar3 = GlobalHandle(pMem);
                GlobalUnlock(pvVar3);
                pvVar3 = GlobalHandle(pMem);
                GlobalFree(pvVar3);
                pMem = (LPVOID)0x0;
                if (pvStack_98 != (LPCVOID)0x0) {
                  pvVar3 = GlobalHandle(pvStack_98);
                  GlobalUnlock(pvVar3);
                  pvVar3 = GlobalHandle(pvStack_98);
                  GlobalFree(pvVar3);
                }
                if (-1 < iVar4) {
                  if ((local_7c < 0) || ((local_7c < 1 && (local_80 < 0x7ff0bdbf)))) {
                    if ((local_90 & 1) != 0) {
                      uStack_68 = 0;
                      BVar1 = WriteFile(pvStack_a8,&uStack_68,1,&DStack_60,(LPOVERLAPPED)0x0);
                      if (BVar1 == 0) goto LAB_0040b2fe;
                    }
                    iVar4 = FUN_0040b3c0(pvStack_a8,local_a4,(short *)puStack_a0,local_90,local_8c,
                                         local_88,local_84);
                  }
                  else {
LAB_0040b2c1:
                    iVar4 = -0x7ffb1fc6;
                  }
                }
                goto LAB_0040b34c;
              }
              if (uStack_9c == 0) goto LAB_0040b269;
              if (pvStack_98 == (LPCVOID)0x0) {
                BVar1 = WriteFile(pvStack_a8,pMem,pMem_00[6] * uStack_9c,&uStack_70,
                                  (LPOVERLAPPED)0x0);
                if (BVar1 != 0) {
                  uVar2 = uStack_70 / puStack_a0[6];
                  goto LAB_0040b1a2;
                }
LAB_0040b2fe:
                iVar4 = -0x7ffb1ff7;
                goto LAB_0040b34c;
              }
              (*local_6c)(pvStack_98,pMem,pMem_00[1] * uStack_9c,0x3f800000);
              BVar1 = WriteFile(pvStack_a8,lpBuffer,puStack_a0[6] * uVar2,&uStack_70,
                                (LPOVERLAPPED)0x0);
              if (BVar1 == 0) goto LAB_0040b2fe;
LAB_0040b1a2:
              bVar7 = CARRY4(local_78,uStack_9c);
              local_78 = local_78 + uStack_9c;
              local_74 = local_74 + (uint)bVar7;
              bVar7 = CARRY4(local_90,uStack_70);
              local_90 = local_90 + uStack_70;
              local_8c = local_8c + (uint)bVar7;
              bVar7 = CARRY4((uint)local_88,uVar2);
              local_88 = (LPCVOID)((int)local_88 + uVar2);
              local_84 = local_84 + bVar7;
              bVar7 = CARRY4(local_80,uStack_70);
              local_80 = local_80 + uStack_70;
              local_7c = local_7c + (uint)bVar7;
              if ((0 < local_7c) || ((-1 < local_7c && (0x7ff0bdbe < local_80)))) goto LAB_0040b2c1;
            } while (param_1 == (int *)0x0);
            iVar4 = ftol();
            iVar4 = (**(code **)(*param_1 + 0x18))(param_1,iVar4,iVar4 >> 0x1f);
          } while (-1 < iVar4);
          iVar4 = -0x7ffb1ff4;
        }
      }
    }
  }
LAB_0040b34c:
  if (local_ac != (int *)0x0) {
    (**(code **)(*local_ac + 8))(local_ac);
  }
LAB_0040b35a:
  if (pMem != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  if (pMem_00 != (ushort *)0x0) {
    pvVar3 = GlobalHandle(pMem_00);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem_00);
    GlobalFree(pvVar3);
  }
  if (pvStack_a8 != (HANDLE)0xffffffff) {
    CloseHandle(pvStack_a8);
  }
  return iVar4;
}


