/* Module: mp3plug.dll
   Function: FUN_5f69a280
   Address: 5f69a280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f69a280(HANDLE param_1,uint *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  HANDLE hFile;
  int *piVar2;
  BOOL BVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  undefined1 local_16 [2];
  DWORD local_14;
  byte local_10 [4];
  undefined4 local_c;
  undefined1 local_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  byte bStack_5;
  
  hFile = param_1;
  local_c = 0;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  BVar3 = ReadFile(hFile,local_10,3,&local_14,(LPOVERLAPPED)0x0);
  if (BVar3 != 0) {
    local_10[3] = 0;
    pbVar7 = &DAT_5f72c9b8;
    pbVar4 = local_10;
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_5f69a2f3:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_5f69a2f8;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_5f69a2f3;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_5f69a2f8:
    if (iVar5 == 0) {
      BVar3 = ReadFile(hFile,local_16,2,&local_14,(LPOVERLAPPED)0x0);
      if (BVar3 != 0) {
        BVar3 = ReadFile(hFile,&param_1,1,&local_14,(LPOVERLAPPED)0x0);
        if (BVar3 != 0) {
          BVar3 = ReadFile(hFile,&local_8,4,&local_14,(LPOVERLAPPED)0x0);
          piVar2 = param_4;
          if ((BVar3 != 0) &&
             (uVar6 = (((CONCAT12(uStack_6,CONCAT11(uStack_7,local_8)) & 0xff) << 7 |
                       CONCAT12(bStack_5,CONCAT11(uStack_6,uStack_7)) & 0xff) << 7 |
                      CONCAT11(bStack_5,uStack_6) & 0xff) << 7 | (uint)bStack_5, uVar6 < *param_2))
          {
            if (param_3 != (int *)0x0) {
              *param_3 = uVar6 + 10;
            }
            local_c = 1;
          }
          *param_4 = 10;
          if (((uint)param_1 & 0x40) != 0) {
            BVar3 = ReadFile(hFile,&param_2,4,&local_14,(LPOVERLAPPED)0x0);
            if (BVar3 != 0) {
              SetFilePointer(hFile,(LONG)param_2,(PLONG)0x0,1);
              *piVar2 = (int)param_2 + *piVar2 + 4;
            }
          }
        }
      }
    }
  }
  SetFilePointer(hFile,0,(PLONG)0x0,0);
  return local_c;
}


