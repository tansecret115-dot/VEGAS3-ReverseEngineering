/* Module: vegas30k.dll
   Function: FUN_0106b390
   Address: 0106b390
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0106b390(int param_1,HANDLE param_2,int param_3)

{
  DWORD DVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  uint uVar5;
  BOOL BVar6;
  bool bVar7;
  int local_278;
  uint uStack_274;
  uint local_270;
  int local_26c;
  undefined4 uStack_268;
  uint local_264;
  int local_260;
  LPVOID pvStack_25c;
  undefined4 uStack_258;
  DWORD DStack_254;
  DWORD local_250;
  DWORD local_24c [2];
  int iStack_244;
  LPVOID pvStack_240;
  DWORD DStack_23c;
  LPVOID pvStack_234;
  uint uStack_230;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  local_278 = 0;
  DVar1 = GetFileSize(param_2,local_24c);
  local_264 = 0;
  local_260 = 0;
  local_270 = 0;
  local_26c = 0;
  local_250 = DVar1;
  if (*(int *)(param_1 + 0x20) != 0) {
    MultiByteToWideChar(0,1,(LPCSTR)(param_3 + 0x48),-1,local_208,0x104);
    local_2 = 0;
    FUN_011496a0(local_208);
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa1);
  }
  pvVar2 = GlobalAlloc(0x42,0x40000);
  pvStack_25c = GlobalLock(pvVar2);
  if (pvStack_25c == (LPVOID)0x0) {
    FUN_01070600(0xaaaaaaa3,"CompressZipFile",0);
    local_278 = -0x7ff8fff2;
  }
  else {
    uStack_258 = FUN_01149790(0,0,0);
    uStack_268 = FUN_01149790(0,0,0);
    if ((-1 < (int)local_24c[0]) && ((0 < (int)local_24c[0] || (DVar1 != 0)))) {
      pvVar2 = GlobalAlloc(0x42,0x40a49);
      pvVar3 = GlobalLock(pvVar2);
      if (pvVar3 == (LPVOID)0x0) {
        FUN_01070600(0xaaaaaaa3,"CompressZipFile",0);
        local_278 = -0x7ff8fff2;
      }
      else {
        uStack_220 = 0;
        uStack_21c = 0;
        uStack_218 = 0;
        iVar4 = FUN_01149900(&pvStack_240,*(undefined4 *)(param_1 + 0x2c),8,0xfffffff1,8,0,"1.1.3",
                             0x38);
        if (iVar4 == 0) {
          uStack_230 = 0x40a49;
          pvStack_234 = pvVar3;
          while( true ) {
            uVar5 = DVar1 - local_264;
            DStack_254 = 0;
            iStack_244 = (local_24c[0] - local_260) - (uint)(DVar1 < local_264);
            if ((-1 < iStack_244) &&
               ((iStack_244 != 0 &&
                 SBORROW4(local_24c[0],local_260) ==
                 SBORROW4(local_24c[0] - local_260,(uint)(DVar1 < local_264)) || (0x40000 < uVar5)))
               ) {
              uVar5 = 0x40000;
              iStack_244 = 0;
            }
            BVar6 = ReadFile(param_2,pvStack_25c,uVar5,&DStack_254,(LPOVERLAPPED)0x0);
            pvStack_240 = pvStack_25c;
            DStack_23c = uVar5;
            if (BVar6 == 0) {
              FUN_01070600(0xaaaaaaaa,"CompressZipFile",0);
              local_278 = -0x7ffb1ff8;
              goto LAB_0106b781;
            }
            if ((*(int *)(param_1 + 0x20) != 0) &&
               ((local_278 = FUN_011495e0(), local_278 == -0x7ffb1ff4 ||
                (local_278 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(DStack_254,0),
                local_278 < 0)))) goto LAB_0106b680;
            bVar7 = CARRY4(local_264,DStack_254);
            local_264 = local_264 + DStack_254;
            local_260 = local_260 + (uint)bVar7;
            uStack_258 = FUN_01149790(uStack_258,pvStack_25c,uVar5);
            iVar4 = FUN_01149d50(&pvStack_240,0);
            if (iVar4 != 0) break;
            if (uStack_230 < 0x40a49) {
              iStack_244 = -(uint)(0x40a49 < uStack_230);
              BVar6 = WriteFile(*(HANDLE *)(param_1 + 0xc),pvVar3,0x40a49 - uStack_230,&uStack_274,
                                (LPOVERLAPPED)0x0);
              if (BVar6 != 0) {
                uStack_268 = FUN_01149790(uStack_268,pvVar3,uStack_274);
                uVar5 = *(uint *)(param_1 + 0x18);
                uStack_230 = 0x40a49;
                *(uint *)(param_1 + 0x18) = uVar5 + uStack_274;
                bVar7 = CARRY4(local_270,uStack_274);
                local_270 = local_270 + uStack_274;
                *(uint *)(param_1 + 0x1c) =
                     *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar5,uStack_274);
                local_26c = local_26c + (uint)bVar7;
                pvStack_234 = pvVar3;
              }
            }
            if (((int)local_24c[0] < local_260) ||
               (((int)local_24c[0] <= local_260 && (local_250 <= local_264)))) goto LAB_0106b680;
            if (BVar6 == 0) goto LAB_0106b781;
            DVar1 = local_250;
            if (local_278 < 0) goto LAB_0106b680;
          }
          if (iVar4 == -4) {
            FUN_01070600(0xaaaaaaa3,"CompressZipFile",0);
            local_278 = -0x7ff8fff2;
          }
          else if (iVar4 == -5) {
            FUN_01070600(0xaaaaaaa7,"CompressZipFile",0);
            local_278 = -0x7ffb1fc4;
          }
          else {
            FUN_01070600(0xaaaaaaa9,"CompressZipFile",0);
            local_278 = -0x7ffb1ff7;
          }
LAB_0106b680:
          if (BVar6 != 0) {
            do {
              iVar4 = FUN_01149d50(&pvStack_240,4);
              if ((iVar4 != 1) && (iVar4 != 0)) {
                FUN_01070600(0xaaaaaaaa,"CompressZipFile",0);
                local_278 = -0x7ffb1ff7;
                break;
              }
              iStack_244 = -(uint)(0x40a49 < uStack_230);
              BVar6 = WriteFile(*(HANDLE *)(param_1 + 0xc),pvVar3,0x40a49 - uStack_230,&uStack_274,
                                (LPOVERLAPPED)0x0);
              if (BVar6 != 0) {
                uStack_268 = FUN_01149790(uStack_268,pvVar3,uStack_274);
                uVar5 = *(uint *)(param_1 + 0x18);
                uStack_230 = 0x40a49;
                *(uint *)(param_1 + 0x18) = uVar5 + uStack_274;
                bVar7 = CARRY4(local_270,uStack_274);
                local_270 = local_270 + uStack_274;
                *(uint *)(param_1 + 0x1c) =
                     *(int *)(param_1 + 0x1c) + (uint)CARRY4(uVar5,uStack_274);
                local_26c = local_26c + (uint)bVar7;
                pvStack_234 = pvVar3;
              }
            } while (iVar4 != 1);
            FUN_0114a0c0(&pvStack_240);
          }
        }
        else {
          FUN_01070600(0xaaaaaaa3,"CompressZipFile",0);
          local_278 = -0x7ff8fff2;
        }
LAB_0106b781:
        pvVar2 = GlobalHandle(pvVar3);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pvVar3);
        GlobalFree(pvVar2);
        if (-1 < local_278) {
          *(uint *)(param_3 + 0x24) = local_270;
          *(int *)(param_3 + 0x28) = local_26c;
          *(undefined4 *)(param_3 + 0x20) = uStack_258;
          *(undefined4 *)(param_3 + 0x1c) = uStack_268;
        }
      }
    }
    pvVar3 = pvStack_25c;
    pvVar2 = GlobalHandle(pvStack_25c);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar3);
    GlobalFree(pvVar2);
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0);
  }
  return local_278;
}


