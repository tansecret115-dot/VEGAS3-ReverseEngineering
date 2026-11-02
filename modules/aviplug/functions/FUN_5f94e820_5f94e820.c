/* Module: aviplug.dll
   Function: FUN_5f94e820
   Address: 5f94e820
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f94e820(HANDLE param_1,uint param_2,uint param_3,DWORD param_4,int param_5,int *param_6,
                   uint *param_7)

{
  uint uVar1;
  HANDLE hFile;
  uint lDistanceToMove;
  BOOL BVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int local_c;
  uint local_8;
  int local_4;
  
  hFile = param_1;
  if (param_7 != (uint *)0x0) {
    *param_7 = 0xffffffff;
    param_7[1] = 0xffffffff;
  }
  lDistanceToMove = param_2;
  uVar5 = param_3;
  if ((param_2 == 0xffffffff) && (param_3 == 0xffffffff)) {
    param_2 = 0;
    param_3 = 0;
    lDistanceToMove = SetFilePointer(param_1,0,(PLONG)&param_3,1);
    uVar5 = param_3;
  }
  uVar4 = param_5;
  if ((param_4 == 0xffffffff) && (param_5 == -1)) {
    param_2 = 0;
    param_3 = 0;
    param_4 = SetFilePointer(hFile,0,(PLONG)&param_3,2);
    uVar4 = param_3;
  }
  puVar3 = param_7;
  if (((int)uVar5 <= (int)uVar4) && (((int)uVar5 < (int)uVar4 || (lDistanceToMove < param_4)))) {
    while( true ) {
      do {
        param_2 = lDistanceToMove;
        param_3 = uVar5;
        SetFilePointer(hFile,lDistanceToMove,(PLONG)&param_3,0);
        BVar2 = ReadFile(hFile,&local_c,0xc,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          return (uint *)0x8004e008;
        }
        if (param_1 < (HANDLE)0xc) {
          return (uint *)0x8004e00a;
        }
        if ((*param_6 == local_c) && ((param_6[2] == 0 || (local_4 == param_6[2])))) {
          param_6[2] = local_4;
          param_6[1] = local_8;
          *param_7 = lDistanceToMove;
          param_7[1] = uVar5;
          return (uint *)0x0;
        }
        uVar1 = (local_8 & 1) + 8 + local_8;
        bVar6 = CARRY4(lDistanceToMove,uVar1);
        lDistanceToMove = lDistanceToMove + uVar1;
        uVar5 = uVar5 + bVar6;
      } while ((int)uVar5 < (int)uVar4);
      puVar3 = (uint *)0x8004e00a;
      if ((int)uVar4 < (int)uVar5) break;
      if (param_4 <= lDistanceToMove) {
        return (uint *)0x8004e00a;
      }
    }
  }
  return puVar3;
}


