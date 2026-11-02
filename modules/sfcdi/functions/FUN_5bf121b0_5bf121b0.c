/* Module: sfcdi.dll
   Function: FUN_5bf121b0
   Address: 5bf121b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf121b0(HANDLE param_1,int param_2,int *param_3)

{
  int lDistanceToMove;
  HANDLE hFile;
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  int *piVar5;
  int local_40;
  uint local_3c;
  DWORD local_38;
  DWORD local_34;
  undefined4 local_30;
  DWORD local_2c;
  int local_28;
  LONG local_24;
  int local_20 [4];
  int local_10;
  
  hFile = param_1;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0xc);
  }
  uVar2 = FUN_5bf12140(param_1,(int *)&param_1);
  if (-1 < (int)uVar2) {
    for (; (HANDLE)0xc < param_1; param_1 = (HANDLE)((int)param_1 + (-0xc - local_40))) {
      FUN_5bf33d00(hFile,&local_38);
      uVar2 = FUN_5bf34200(hFile,&param_2,&local_40);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      local_30 = 0;
      local_2c = 0;
      DVar3 = SetFilePointer(hFile,0,(PLONG)&local_2c,1);
      lDistanceToMove = DVar3 + local_40;
      if ((param_2 == 0x58544443) && (FUN_5bf34190(hFile,&param_2,&local_3c), param_2 == 0x20524448)
         ) {
        piVar5 = local_20;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        uVar2 = local_3c;
        if (0x1f < local_3c) {
          uVar2 = 0x20;
        }
        ReadFile(hFile,local_20,uVar2,&local_34,(LPOVERLAPPED)0x0);
        iVar4 = local_20[3];
        if (local_10 != 0) {
          iVar4 = local_10;
        }
        if (iVar4 == iVar1) {
          if (param_3 != (int *)0x0) {
            *param_3 = local_40;
          }
          FUN_5bf33d20(hFile,local_38);
          return 0;
        }
      }
      local_24 = 0;
      local_28 = lDistanceToMove;
      SetFilePointer(hFile,lDistanceToMove,&local_24,0);
    }
    uVar2 = 0x8004e00a;
  }
  return uVar2;
}


