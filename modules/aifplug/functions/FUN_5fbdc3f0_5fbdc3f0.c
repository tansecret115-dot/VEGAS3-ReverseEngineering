/* Module: aifplug.dll
   Function: FUN_5fbdc3f0
   Address: 5fbdc3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbdc3f0(HANDLE param_1,short *param_2,uint *param_3,int *param_4)

{
  HANDLE hFile;
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  uint uVar7;
  DWORD DVar8;
  short *psVar9;
  DWORD local_40;
  HANDLE local_3c;
  DWORD local_38;
  uint local_34;
  int local_30 [2];
  short local_28;
  uint local_26;
  short local_22;
  ushort local_20 [6];
  short local_14 [10];
  
  hFile = param_1;
  psVar9 = param_2;
  if (param_2 == (short *)0x0) {
    psVar9 = local_14;
  }
  iVar4 = FUN_5fbdc390(param_1,&local_3c);
  if (iVar4 == 0) {
    return -0x7ffb1ff5;
  }
  FUN_5fbdfdc0(hFile,&local_38);
  param_1 = local_3c;
  iVar4 = FUN_5fbdbf10(hFile,0x434f4d4d,&local_34,(int *)&param_1);
  if (-1 < iVar4) {
    BVar5 = ReadFile(hFile,&local_28,0x12,&local_40,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
      return -0x7ffb1ff8;
    }
    if (local_40 != 0x12) {
      return -0x7ffb1ff8;
    }
    FUN_5fbdbbf0((undefined1 *)&local_28,1);
    FUN_5fbdbc20((undefined1 *)&local_26,1);
    FUN_5fbdbbf0((undefined1 *)&local_22,1);
    FUN_5fbdbbf0((undefined1 *)local_20,5);
    uVar6 = FUN_5fbdc1c0(local_20);
    *(undefined4 *)(psVar9 + 2) = uVar6;
    psVar9[7] = local_22;
    psVar9[1] = local_28;
    *psVar9 = (local_22 != 8) - 0x1ff;
    uVar2 = ((ushort)psVar9[7] >> 3) * psVar9[1];
    psVar9[6] = uVar2;
    *(uint *)(psVar9 + 4) = (uint)uVar2 * *(int *)(psVar9 + 2);
    if (uVar2 == 0) {
      sVar3 = 1;
    }
    else {
      sVar3 = psVar9[6];
    }
    psVar9[6] = sVar3;
    FUN_5fbdfde0(hFile,local_38);
    param_1 = local_3c;
    iVar4 = FUN_5fbdbf10(hFile,0x53534e44,(uint *)&param_2,(int *)&param_1);
    if (-1 < iVar4) {
      param_2 = param_2 + -4;
      BVar5 = ReadFile(hFile,local_30,8,&local_40,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        return -0x7ffb1ff8;
      }
      if (local_40 != 8) {
        return -0x7ffb1ff8;
      }
      FUN_5fbdbc20((undefined1 *)local_30,2);
      piVar1 = param_4;
      if (local_30[0] != 0) {
        param_2 = (short *)((int)param_2 - local_30[0]);
      }
      if (param_3 != (uint *)0x0) {
        uVar7 = (uint)param_2 / (uint)(ushort)psVar9[6];
        *param_3 = uVar7;
        if (local_26 <= uVar7) {
          uVar7 = local_26;
        }
        *param_3 = uVar7;
      }
      if (param_4 != (int *)0x0) {
        DVar8 = SetFilePointer(hFile,0,(PLONG)0x0,1);
        *piVar1 = DVar8 + local_30[0];
      }
    }
  }
  return iVar4;
}


