/* Module: hhupd.exe
   Function: FUN_01002461
   Address: 01002461
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01002461(int param_1,LPBYTE param_2,HKEY param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LPVOID lpData;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint local_34 [5];
  DWORD local_20;
  DWORD local_1c;
  undefined4 local_18;
  LPVOID local_14;
  int local_10;
  int local_c;
  HGLOBAL local_8;
  
  iVar2 = param_1;
  local_8 = (HGLOBAL)0x0;
  local_18 = 0;
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    local_10 = 0;
    param_1 = 0;
    do {
      iVar1 = param_1 + iVar2 + 0x84 + *(int *)(iVar2 + 0x80);
      iVar3 = FUN_01002374(param_2,param_3,
                           (char *)(*(int *)(param_1 + iVar2 + 0xbc + *(int *)(iVar2 + 0x80)) + 0x84
                                   + iVar2));
      if (iVar3 == 0) goto LAB_010025cd;
      local_1c = GetFileVersionInfoSizeA((LPCSTR)param_2,&local_20);
      if (local_1c == 0) {
        piVar7 = (int *)(local_10 + iVar1);
        if ((((*piVar7 != 0) || (piVar7[1] != 0)) || (piVar7[3] != 0)) || (piVar7[4] != 0))
        goto LAB_010025cd;
      }
      else {
        local_8 = GlobalAlloc(0x42,local_1c);
        if ((local_8 == (HGLOBAL)0x0) || (lpData = GlobalLock(local_8), lpData == (LPVOID)0x0))
        goto LAB_010025cd;
        BVar4 = GetFileVersionInfoA((LPCSTR)param_2,local_20,local_1c,lpData);
        if ((BVar4 != 0) &&
           ((BVar4 = VerQueryValueA(lpData,"\\",&local_14,local_34 + 4), BVar4 != 0 &&
            (iVar3 = 0, local_34[4] != 0)))) {
          puVar8 = (uint *)(iVar1 + 0x10);
          do {
            uVar5 = FUN_0100260a(*(uint *)((int)local_14 + 8),*(uint *)((int)local_14 + 0xc),
                                 puVar8[-4],puVar8[-3]);
            uVar6 = *puVar8;
            *(uint *)((int)local_34 + iVar3 + 8) = uVar5;
            uVar6 = FUN_0100260a(*(uint *)((int)local_14 + 8),*(uint *)((int)local_14 + 0xc),
                                 puVar8[-1],uVar6);
            *(uint *)((int)local_34 + iVar3) = uVar6;
            iVar3 = iVar3 + 4;
            puVar8 = puVar8 + 6;
          } while (iVar3 < 8);
          if ((((int)local_34[2] < 0) || (0 < (int)local_34[0])) &&
             (((int)local_34[3] < 0 || (0 < (int)local_34[1])))) {
            GlobalUnlock(local_8);
            goto LAB_010025cd;
          }
        }
        GlobalUnlock(local_8);
      }
      local_c = local_c + 1;
      param_1 = param_1 + 0x3c;
      local_10 = local_10 + 0x18;
    } while (local_c < *(int *)(iVar2 + 0x7c));
  }
  local_18 = 1;
LAB_010025cd:
  *param_4 = local_c;
  if (local_8 != (HGLOBAL)0x0) {
    GlobalFree(local_8);
  }
  return local_18;
}


