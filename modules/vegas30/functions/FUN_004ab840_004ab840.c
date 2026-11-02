/* Module: vegas30.exe
   Function: FUN_004ab840
   Address: 004ab840
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ab840(int param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  HGLOBAL hMem;
  uchar *_Dest;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int local_24;
  uchar *local_20;
  uint local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (0 < *param_2)) {
    local_20 = *(uchar **)param_2[2];
    if ((*(int *)(local_20 + 0x208) == 6) && (1 < *param_2)) {
      local_20 = (uchar *)((int *)param_2[2])[1];
    }
    if ((local_20 != (uchar *)0x0) && (*(int *)(local_20 + 0x208) != 6)) {
      param_2 = (int *)0x0;
      iVar3 = FUN_004ab190(local_20,0,&param_2);
      if ((-1 < iVar3) && (param_2 != (int *)0x0)) {
        iVar6 = 0;
        bVar1 = false;
        bVar2 = false;
        local_8 = 0;
        local_4 = 0;
        local_10 = 0;
        local_c = 0;
        local_24 = 0;
        iVar3 = FUN_004ab060(param_2,3);
        if ((iVar3 != 0) && (iVar3 = FUN_004aafe0(param_2,3,0), iVar3 != 0)) {
          local_10 = *(undefined4 *)(iVar3 + 0x20);
          local_c = *(undefined4 *)(iVar3 + 0x24);
          bVar1 = true;
          local_24 = 1;
          iVar6 = 1;
        }
        iVar3 = FUN_004ab060(param_2,2);
        if ((iVar3 != 0) && (iVar3 = FUN_004aafe0(param_2,2,0), iVar3 != 0)) {
          local_8 = *(undefined4 *)(iVar3 + 0x20);
          local_4 = *(undefined4 *)(iVar3 + 0x24);
          iVar6 = iVar6 + 1;
          bVar2 = true;
          local_24 = iVar6;
        }
        if ((iVar6 != 0) && (iVar3 = FUN_004aaca0(iVar6), iVar3 != 0)) {
          FUN_004aad00(iVar3,DAT_0064b138);
          uVar5 = 0;
          iVar8 = 0;
          if (iVar6 != 0) {
            local_1c = iVar3 + 0x70;
            do {
              puVar7 = (uint *)(-(uint)(uVar5 < *(uint *)(iVar3 + 8)) & local_1c);
              *puVar7 = *puVar7 & 0xfffffffc;
              puVar7[0x15] = 0;
              puVar7[0x16] = 0;
              puVar7[0x17] = 0;
              puVar7[0x18] = 0;
              puVar7[6] = 0;
              puVar7[8] = 0;
              puVar7[7] = 0;
              puVar7[9] = 0;
              puVar7[2] = 0;
              puVar7[0xe] = uVar5;
              puVar7[0xf] = 0;
              puVar7[4] = uVar5;
              *puVar7 = *puVar7 | 8;
              iVar6 = lstrlenA((LPCSTR)local_20);
              if (0 < (int)(iVar6 + 1U)) {
                hMem = GlobalAlloc(0x40,iVar6 + 1U);
                _Dest = GlobalLock(hMem);
                puVar7[1] = (uint)_Dest;
                if (_Dest != (uchar *)0x0) {
                  _mbscpy(_Dest,local_20);
                }
              }
              uVar5 = uVar5 + 1;
              local_1c = local_1c + 0x68;
              iVar8 = local_24;
            } while ((int)uVar5 < local_24);
          }
          *(undefined4 *)(iVar3 + 0x48) = 2;
          if (bVar1) {
            uVar4 = FUN_004a9cd0(0);
            *(undefined4 *)(iVar3 + 0x78) = uVar4;
            *(undefined4 *)(iVar3 + 0x90) = local_10;
            *(undefined4 *)(iVar3 + 0x94) = local_c;
            *(undefined1 **)(iVar3 + 0xd4) = &LAB_004a9de0;
          }
          if (bVar2) {
            iVar6 = iVar3 + (uint)bVar1 * 0x68;
            uVar4 = FUN_004a9cd0((uint)bVar1);
            *(undefined4 *)(iVar6 + 0x78) = uVar4;
            *(undefined4 *)(iVar6 + 0x90) = local_8;
            *(undefined4 *)(iVar6 + 0x94) = local_4;
            *(undefined1 **)(iVar6 + 0xd4) = &LAB_004a9de0;
          }
          *(int *)(iVar3 + 8) = iVar8;
          *(undefined4 *)(iVar3 + 0xc) = 0;
          *(undefined4 *)(param_1 + 0x1a0) = 0;
          *(undefined4 *)(param_1 + 0x1a4) = 0;
          return iVar3;
        }
      }
    }
  }
  return 0;
}


