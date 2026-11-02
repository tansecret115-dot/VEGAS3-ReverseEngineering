/* Module: vegas30.exe
   Function: FUN_005924f0
   Address: 005924f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_005924f0(int param_1,undefined4 *param_2,int param_3)

{
  short sVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  double dVar4;
  ushort uVar5;
  int iVar6;
  HGLOBAL pvVar7;
  LPVOID pvVar8;
  int *piVar9;
  int *piVar10;
  LPVOID pvVar11;
  LPVOID pMem;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  int *local_70;
  int iStack_6c;
  int *local_68;
  int *local_64;
  int local_60;
  undefined4 local_5c;
  double local_58;
  undefined2 uStack_50;
  short sStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  int iStack_48;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined2 uStack_3c;
  short sStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  int iStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [4];
  
  *param_2 = 0;
  uVar12 = (uint)DAT_0064b132;
  local_58 = (double)(ulonglong)*(uint *)(param_3 + 4);
  local_70 = (int *)0x0;
  local_64 = (int *)uVar12;
  iVar6 = ftol();
  local_64 = (int *)(iVar6 / (int)uVar12);
  local_60 = FUN_005ec620();
  uVar13 = DAT_0064b138;
  if (local_60 == 0) {
    return (int *)0x0;
  }
  local_28 = 0x10;
  local_10[0] = 0;
  local_24 = 0;
  local_10[2] = 0;
  local_10[1] = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0xffffffff;
  local_14 = 0xffffffff;
  local_5c = DAT_0064b138;
  FUN_005b83b0(DAT_0064b138,1);
  iVar6 = FUN_005ec8a0(param_1,local_10,0,0);
  FUN_005b84d0(uVar13,1);
  if (iVar6 < 0) {
    return (int *)0x0;
  }
  FUN_005ed3f0(local_10[0]);
  if ((local_10[0] == 0) || (iVar6 = FUN_005f13f0(2), param_1 = iVar6, iVar6 == 0))
  goto LAB_005929f1;
  pvVar7 = GlobalAlloc(0x40,0x28);
  pvVar8 = GlobalLock(pvVar7);
  if ((pvVar8 == (LPVOID)0x0) ||
     (piVar9 = (int *)FUN_0058f810(iVar6), local_68 = piVar9, piVar9 == (int *)0x0))
  goto LAB_005929f1;
  iVar6 = (**(code **)(*piVar9 + 0x1c))();
  piVar10 = local_64;
  if (iVar6 <= (int)local_64) {
    piVar10 = (int *)(**(code **)(*piVar9 + 0x1c))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x2c);
  uStack_3c = (undefined2)*puVar2;
  sStack_3a = (short)((uint)*puVar2 >> 0x10);
  uStack_38 = (undefined2)puVar2[1];
  uStack_36 = (undefined2)((uint)puVar2[1] >> 0x10);
  iStack_34 = puVar2[2];
  uStack_30 = puVar2[3];
  uStack_2c = *(undefined2 *)(puVar2 + 4);
  local_64 = piVar10;
  pvVar7 = GlobalAlloc(0x42,(uStack_30 & 0xffff) * (int)piVar10);
  pvVar8 = GlobalLock(pvVar7);
  if (pvVar8 != (LPVOID)0x0) {
    iVar6 = (**(code **)(*piVar9 + 4))();
    if (-1 < iVar6) {
      piVar14 = &iStack_6c;
      iStack_6c = 0;
      iVar6 = (**(code **)(*piVar9 + 8))(0,0,piVar10,pvVar8,piVar10);
      if (-1 < iVar6) {
        piVar10 = piVar14;
      }
      iStack_6c = (**(code **)(*piVar9 + 0x10))();
      if (-1 < iStack_6c) {
        puVar3 = *(undefined2 **)(param_1 + 0x2c);
        sVar1 = *(short *)(param_3 + 2);
        pvVar11 = pvVar8;
        if (sVar1 != puVar3[1]) {
          iStack_34 = *(int *)(puVar3 + 2);
          uStack_3c = *puVar3;
          uStack_38 = (undefined2)iStack_34;
          uStack_36 = (undefined2)((uint)iStack_34 >> 0x10);
          uVar5 = ((ushort)puVar3[7] >> 3) * sVar1;
          uStack_30 = CONCAT22(puVar3[7],uVar5);
          iStack_34 = (uint)uVar5 * iStack_34;
          uStack_2c = 0;
          sStack_3a = sVar1;
          pvVar7 = GlobalAlloc(0x42,(uint)uVar5 * (int)piVar10);
          pvVar11 = GlobalLock(pvVar7);
          piVar9 = local_68;
          if (pvVar11 == (LPVOID)0x0) goto LAB_005929c7;
          iStack_6c = 0;
          _SfAudio_ChannelChange_20
                    (pvVar11,*(undefined2 *)(param_3 + 2),pvVar8,*(undefined4 *)(param_1 + 0x2c),
                     piVar10);
          pvVar7 = GlobalHandle(pvVar8);
          GlobalUnlock(pvVar7);
          pvVar7 = GlobalHandle(pvVar8);
          GlobalFree(pvVar7);
        }
        iVar6 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
        uVar5 = (DAT_006484dc >> 3) << 1;
        uStack_44 = CONCAT22(DAT_006484dc,uVar5);
        uStack_50 = DAT_006484d8;
        iStack_48 = (uint)uVar5 * iVar6;
        sStack_4e = 2;
        uStack_4c = (undefined2)iVar6;
        uStack_4a = (undefined2)((uint)iVar6 >> 0x10);
        uStack_40 = 0;
        pvVar7 = GlobalAlloc(0x42,(uint)uVar5 * (int)piVar10);
        pMem = GlobalLock(pvVar7);
        pvVar8 = pvVar11;
        piVar9 = local_68;
        if (pMem != (LPVOID)0x0) {
          _SfAudio_Copy_24(&uStack_50,pMem,&uStack_3c,pvVar11,piVar10,0x3f800000);
          uStack_3c = uStack_50;
          sStack_3a = sStack_4e;
          iStack_34 = iStack_48;
          uStack_30 = uStack_44;
          uStack_2c = uStack_40;
          uStack_38 = uStack_4c;
          uStack_36 = uStack_4a;
          local_70 = piVar10;
          if (*(uint *)(param_3 + 4) == CONCAT22(uStack_4a,uStack_4c)) {
LAB_00592994:
            if (-1 < iStack_6c) {
              *param_2 = pMem;
              piVar9 = local_68;
              goto LAB_005929c7;
            }
          }
          else {
            local_58 = (double)(ulonglong)*(uint *)(param_3 + 4);
            dVar4 = (double)(longlong)local_58;
            local_58 = (double)(ulonglong)CONCAT22(uStack_4a,uStack_4c);
            local_58 = dVar4 / (double)(longlong)local_58;
            iVar6 = _SfAudio_ResampleOpenEx_24
                              (&param_1,0x20,*(undefined2 *)(param_3 + 2),local_58,0x202);
            if (-1 < iVar6) {
              sStack_4e = *(short *)(param_3 + 2);
              uStack_50 = DAT_006484d8;
              iStack_48 = *(int *)(param_3 + 4);
              uStack_4c = (undefined2)iStack_48;
              uStack_4a = (undefined2)((uint)iStack_48 >> 0x10);
              uStack_40 = 0;
              uVar5 = (DAT_006484dc >> 3) * (short)*(undefined4 *)(param_3 + 2);
              uStack_44 = CONCAT22(DAT_006484dc,uVar5);
              iStack_6c = -0x7ff8fff2;
              iStack_48 = (uint)uVar5 * iStack_48;
              iVar6 = ftol();
              pvVar7 = GlobalAlloc(0x42,iVar6 * (uint)uVar5);
              pvVar11 = GlobalLock(pvVar7);
              if (pvVar11 != (LPVOID)0x0) {
                iStack_6c = 0;
                local_70 = (int *)_SfAudio_ResampleEx_16(param_1,pvVar11,pMem,piVar10);
                pvVar7 = GlobalHandle(pMem);
                GlobalUnlock(pvVar7);
                pvVar7 = GlobalHandle(pMem);
                GlobalFree(pvVar7);
                uStack_3c = uStack_50;
                sStack_3a = sStack_4e;
                uStack_38 = uStack_4c;
                uStack_36 = uStack_4a;
                iStack_34 = iStack_48;
                uStack_30 = uStack_44;
                uStack_2c = uStack_40;
                pMem = pvVar11;
              }
              _SfAudio_ResampleClose_4(param_1);
              goto LAB_00592994;
            }
          }
          local_70 = (int *)0x0;
          pvVar7 = GlobalHandle(pMem);
          GlobalUnlock(pvVar7);
          pvVar7 = GlobalHandle(pMem);
          GlobalFree(pvVar7);
          piVar9 = local_68;
        }
      }
    }
LAB_005929c7:
    pvVar7 = GlobalHandle(pvVar8);
    GlobalUnlock(pvVar7);
    pvVar7 = GlobalHandle(pvVar8);
    GlobalFree(pvVar7);
  }
  (**(code **)*piVar9)(1);
  uVar13 = local_5c;
LAB_005929f1:
  FUN_005b83b0(uVar13,1);
  FUN_005ed410(local_10[0],0,0);
  local_10[0] = 0;
  FUN_005b84d0(uVar13,1);
  return local_70;
}


