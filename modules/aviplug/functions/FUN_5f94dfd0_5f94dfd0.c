/* Module: aviplug.dll
   Function: FUN_5f94dfd0
   Address: 5f94dfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f94dfd0(HANDLE param_1,int param_2,uint *param_3)

{
  uint uVar1;
  HANDLE hFile;
  uint *puVar2;
  BOOL BVar3;
  int iVar4;
  bool bVar5;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  hFile = param_1;
  *param_3 = 0xffffffff;
  param_3[1] = 0xffffffff;
  puVar2 = FUN_5f94dda0(param_1,(uint *)0x0,&local_24,(int *)&local_1c);
  if (-1 < (int)puVar2) {
    bVar5 = 0xfffffff3 < local_24;
    local_24 = local_24 + 0xc;
    local_20 = local_20 + bVar5;
    if (((int)local_20 <= local_18) &&
       ((iVar4 = param_2, (int)local_20 < local_18 || (local_24 < local_1c)))) {
      while( true ) {
        local_14 = local_24;
        local_10 = local_20;
        SetFilePointer(hFile,local_24,(PLONG)&local_10,0);
        BVar3 = ReadFile(hFile,&local_c,0xc,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
        if ((BVar3 == 0) || (param_1 < (HANDLE)0xc)) break;
        if ((local_c == 0x5453494c) && (local_4 == 0x6c727473)) {
          if (iVar4 == 0) {
            *param_3 = local_24;
            param_3[1] = local_20;
            return puVar2;
          }
          iVar4 = iVar4 + -1;
        }
        uVar1 = (local_8 & 1) + 8 + local_8;
        bVar5 = CARRY4(local_24,uVar1);
        local_24 = local_24 + uVar1;
        local_20 = local_20 + bVar5;
        if ((local_18 <= (int)local_20) && ((local_18 < (int)local_20 || (local_1c <= local_24))))
        break;
      }
    }
    puVar2 = (uint *)0x8004e00a;
  }
  return puVar2;
}


