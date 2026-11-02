/* Module: Setup.exe
   Function: FUN_0040b9c0
   Address: 0040b9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0040b9c0(void *this,HANDLE param_1,int param_2)

{
  uint uVar1;
  DWORD DVar2;
  HGLOBAL pvVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  bool bVar8;
  int local_278;
  uint uStack_274;
  uint local_270;
  int local_26c;
  uint uStack_268;
  uint local_264;
  int local_260;
  byte *pbStack_25c;
  uint uStack_258;
  DWORD DStack_254;
  DWORD local_250;
  DWORD local_24c [2];
  int iStack_244;
  byte *pbStack_240;
  DWORD DStack_23c;
  byte *pbStack_234;
  uint uStack_230;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  local_278 = 0;
  DVar2 = GetFileSize(param_1,local_24c);
  local_264 = 0;
  local_260 = 0;
  local_270 = 0;
  local_26c = 0;
  local_250 = DVar2;
  if (*(int *)((int)this + 0x20) != 0) {
    MultiByteToWideChar(0,1,(LPCSTR)(param_2 + 0x48),-1,local_208,0x104);
    local_2 = 0;
    FUN_0041d0f0(*(void **)((int)this + 0x20),local_208);
    (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0xaaaaaa1);
  }
  pvVar3 = GlobalAlloc(0x42,0x40000);
  pbStack_25c = GlobalLock(pvVar3);
  if (pbStack_25c == (byte *)0x0) {
    FUN_00410c30(this,0xaaaaaaa3,(uchar *)"CompressZipFile",(uchar *)0x0);
    local_278 = -0x7ff8fff2;
  }
  else {
    uStack_258 = FUN_0041d1e0(0,(byte *)0x0,0);
    uStack_268 = FUN_0041d1e0(0,(byte *)0x0,0);
    if ((-1 < (int)local_24c[0]) && ((0 < (int)local_24c[0] || (DVar2 != 0)))) {
      pvVar3 = GlobalAlloc(0x42,0x40a49);
      pbVar4 = GlobalLock(pvVar3);
      if (pbVar4 == (byte *)0x0) {
        FUN_00410c30(this,0xaaaaaaa3,(uchar *)"CompressZipFile",(uchar *)0x0);
        local_278 = -0x7ff8fff2;
      }
      else {
        uStack_220 = 0;
        uStack_21c = 0;
        uStack_218 = 0;
        iVar5 = FUN_0041d350((int)&pbStack_240,*(int *)((int)this + 0x2c),8,-0xf,8,0,"1.1.3",0x38);
        if (iVar5 == 0) {
          uStack_230 = 0x40a49;
          pbStack_234 = pbVar4;
          while( true ) {
            uVar6 = DVar2 - local_264;
            DStack_254 = 0;
            iStack_244 = (local_24c[0] - local_260) - (uint)(DVar2 < local_264);
            if ((-1 < iStack_244) &&
               ((iStack_244 != 0 &&
                 SBORROW4(local_24c[0],local_260) ==
                 SBORROW4(local_24c[0] - local_260,(uint)(DVar2 < local_264)) || (0x40000 < uVar6)))
               ) {
              uVar6 = 0x40000;
              iStack_244 = 0;
            }
            BVar7 = ReadFile(param_1,pbStack_25c,uVar6,&DStack_254,(LPOVERLAPPED)0x0);
            pbStack_240 = pbStack_25c;
            DStack_23c = uVar6;
            if (BVar7 == 0) {
              FUN_00410c30(this,0xaaaaaaaa,(uchar *)"CompressZipFile",(uchar *)0x0);
              local_278 = -0x7ffb1ff8;
              goto LAB_0040bdb1;
            }
            if ((*(int *)((int)this + 0x20) != 0) &&
               ((local_278 = FUN_0041d030(*(int *)((int)this + 0x20)), local_278 == -0x7ffb1ff4 ||
                (local_278 = (**(code **)(**(int **)((int)this + 0x20) + 0x10))(DStack_254,0),
                local_278 < 0)))) goto LAB_0040bcb0;
            bVar8 = CARRY4(local_264,DStack_254);
            local_264 = local_264 + DStack_254;
            local_260 = local_260 + (uint)bVar8;
            uStack_258 = FUN_0041d1e0(uStack_258,pbStack_25c,uVar6);
            uVar6 = FUN_0041d7a0((int *)&pbStack_240,0);
            if (uVar6 != 0) break;
            if (uStack_230 < 0x40a49) {
              iStack_244 = -(uint)(0x40a49 < uStack_230);
              BVar7 = WriteFile(*(HANDLE *)((int)this + 0xc),pbVar4,0x40a49 - uStack_230,&uStack_274
                                ,(LPOVERLAPPED)0x0);
              if (BVar7 != 0) {
                uStack_268 = FUN_0041d1e0(uStack_268,pbVar4,uStack_274);
                uVar6 = *(uint *)((int)this + 0x18);
                uStack_230 = 0x40a49;
                *(uint *)((int)this + 0x18) = uVar6 + uStack_274;
                bVar8 = CARRY4(local_270,uStack_274);
                local_270 = local_270 + uStack_274;
                *(uint *)((int)this + 0x1c) =
                     *(int *)((int)this + 0x1c) + (uint)CARRY4(uVar6,uStack_274);
                local_26c = local_26c + (uint)bVar8;
                pbStack_234 = pbVar4;
              }
            }
            if (((int)local_24c[0] < local_260) ||
               (((int)local_24c[0] <= local_260 && (local_250 <= local_264)))) goto LAB_0040bcb0;
            if (BVar7 == 0) goto LAB_0040bdb1;
            DVar2 = local_250;
            if (local_278 < 0) goto LAB_0040bcb0;
          }
          if (uVar6 == 0xfffffffc) {
            FUN_00410c30(this,0xaaaaaaa3,(uchar *)"CompressZipFile",(uchar *)0x0);
            local_278 = -0x7ff8fff2;
          }
          else if (uVar6 == 0xfffffffb) {
            FUN_00410c30(this,0xaaaaaaa7,(uchar *)"CompressZipFile",(uchar *)0x0);
            local_278 = -0x7ffb1fc4;
          }
          else {
            FUN_00410c30(this,0xaaaaaaa9,(uchar *)"CompressZipFile",(uchar *)0x0);
            local_278 = -0x7ffb1ff7;
          }
LAB_0040bcb0:
          if (BVar7 != 0) {
            do {
              uVar6 = FUN_0041d7a0((int *)&pbStack_240,4);
              if ((uVar6 != 1) && (uVar6 != 0)) {
                FUN_00410c30(this,0xaaaaaaaa,(uchar *)"CompressZipFile",(uchar *)0x0);
                local_278 = -0x7ffb1ff7;
                break;
              }
              iStack_244 = -(uint)(0x40a49 < uStack_230);
              BVar7 = WriteFile(*(HANDLE *)((int)this + 0xc),pbVar4,0x40a49 - uStack_230,&uStack_274
                                ,(LPOVERLAPPED)0x0);
              if (BVar7 != 0) {
                uStack_268 = FUN_0041d1e0(uStack_268,pbVar4,uStack_274);
                uVar1 = *(uint *)((int)this + 0x18);
                uStack_230 = 0x40a49;
                *(uint *)((int)this + 0x18) = uVar1 + uStack_274;
                bVar8 = CARRY4(local_270,uStack_274);
                local_270 = local_270 + uStack_274;
                *(uint *)((int)this + 0x1c) =
                     *(int *)((int)this + 0x1c) + (uint)CARRY4(uVar1,uStack_274);
                local_26c = local_26c + (uint)bVar8;
                pbStack_234 = pbVar4;
              }
            } while (uVar6 != 1);
            FUN_0041db10((int)&pbStack_240);
          }
        }
        else {
          FUN_00410c30(this,0xaaaaaaa3,(uchar *)"CompressZipFile",(uchar *)0x0);
          local_278 = -0x7ff8fff2;
        }
LAB_0040bdb1:
        pvVar3 = GlobalHandle(pbVar4);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pbVar4);
        GlobalFree(pvVar3);
        if (-1 < local_278) {
          *(uint *)(param_2 + 0x24) = local_270;
          *(int *)(param_2 + 0x28) = local_26c;
          *(uint *)(param_2 + 0x20) = uStack_258;
          *(uint *)(param_2 + 0x1c) = uStack_268;
        }
      }
    }
    pbVar4 = pbStack_25c;
    pvVar3 = GlobalHandle(pbStack_25c);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pbVar4);
    GlobalFree(pvVar3);
  }
  if (*(int **)((int)this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x20) + 0xc))(0);
  }
  return local_278;
}


