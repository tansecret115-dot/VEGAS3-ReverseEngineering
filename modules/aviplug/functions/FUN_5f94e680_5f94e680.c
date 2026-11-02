/* Module: aviplug.dll
   Function: FUN_5f94e680
   Address: 5f94e680
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f94e680(HANDLE param_1,uint param_2,uint param_3,DWORD param_4,uint param_5,
                   uint *param_6,int param_7,uint *param_8)

{
  uint uVar1;
  HANDLE hFile;
  uint *puVar2;
  uint lDistanceToMove;
  BOOL BVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  uint local_4;
  
  hFile = param_1;
  if (param_8 != (uint *)0x0) {
    *param_8 = 0xffffffff;
    param_8[1] = 0xffffffff;
  }
  lDistanceToMove = param_2;
  uVar5 = param_3;
  if ((param_2 == 0xffffffff) && (param_3 == 0xffffffff)) {
    local_4 = 0;
    lDistanceToMove = SetFilePointer(param_1,0,(PLONG)&local_4,1);
    uVar5 = local_4;
  }
  if ((param_4 == 0xffffffff) && (param_5 == 0xffffffff)) {
    local_4 = 0;
    param_4 = SetFilePointer(hFile,0,(PLONG)&local_4,2);
    param_5 = local_4;
  }
  puVar2 = param_6;
  puVar4 = param_8;
  if (((int)uVar5 <= (int)param_5) && (((int)uVar5 < (int)param_5 || (lDistanceToMove < param_4))))
  {
    while( true ) {
      do {
        local_4 = uVar5;
        SetFilePointer(hFile,lDistanceToMove,(PLONG)&local_4,0);
        BVar3 = ReadFile(hFile,&param_2,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
        if ((BVar3 == 0) || (param_1 < (HANDLE)0x8)) {
          return (uint *)0x8004e008;
        }
        uVar1 = *puVar2;
        if (param_7 == 0) {
          if ((((uVar1 == 0) || (param_2 == uVar1)) || ((short)*puVar2 == (short)param_2)) ||
             (uVar1 >> 0x10 == param_2 >> 0x10)) {
            *puVar2 = param_2;
            puVar2[1] = param_3;
            *param_8 = lDistanceToMove;
            param_8[1] = uVar5;
            return (uint *)0x0;
          }
        }
        else if (uVar1 == param_2) {
          puVar2[1] = param_3;
          *param_8 = lDistanceToMove;
          param_8[1] = uVar5;
          return (uint *)0x0;
        }
        uVar1 = (param_3 & 1) + 8 + param_3;
        bVar6 = CARRY4(lDistanceToMove,uVar1);
        lDistanceToMove = lDistanceToMove + uVar1;
        uVar5 = uVar5 + bVar6;
      } while ((int)uVar5 < (int)param_5);
      puVar4 = (uint *)0x8004e00a;
      if ((int)param_5 < (int)uVar5) break;
      if (param_4 <= lDistanceToMove) {
        return (uint *)0x8004e00a;
      }
    }
  }
  return puVar4;
}


