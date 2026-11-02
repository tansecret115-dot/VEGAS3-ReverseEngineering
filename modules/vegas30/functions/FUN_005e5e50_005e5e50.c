/* Module: vegas30.exe
   Function: FUN_005e5e50
   Address: 005e5e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e5e50(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  IStream *This;
  int iVar1;
  LPVOID pMem;
  HRESULT HVar2;
  LPVOID pMem_00;
  uint uVar3;
  HGLOBAL pvVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  longlong lVar11;
  LPVOID local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  uint local_30;
  int local_2c;
  int local_28 [4];
  uint local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  local_44 = 0;
  local_48 = (LPVOID)0x0;
  local_30 = param_4;
  local_2c = param_5;
  if ((param_5 < 0) || ((param_5 < 1 && (param_4 == 0)))) {
    return param_1;
  }
  param_4 = 0;
  do {
    pMem = (LPVOID)0x0;
    iVar1 = riff64_ReadChunkHeader(param_1,local_28,&local_38);
    if (iVar1 < 0) {
      iVar1 = -0x7ffb1ff8;
LAB_005e61fc:
      if (pMem != (LPVOID)0x0) {
LAB_005e6200:
        pvVar4 = GlobalHandle(pMem);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pMem);
        GlobalFree(pvVar4);
      }
LAB_005e6214:
      if (local_48 != (LPCVOID)0x0) {
        pvVar4 = GlobalHandle(local_48);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(local_48);
        GlobalFree(pvVar4);
      }
      return iVar1;
    }
    iVar1 = 4;
    bVar9 = true;
    piVar5 = &DAT_0062ac90;
    piVar7 = local_28;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar9 = *piVar5 == *piVar7;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (bVar9);
    if (bVar9) {
      puVar6 = local_18;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      iVar1 = riff64_ReadData(param_1,local_18,local_38);
      if (iVar1 < 0) goto LAB_005e6214;
      *(uint *)(param_3 + 0x7d8) = local_18[2];
      *(uint *)(param_3 + 0x7dc) = local_18[3];
      *(undefined4 *)(param_3 + 0x7e0) = local_8;
      *(uint *)(param_3 + 0x7d4) = local_18[1];
      *(undefined4 *)(param_3 + 0x7e4) = local_4;
      uVar10 = local_38;
      if (1 < local_18[1]) {
        *(undefined4 *)(param_3 + 0xbec) = 1;
        *(uint *)(param_3 + 0x7d4) = local_18[1] + 1;
      }
    }
    else {
      iVar1 = 4;
      bVar9 = true;
      piVar5 = &DAT_0062ac80;
      piVar7 = local_28;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar9 = *piVar5 == *piVar7;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar9);
      if (bVar9) {
        pvVar4 = GlobalAlloc(0x42,(SIZE_T)local_38);
        pMem = GlobalLock(pvVar4);
        if (pMem != (LPVOID)0x0) {
          local_3c = (SIZE_T)local_38;
          iVar1 = riff64_ReadData(param_1,pMem,local_38);
          if (-1 < iVar1) {
            HVar2 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,(LPSTREAM *)(param_3 + 0xc20));
            if (-1 < HVar2) {
              This = *(LPSTREAM *)(param_3 + 0xc20);
              local_40 = 0;
              iVar1 = (*This->lpVtbl->Write)(This,&local_40,4,(ULONG *)0x0);
              if (iVar1 < 0) goto LAB_005e61fc;
              iVar1 = FUN_005e6250(param_3 + 0x6c0,pMem,local_3c);
              if (-1 < iVar1) {
                pvVar4 = GlobalHandle(pMem);
                GlobalUnlock(pvVar4);
                pvVar4 = GlobalHandle(pMem);
                GlobalFree(pvVar4);
                local_48 = (LPVOID)0x0;
                uVar10 = local_38;
                if (*(int *)(param_3 + 0x7d8) != 0) {
                  pvVar4 = GlobalAlloc(0x42,*(int *)(param_3 + 0x7d8) * 0x120);
                  local_48 = GlobalLock(pvVar4);
                  uVar10 = local_38;
                  if (local_48 == (LPVOID)0x0) {
                    return -0x7ff8fff2;
                  }
                }
                goto LAB_005e6153;
              }
            }
          }
          iVar1 = -0x7ffb1ff8;
          goto LAB_005e6200;
        }
        iVar1 = -0x7ff8fff2;
        goto LAB_005e6214;
      }
      iVar1 = 4;
      bVar9 = true;
      piVar5 = &DAT_0062aca0;
      piVar7 = local_28;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar9 = *piVar5 == *piVar7;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar9);
      if (bVar9) {
        pvVar4 = GlobalAlloc(0x42,(SIZE_T)local_38);
        pMem_00 = GlobalLock(pvVar4);
        iVar1 = riff64_ReadData(param_1,pMem_00,local_38);
        if (iVar1 < 0) {
          pvVar4 = GlobalHandle(pMem_00);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(pMem_00);
          GlobalFree(pvVar4);
          goto LAB_005e61fc;
        }
        if (local_48 != (LPVOID)0x0) {
          iVar1 = param_4 + (int)local_48;
          FUN_005e6c70(pMem_00,iVar1);
          FUN_005e6d50(param_3 + 0x6c0,iVar1,local_44);
          pvVar4 = GlobalHandle(*(LPCVOID *)(iVar1 + 0x108));
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(*(LPCVOID *)(iVar1 + 0x108));
          GlobalFree(pvVar4);
          if ((*(int *)(iVar1 + 0x114) != 0) && (*(LPCVOID *)(iVar1 + 0x110) != (LPCVOID)0x0)) {
            pvVar4 = GlobalHandle(*(LPCVOID *)(iVar1 + 0x110));
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(*(LPCVOID *)(iVar1 + 0x110));
            GlobalFree(pvVar4);
          }
        }
        pvVar4 = GlobalHandle(pMem_00);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pMem_00);
        GlobalFree(pvVar4);
        local_44 = local_44 + 1;
        param_4 = param_4 + 0x120;
        uVar10 = local_38;
      }
      else {
        uVar10 = riff64_SkipChunk(param_1,local_38);
      }
    }
LAB_005e6153:
    local_38._4_4_ = (int)((ulonglong)uVar10 >> 0x20);
    local_38._0_4_ = (SIZE_T)uVar10;
    uVar8 = local_30 + (-(SIZE_T)local_38 - 0x18);
    local_2c = local_2c + ((-1 - local_38._4_4_) - (uint)(0xffffffe8 < (SIZE_T)local_38)) +
               (uint)CARRY4(local_30,-(SIZE_T)local_38 - 0x18);
    local_30 = uVar8;
    local_38 = uVar10;
    lVar11 = __allrem(uVar10,8,0);
    if (lVar11 != 0) {
      uVar3 = (uint)lVar11 - 8;
      local_30 = uVar8 + uVar3;
      local_2c = local_2c + ((int)((ulonglong)lVar11 >> 0x20) - (uint)((uint)lVar11 < 8)) +
                 (uint)CARRY4(uVar8,uVar3);
    }
    iVar1 = 0;
    if ((local_2c < 1) && ((local_2c < 0 || (local_30 == 0)))) goto LAB_005e6214;
  } while( true );
}


