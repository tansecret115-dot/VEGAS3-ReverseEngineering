/* Module: mp3plug.dll
   Function: FUN_5f689900
   Address: 5f689900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_5f689900(void *this,uint param_1,int param_2,byte *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  HGLOBAL pvVar8;
  LPVOID lpBuffer;
  BOOL BVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  bool bVar16;
  undefined4 *local_38;
  undefined2 *local_34;
  int local_30;
  DWORD local_20;
  LONG local_1c;
  LONG local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  ushort local_c;
  byte bStack_a;
  byte bStack_9;
  
  pbVar7 = param_3;
  if (*(short *)(param_3 + 0x38) != 1) {
    return 0x80070057;
  }
  uVar1 = *(ushort *)(param_3 + 0x36);
  uVar2 = *(ushort *)(param_3 + 0x3a);
  pvVar8 = GlobalAlloc(0x42,(uint)uVar1 * (uint)uVar2);
  lpBuffer = GlobalLock(pvVar8);
  uVar14 = 0;
  if (lpBuffer == (LPVOID)0x0) {
    return 0x8007000e;
  }
  local_1c = *(LONG *)(pbVar7 + 0x3e);
  local_18 = *(LONG *)(pbVar7 + 0x42);
  SetFilePointer(*(HANDLE *)((int)this + 4),local_1c,&local_18,0);
  BVar9 = ReadFile(*(HANDLE *)((int)this + 4),lpBuffer,(uint)uVar1 * (uint)uVar2,&local_20,
                   (LPOVERLAPPED)0x0);
  if (BVar9 == 0) {
    pvVar8 = GlobalHandle(lpBuffer);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(lpBuffer);
    GlobalFree(pvVar8);
    return 0x8004e008;
  }
  param_3 = (byte *)0xf;
  local_c = (pbVar7[1] >> 1 & 3) << 0xd |
            (ushort)(((pbVar7[1] & 0x18) >> 3) << 0xb) |
            (local_c ^ (((ushort)(pbVar7[1] >> 5) | (ushort)*pbVar7 << 3) ^ local_c) & 0x7ff) &
            0x87ff;
  uVar10 = FUN_5f688990((int)pbVar7,1,(int *)&param_3);
  local_c = (ushort)(uVar10 << 0xf) | local_c & 0x7fff;
  uVar10 = FUN_5f688990((int)pbVar7,4,(int *)&param_3);
  bStack_a = bStack_a ^ ((byte)uVar10 ^ bStack_a) & 0xf;
  uVar10 = FUN_5f688990((int)pbVar7,2,(int *)&param_3);
  uVar1 = CONCAT11(bStack_9,bStack_a) & 0xffcf;
  bStack_a = (byte)((uVar10 & 3) << 4) | (byte)uVar1;
  bStack_9 = (byte)(uVar1 >> 8);
  uVar10 = FUN_5f688990((int)pbVar7,1,(int *)&param_3);
  uVar1 = CONCAT11(bStack_9,bStack_a) & 0xffbf;
  bStack_a = (byte)((uVar10 & 1) << 6) | (byte)uVar1;
  bStack_9 = (byte)(uVar1 >> 8);
  uVar10 = FUN_5f688990((int)pbVar7,1,(int *)&param_3);
  uVar1 = CONCAT11(bStack_9,bStack_a) & 0xff7f;
  bStack_a = (byte)((uVar10 & 1) << 7) | (byte)uVar1;
  bStack_9 = (byte)(uVar1 >> 8);
  uVar10 = FUN_5f688990((int)pbVar7,2,(int *)&param_3);
  uVar1 = CONCAT11(bStack_9,bStack_a) & 0xfcff;
  bStack_9 = (byte)uVar10 & 3 | (byte)(uVar1 >> 8);
  bStack_a = (byte)uVar1;
  uVar10 = FUN_5f688990((int)pbVar7,2,(int *)&param_3);
  uVar2 = CONCAT11(bStack_9,bStack_a);
  uVar1 = uVar2 & 0xf3ff;
  bVar6 = (byte)(uVar1 >> 8);
  bStack_a = (byte)uVar1;
  if ((bStack_9 & 3) == 0) {
    uVar2 = uVar2 & 0xf0ff;
    bVar6 = (byte)(uVar2 >> 8);
    bStack_a = (byte)uVar2;
  }
  bStack_9 = (byte)(((uVar10 & 3) << 10) >> 8) | bVar6;
  uVar10 = FUN_5f688990((int)pbVar7,1,(int *)&param_3);
  uVar1 = CONCAT11(bStack_9,bStack_a) & 0xefff;
  bStack_9 = (byte)(((uVar10 & 1) << 0xc) >> 8) | (byte)(uVar1 >> 8);
  bStack_a = (byte)uVar1;
  uVar10 = FUN_5f688990((int)pbVar7,1,(int *)&param_3);
  uVar1 = CONCAT11(bStack_9,bStack_a) & 0xdfff;
  bStack_9 = (byte)(((uVar10 & 1) << 0xd) >> 8) | (byte)(uVar1 >> 8);
  bStack_a = (byte)uVar1;
  uVar10 = FUN_5f688990((int)pbVar7,2,(int *)&param_3);
  uVar1 = CONCAT11(bStack_9,bStack_a) & 0x3fff;
  bStack_9 = (byte)(uVar1 >> 8) | (byte)((uVar10 << 0xe) >> 8);
  bStack_a = (byte)uVar1;
  iVar11 = FUN_5f6883f0(&local_c);
  param_3 = (byte *)0x0;
  iVar12 = FUN_5f688910(&local_c);
  uVar10 = (iVar11 * 0x90) / iVar12;
  local_30 = 1;
  pbVar15 = (byte *)(param_1 - uVar10);
  iVar11 = (param_2 - ((int)uVar10 >> 0x1f)) - (uint)(param_1 < uVar10);
  *(uint *)((int)this + 0x82c) = *(uint *)((int)this + 0x82c) | 1;
  do {
    local_14 = *(undefined4 *)(pbVar7 + 0x32);
    uStack_10 = 0;
    uVar10 = ftol();
    if (uVar14 < uVar10) {
      sVar3 = *(short *)(pbVar7 + 0x3a);
      local_34 = (undefined2 *)((int)lpBuffer + (int)param_3 * 2);
      local_38 = (undefined4 *)((int)lpBuffer + (int)param_3 * 4);
      pbVar13 = param_3;
      do {
        if (sVar3 == 1) {
          param_3 = (byte *)(uint)pbVar13[(int)lpBuffer];
LAB_5f689cc8:
          bVar16 = CARRY4((uint)pbVar15,(uint)param_3);
          pbVar15 = pbVar15 + (int)param_3;
          iVar11 = iVar11 + (uint)bVar16;
        }
        else {
          if (sVar3 == 2) {
            param_3._1_1_ = (undefined1)((ushort)*local_34 >> 8);
            param_3._0_2_ = CONCAT11((char)*local_34,param_3._1_1_);
            param_3 = (byte *)(uint)(ushort)param_3;
            goto LAB_5f689cc8;
          }
          if (sVar3 == 4) {
            uVar4 = *local_38;
            uVar5 = CONCAT31(CONCAT21(CONCAT11((char)uVar4,(char)((uint)uVar4 >> 8)),
                                      (char)((uint)uVar4 >> 0x10)),(char)((uint)uVar4 >> 0x18));
            bVar16 = CARRY4((uint)pbVar15,uVar5);
            pbVar15 = pbVar15 + uVar5;
            iVar11 = iVar11 + (uint)bVar16;
          }
        }
        local_38 = local_38 + 1;
        local_34 = local_34 + 1;
        uVar14 = uVar14 + *(ushort *)(pbVar7 + 0x3c);
        pbVar13 = pbVar13 + 1;
        param_3 = pbVar13;
      } while (uVar14 < uVar10);
    }
    FUN_5f68c2e0(this,(uVar14 - 1) * param_4,0,(uint)pbVar15,iVar11);
    local_30 = local_30 + 1;
    if (9 < local_30) {
      pvVar8 = GlobalHandle(lpBuffer);
      GlobalUnlock(pvVar8);
      pvVar8 = GlobalHandle(lpBuffer);
      GlobalFree(pvVar8);
      return 0;
    }
  } while( true );
}


