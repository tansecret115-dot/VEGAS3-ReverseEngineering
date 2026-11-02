/* Module: sfnetmedia.dll
   Function: FUN_00426ee0
   Address: 00426ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00426ee0(int *param_1,LPCSTR param_2)

{
  uint uVar1;
  HGLOBAL pvVar2;
  LPCVOID local_110;
  uint *local_10c;
  int local_108;
  BYTE local_104 [259];
  undefined1 local_1;
  
  local_10c = (uint *)0x0;
  uVar1 = FUN_00425800(param_1,&local_10c);
  if (-1 < (int)uVar1) {
    local_110 = (LPCVOID)0x0;
    uVar1 = 0;
    do {
      local_108 = FUN_004258b0(local_10c,(int)&local_110);
      if (-1 < local_108) {
        lstrcpynA((LPSTR)local_104,param_2,0x104);
        local_1 = 0;
        FUN_00413260(local_104,0x104);
        _mbscat(local_104,*(uchar **)((int)local_110 + 0x24));
        uVar1 = FUN_00426820((int)param_1,(int)local_110,local_104,0);
      }
      if (local_110 != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(local_110);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(local_110);
        GlobalFree(pvVar2);
        local_110 = (LPCVOID)0x0;
      }
    } while ((-1 < local_108) && (-1 < (int)uVar1));
    FUN_00425870(local_10c);
  }
  return uVar1;
}


