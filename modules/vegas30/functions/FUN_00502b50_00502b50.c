/* Module: vegas30.exe
   Function: FUN_00502b50
   Address: 00502b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00502b50(undefined4 param_1,LPCSTR param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_4;
  
  local_4 = 0x80004005;
  if (DAT_0064b584 == (uint *)0x0) {
    return 0x80004005;
  }
  uVar1 = *DAT_0064b584;
  uVar3 = 0;
  if (uVar1 != 0) {
    while (iVar2 = lstrcmpiA(*(LPCSTR *)(DAT_0064b584[2] + uVar3 * 4),param_2), iVar2 != 0) {
      uVar3 = uVar3 + 1;
      if (uVar1 <= uVar3) {
        return 0x80004005;
      }
    }
    _SfList_DeleteList_16(DAT_0064b584,uVar3,1,0);
    local_4 = 0;
  }
  return local_4;
}


