/* Module: mp3plug.dll
   Function: FUN_5f688240
   Address: 5f688240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f688240(HANDLE param_1,uint *param_2,int *param_3,uint *param_4)

{
  HANDLE hFile;
  uint *puVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  char local_1c [4];
  DWORD local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  byte bStack_d;
  int local_8;
  int local_4;
  
  puVar1 = param_2;
  hFile = param_1;
  local_14 = 0;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  local_8 = *param_2 - 0x80;
  local_4 = param_2[1] - (uint)(*param_2 < 0x80);
  SetFilePointer(param_1,local_8,&local_4,0);
  BVar2 = ReadFile(hFile,local_1c,3,&local_18,(LPOVERLAPPED)0x0);
  if (BVar2 != 0) {
    iVar4 = 3;
    bVar7 = true;
    pcVar5 = local_1c;
    pcVar6 = "TAG";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      if (param_4 != (uint *)0x0) {
        *param_4 = *param_4 | 1;
      }
      uVar3 = *puVar1;
      local_14 = 1;
      *puVar1 = uVar3 - 0x80;
      puVar1[1] = (puVar1[1] - 1) + (uint)(0x7f < uVar3);
    }
  }
  SetFilePointer(hFile,0,(PLONG)0x0,0);
  BVar2 = ReadFile(hFile,local_1c,3,&local_18,(LPOVERLAPPED)0x0);
  if (BVar2 != 0) {
    iVar4 = 3;
    bVar7 = true;
    pcVar5 = local_1c;
    pcVar6 = "ID3";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      BVar2 = ReadFile(hFile,&param_1,2,&local_18,(LPOVERLAPPED)0x0);
      if (BVar2 != 0) {
        if (param_4 != (uint *)0x0) {
          *param_4 = *param_4 | 2;
        }
        BVar2 = ReadFile(hFile,&param_2,1,&local_18,(LPOVERLAPPED)0x0);
        if (BVar2 != 0) {
          BVar2 = ReadFile(hFile,&local_10,4,&local_18,(LPOVERLAPPED)0x0);
          if (BVar2 != 0) {
            uVar3 = (((CONCAT12(uStack_e,CONCAT11(uStack_f,local_10)) & 0xff) << 7 |
                     CONCAT12(bStack_d,CONCAT11(uStack_e,uStack_f)) & 0xff) << 7 |
                    CONCAT11(bStack_d,uStack_e) & 0xff) << 7 | (uint)bStack_d;
            if ((puVar1[1] < 0x80000000) && ((0 < (int)puVar1[1] || (uVar3 < *puVar1)))) {
              if (param_3 != (int *)0x0) {
                *param_3 = uVar3 + 10;
                param_3[1] = 0;
              }
              local_14 = 1;
            }
          }
        }
      }
    }
  }
  SetFilePointer(hFile,0,(PLONG)0x0,0);
  return local_14;
}


