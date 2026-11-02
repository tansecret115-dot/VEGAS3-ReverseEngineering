/* Module: mp3plug.dll
   Function: FUN_5f69a080
   Address: 5f69a080
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_5f69a080(HANDLE param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  uint local_114;
  LPSTR local_110;
  LONG local_10c;
  DWORD local_108;
  DWORD local_104;
  CHAR local_100 [28];
  char local_e4;
  char local_e3;
  undefined1 local_e2;
  
  if (param_1 == (HANDLE)0xffffffff) {
    DVar2 = GetLastError();
  }
  else {
    local_104 = GetFileSize(param_1,(LPDWORD)0x0);
    iVar1 = FUN_5f699d40(param_1,(int *)&local_104);
    if (iVar1 == 0) {
      return 0x8004e00a;
    }
    local_110 = (LPSTR)0xffffff83;
    local_10c = -1;
    SetFilePointer(param_1,-0x7d,&local_10c,2);
    DVar2 = FUN_5f699df0(param_1,0x1e,(LPSTR)*param_2,param_2[7]);
    if (-1 < (int)DVar2) {
      DVar2 = FUN_5f699df0(param_1,0x1e,(LPSTR)param_2[1],param_2[8]);
      if (-1 < (int)DVar2) {
        DVar2 = FUN_5f699df0(param_1,0x1e,(LPSTR)param_2[2],param_2[9]);
        if (-1 < (int)DVar2) {
          DVar2 = FUN_5f699df0(param_1,4,(LPSTR)param_2[3],param_2[10]);
          if (-1 < (int)DVar2) {
            BVar3 = ReadFile(param_1,local_100,0x1e,&local_108,(LPOVERLAPPED)0x0);
            if (BVar3 != 0) {
              local_110 = (LPSTR)param_2[5];
              iVar1 = param_2[0xc];
              local_e2 = 0;
              lstrcpynA(local_110,local_100,iVar1);
              local_110[iVar1 + -1] = '\0';
              if ((local_e4 == '\0') && (local_e3 != '\0')) {
                FUN_5f6a0a50((int)local_e3,(uchar *)param_2[6],0);
              }
              else {
                *(undefined1 *)param_2[6] = 0;
              }
              BVar3 = ReadFile(param_1,&local_114,1,&local_108,(LPOVERLAPPED)0x0);
              if (BVar3 != 0) {
                FUN_5f699ce0(local_114 & 0xff,(LPSTR)param_2[4],param_2[0xb]);
                if (param_3 != (undefined1 *)0x0) {
                  *param_3 = (undefined1)local_114;
                  return DVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return DVar2;
}


