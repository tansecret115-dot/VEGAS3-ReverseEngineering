/* Module: vegas30.exe
   Function: FUN_005dea00
   Address: 005dea00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005deb81) */

int FUN_005dea00(HANDLE param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  longlong lVar9;
  int local_48;
  DWORD local_44;
  undefined8 local_40;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  int local_20 [4];
  int local_10 [4];
  
  local_48 = -0x7ffb1ff8;
  iVar1 = FUN_005de1a0(param_1,&local_38,0);
  if (((iVar1 != 0) && (-1 < local_34)) &&
     ((iVar1 = local_34, uVar5 = local_38, lVar9 = CONCAT44(local_40._4_4_,(uint)local_40),
      0 < local_34 || (lVar9 = CONCAT44(local_40._4_4_,(uint)local_40), 0x17 < local_38)))) {
    do {
      local_40 = lVar9;
      local_48 = riff64_ReadChunkHeader(param_1,local_20,&local_40);
      if (local_48 < 0) {
        return local_48;
      }
      uVar4 = uVar5 - 0x18;
      iVar3 = 4;
      iVar1 = iVar1 + -1 + (uint)(0x17 < uVar5);
      bVar8 = true;
      piVar6 = local_20;
      piVar7 = &DAT_0062a4d0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *piVar6 == *piVar7;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar8);
      local_24 = iVar1;
      if (bVar8) {
        riff64_SaveLocation(param_1,&local_30);
        BVar2 = ReadFile(param_1,local_10,0x10,&local_44,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          return -0x7ffb1ff8;
        }
        iVar1 = 4;
        bVar8 = true;
        piVar6 = &DAT_0062a520;
        piVar7 = local_10;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar8 = *piVar6 == *piVar7;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          local_48 = FUN_005dda70(param_1,param_4,param_3,(uint)local_40 - 0x10,
                                  local_40._4_4_ - (uint)((uint)local_40 < 0x10),param_6,0,100,
                                  param_2,0,0);
          if (local_48 != 0x4e002) goto LAB_005deb25;
          *(undefined4 *)(param_6 + 0x13c) = 1;
          local_48 = 0;
        }
        else {
LAB_005deb25:
          if (local_48 < 0) {
            return local_48;
          }
        }
        riff64_RestoreLocation(param_1,local_30,local_2c);
        lVar9 = riff64_SkipChunk(param_1,local_40);
        iVar1 = local_24;
      }
      else {
        lVar9 = riff64_SkipChunk(param_1,local_40);
      }
      if (CONCAT44(iVar1,uVar4) < lVar9) {
        bVar8 = uVar4 < (uVar4 & 7);
        uVar5 = uVar4 - (uVar4 & 7);
        uVar4 = uVar5 + 8;
        iVar1 = (iVar1 - (uint)bVar8) + (uint)(0xfffffff7 < uVar5);
        if (lVar9 != CONCAT44(iVar1,uVar4)) {
          local_48 = 0;
          goto LAB_005debd0;
        }
      }
      uVar5 = uVar4 - (uint)lVar9;
      iVar1 = (iVar1 - (int)((ulonglong)lVar9 >> 0x20)) - (uint)(uVar4 < (uint)lVar9);
      if ((*(byte *)(param_6 + 0x1c) & 1) != 0) {
        return -0x7ffb1ff4;
      }
    } while ((0 < iVar1) || ((-1 < iVar1 && (0x17 < uVar5))));
    if (-1 < local_48) {
LAB_005debd0:
      if ((*(byte *)(param_6 + 0x1c) & 1) != 0) {
        return -0x7ffb1ff4;
      }
      local_40 = lVar9;
      FUN_004e7320(param_6,100);
    }
  }
  return local_48;
}


