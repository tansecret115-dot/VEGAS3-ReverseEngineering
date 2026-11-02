/* Module: 50comupd.exe
   Function: FUN_010024a7
   Address: 010024a7
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010024a7(int param_1,LPBYTE param_2,UINT param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPVOID lpData;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint local_30 [5];
  DWORD local_1c;
  DWORD local_18;
  undefined4 local_14;
  LPVOID local_10;
  int local_c;
  HGLOBAL local_8;
  
  iVar2 = param_1;
  local_8 = (HGLOBAL)0x0;
  local_14 = 0;
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    param_1 = 0;
    do {
      iVar3 = iVar2 + *(int *)(iVar2 + 0x80);
      piVar1 = (int *)(iVar3 + 0x84 + param_1);
      iVar3 = FUN_01002370(param_2,param_3,(HKEY)(*(int *)(iVar3 + 0xbc + param_1) + 0x84 + iVar2));
      if (iVar3 == 0) goto LAB_01002607;
      local_18 = GetFileVersionInfoSizeA((LPCSTR)param_2,&local_1c);
      if (local_18 == 0) {
        if ((((*piVar1 != 0) || (piVar1[1] != 0)) || (piVar1[3] != 0)) || (piVar1[4] != 0))
        goto LAB_01002607;
      }
      else {
        local_8 = GlobalAlloc(0x42,local_18);
        if ((local_8 == (HGLOBAL)0x0) || (lpData = GlobalLock(local_8), lpData == (LPVOID)0x0))
        goto LAB_01002607;
        BVar4 = GetFileVersionInfoA((LPCSTR)param_2,local_1c,local_18,lpData);
        if ((BVar4 != 0) &&
           ((BVar4 = VerQueryValueA(lpData,"\\",&local_10,local_30 + 4), BVar4 != 0 &&
            (iVar3 = 0, local_30[4] != 0)))) {
          puVar7 = (uint *)(piVar1 + 4);
          do {
            uVar5 = FUN_01002644(*(uint *)((int)local_10 + 8),*(uint *)((int)local_10 + 0xc),
                                 puVar7[-4],puVar7[-3]);
            uVar6 = *puVar7;
            *(uint *)((int)local_30 + iVar3 + 8) = uVar5;
            uVar6 = FUN_01002644(*(uint *)((int)local_10 + 8),*(uint *)((int)local_10 + 0xc),
                                 puVar7[-1],uVar6);
            *(uint *)((int)local_30 + iVar3) = uVar6;
            iVar3 = iVar3 + 4;
            puVar7 = puVar7 + 6;
          } while (iVar3 < 8);
          if ((((int)local_30[2] < 0) || (0 < (int)local_30[0])) &&
             (((int)local_30[3] < 0 || (0 < (int)local_30[1])))) {
            GlobalUnlock(local_8);
            goto LAB_01002607;
          }
        }
        GlobalUnlock(local_8);
      }
      local_c = local_c + 1;
      param_1 = param_1 + 0x3c;
    } while (local_c < *(int *)(iVar2 + 0x7c));
  }
  local_14 = 1;
LAB_01002607:
  *param_4 = local_c;
  if (local_8 != (HGLOBAL)0x0) {
    GlobalFree(local_8);
  }
  return local_14;
}


