/* Module: vegas30.exe
   Function: FUN_005086d0
   Address: 005086d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005086d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uchar *lpString1;
  uchar *_Source;
  undefined4 *local_110;
  uchar *local_10c;
  int local_108;
  uchar local_104 [260];
  
  if (param_1 == (undefined4 *)0x0) {
    local_110 = param_1;
  }
  else {
    local_110 = (undefined4 *)*param_1;
  }
  iVar3 = 0;
  if (0 < (int)local_110) {
    do {
      iVar4 = iVar3 * param_1[1] + param_1[2];
      local_108 = FUN_005087f0(iVar4);
      iVar1 = FUN_00508840(iVar4);
      if (iVar1 != 0) {
        local_10c = (uchar *)0x0;
        uVar2 = _SfGetString_8(DAT_00647204,0x6e99);
        SfPrintF(local_104,&DAT_0061a3b4,uVar2);
        lpString1 = (uchar *)(iVar4 + 0x28);
        FUN_0050aaa0(lpString1,&local_10c);
        _Source = local_10c;
        if (local_10c == (uchar *)0x0) {
          iVar1 = lstrlenA((LPCSTR)local_104);
          _Source = lpString1;
        }
        else {
          iVar1 = lstrlenA((LPCSTR)local_104);
        }
        _mbsncat(local_104,_Source,0x103 - iVar1);
        lstrcpynA((LPSTR)lpString1,(LPCSTR)local_104,0x104);
        *(undefined1 *)(iVar4 + 299) = 0;
      }
      if (local_108 != 0) {
        _SfList_DeleteList_16(param_1,iVar3,1,1);
        iVar3 = iVar3 + -1;
        local_110 = (undefined4 *)((int)local_110 + -1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)local_110);
  }
  return;
}


