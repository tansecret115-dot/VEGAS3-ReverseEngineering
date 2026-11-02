/* Module: vegas30.exe
   Function: FUN_0043dd50
   Address: 0043dd50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043dd50(HWND__ *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 *local_108;
  undefined1 local_104 [260];
  
  iVar2 = 0;
  local_108 = (undefined4 *)0x0;
  local_118 = 0;
  local_114 = 0xffff;
  local_110 = 0;
  local_10c = DAT_0064b57c;
  _SfList_CreateExZ_32(&local_108,4,0x10,0x10,0x40000002,0,0,0);
  iVar1 = SfDAE_Dialog(param_1,(SFDAEPARAMS *)&local_118,0);
  if (iVar1 == 1) {
    if (local_108 == (undefined4 *)0x0) {
      local_11c = local_108;
    }
    else {
      local_11c = (undefined4 *)*local_108;
    }
    puVar3 = (undefined4 *)0x0;
    if (local_11c != (undefined4 *)0x0) {
      do {
        iVar1 = *(int *)(local_108[2] + (int)puVar3 * 4);
        if (iVar1 != 0) {
          iVar2 = FUN_0043d9a0(param_1,iVar1,local_104,0x104);
          if (iVar2 == 0) {
            iVar2 = FUN_004ec8b0(local_104,0,0xffffffff,1);
          }
          if (iVar2 == -0x7ffb1ff4) break;
        }
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      } while (puVar3 < local_11c);
    }
  }
  else {
    iVar2 = 1;
  }
  _SfList_Destroy_4(local_108);
  return iVar2;
}


