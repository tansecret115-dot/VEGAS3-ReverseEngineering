/* Module: sfcdi.dll
   Function: FUN_5bf12320
   Address: 5bf12320
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf12320(HANDLE param_1,_sfcdtext *param_2)

{
  HANDLE hFile;
  _sfcdtext *p_Var1;
  HANDLE nNumberOfBytesToRead;
  uint uVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 *puVar6;
  _sfcdtext *p_Var7;
  int local_50;
  DWORD local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  LONG local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [6];
  undefined4 local_8;
  undefined4 local_4;
  
  hFile = param_1;
  FUN_5bf34200(param_1,&local_50,&local_44);
  local_48 = FUN_5bf34190(hFile,&local_50,&param_1);
  puVar6 = local_20;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  nNumberOfBytesToRead = param_1;
  if ((HANDLE)0x1f < param_1) {
    nNumberOfBytesToRead = (HANDLE)0x20;
  }
  ReadFile(hFile,local_20,(DWORD)nNumberOfBytesToRead,&local_4c,(LPOVERLAPPED)0x0);
  p_Var1 = param_2;
  puVar6 = local_20;
  p_Var7 = param_2;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)p_Var7 = *puVar6;
    puVar6 = puVar6 + 1;
    p_Var7 = p_Var7 + 4;
  }
  *(undefined4 *)(param_2 + 0x18) = local_8;
  *(undefined4 *)(param_2 + 0x718) = local_4;
  if (((uint)param_1 & 1) != 0) {
    param_1 = (HANDLE)((int)param_1 + 1);
  }
  param_2 = (_sfcdtext *)((local_44 - (int)param_1) - 8);
  if (param_2 < (_sfcdtext *)0x9) {
    return local_48;
  }
  do {
    uVar2 = FUN_5bf34190(hFile,&local_50,&param_1);
    local_3c = 0;
    local_38 = 0;
    DVar3 = SetFilePointer(hFile,0,(PLONG)&local_38,1);
    local_48 = DVar3 + (int)param_1;
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if (local_50 == 0x45524e47) {
      BVar4 = ReadFile(hFile,&local_2c,0xc,&local_4c,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
        return 0x8004e008;
      }
      *(undefined4 *)(p_Var1 + 0x674) = local_24;
      *(undefined4 *)(p_Var1 + 0x670) = local_28;
      local_40 = (int)param_1 - local_2c;
      uVar2 = FUN_5bf356c0(hFile,(uchar *)(p_Var1 + 0x678),0xa0,&local_40);
joined_r0x5bf124af:
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    }
    else if (local_50 == 0x5453494c) {
      ReadFile(hFile,&local_50,4,&local_4c,(LPOVERLAPPED)0x0);
      if (local_50 != 0x5345444c) {
        return 0x8004e00b;
      }
      uVar2 = cdtext_RiffLoadDesList(hFile,p_Var1,(int)param_1 + -4);
      goto joined_r0x5bf124af;
    }
    if (((uint)param_1 & 1) != 0) {
      param_1 = (HANDLE)((int)param_1 + 1);
    }
    local_34 = local_48;
    if ((local_48 & 1) != 0) {
      local_34 = local_48 + 1;
    }
    param_2 = param_2 + (-8 - (int)param_1);
    local_30 = 0;
    SetFilePointer(hFile,local_34,&local_30,0);
    if (param_2 < (_sfcdtext *)0x9) {
      return uVar2;
    }
  } while( true );
}


