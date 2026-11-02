/* Module: vegas30.exe
   Function: FUN_005d1cd0
   Address: 005d1cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Exceeded maximum restarts with more pending */

int FUN_005d1cd0(undefined4 param_1,ULONG *param_2)

{
  IID *rclsid;
  char cVar1;
  ULONG cb;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  HRESULT HVar6;
  int iVar7;
  byte bVar8;
  uint *puVar9;
  int *piStack_180;
  undefined4 uStack_17c;
  undefined4 *puStack_178;
  IStream *pIStack_174;
  IID *pIStack_170;
  undefined4 uStack_16c;
  undefined1 *puStack_168;
  int *piStack_164;
  uint *puStack_160;
  undefined4 uStack_15c;
  int *piStack_158;
  IStream *pIStack_154;
  IStream *local_130 [56];
  uint *puStack_50;
  LPSTR pCStack_38;
  int iStack_34;
  uint *puStack_10;
  
  cb = *param_2;
  HVar6 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,local_130);
  if (HVar6 < 0) {
    return HVar6;
  }
  pIStack_154 = (IStream *)0x5d1d0b;
  HVar6 = (*local_130[0]->lpVtbl->Write)(local_130[0],param_2 + 1,cb,(ULONG *)0x0);
  if (HVar6 < 0) goto LAB_005d203c;
  piStack_164 = (int *)0x0;
  pIStack_154 = local_130[0];
  piStack_158 = (int *)0x5d1d27;
  iVar7 = (*local_130[0]->lpVtbl->Seek)();
  if (iVar7 < 0) {
    uStack_15c = 0x5d1d37;
    piStack_158 = piStack_164;
    (**(code **)(*piStack_164 + 8))();
    return iVar7;
  }
  puVar9 = puStack_10;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  piStack_158 = (int *)&stack0xfffffec4;
  uStack_15c = 4;
  puStack_160 = puStack_10;
  puStack_168 = (undefined1 *)0x5d1d6e;
  (**(code **)(*piStack_164 + 0xc))();
  puStack_168 = &stack0xfffffeb4;
  rclsid = (IID *)(puStack_10 + 3);
  *puStack_10 = *puStack_10 & 0xfffffffe;
  uStack_16c = 0x10;
  pIStack_174 = pIStack_154;
  puStack_178 = (undefined4 *)0x5d1d89;
  pIStack_170 = rclsid;
  (*pIStack_154->lpVtbl->Read)();
  piVar5 = piStack_164;
  puStack_178 = &uStack_15c;
  piStack_180 = (int *)&stack0xfffffec8;
  uStack_17c = 0x104;
  (**(code **)(*piStack_164 + 0xc))();
  if (pCStack_38 != (LPSTR)0x0) {
    lstrcpynA(pCStack_38,&stack0xfffffeb8,iStack_34);
    pCStack_38[iStack_34 + -1] = '\0';
  }
  (*pIStack_174->lpVtbl->Read)(pIStack_174,&stack0xfffffeb0,4,&uStack_16c);
  piStack_180 = (int *)0x0;
  if (DAT_0064ab78 != 0) {
    _fpreset();
  }
  HVar6 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,3,(IID *)&DAT_00633738,&piStack_180);
  puVar9 = puStack_10;
  if (HVar6 < 0) {
    if (DAT_0064ab78 != 0) {
      _fpreset();
    }
    puStack_178 = (undefined4 *)0xaa000000;
    pIStack_174 = (IStream *)0xbaa26b00;
    pIStack_170 = (IID *)rclsid->Data1;
    uVar2 = puStack_10[4];
    puStack_168 = (undefined1 *)puStack_10[5];
    piStack_164 = (int *)puStack_10[6];
    bVar8 = 0;
    if (((short)uVar2 == 0xf56) &&
       (uStack_16c._2_2_ = (short)(uVar2 >> 0x10), uStack_16c._2_2_ == 0x11d2)) {
      iVar7 = 0;
      do {
        cVar1 = *(char *)((int)&puStack_168 + iVar7);
        if (cVar1 != (&DAT_006467a8)[iVar7]) {
          bVar8 = bVar8 | 1;
        }
        if (cVar1 != (&DAT_006467a0)[iVar7]) {
          bVar8 = bVar8 | 2;
        }
        if (cVar1 != (&DAT_00646798)[iVar7]) {
          bVar8 = bVar8 | 4;
        }
        if (bVar8 == 7) goto LAB_005d1ea3;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
      puStack_178 = (undefined4 *)0xa0000000;
      pIStack_174 = (IStream *)0x5b7269c9;
    }
LAB_005d1ea3:
    if (((puStack_10[6] & 0x7abe8f00) == 0x7abe8f00) || ((puStack_10[6] & 0xb6de8f00) == 0xb6de8f00)
       ) {
      puStack_10[5] = puStack_10[5] & 0xffff;
      puStack_10[6] = 0;
      puStack_10[5] = puStack_10[5] | (uint)puStack_178;
      puStack_10[6] = puStack_10[6] | (uint)pIStack_174;
    }
    uStack_16c = uVar2;
    HVar6 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,3,(IID *)&DAT_00633738,&piStack_180);
    if (HVar6 < 0) {
      uVar3 = rclsid->Data1;
      uVar2 = puStack_10[4];
      uVar4 = puStack_10[5];
      piStack_164 = (int *)puStack_10[6];
      iVar7 = _SfGraph_MapFxGUID_OriginalToVegasVideo_4(rclsid);
      if (-1 < iVar7) {
        if (DAT_0064ab78 != 0) {
          _fpreset();
        }
        HVar6 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,3,(IID *)&DAT_00633738,&piStack_180);
        puVar9 = puStack_50;
        if (-1 < HVar6) goto LAB_005d1fe9;
        rclsid->Data1 = uVar3;
        puStack_10[4] = uVar2;
        puStack_10[5] = uVar4;
        puStack_10[6] = (uint)piStack_164;
      }
      uVar3 = rclsid->Data1;
      uVar2 = puStack_10[4];
      puStack_168 = (undefined1 *)puStack_10[5];
      piStack_164 = (int *)puStack_10[6];
      iVar7 = _SfGraph_MapFxGUID_VegasVideoToOriginal_4(rclsid);
      if (iVar7 < 0) {
LAB_005d1fc7:
        (**(code **)(*piVar5 + 8))(piVar5);
        return iVar7;
      }
      if (DAT_0064ab78 != 0) {
        _fpreset();
      }
      iVar7 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,3,(IID *)&DAT_00633738,&piStack_180);
      puVar9 = puStack_50;
      if (iVar7 < 0) {
        rclsid->Data1 = uVar3;
        puStack_10[4] = uVar2;
        puStack_10[5] = (uint)puStack_168;
        puStack_10[6] = (uint)piStack_164;
        goto LAB_005d1fc7;
      }
    }
  }
LAB_005d1fe9:
  HVar6 = FUN_005d0d40(rclsid->Data1,puStack_10[4],puStack_10[5],puStack_10[6],piStack_180,
                       puVar9 + 1);
  iVar7 = *piStack_180;
  if (-1 < HVar6) {
    HVar6 = (**(code **)(iVar7 + 0x14))(piStack_180,piVar5);
    if (HVar6 < 0) {
      HVar6 = 0x4e009;
    }
    iVar7 = *piStack_180;
  }
  (**(code **)(iVar7 + 8))(piStack_180);
LAB_005d203c:
  (*local_130[0]->lpVtbl->Release)();
  return HVar6;
}


