/* Module: aifplug.dll
   Function: FUN_5fbd1fd0
   Address: 5fbd1fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5fbd1fd0(int param_1)

{
  short sVar1;
  BOOL BVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  undefined4 uVar4;
  DWORD DVar5;
  int iVar6;
  uint local_3c;
  int local_38;
  int local_34;
  DWORD local_30;
  DWORD local_2c;
  uint local_28;
  uint local_24 [2];
  undefined4 local_1c;
  LONG local_18;
  undefined2 local_14;
  undefined4 local_12;
  undefined2 local_e;
  ushort local_c [6];
  
  iVar6 = 0;
  if (*(int *)(param_1 + 0x220) == 0) {
    iVar6 = FUN_5fbdc390(*(HANDLE *)(param_1 + 0x214),&local_34);
    if (iVar6 == 0) {
      return -0x7ffb1ff5;
    }
    ((LPFILETIME)(param_1 + 0x218))->dwLowDateTime = 0;
    *(undefined4 *)(param_1 + 0x21c) = 0;
    GetFileTime(*(HANDLE *)(param_1 + 0x214),(LPFILETIME)0x0,(LPFILETIME)0x0,
                (LPFILETIME)(param_1 + 0x218));
    FUN_5fbdfdc0(*(HANDLE *)(param_1 + 0x214),&local_30);
    local_38 = local_34;
    iVar6 = FUN_5fbdbf10(*(HANDLE *)(param_1 + 0x214),0x434f4d4d,&local_28,&local_38);
    if (-1 < iVar6) {
      BVar2 = ReadFile(*(HANDLE *)(param_1 + 0x214),&local_14,0x12,&local_2c,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return -0x7ffb1ff8;
      }
      FUN_5fbd14d0((undefined1 *)&local_14,1);
      FUN_5fbd1500((undefined1 *)&local_12,1);
      FUN_5fbd14d0((undefined1 *)&local_e,1);
      FUN_5fbd14d0((undefined1 *)local_c,5);
      hMem = GlobalAlloc(0x42,0x12);
      pvVar3 = GlobalLock(hMem);
      *(LPVOID *)(param_1 + 0x220) = pvVar3;
      if (pvVar3 == (LPVOID)0x0) {
        return -0x7ffb1ff8;
      }
      uVar4 = FUN_5fbdc1c0(local_c);
      *(undefined4 *)(*(int *)(param_1 + 0x220) + 4) = uVar4;
      *(undefined2 *)(*(int *)(param_1 + 0x220) + 0xe) = local_e;
      *(undefined2 *)(*(int *)(param_1 + 0x220) + 2) = local_14;
      if (*(int *)(*(int *)(param_1 + 0x220) + 4) == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x220) + 4) = 0xac44;
      }
      **(short **)(param_1 + 0x220) = ((*(short **)(param_1 + 0x220))[7] != 8) - 0x1ff;
      iVar6 = *(int *)(param_1 + 0x220);
      *(ushort *)(iVar6 + 0xc) = (*(ushort *)(iVar6 + 0xe) >> 3) * *(short *)(iVar6 + 2);
      iVar6 = *(int *)(param_1 + 0x220);
      *(uint *)(iVar6 + 8) = (uint)*(ushort *)(iVar6 + 0xc) * *(int *)(iVar6 + 4);
      sVar1 = *(short *)(*(int *)(param_1 + 0x220) + 0xc);
      if (sVar1 == 0) {
        sVar1 = 1;
      }
      *(short *)(*(int *)(param_1 + 0x220) + 0xc) = sVar1;
      FUN_5fbdfde0(*(HANDLE *)(param_1 + 0x214),local_30);
      local_38 = local_34;
      iVar6 = FUN_5fbdbf10(*(HANDLE *)(param_1 + 0x214),0x53534e44,&local_3c,&local_38);
      if (iVar6 < 0) {
        return -0x7ffb1ff5;
      }
      local_3c = local_3c - 8;
      BVar2 = ReadFile(*(HANDLE *)(param_1 + 0x214),local_24,8,&local_2c,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) {
        return -0x7ffb1ff8;
      }
      FUN_5fbd1500((undefined1 *)local_24,2);
      local_3c = local_3c - local_24[0];
      local_1c = 0;
      local_18 = 0;
      DVar5 = SetFilePointer(*(HANDLE *)(param_1 + 0x214),0,&local_18,1);
      *(uint *)(param_1 + 0x228) = local_24[0] + DVar5;
      *(uint *)(param_1 + 0x230) = local_3c;
      *(undefined4 *)(param_1 + 0x238) = local_12;
      *(uint *)(param_1 + 0x22c) = local_18 + (uint)CARRY4(local_24[0],DVar5);
      *(undefined4 *)(param_1 + 0x234) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
    }
  }
  return iVar6;
}


