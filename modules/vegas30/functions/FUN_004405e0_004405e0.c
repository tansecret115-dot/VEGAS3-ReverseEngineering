/* Module: vegas30.exe
   Function: FUN_004405e0
   Address: 004405e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004405e0(HWND__ *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20 [6];
  undefined4 local_8;
  
  local_24 = 0;
  iVar1 = FUN_00440540(&local_24);
  if (iVar1 < 0) {
    uVar2 = _SfGetString_8(DAT_00647204,0x146);
    iVar1 = SfMsgBox(param_1,0x44,uVar2);
    if (iVar1 == 6) {
      FUN_004f8900(0,&DAT_006476a0,3);
    }
    return 1;
  }
  FUN_004404f0(local_20,1);
  local_20[0] = local_24;
  local_8 = param_2;
  SfTAO_Dialog(param_1,(taoburntag *)local_20);
  FUN_004405d0(local_24);
  return iVar1;
}


